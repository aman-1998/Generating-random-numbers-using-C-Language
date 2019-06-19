Generating-random-numbers-using-C-Language:-

The rand function, declared in stdlib.h, returns a random integer in the 
range 0 to RAND_MAX (inclusive) every time you call it. On machines using 
the GNU C library RAND_MAX is equal to INT_MAX or 231-1, but it may be as
small as 32767. There are no particularly strong guarantees about the 
quality of random numbers that rand returns, but it should be good enough
for casual use, and has the advantage that as part of the C standard you 
can assume it is present almost everywhere.

Note that rand is a pseudorandom number generator: the sequence of values 
it returns is predictable if you know its starting state (and is still 
predictable from past values in the sequence even if you don't know the 
starting state, if you are clever enough).

If you want to get different sequences, you need to seed the random number
generator using srand i.e., srand(time(NULL)).

Here time(0) returns the number of seconds since the epoch (00:00:00 UTC, 
January 1, 1970, for POSIX systems, not counting leap seconds). Note that
this still might give repeated values if you run it twice in the same 
second, and it's extremely dangerous if you expect to distribute your code 
to a lot of people who want different results, since two of your users are
likely to run it twice in the same second.
