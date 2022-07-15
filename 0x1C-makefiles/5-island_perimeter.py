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
    group = 0
    perimeter = 0
    row = len(grid)
    column = len(grid[group])

    for group in range(row):
        for cell in range(column):
            if grid[group][cell] == 1:
                if group == 0 or grid[group - 1][cell] == 0:
                    perimeter += 1

                if group == row - 1 or grid[group + 1][cell] == 0:
                    perimeter += 1

                if cell == 0 or grid[group][cell - 1] == 0:
                    perimeter += 1

                if cell == column - 1 or grid[group][cell + 1] == 0:
                    perimeter += 1

    return perimeter
