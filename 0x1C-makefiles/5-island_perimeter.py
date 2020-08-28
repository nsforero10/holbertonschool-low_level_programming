#!/usr/bin/python3
'''
Functions: island_perimeter
'''


def island_perimeter(grid):
    ''' returns the perimeter of the island described in grid '''
    total_p = 0

    r = len(grid)
    if r:
        c = len(grid[0])
    else:
        c = 0

    for i in range(r):
        for j in range(c):
            if grid[i][j] == 1:
                if (i - 1) == -1 or grid[i - 1][j] == 0:
                    total_p += 1
                if (i + 1) == r or grid[i + 1][j] == 0:
                    total_p += 1
                if (j - 1) == -1 or grid[i][j - 1] == 0:
                    total_p += 1
                if (j + 1) == c or grid[i][j + 1] == 0:
                    total_p += 1

    return total_p
