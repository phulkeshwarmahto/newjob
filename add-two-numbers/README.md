<h2><a href="https://leetcode.com/problems/add-two-numbers/">Add Two Numbers</a></h2><h3>Medium</h3><hr>
<div>
<p><span class="lr-bionic-node"><b class="lr-fixation">Y</b>ou <b class="lr-fixation">a</b>re <b class="lr-fixation">gi</b>ven <b class="lr-fixation">t</b>wo </span><strong><span class="lr-bionic-node"><b class="lr-fixation">n</b>on-empty</span></strong><span class="lr-bionic-node"> <b class="lr-fixation">li</b>nked <b class="lr-fixation">li</b>sts <b class="lr-fixation">repres</b>enting <b class="lr-fixation">t</b>wo <b class="lr-fixation">n</b>on-negative <b class="lr-fixation">int</b>egers. <b class="lr-fixation">T</b>he <b class="lr-fixation">di</b>gits <b class="lr-fixation">a</b>re <b class="lr-fixation">st</b>ored <b class="lr-fixation">i</b>n </span><strong><span class="lr-bionic-node"><b class="lr-fixation">rev</b>erse <b class="lr-fixation">or</b>der</span></strong><span class="lr-bionic-node">, <b class="lr-fixation">a</b>nd <b class="lr-fixation">ea</b>ch <b class="lr-fixation">o</b>f <b class="lr-fixation">th</b>eir <b class="lr-fixation">no</b>des <b class="lr-fixation">con</b>tains <b class="lr-fixation">a</b> <b class="lr-fixation">si</b>ngle <b class="lr-fixation">di</b>git. <b class="lr-fixation">A</b>dd <b class="lr-fixation">t</b>he <b class="lr-fixation">t</b>wo <b class="lr-fixation">num</b>bers <b class="lr-fixation">a</b>nd <b class="lr-fixation">re</b>turn <b class="lr-fixation">t</b>he <b class="lr-fixation">s</b>um&nbsp;<b class="lr-fixation">a</b>s <b class="lr-fixation">a</b> <b class="lr-fixation">li</b>nked <b class="lr-fixation">li</b>st.</span></p>

<p><span class="lr-bionic-node"><b class="lr-fixation">Y</b>ou <b class="lr-fixation">m</b>ay <b class="lr-fixation">as</b>sume <b class="lr-fixation">t</b>he <b class="lr-fixation">t</b>wo <b class="lr-fixation">num</b>bers <b class="lr-fixation">d</b>o <b class="lr-fixation">n</b>ot <b class="lr-fixation">con</b>tain <b class="lr-fixation">a</b>ny <b class="lr-fixation">lea</b>ding <b class="lr-fixation">ze</b>ro, <b class="lr-fixation">ex</b>cept <b class="lr-fixation">t</b>he <b class="lr-fixation">nu</b>mber <b class="lr-fixation">0</b> <b class="lr-fixation">it</b>self.</span></p>

<p>&nbsp;</p>
<p><strong class="example"><span class="lr-bionic-node"><b class="lr-fixation">Exa</b>mple <b class="lr-fixation">1</b>:</span></strong></p>

<p align="center">
  <img src="https://assets.leetcode.com/uploads/2020/10/02/addtwonumber1.jpg" alt="" style="max-width: 100%; height: auto; border-radius: 8px; box-shadow: 0 4px 12px rgba(0,0,0,0.15);" />
</p>

<pre><strong><span class="lr-bionic-node"><b class="lr-fixation">In</b>put:</span></strong> l1 = [2,4,3], l2 = [5,6,4]
<strong><span class="lr-bionic-node"><b class="lr-fixation">Ou</b>tput:</span></strong> [7,0,8]
<strong><span class="lr-bionic-node"><b class="lr-fixation">Expla</b>nation:</span></strong> 342 + 465 = 807.
</pre>

<p><strong class="example"><span class="lr-bionic-node"><b class="lr-fixation">Exa</b>mple <b class="lr-fixation">2</b>:</span></strong></p>

<pre><strong><span class="lr-bionic-node"><b class="lr-fixation">In</b>put:</span></strong> l1 = [0], l2 = [0]
<strong><span class="lr-bionic-node"><b class="lr-fixation">Ou</b>tput:</span></strong> [0]
</pre>

<p><strong class="example"><span class="lr-bionic-node"><b class="lr-fixation">Exa</b>mple <b class="lr-fixation">3</b>:</span></strong></p>

<pre><strong><span class="lr-bionic-node"><b class="lr-fixation">In</b>put:</span></strong> l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
<strong><span class="lr-bionic-node"><b class="lr-fixation">Ou</b>tput:</span></strong> [8,9,9,9,0,0,0,1]
</pre>

<p>&nbsp;</p>
<p><strong><span class="lr-bionic-node"><b class="lr-fixation">Const</b>raints:</span></strong></p>

<ul>
	<li><span class="lr-bionic-node"><b class="lr-fixation">T</b>he <b class="lr-fixation">nu</b>mber <b class="lr-fixation">o</b>f <b class="lr-fixation">no</b>des <b class="lr-fixation">i</b>n <b class="lr-fixation">ea</b>ch <b class="lr-fixation">li</b>nked <b class="lr-fixation">li</b>st <b class="lr-fixation">i</b>s <b class="lr-fixation">i</b>n <b class="lr-fixation">t</b>he <b class="lr-fixation">ra</b>nge </span><code>[1, 100]</code><span class="lr-bionic-node">.</span></li>
	<li><code>0 &lt;= Node.val &lt;= 9</code></li>
	<li><span class="lr-bionic-node"><b class="lr-fixation">I</b>t <b class="lr-fixation">i</b>s <b class="lr-fixation">guara</b>nteed <b class="lr-fixation">th</b>at <b class="lr-fixation">t</b>he <b class="lr-fixation">li</b>st <b class="lr-fixation">repre</b>sents <b class="lr-fixation">a</b> <b class="lr-fixation">nu</b>mber <b class="lr-fixation">th</b>at <b class="lr-fixation">do</b>es <b class="lr-fixation">n</b>ot <b class="lr-fixation">ha</b>ve <b class="lr-fixation">lea</b>ding <b class="lr-fixation">ze</b>ros.</span></li>
</ul>
</div>

<hr>

### 📊 Submission Statistics
- **Language:** `python3`
- **Runtime:** `0 ms`
- **Memory:** `N/A`
- **Submission Date:** Sun, 25 Oct 2026 03:19:29 GMT

---
*Auto-synced with [LeetGitSyncPro](https://garamsoftwares.pages.dev/leetgitsync)*
