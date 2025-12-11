# C Solution - 12/11/25 (Optimal ✅)

Time Taken: 11 m 58 s <br>
Runtime: 0 ms | Beats 100% <br>
Memory: 7.78 MB | Beats 52.03%

## Python Solution - 12/11/25 (Optimal ✅)

Time Taken: 2 m 38 s <br>
Runtime: 0 ms | Beats 100% <br>
Memory: 12.29 MB | Beats 98.39%

- We iterate through the int (which can be represented as an unsigned integer bit sequence) from right to left, only returning false if the LSB = 1 & integer > 1. Got stuck on the bit shift operator (n >> 1, instead of n >>= 1) for the C solution.
