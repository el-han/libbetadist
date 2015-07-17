# libbetadist

This is a simple library that provides a reverse beta distribution. It is used to calculate confidence intervals of binominal distributed processes.

It uses features from C++11 but also provides a C interface.

Building requires Scons. Currently an install option is missing so the library and header file need to be copied manually.

## Build process

```
scons
cp libbetadist.so /usr/lib
cp betadist.h /usr/include
```

