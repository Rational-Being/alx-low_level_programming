#!/usr/bin/python3


def island_perimeter(grid):
    """
    Calculates the Island's Perimeter
    Args:
        grid (_type_): an array
    """

    perimeter = 0
    row = len(grid)
    col = len(grid[0])

    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                perimeter += 4

                # if right cell is land or 1 subtract two
                if j < col - 1 and grid[i][j + 1] == 1:
                    perimeter -= 2

                # if cell below is also land, subtract
                if i < row - 1 and grid[i + 1][j] == 1:
                    perimeter -= 2

    return perimeter
