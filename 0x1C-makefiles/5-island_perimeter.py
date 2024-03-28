#!/usr/bin/python3
""" a function that returns the perimeter of an island """

def island_perimeter(grid):
    """
        a function that takes in a grid with height and width less than 100
        and returns the perimeter of the island that resides in it
    """
    peri = 0
    if not isinstance(grid, list):
        return None

    for i in range(len(grid)):
        if not isinstance(grid[i], list):
            return None
        for j in range(len(grid[i])):

            if grid[i][j] not in (1, 0):
                return None

            if i != 0 and grid[i][j] == 1:
                peri += check_above(i, j, grid)
            elif i == 0 and grid[i][j] == 1:
                peri += 1

            if j != 0 and grid[i][j] == 1:
                peri += check_left(i, j, grid)
            elif j == 0 and grid[i][j] == 1:
                peri += 1

            if j != len(grid[i]) - 1 and grid[i][j] == 1:
                peri += check_right(i, j, grid)
            elif j == len(grid[i]) - 1 and grid[i][j] == 1:
                peri += 1

            if i != len(grid) - 1 and grid[i][j] == 1:
                peri += check_below(i, j, grid)
            elif i == len(grid) - 1 and grid[i][j] == 1:
                peri += 1
    return peri

def check_above(i, j, grid):
    """ check for land or water above the current cell """
    if grid[i - 1][j] == 1:
        return 0
    else:
        return 1

def check_left(i, j, grid):
    """ check for land or water left of the current cell """
    if grid[i][j - 1] == 1:
        return 0
    else:
        return 1

def check_right(i, j, grid):
    """ check for land or water right of the current cell """
    if grid[i][j + 1] == 1:
        return 0
    else:
        return 1

def check_below(i, j, grid):
    """ check for land or water below the current cell """
    if grid[i + 1][j] == 1:
        return 0
    else:
        return 1
