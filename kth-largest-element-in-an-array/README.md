<h2><a href="https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/2123853407/">Kth Largest Element in an Array</a></h2><h3>Medium</h3><hr>
<div>
<p>Given an integer array <code>nums</code> and an integer <code>k</code>, return <em>the</em> <code>k<sup>th</sup></code> <em>largest element in the array</em>.</p>

<p>Note that it is the <code>k<sup>th</sup></code> largest element in the sorted order, not the <code>k<sup>th</sup></code> distinct element.</p>

<p>Can you solve it without sorting?</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [3,2,1,5,6,4], k = 2
<strong>Output:</strong> 5
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [3,2,3,1,2,4,5,5,6], k = 4
<strong>Output:</strong> 4
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= k &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>
</div>

<hr>

### 📊 Submission Statistics
- **Language:** `cpp`
- **Runtime:** `0 ms`
- **Memory:** `N/A`
- **Submission Date:** Sat, 29 Aug 2026 13:17:14 GMT

---

### 💡 Approach & Complexity Analysis
#### 🧠 Intuition & Algorithmic Strategy
- **Approach:** Utilizes frequency counting or presence tracking via hash mapping for O(1) membership queries.
- **Flow:**
  1. Initialize state variables and inspect base constraints.
  2. Iterate through input elements, maintaining current progress and boundaries.
  3. Return the calculated result satisfying problem criteria.

#### ⏱️ Complexity Analysis
- **Time Complexity:** $\mathcal{O}(N \log K)$ — *Heap push/pop operations for priority elements.*
- **Space Complexity:** $\mathcal{O}(N)$ — *Auxiliary hash-based lookup structure storing up to N elements.*

#### 📈 Time Complexity Graph (Operations vs Input Size $N$)
```mermaid
xychart-beta
    title "Time Complexity: O(N log N) — Linearithmic Growth"
    x-axis "Input Size (N)" [10, 100, 300, 600, 1000]
    y-axis "Operations (Steps)" 0 --> 10000
    bar [33, 664, 2470, 5537, 9966]
    line [33, 664, 2470, 5537, 9966]
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
