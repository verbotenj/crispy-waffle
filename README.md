# CLI sha256

## Usage

Compile

`make`

Run and get benchmark result
`./cli_sha256 -b`

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
