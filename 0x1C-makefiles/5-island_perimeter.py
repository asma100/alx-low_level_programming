#!/usr/bin/python3
"""modul"""
def count_islands(grid):
  """
  Counts the number of isolated islands (areas surrounded by 0s) in a grid.

  Args:
      grid: A list of lists representing the grid, where 0 represents water and 1 represents land.

  Returns:
      The number of isolated islands in the grid.
  """
 
count = 0
for i in range(len(grid)):
  for j in range(len(grid[i])):
    if grid[i][j] == 1:  # Check if current cell is land (1)
      # Check all four neighbors for water (0) and increment count if found
      if i == 0 or grid[i - 1][j] == 0:
        count += 1
      if j == 0 or grid[i][j - 1] == 0:
        count += 1
      if i == len(grid) - 1 or grid[i + 1][j] == 0:
        count += 1
      if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
        count += 1

# This part remains unchanged as it doesn't modify the logic
return count
