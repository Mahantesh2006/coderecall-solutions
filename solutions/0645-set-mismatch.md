# LeetCode #645: Set Mismatch

- **Difficulty**: EASY
- **Pattern**: Array
- **Time Complexity**: $O(N)$ — single table sequential scan
- **Space Complexity**: $O(1)$ auxiliary (result set aside)
- **LeetCode URL**: https://leetcode.com/problems/set-mismatch/

## Intuition
Apply SQL's relational model: identify the source table(s), the predicate that filters rows, and the aggregation or join that combines data. Write the query declaratively — state WHAT you want, not HOW to iterate.

## Strategy
- Identify the source tables and the relationship between them (foreign key, shared column).
- Determine whether you need filtering (`WHERE`), grouping (`GROUP BY`), joining (`JOIN`), or a window function (`OVER()`) based on what the problem asks.
- Write the `SELECT` clause last — first clarify what rows you need (`FROM` + `JOIN` + `WHERE`), then what columns to expose.
- Apply `ORDER BY` only when the problem requires sorted output; it adds O(N log N) cost and is skipped by the engine otherwise.
- Test with the given example input and verify NULLs, duplicates, and empty-table edge cases.

## Optimal Solution
Use indexed columns in `WHERE` and `JOIN` conditions. Avoid `SELECT *` in production. Prefer `EXISTS` over `IN` for large subquery result sets. Use `EXPLAIN` to verify the query plan.

## Complexity Analysis
- **Time**: `$O(N)$ — single table sequential scan`
- **Space**: `$O(1)$ auxiliary (result set aside)`

---
*Synced automatically via [CodeRecall](https://coderecall.vercel.app)*
