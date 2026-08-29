<h2><a href="https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/2123516799/">Median of Two Sorted Arrays</a></h2><h3>Hard</h3><hr>
<div>
<p>Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.</p>
<p>The overall run time complexity should be O(log (m+n)).</p>
<p>Example 1:</p>
<p>Input: nums1 = [1,3], nums2 = [2]<br>Output: 2.00000<br>Explanation: merged array = [1,2,3] and median is 2.</p>
<p>Example 2:</p>
<p>Input: nums1 = [1,2], nums2 = [3,4]<br>Output: 2.50000<br>Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.</p>
<p>Constraints:</p>
<p>nums1.length == m<br>	nums2.length == n<br>	0 <= m <= 1000<br>	0 <= n <= 1000<br>	1 <= m + n <= 2000<br>	-106 <= nums1[i], nums2[i] <= 106</p>
</div>

<hr>

### 📊 Submission Statistics
- **Language:** `cpp`
- **Runtime:** `0 ms`
- **Memory:** `N/A`
- **Submission Date:** Sat, 29 Aug 2026 06:11:30 GMT

---

### 💡 Approach & Complexity Analysis
#### 🧠 Intuition & Algorithmic Strategy
- **Approach:** Performs logarithmic range reduction to locate target elements in monotonic space.
- **Flow:**
  1. Initialize state variables and inspect base constraints.
  2. Iterate through input elements, maintaining current progress and boundaries.
  3. Return the calculated result satisfying problem criteria.

#### ⏱️ Complexity Analysis
- **Time Complexity:** $\mathcal{O}(\log N)$ — *Binary search halving the search space each iteration.*
- **Space Complexity:** $\mathcal{O}(N)$ — *Auxiliary hash-based lookup structure storing up to N elements.*

#### 📈 Time Complexity Graph (Operations vs Input Size $N$)
```mermaid
xychart-beta
    title "Time Complexity: O(log N) — Logarithmic Growth"
    x-axis "Input Size (N)" [10, 100, 300, 600, 1000]
    y-axis "Operations (Steps)" 0 --> 15
    bar [3, 7, 8, 9, 10]
    line [3, 7, 8, 9, 10]
```

#### 📦 Space Complexity Graph (Memory Footprint vs Input Size $N$)
```mermaid
xychart-beta
    title "Space Complexity: O(N) — Linear Memory Allocation"
    x-axis "Input Size (N)" [10, 100, 300, 600, 1000]
    y-axis "Memory Footprint (Units)" 0 --> 1000
    bar [10, 100, 300, 600, 1000]
    line [10, 100, 300, 600, 1000]
```

---
*Auto-synced with [LeetGitSyncPro](https://synccode-pro.pages.dev) & [DSATracker](https://dsatracker.in)*
