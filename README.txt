This is Prime64, a prime number library for Arduino.

Quick start
-----------
Install the library in your Arduino / libraries directory.
Restart the Arduino software, and pick one of the examples from the Prime64
section.

Introduction
------------
This is an implementation of various methods of prime searching. It uses two
principle methods.

For numbers under 2,500,000, it uses trial division with a dictionary of prime
numbers.

For numbers up to 18,446,744,073,709,551,615, it uses the Miller-Rabin test.

Prime64 supports all 64 bit integers. For a smaller faster 32 bit
implementation covering up to 4,294,967,295, see the companion library Prime.

Thanks
------
    MathsJam Cambridge
    Numberphile