#!/usr/bin/python3

"""WinterHack learning phase contest problem A"""


def calc(n):
    """A function to calculate f(n) = -1 + 2 - 3 + ... + ((-1)^n) * n

    Args:
        n (int): The number of terms

    Returns:
        The result
    """

    if n % 2 == 0:
        return n // 2
    else:
        return ((n - 1) // 2) - n


n = int(input())
print(calc(n))
