# CLI sha256

## Usage

Compile

`make`

Run and get benchmark result
`./cli_sha256 -b`

```bash
./cli_sha256 -b
Loading kernel code..
Building kernel code..
Creating kernel...
Creating queue...
Running benchmark...
00000000434c545533a7f1d92a100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000:0099b80f89ea952e02847bce06f74bda1df2e1f40876dc0506c44a0885e2c29f

00000000434c5455337c4708ce380000000fffff0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000:01adfa6728b924bffc3010d65196cd925fe209c20aee3da227eb4a5ae55cb765
hash rate: 28554654730.043102/s  28.554655G/s
```

Run with your input

```bash
./cli_sha256 "Helloworld"
Loading kernel code..
Building kernel code..
Creating kernel...
Creating queue...
48656c6c434c545533a7f1d92a390000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000:0368163cec194a5aa481ce5f90f95230b844de1344599e1b6d19d26d64991f35
48656c6c434c545533a7f1d92a360000000000010000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000:01bee4bdf51cd244a7f967bff48afd21c6dae2f62d31ddc6203f97311093a2cf
48656c6c434c545533a7f1d92a2b0000000ffffe0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000:04a2738cadf385206194431b6c643ffc27d70874ed475f1f28980ee015f7bdf5
48656c6c434c545533a7f1d92a260000000fffff0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000:01e74b3eff4c110201b731ab5044c4faf423b177587e6e4dfedaf888dc661e69
Hashed Result: 48656c6c434c545533a7f1d92a260000000fffff0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000:01e74b3eff4c110201b731ab5044c4faf423b177587e6e4dfedaf888dc661e69
```
