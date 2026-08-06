<h2><a href="https://leetcode.com/problems/integer-to-roman">Integer to Roman</a></h2>

<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />

<hr>

<p>Seven different symbols represent Roman numerals with the following values:</p>

<table>
    <thead>
        <tr>
            <th>Symbol</th>
            <th>Value</th>
        </tr>
    </thead>
    <tbody>
        <tr><td><code>I</code></td><td>1</td></tr>
        <tr><td><code>V</code></td><td>5</td></tr>
        <tr><td><code>X</code></td><td>10</td></tr>
        <tr><td><code>L</code></td><td>50</td></tr>
        <tr><td><code>C</code></td><td>100</td></tr>
        <tr><td><code>D</code></td><td>500</td></tr>
        <tr><td><code>M</code></td><td>1000</td></tr>
    </tbody>
</table>

<p>Roman numerals are formed by appending the conversions of decimal place values from highest to lowest. Converting a decimal place value into a Roman numeral has the following rules:</p>

<ul>
    <li>If the value does not start with <code>4</code> or <code>9</code>, select the symbol of the maximal value that can be subtracted from the input, append that symbol to the result, subtract its value, and convert the remainder to a Roman numeral.</li>
    <li>If the value starts with <code>4</code> or <code>9</code>, use the subtractive form representing one symbol subtracted from the following symbol. For example, <code>4</code> is <code>IV</code> and <code>9</code> is <code>IX</code>. Only the following subtractive forms are used: <code>IV</code>, <code>IX</code>, <code>XL</code>, <code>XC</code>, <code>CD</code>, and <code>CM</code>.</li>
    <li>Only powers of <code>10</code> (<code>I</code>, <code>X</code>, <code>C</code>, <code>M</code>) can be appended consecutively at most <code>3</code> times to represent multiples of <code>10</code>. You cannot append <code>V</code>, <code>L</code>, or <code>D</code> multiple times. If you need to append a symbol <code>4</code> times, use the subtractive form.</li>
</ul>

<p>Given an integer, convert it to a Roman numeral.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> num = 3749

<strong>Output:</strong> "MMMDCCXLIX"

<strong>Explanation:</strong>

3000 = MMM as 1000 (M) + 1000 (M) + 1000 (M)
 700 = DCC as 500 (D) + 100 (C) + 100 (C)
  40 = XL as 10 (X) less of 50 (L)
   9 = IX as 1 (I) less of 10 (X)

Note: 49 is not 1 (I) less of 50 (L) because the conversion is based on decimal places.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> num = 58

<strong>Output:</strong> "LVIII"

<strong>Explanation:</strong>

50 = L
 8 = VIII
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> num = 1994

<strong>Output:</strong> "MCMXCIV"

<strong>Explanation:</strong>

1000 = M
 900 = CM
  90 = XC
   4 = IV
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
    <li><code>1 &lt;= num &lt;= 3999</code></li>
</ul>
