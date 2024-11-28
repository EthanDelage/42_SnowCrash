There is no files in our home so we need to find an exploit in the `getflag` program.

We see that `getflag` use the same kind of function to encrypt the flag based on the uid of the user executing it.

In `/etc/passwd` we see that flag14 uid is `0xbc6` so we execute the function associated in gdb using the same method as level13.

```bash
cat /etc/passwd
```

```bash
level14@SnowCrash:~$ gdb /bin/getflag
(gdb) b main
Breakpoint 1 at 0x804894a
(gdb) r
Starting program: /bin/getflag 

Breakpoint 1, 0x0804894a in main ()
(gdb) print (char *)ft_des("g <t61:|4_|!@IF.-62FH&G~DCK/Ekrvvdwz?v|")
$1 = 0x804c038 "7QiHafiNa3HVozsaXkawuYrTstxbpABHD8CPnHJ"
```