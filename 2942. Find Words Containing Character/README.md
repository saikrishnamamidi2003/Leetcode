Here is the problem rewritten in the same structured format as your earlier example:

---

<h2><a href="https://leetcode.com/problems/find-words-containing-character/">2942. Find Words Containing Character</a></h2>  
<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />  
<hr>

<p>You are given a <strong>0-indexed</strong> array of strings <code>words</code> and a character <code>x</code>.</p>

<p>Return an array of <strong>indices</strong> representing the words that contain the character <code>x</code>.</p>

<p><strong>Note:</strong> The returned array may be in <strong>any</strong> order.</p>

<hr>

<p><strong class="example">Example 1:</strong></p>
<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">words = ["leet","code"], x = "e"</span></p>
<p><strong>Output:</strong> <span class="example-io">[0,1]</span></p>
<p><strong>Explanation:</strong> "e" occurs in both words: "leet", and "code". Hence, we return indices 0 and 1.</p>
</div>

<p><strong class="example">Example 2:</strong></p>
<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">words = ["abc","bcd","aaaa","cbc"], x = "a"</span></p>
<p><strong>Output:</strong> <span class="example-io">[0,2]</span></p>
<p><strong>Explanation:</strong> "a" occurs in "abc", and "aaaa". Hence, we return indices 0 and 2.</p>
</div>

<p><strong class="example">Example 3:</strong></p>
<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">words = ["abc","bcd","aaaa","cbc"], x = "z"</span></p>
<p><strong>Output:</strong> <span class="example-io">[]</span></p>
<p><strong>Explanation:</strong> "z" does not occur in any of the words. Hence, we return an empty array.</p>
</div>

<hr>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &lt;= words.length &lt;= 50</code></li>
  <li><code>1 &lt;= words[i].length &lt;= 50</code></li>
  <li><code>x</code> is a lowercase English letter.</li>
  <li><code>words[i]</code> consists only of lowercase English letters.</li>
</ul>
