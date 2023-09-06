# Makefile for CLI sha256

# Default target
all: cli_sha256

# Detect the OS
UNAME_S := $(shell uname -s)

# Linux specific flags and libraries
ifeq ($(UNAME_S),Linux)
    LDFLAGS += -lOpenCL
endif

# Mac specific flags and libraries
ifeq ($(UNAME_S),Darwin)
    LDFLAGS += -framework OpenCL
endif

# Build the cli_sha256 target
cli_sha256: main.c sha256.c
	gcc $^ -o $@ $(LDFLAGS)

# Clean up the build
clean:
	rm -f cli_sha256

.PHONY: all clean
