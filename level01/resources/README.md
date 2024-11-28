We cat the file /etc/passwd
```bash
cat /etc/passwd
```
We can see the hash of the flag01 password.
Using `john` we can get the original password as it is a commonly used password.
```bash
echo 42hDRfypTqqnw > hash
john hash
john hash --show
```