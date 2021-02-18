#!/usr/bin/python3
""" Utf8 Validator """


def validUTF8(data):
    """ check if valid utf8 format """
    m = data
    try:
        bytes(m).decode("UTF-8")
        return True
    except Exception:
        return False
