#!/usr/bin/python3
def count_islands(grid):
  """
  Counts the number of isolated islands (areas surrounded by 0s) in a grid.

  Args:
      grid: A list of lists representing the grid, where 0 represents water and 1 represents land.

  Returns:
      The number of isolated islands in the grid.
  """
 
  count = 0
length = len(grid) - 1
 width = len(grid[0]) - 1

 for i, row in enumerate(grid):  # Replaced 'r' with 'row' for clarity
   for j, cell in enumerate(row):  # Replaced 'n' with 'cell' for clarity
     if cell == 1:  # Check for island cell
       # Check all four neighbors (using conditional expressions for brevity)
       count += (1 if i == 0 or grid[i - 1][j] != 1 else 0)
       count += (1 if j == 0 or grid[i][j - 1] != 1 else 0)
       count += (1 if j == width or grid[i][j + 1] != 1 else 0)
       count += (1 if i == length or grid[i + 1][j] != 1 else 0)

 return count
