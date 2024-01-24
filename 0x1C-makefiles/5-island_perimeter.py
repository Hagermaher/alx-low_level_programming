#!/usr/bin/python3
"""Defines an island perimete function"""


def island_perimeter(grid):
    """Return the perimiter of  island
    The grid represent water by 0 and land by 1
    Args:
        grid (list): list of list of integers
    Returns:
        The perimeter
    """
    w = len(grid[0])
    h = len(grid)
    e = 0
    s = 0

    for v in range(h):
        for k in range(w):
            if grid[v][k] == 1:
                s += 1
                if (k > 0 and grid[v][k - 1] == 1):
                    e += 1
                if (v > 0 and grid[v - 1][k] == 1):
                    e += 1
    return s * 4 - e * 2
