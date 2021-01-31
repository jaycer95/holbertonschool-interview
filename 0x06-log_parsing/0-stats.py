#!/usr/bin/python3
""" log parsing """


import sys


status = {
    "200": 0, "301": 0, "400": 0, "401": 0,
    "403": 0, "404": 0, "405": 0, "500": 0}
p = 0
fsize = 0
try:
    for line in sys.stdin:
        if p == 10:
            print("File size: {}".format(fsize))
            for key, value in sorted(status.items()):
                if value != 0:
                    print("{}: {}".format(key, value))
            p = 1
        else:
            p += 1
        split = line.split()
        if len(split) > 2:
            fsize += int(split[-1])
            for key, value in status.items():
                if split[-2] == key:
                    status[key] = status[key] + 1
except KeyboardInterrupt:
    pass
finally:
    print("File size: {}".format(fsize))
    for key, value in sorted(status.items()):
        if value != 0:
            print("{}: {}".format(key, value))
