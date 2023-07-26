#!/usr/bin/python3

"""Module of a function that calculates the perimeter of a function in grid"""

def island_perimeter(grid):
    """ Function that returns the perimeter of a the island in a grid """

    width = len(grid[0])
    height = len(grid)
    sides = 0
    size = 0

    for a in range(height):

        for b in range(width):

            if grid[a][b] == 1:
                size += 1

                if (b > 0 and grid[a][b - 1] == 1):
                    sides += 1

                if (a > 0 and grid[a - 1][b] == 1):
                    sides += 1

    return size * 4 - sides * 2
