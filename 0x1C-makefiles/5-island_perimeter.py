#!/usr/bin/python3
def count_islands(grid):
  """
  Counts the number of isolated islands (areas surrounded by 0s) in a grid.

  Args:
      grid: A list of lists representing the grid, where 0 represents water and 1 represents land.

  Returns:
      The number of isolated islands in the grid.
  """
  rows, cols = len(grid), len(grid[0])
  count = 0
  visited = [[False for _ in range(cols)] for _ in range(rows)]  # Create a visited grid to avoid revisiting cells

  def dfs(row, col):
    """
    Performs a Depth-First Search (DFS) to explore a connected island.

    Args:
        row: The current row index.
        col: The current column index.
    """
    if row < 0 or row >= rows or col < 0 or col >= cols or grid[row][col] == 0 or visited[row][col]:
      return

    visited[row][col] = True  # Mark current cell as visited

    # Explore all four directions (up, down, left, right)
    dfs(row + 1, col)
    dfs(row - 1, col)
    dfs(row, col + 1)
    dfs(row, col - 1)

  for row in range(rows):
    for col in range(cols):
      if grid[row][col] == 1 and not visited[row][col]:
        dfs(row, col)
        count += 1  # Increment count for a new island

  return count
