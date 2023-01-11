# inAES
The Advanced Encryption Standard (AES) 256-bit cipher in plain C.

I programmed this from the publication from NIST, and with some help from
Wikipedia, where I leached the "InvMixColumn" tables (which are used
to perform the multiplications of the terms over GF(2)[x] polynomials).
I have included the test that comes with the NIST publication for the 256
bit cipher, and I have also tested it myself, but go ahead and try it
before you put it in your project.

Compile and try it:

```
  gcc -g -Wall -D_DRIVER_ inaes.c
```
Compile and try it with diagnostics turned on:

```
  gcc -g -Wall -D_DRIVER_ -D_DEBUG_AES_ inaes.c
```

You can compile it as an object file and use it with the header file's API.

Consider this GPL licensed code.

IN 2023/01/10

