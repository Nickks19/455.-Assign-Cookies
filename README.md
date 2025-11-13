# 455.-Assign-Cookies

Greedy Algorithms Quiz — CSC Algorithms (Fall 2025)

Problem Summary

You are given:

g[i] = greed factor of each child

s[j] = size of each cookie

A child is satisfied if they receive a cookie with size greater than or equal to their greed factor.
Each child can receive at most one cookie.
Goal: maximize the number of content children.

Greedy Strategy

Sort the greed array and the cookie array.

Use two pointers to match the smallest cookie that can satisfy the least greedy child.

Move to the next child only when satisfied.

Move through cookies in all cases.

This greedy choice works because giving the smallest valid cookie preserves larger cookies for children with higher greed.
Local optimal → global optimal.

Complexity

Time: O(n log n) (due to sorting)

Space: O(1) (only pointers used)

What I Learned

This problem demonstrates when greedy algorithms are appropriate:
a locally optimal step (using the smallest cookie possible) leads to a globally optimal solution.
Sorting + two pointers makes the implementation simple and efficient.

C++ Code Solution
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // Sort both lists so we can use two pointers
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0; // pointer for children (also counts satisfied children)
        int j = 0; // pointer for cookies

        // Try to satisfy children from smallest greed to largest
        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                i++; // child satisfied
            }
            j++; // move to next cookie
        }

        return i; // number of satisfied children
    }
};