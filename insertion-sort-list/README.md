<h2><a href="https://leetcode.com/problems/insertion-sort-list/submissions/2123524692/">Insertion Sort List</a></h2><h3>Medium</h3><hr>
<div>
<p>Given the head of a singly linked list, sort the list using insertion sort, and return the sorted list's head.</p>
<p>The steps of the insertion sort algorithm:</p>
<p>Insertion sort iterates, consuming one input element each repetition and growing a sorted output list.<br>	At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list and inserts it there.<br>	It repeats until no input elements remain.</p>
<p>The following is a graphical example of the insertion sort algorithm. The partially sorted list (black) initially contains only the first element in the list. One element (red) is removed from the input data and inserted in-place into the sorted list with each iteration.</p>
<p>Example 1:</p>
<p>Input: head = [4,2,1,3]<br>Output: [1,2,3,4]</p>
<p>Example 2:</p>
<p>Input: head = [-1,5,3,4,0]<br>Output: [-1,0,3,4,5]</p>
<p>Constraints:</p>
<p>The number of nodes in the list is in the range [1, 5000].<br>	-5000 <= Node.val <= 5000</p>
</div>

<hr>

### 📊 Submission Statistics
- **Language:** `cpp`
- **Runtime:** `0 ms`
- **Memory:** `N/A`
- **Submission Date:** Sat, 29 Aug 2026 06:20:14 GMT

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
