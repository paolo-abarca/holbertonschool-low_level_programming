#!/usr/bin/python3
"""
Create a function def island_perimeter(grid):
that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    python function that returns the perimeter
    of the island described in grid
    """
    perimeter = 0
    row = len(grid)
    column = len(grid[0])

    for group in range(row):
        for cell in range(column):
            if grid[group][cell] == 1:
                if grid[group - 1][cell] == 0 or group == 0:
                    perimeter += 1

                if grid[group + 1][cell] == 0 or group == row - 1:
                    perimeter += 1

                if grid[group][cell - 1] == 0 or cell == 0:
                    perimeter += 1

                if grid[group][cell + 1] == 0 or cell == column - 1:
                    perimeter += 1

    return perimeter
