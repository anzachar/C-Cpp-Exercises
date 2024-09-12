
# Lightbulbs Problem Statement

You are given an array A of size N, where A[i] represents the index of the bulb that is turned on at the i-th moment (with 1-based indexing). Initially, all bulbs are off.

A bulb is considered "shining" if:

- It is turned on.
- All previous bulbs (from 1 to its index) are also turned on.

The goal is to find how many moments occur where all bulbs that are on are also shining. Specifically, for each moment i, you need to determine if the bulbs turned on from the 1st to the i-th moment are shining, and count how many such moments exist.

### Example:

Input: A = [2, 1, 3, 5, 4]

Output: 3

Explanation: The shining moments occur at moments 2, 3, and 5, because at these moments, all the bulbs that are turned on so far are shining.
