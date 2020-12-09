#!/usr/bin/python3
"""   Lockboxes   """
import numpy as np


def canUnlockAll(boxes):
    """Determine if all the boxes can be opened"""

    if boxes[0] == []:
        return False
    list = [0]
    for i in range(len(boxes)):
        for j in boxes[i]:
            if j not in list and j < len(boxes) and j != i:
                list.append(j)
    if len(list) == len(boxes):
        return True
    return False
