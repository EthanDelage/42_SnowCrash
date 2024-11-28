There is a perl script in our home that is CGI on a server on the port 4747.

The user input is used in a string that is run as a shell command as it is enclosed by ` character.

We can exploit this by running the `getflag` command via our user input.
```bash
curl localhost:4747/?x=\`getflag\`
```