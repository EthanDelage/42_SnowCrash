We can find a binary and a php script.

Disassembling the program we see that the php script is called with `argv[1]`.

The php script read the file passed as argument of the program and use regex to process it.

We can exploit the preg_replace function as it use `/e` that will evaluate the regular expression captured.

By carefully crafting our [user input](./php_exploit) we can run the `getflag` command.