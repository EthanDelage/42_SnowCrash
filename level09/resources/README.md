There is a binary in our home and a file named containing the token encrypted using the binary.

Disassembling the binary we can see that the encryption method consist of adding to every char its index.

We just create a [program](./main.c) doing the opposite to decrypt it.
