# 1018. Binary Prefix Divisible By 5

You are given a binary array nums (0-indexed).

We define xi as the number whose binary representation is the subarray nums[0..i] (from most-significant-bit to least-significant-bit).

For example, if nums = [1,0,1], then x0 = 1, x1 = 2, and x2 = 5.
Return an array of booleans answer where answer[i] is true if xi is divisible by 5.

### Constraints: 

1 <= nums.length <= 10^5
nums[i] is either 0 or 1.

.

.

.

## Python Solution - 11/30/25 (Unoptimal ❌)

Time Taken: 19 m 37 s <br>
Runtime - 119 ms | Beats 40.35% <br>
Memory - 14.33 MB | Beats 8.17%
