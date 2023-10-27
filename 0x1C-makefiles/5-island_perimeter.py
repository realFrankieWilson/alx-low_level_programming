#!/usr/bin/python3
# 5-island_perimeter.py

def island_perimeter(grid):
    """This function finds the island perimeter"""
    ln0 = len(grid[0])
    ln = len(grid)
    update0 = 0
    update1 = 0

    for i in range(ln):
        for j in range(len(ln0):
            if grid[i][j] == 1:
                update0 += 1
                if (j > 0 and grid[i][j-1] == 1):
                    update1 += 1
                if (i > 0 and grid[i-1][j] == 1):
                    update1 += 1
    return update0 * 4 - update1 * 2
