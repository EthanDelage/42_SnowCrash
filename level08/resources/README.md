There is a binary in our home and a file named `token` that surely contain our token.

By disassembling it we can see that the program will read and display the file passed as argument if it doesn't contain the `token` string.

We create a symlink to the `/home/user/level08/token` file and run the program with the link as argument.
```bash
ln -s /home/user/level08/token /tmp/temp
./level08 /tmp/temp
```