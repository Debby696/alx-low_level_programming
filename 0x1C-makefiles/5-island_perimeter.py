#!/usr/bin/python3
"""Function defining an island perimeter measuring function."""


def island_perimeter(grid):
    """It returns the perimiter of an island.
    O represents water zone and 1 land zone
    Args:
        grid: A list of list of integers representing an island.
    Return:
        perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                size += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edges += 1
    return size * 4 - edges * 2
