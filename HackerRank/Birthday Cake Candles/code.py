#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the birthday Cake Candles function below.
def birthdayCakeCandles(ar):
    max = ar[0]
    count = 0
    for i in range(1, len(ar)):
        if max < ar[i]:
            max  = ar[i]
    for i in range(0, len(ar)):
        if max == ar[i]:
            count = count + 1
    return count

if __name__ == '__main__':
    ar = [ 4, 4, 1, 3]
    result = birthdayCakeCandles(ar)
    print( 'result\t:\t' , result)

