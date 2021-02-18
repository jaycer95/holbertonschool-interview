#!/usr/bin/python3
""" Utf8 Validator """


def validUTF8(data):
    """ check if valid utf8 format """
    try:
        for n in data:
            n &= 255
        bytes(data).decode("UTF-8")
        return True
    except Exception:
        return False
