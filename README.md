# Base-Conversions
![Base Conversions](https://i.ytimg.com/vi/hIs3A6gGz2w/maxresdefault.jpg)
By "base" we mean how many numbers in a number system:

*The decimal number system we use every day has 10 digits {0, 1, 2, 3, 4, 5, 6, 7, 8, 9} and so it is Base 10.<br/>
*A binary digit can only be 0 or 1, so is Base 2<br/>
*A hexadecimal digit can be {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F}, so is Base 16<br/>
*And we can use letters {A, B, C, ..., X, Y, Z}, and we get Base 26, which we use here<br/>

**Numbers**<br/>
To solve problems using a computer we need to understand numbers and what they mean. Each digit
in a decimal number has a place and a value. The place is a power of 10 and the value is selected
from the set {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}. A decimal number is simply a combination of its digits
multiplied by powers of 10.<br/>

In a similar manner, each digit in a binary number has a place and a value. In binary numbers, the
place is a power of 2, and the value is selected from the set {0, 1}. A binary number is simply a
combination of its digits multiplied by powers of 2. To eliminate confusion between decimal numbers
and binary numbers, we will put a subscript 2 after the number to mean binary. Because of the way
the microcontroller operates, most of the binary numbers in this book will have 8, 16, or 32 bits. An
8-bit number is called a byte, and a 16-bit number is called a halfword.

Binary is the natural language of computers but a big nuisance for us humans. To simplify working
with binary numbers, humans use a related number system called hexadecimal, which uses base 16.
Just like decimal and binary, each hexadecimal digit has a place and a value. In this case, the place is
a power of 16 and the value is selected from the set {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F}. As
you can see, hexadecimal numbers have more possibilities for their digits than are available in the
decimal format.

![Numbers](https://miro.medium.com/max/480/1*vgtJh1NVWEqa3b9OsuRXSQ.jpeg)<br/>

A hexadecimal number is a combination of its digits multiplied by powers of 16. To eliminate confusion between various
formats, we will put a 0x or a $ before the number to mean hexadecimal. Hexadecimal representation
is a convenient mechanism for us humans to define binary information, because it is extremely simple
for humans to convert back and forth between binary and hexadecimal. Hexadecimal number system
is often abbreviated as “hex”. A nibble is defined as 4 binary bits, or one hexadecimal digit.

*I prepared algorithms that handle base transformations in C and C++ languages. I hope it will be useful for you.*
