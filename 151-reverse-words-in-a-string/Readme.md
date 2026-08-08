<h2><a href="https://leetcode.com/problems/reverse-words-in-a-string/">Reverse Words in a String</a></h2>

<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />

<hr>

<p>Given an input string <code>s</code>, reverse the order of the <strong>words</strong>.</p>

<p>A <strong>word</strong> is defined as a sequence of non-space characters. The <strong>words</strong> in <code>s</code> will be separated by at least one space.</p>

<p>Return a string of the words in reverse order concatenated by a single space.</p>

<p><strong>Note</strong> that <code>s</code> may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = "the sky is blue"
<strong>Output:</strong> "blue is sky the"
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = "  hello world  "
<strong>Output:</strong> "world hello"
<strong>Explanation:</strong> Your reversed string should not contain leading or trailing spaces.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = "a good   example"
<strong>Output:</strong> "example good a"
<strong>Explanation:</strong> You need to reduce multiple spaces between two words to a single space in the reversed string.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>1 &lt;= s.length &lt;= 10<sup>4</sup></li>
    <li><code>s</code> contains English letters (upper-case and lower-case), digits, and spaces <code>' '</code>.</li>
    <li>There is <strong>at least one</strong> word in <code>s</code>.</li>
</ul>

<p>&nbsp;</p>

<p><strong>Follow-up:</strong> If the string data type is mutable in your language, can you solve it <strong>in-place</strong> with <code>O(1)</code> extra space?</p>
