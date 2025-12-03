# 21. Merge Two Sorted Lists

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one **sorted** list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the *merged linked list*.

### Constraints: 

The number of nodes in both lists is in the range [0, 50]. <br>
-100 <= Node.val <= 100 <br>
Both list1 and list2 are sorted in **non-decreasing** order.

.

.

.

## C Solution - 11/25/25 (Optimal ✅)

Time Taken: 10 m 16 s <br>
Runtime: 0 ms | Beats 100% <br>
Memory: 10.08 MB | Beats 32.01%

- If you go through the lines, there is definitely room for improvement. I think the biggest issue is the if-statement that has the same conditions as the while-loop.
