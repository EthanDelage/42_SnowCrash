There is a perl script in our home that capitalize the query string `x` argument and cut it to the first blank space encountered.

Our variable is then put in whatever string and executed.

We can enclose the query string in '\`' to execute the content.

As the whole string is capitalized and as we can create files only in `/tmp` we need to use wildcards.


```bash
curl localhost:4646/?x='`/*/SCRIPT`'
```