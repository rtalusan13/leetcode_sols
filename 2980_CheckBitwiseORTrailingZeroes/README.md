# Overview
A bitwise OR contains trailing 0s is only possible if the least-significant bit (LSB) is 0 for both inputs. We iterate through and check for any even integers in the array, with a placeholder integer ORbin that is 0 for no even numbers seen, 1 for 1 even number seen, and 2 if a pair is found. The if-statement in the for loop can check if the current iteration has found a second integer to create a pair, in which case it returns true. If the for loop exits (whole array iterated), we return false.

# C Solution - 12/7/25 (Optimal ✅)

Time Taken: 6 m 41 s <br>
Runtime: 0 ms | Beats 100% <br>
Memory: 8.70 MB | Beats 86.76%

# C++ Solution - 12/7/25 (Optimal ✅)

Time Taken: 3 m 12 s <br>
Runtime: 0 ms | Beats 100% <br>
Memory: 28.92 MB | Beats 48.01%

# Java Solution - 12/7/25 (Optimal ✅)

Time Taken: 1 m 19 s <br>
Runtime: 0 ms | Beats 100% <br>
Memory: 45.49 MB | Beats 40.58%

# Python Solution - 12/7/25 (Optimal ✅)

Time taken: 0 m 57 s <br>
Runtime: 0 ms | Beats 100% <br>
Memory: 12.48 MB | Beats 45.24%

# C# Solution - 12/7/25 (Optimal ✅)

Time Taken: 2 m 10 s <br>
Runtime: 0 ms | Beats 100% <br>
Memory: 46.60 MB | Beats 89.47%

# Dart Solution - 12/7/25 (Optimal ✅)

Time Taken: 3 m 40 s <br>
Runtime: 0 ms | Beats 100% <br>
Memory: 151.69 MB | Beats -%

- First Dart solution provided for this problem!

![Solution](img/2980_FirstDartSolution.png)
