#!/usr/bin/python3
""" Rotate 2D Matrix """


def rotate_2d_matrix(matrix):
    """Rotate a 2D matrix """
    n = len(matrix)

    def rotate(i, j, step):
        if step < 4:
            rotate(j, n - 1 - i, step + 1)
            matrix[i][j] = matrix[n - 1 - j][i]
            if step == 0:
                matrix[i][j] = val

    for i in range(n // 2):
        for j in range(i, n - 1 - i):
            val = matrix[n - 1 - j][i]
            rotate(i, j, 0)
