# LeetCode #118: Pascal's Triangle

- **Difficulty**: EASY
- **Pattern**: Array
- **Time Complexity**: $O(N^2) - The outer loop runs numRows times (N), and the inner loop executes i times for each row i. The total number of operations is the sum of the first N integers: 1 + 2 + ... + N = \frac{N(N+1)}{2}, which simplifies asymptotically to O(N^2).
- **Space Complexity**: $O(N^2) - The space complexity is determined by the total number of elements stored in the 2D vector ans. Storing N rows containing a total of \frac{N(N+1)}{2} integers requires O(N^2) memory (excluding the output container requirement, this is optimal space for storing the full triangle).
- **LeetCode URL**: https://leetcode.com/problems/pascals-triangle/

## Intuition
Pascal's Triangle exhibits an additive recurrence relation where each element is the sum of the two directly above it from the previous row. By leveraging dynamic programming, we can construct each row sequentially using the values computed in the preceding row, ensuring boundary elements always initialize to 1.

## Strategy
- 1. Initialize a 2D vector `ans` to store the generated rows of Pascal's Triangle.
- 2. Execute an outer loop `i` from 0 to `numRows - 1` to construct each row sequentially.
- 3. Instantiate a `vector<int>` named `row` of size `i + 1` initialized completely with `1`s to set the boundaries.
- 4. Execute an inner loop `j` from 1 to `i - 1` to compute interior elements via `row[j] = ans[i - 1][j - 1] + ans[i - 1][j]`.
- 5. Append the completed `row` into `ans` via `ans.push_back(row)` and finally return `ans`.

## Optimal Solution
Single-pass iterative traversal maintaining state invariants using Array, reducing time complexity to $O(N)$ and space complexity to $O(1)$.

## Complexity Analysis
- **Time**: `$O(N^2) - The outer loop runs numRows times (N), and the inner loop executes i times for each row i. The total number of operations is the sum of the first N integers: 1 + 2 + ... + N = \frac{N(N+1)}{2}, which simplifies asymptotically to O(N^2).`
- **Space**: `$O(N^2) - The space complexity is determined by the total number of elements stored in the 2D vector ans. Storing N rows containing a total of \frac{N(N+1)}{2} integers requires O(N^2) memory (excluding the output container requirement, this is optimal space for storing the full triangle).`

---
*Synced automatically via [CodeRecall](https://code-recall-one.vercel.app)*
