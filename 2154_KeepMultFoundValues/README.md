# 2154. Keep Multiplying Found Values by Two

You are given an array of integers nums. You are also given an integer original which is the first number that needs to be searched for in nums.

You then do the following steps:

1. If original is found in nums, multiply it by two (i.e., set original = 2 * original).
2. Otherwise, **stop** the process.
3. **Repeat** this process with the new number as long as you keep finding the number.

Return the ***final*** value of original.

### Constraints: 

1 <= nums.length <= 1000 <br>
1 <= nums[i], original <= 1000

.

.

.

## C Solution - 11/29/25 (Optimal ✅)

Time Taken: 2 m 15 s <br>
Runtime: 0 ms | Beats 100% <br>
Memory: 8.60 MB | Beats 70.26%

## Python Solution - 11/29/25 (Optimal ✅)

Time Taken: 1 m 07 s <br>
Runtime: 0 ms | Beats 100% <br>
Memory: 12.47 MB | Beats 83.78%

- Converts an array into a set in O(1) time, and uses O(1) lookup time for original in nums_set.
