By watching the intra video we learn that we need to find a file owned by flag00.
So we need to cd to the root path:
```bash
cd /
```
Then we use the find command and redirect the stderr to `/dev/null`.
```bash
find -user flag00 2> /dev/null
```
The file contains a Caesar cipher encrypted string that is easily reversed using any online tool.

The shift that make the most sense is a 15 shift that give this: `nottoohardhere`

We then change user to `flag00` using this password.
```bash 
su flag00
```
We get the flag that get us to the next level by using this command: `getflag`
```bash
su level01
```