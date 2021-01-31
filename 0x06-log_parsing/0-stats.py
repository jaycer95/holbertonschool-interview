#!/usr/bin/python3
""" log parsing """


import sys


status = {
    "200": 0, "301": 0, "400": 0, "401": 0,
    "403": 0, "404": 0, "405": 0, "500": 0}
p = 1
fsize = 0
try:
    for line in sys.stdin:
        while p < 10:
            p += 1
        print("File size: {}".format(fsize))
        for key, value in sorted(status.items()):
            if value != 0:
                print("{}: {}".format(key, value))
        p = 1
        split = line.split()
        try:
            fsize += int(split[-1])
        except Exception as e:
            pass
        try:
            for key, value in status.items():
                if key == split[-2]:
                    status[key] = status[key] + 1
        except Exception as e:
            pass
    print("File size: {}".format(fsize))
    for key, value in sorted(status.items()):
        if value != 0:
            print("{}: {}".format(key, value))

except KeyboardInterrupt as e:
    print("File size: {}".format(fsize))
    for key, value in sorted(status.items()):
        if value != 0:
            print("{}: {}".format(key, value))
