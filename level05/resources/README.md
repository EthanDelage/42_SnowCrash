There is nothing in our home. We then use the same method as in level00 to find flag05 owned files.
```bash
find -user flag05 2> /dev/null
```
We find this file owned by flag05. `/usr/sbin/openarenaserver`

This script execute every file located in `/opt/openarenaserver/` and then delete it.

We create a bash script that run the `getflag` command and redirect it in `/tmp/token`

We can see after a few minutes that `/usr/sbin/openarenaserver` program is being run by some sort of cronjob.

Using grep we can find the cronjob that is run every 2 minutes.
```bash
grep -r "/usr/sbin/openarenaserver" /var 2> /dev/null
```

Our token is then located in `/tmp/token`.