// Prime64 library
// Copyright 2014 Peter Knight
// This code is released under GPLv2 license.
//
// Welcome to the Prime library examples.
//
// Prime is a set of utilities for finding and playing with prime numbers.
//
// This program prints out all the 64 bit long prime numbers from
// 18,446,744,073,709,551,557 down to 2.
//
// Note that this program takes a *VERY* long time to run to completion.
//
// The 'ULL' suffix you see on numbers forces them to be stored in 64 bits.

#include <Prime64.h>

void setup() {
  Serial.begin(57600);
  Serial.println("Here are all the 64 bit primes in reverse order.");
}

// Note that support for 64 bit long integers in Arduino is patchy.
// Serial.print() DOES NOT WORK.
//
// Here is a function that does.
//
void pr64(unsigned long long n){
  unsigned long long place = 10000000000000000000ULL;
  int digit;
  bool leading = true;
  while (place) {
    digit = n / place;
    if (digit || !leading) {
      Serial.write('0'+digit);
      leading = false;
      n%=place;
    }
    place /= 10;
  }
}

void loop() {
  // Start at zero
  unsigned long long prime=0; // Start at zero, so first decrement overflows
  while(1) {
    prime--;
    // Skip past all the numbers that are not prime
    while (!Prime64.isPrime(prime)) prime--;
    // And print the primes
    pr64(prime);
    Serial.println();
  }
}