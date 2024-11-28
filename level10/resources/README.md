There is a binary in our home and a file named `token` that surely contain our token.

The program use `access()` to verify that the user executing the program have access to the file passed as argument.

If the user have access to the file it in a socket bound to `localhost:6969`.

We can exploit this by creating 3 bash script.

The goal is to pass the `access()` verification and change the file pointed by the symlink to the token before the program open it.

The [first one](./nc_script) run `nc` to listen to `localhost:6969` in an endless loop as nc quit after receiving a message.

The [second one](./level11_script) run the program with a symlink to another file as argument in an endless loop.

The [third one](./ln_script) change this symlink to `/tmp/fake` then to `/usr/home/level10/token` in an endless loop.
