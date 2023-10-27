#!/usr/bin/python3
# 5-island_perimeter.py

def island_perimeter(grid):
    """This function finds the island perimeter"""
    update = 0
    ln = len(grid)

    for i in range(ln):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                update += 4
                if j > 0 and grid[i][j-1]:
                    update -= 2
                if i > 0 and grid[i-1][j]:
                    update -= 2
    return update
