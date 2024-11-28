We can see a `.pcap` file in our home.
This is an extension file used by wireshark.

We can copy this file on the host machine using the `scp` command.
```bash
scp -P 4242 level02@localhost:/home/user/level02/level02.pcap  .
```
We open this file in wireshark and reconstitute the conversation as the protocol is `TCP`.

There is a prompt for a password and the user input is shown in clear.

The `.` represent the user using backspace as he mistyped some letter.