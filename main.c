#include <stdio.h>
#include <stdlib.h>
#include "sha256.h"
#include <time.h>

void run_benchmark(uint64_t nloops, uint64_t maxIterations) {
    clock_t time_1 = clock();
    uint64_t n_hashes = 0;
    char result[256];
    char bytes[68];
    uint64_t currentIteration = 0;

    while ((clock()-time_1) / CLOCKS_PER_SEC < 1.1 && currentIteration < maxIterations) {
        currentIteration++;
        memset(result, 0, 256);
        memset(bytes, 0, 67);
        sha256_crypt(bytes, 67, 2, 6, 1, result);
        n_hashes += npar*nloops;
    }

    double cpu_time_used, hash_rate;
    clock_t end = clock();
    cpu_time_used = ((double) (end - time_1)) / CLOCKS_PER_SEC;
    hash_rate = (double)(n_hashes)/cpu_time_used;
    printf("hash rate: %fh/s  %fGh/s\n", hash_rate, hash_rate / 1000000000.0);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s [-b] <input_string>\n", argv[0]);
        return 1;
    }
    
    // Initialize SHA256 with OpenCL
    sha256_init();

    // Check for the -b flag
    if (strcmp(argv[1], "-b") == 0) {
        printf("Running benchmark...\n");
        const int nloops = 64; // the same number needs to be set in the kernel!
        run_benchmark(nloops, 100);
        return 0;
    }

    // Define your input and result variables
    char input[68]; // Your input bytes
    char result[256]; // Result string

    // Copy the input string to the input array
    strncpy(input, argv[1], sizeof(input) - 1);

    // Call sha256_crypt function
    sha256_crypt(input, strlen(input), 2, 8, 65532, result);

    // Print the result
    printf("Hashed Result: %s\n", result);

    return 0;
}
