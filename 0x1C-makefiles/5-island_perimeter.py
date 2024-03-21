#!/usr/bin/python3

"""
island_perimeter module

This module defines a function to calculate the perimeter of the island in a grid.

An island is considered a group of connected 1s (land) surrounded by 0s (water).
The perimeter is the total number of sides bordering water.
"""


def island_perimeter(grid):
  """
  Calculates the perimeter of the island in a grid.

  Args:
      grid: A list of lists representing the grid, where 0 represents water and 1 represents land.

  Returns:
      The perimeter of the island in the grid.
  """
  rows, cols = len(grid), len(grid[0])
  perimeter = 0

  for row in range(rows):
    for col in range(cols):
      if grid[row][col] == 1:
        # Check all four neighbors for water (0) and add 1 to perimeter if found
        perimeter += (1 if row == 0 or grid[row - 1][col] == 0 else 0)
        perimeter += (1 if col == 0 or grid[row][col - 1] == 0 else 0)
        perimeter += (1 if row == rows - 1 or grid[row + 1][col] == 0 else 0)
        perimeter += (1 if col == cols - 1 or grid[row][col + 1] == 0 else 0)

  return perimeter
