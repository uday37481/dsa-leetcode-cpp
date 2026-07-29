<h2><a href="https://leetcode.com/problems/product-of-array-except-self">Product of Array Except Self</a></h2>

<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />

<hr>

<p>Given an integer array <code>nums</code>, return an array <code>answer</code> such that <code>answer[i]</code> is equal to the product of all the elements of <code>nums</code> except <code>nums[i]</code>.</p>

<p>The product of any prefix or suffix of <code>nums</code> is guaranteed to fit in a 32-bit integer.</p>

<p>You must write an algorithm that runs in <code>O(n)</code> time and without using the division operation.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> [24,12,8,6]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [-1,1,0,-3,3]
<strong>Output:</strong> [0,0,9,0,0]
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>2 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
    <li><code>-30 &lt;= nums[i] &lt;= 30</code></li>
    <li>The input is generated such that <code>answer[i]</code> is guaranteed to fit in a 32-bit integer.</li>
</ul>

<p>&nbsp;</p>

<p><strong>Follow up:</strong></p>

<p>Can you solve the problem in <code>O(1)</code> extra space complexity? (The output array does not count as extra space for space complexity analysis.)</p>
