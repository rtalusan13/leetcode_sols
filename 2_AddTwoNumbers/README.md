# 2. Add Two Numbers

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

### Constraints:

The number of nodes in each linked list is in the range [1, 100]. <br>
0 <= Node.val <= 9 <br>
It is guaranteed that the list represents a number that does not have leading zeros.

## C Solution - 11/25/25 (Optimal ✅)

Time Taken: > 1 hr <br>
Runtime: 0 ms | Beats 100% <br>
Memory: 12.59 MB | Beats 92.55%

- This was bad, considering the carry + malloc logic. I also spent some time trying to store a running sum as an int, but overflow still occurred even when working with an unsigned long long.
- First medium completed!
