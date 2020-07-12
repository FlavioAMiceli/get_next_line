# get_next_line
Function used to read data one line at a time.

### TOC
* [What is get_next_line?](#what is get_next_line)
* [What's in it?](#whats-in-it)
* [Installation](#installation)

### What is get_next_line?
This function is a useful extension to the libft library that allows you to read a line ending with a newline character from a file descriptor.

At [Codam][1] we are generally not allowed to use code that we haven't written ourselves.
This means that for most projects we are only allowed read(), write(), malloc() and free() from libc, and our own [libft library][2].

### What's in it?

This project needs to conform to the [gnl project][3].
It's a function that returns the next line from a file descriptor each time it is called.
My implementation can handle different file descriptors in the same program.

### Installation
The function is added to libft.a using the included makefile.

[1]: https://www.codam.nl/
[2]: https://github.com/FlavioAMiceli/libft
[3]: https://cdn.intra.42.fr/pdf/pdf/3719/get_next_line.en.pdf
