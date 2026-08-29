<h2><a href="https://leetcode.com/problems/longest-substring-without-repeating-characters/">Longest Substring Without Repeating Characters</a></h2><h3>Medium</h3><hr>
<div>
<p>Given a string s, find the length of the longest substring without duplicate characters.</p>
<p>Example 1:</p>
<p>Input: s = "abcabcbb"<br>Output: 3<br>Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.</p>
<p>Example 2:</p>
<p>Input: s = "bbbbb"<br>Output: 1<br>Explanation: The answer is "b", with the length of 1.</p>
<p>Example 3:</p>
<p>Input: s = "pwwkew"<br>Output: 3<br>Explanation: The answer is "wke", with the length of 3.<br>Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.</p>
<p>Constraints:</p>
<p>0 <= s.length <= 105<br>s consists of English letters, digits, symbols and spaces.</p>
</div>

<hr>

### 📊 Submission Statistics
- **Language:** `cpp`
- **Runtime:** `0 ms`
- **Memory:** `N/A`
- **Submission Date:** Sat, 29 Aug 2026 05:53:41 GMT

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
