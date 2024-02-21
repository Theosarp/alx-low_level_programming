#!/usr/bin/python3
"""Island perimeter"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for m in range(height):
        for n in range(width):
            if grid[m][n] == 1:
                size += 1
                if (n > 0 and grid[m][n - 1] == 1):
                    edges += 1
                if (m > 0 and grid[m - 1][n] == 1):
                    edges += 1
    return size * 4 - edges * 2
