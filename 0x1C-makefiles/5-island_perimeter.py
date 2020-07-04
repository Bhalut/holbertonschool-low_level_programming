#!/usr/bin/python3
""" 5-island_perimeter.py

    island_perimeter function
"""


def island_perimeter(grid):
    """island_perimeter function

    the perimeter of the island described in grid

    Args:
        grid (list of list int): Matrix

    Returns:
        int: island perimeter
    """
    result = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            count = 0
            if grid[i][j] == 1:
                if (i > 0 and grid[i - 1][j]):
                    count += 1

                if (j > 0 and grid[i][j - 1]):
                    count += 1

                if (i < len(grid)-1 and grid[i + 1][j]):
                    count += 1

                if (j < len(grid[0])-1 and grid[i][j + 1]):
                    count += 1

                result += (4 - count)
    return result
