libart
=========

This library provides a C99 implementation of the Adaptive Radix
Tree or ART. The ART operates similar to a traditional radix tree but
avoids the wasted space of internal nodes by changing the node size.
It makes use of 4 node sizes (4, 16, 48, 256), and can guarentee that
the overhead is no more than 52 bytes per key, though in practice it is
much lower.

As a radix tree, it provides the following:
 * O(k) operations. In many cases, this can be faster than a hash table since
   the hash function is an O(k) operation, and hash tables have very poor cache locality.
 * Minimum / Maximum value lookups
 * Prefix compression
 * Ordered iteration
 * Prefix based iteration


## Usage (windows)

-------

 * Open win\art.sln solution in Visual Studio 2010 or later
 * Run win\Debug\art_tests.exe (asserts on errors)


Windows port uses following third-party code:
* __builtin_clz, __builtin_ctz replacement 

  http://stackoverflow.com/questions/355967/how-to-use-msvc-intrinsics-to-get-the-equivalent-of-this-gcc-code

    win\include\builtins_msvc.h
  

* C9x conformant stdint.h http://code.google.com/p/msinttypes/

    win\include\inttypes.h
    win\include\stdint.h



## Usage (*nix, possibly broken, use original version)

-------

Building the test code will generate errors if libcheck is not available.
To build the test code successfully, do the following::

    $ cd deps/check-0.9.8/
    $ ./configure
    $ make
    # make install
    # ldconfig (necessary on some Linux distros)
    $ cd ../../
    $ scons
    $ ./test_runner


## References

----------

Related works:

* [The Adaptive Radix Tree: ARTful Indexing for Main-Memory Databases](http://www-db.in.tum.de/~leis/papers/ART.pdf)

