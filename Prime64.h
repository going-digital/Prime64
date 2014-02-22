// Prime library
// Copyright 2014 Peter Knight
// This code is released under GPLv2 license.

#ifndef _Prime64_h_
#define _Prime64_h_

#include <inttypes.h>

class Prime64Class
{
        public:
                bool isPrime(uint64_t n);
                uint64_t mulMod(uint64_t a, uint64_t b, uint64_t m);
                uint64_t powMod(uint64_t a, uint64_t b, uint64_t m);
        private:
                bool sprp(uint64_t a, uint64_t b);
};
extern Prime64Class Prime64;

#endif
