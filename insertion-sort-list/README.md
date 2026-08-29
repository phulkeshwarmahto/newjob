<h2><a href="https://leetcode.com/problems/insertion-sort-list/submissions/2123988510/">Insertion Sort List</a></h2><h3>Medium</h3><hr>
<div>
<p>Given the <code>head</code> of a singly linked list, sort the list using <strong>insertion sort</strong>, and return <em>the sorted list's head</em>.</p>

<p>The steps of the <strong>insertion sort</strong> algorithm:</p>

<ol>
	<li>Insertion sort iterates, consuming one input element each repetition and growing a sorted output list.</li>
	<li>At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list and inserts it there.</li>
	<li>It repeats until no input elements remain.</li>
</ol>

<p>The following is a graphical example of the insertion sort algorithm. The partially sorted list (black) initially contains only the first element in the list. One element (red) is removed from the input data and inserted in-place into the sorted list with each iteration.</p>

<p align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif" alt="" style="max-width: 100%; height: auto; border-radius: 8px; box-shadow: 0 4px 12px rgba(0,0,0,0.15);" />
</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<p align="center">
  <img src="https://assets.leetcode.com/uploads/2021/03/04/sort1linked-list.jpg" alt="" style="max-width: 100%; height: auto; border-radius: 8px; box-shadow: 0 4px 12px rgba(0,0,0,0.15);" />
</p>

<pre><strong>Input:</strong> head = [4,2,1,3]
<strong>Output:</strong> [1,2,3,4]
</pre>

<p><strong class="example">Example 2:</strong></p>

<p align="center">
  <img src="https://assets.leetcode.com/uploads/2021/03/04/sort2linked-list.jpg" alt="" style="max-width: 100%; height: auto; border-radius: 8px; box-shadow: 0 4px 12px rgba(0,0,0,0.15);" />
</p>

<pre><strong>Input:</strong> head = [-1,5,3,4,0]
<strong>Output:</strong> [-1,0,3,4,5]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the list is in the range <code>[1, 5000]</code>.</li>
	<li><code>-5000 &lt;= Node.val &lt;= 5000</code></li>
</ul>
</div>

<hr>

### 📊 Submission Statistics
- **Language:** `cpp`
- **Runtime:** `0 ms`
- **Memory:** `N/A`
- **Submission Date:** Sat, 29 Aug 2026 15:05:43 GMT

---

### 💡 Approach & Complexity Analysis
#### 🧠 Intuition & Algorithmic Strategy
- **Approach:** Utilizes frequency counting or presence tracking via hash mapping for O(1) membership queries.
- **Flow:**
  1. Initialize state variables and inspect base constraints.
  2. Iterate through input elements, maintaining current progress and boundaries.
  3. Return the calculated result satisfying problem criteria.

#### ⏱️ Complexity Analysis
- **Time Complexity:** $\mathcal{O}(N)$ — *Single linear pass over the input collection.*
- **Space Complexity:** $\mathcal{O}(N)$ — *Auxiliary hash-based lookup structure storing up to N elements.*

#### 📈 Time Complexity Graph (Operations vs Input Size $N$)
```mermaid
xychart-beta
    title "Time Complexity: O(N) — Linear Operations"
    x-axis "Input Size (N)" [10, 100, 300, 600, 1000]
    y-axis "Operations (Steps)" 0 --> 1000
    bar [10, 100, 300, 600, 1000]
    line [10, 100, 300, 600, 1000]
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
