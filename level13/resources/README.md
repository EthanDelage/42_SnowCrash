There is a binary in our home, we can disassemble to see that it use `ft_des()` function to encrypt the flag.

We use gdb to break in main and print the return value of this function with the same parameter.


```bash
level13@SnowCrash:~$ gdb level13
(gdb) b main
Breakpoint 1 at 0x804858f
(gdb) r
Starting program: /home/user/level13/level13 

Breakpoint 1, 0x0804858f in main ()
(gdb) print (char*)ft_des("boe]!ai0FB@.:|L6l@A?>qJ}I")
$1 = 0x804b028 "2A31L79asukciNyi8uppkEuSx"
```