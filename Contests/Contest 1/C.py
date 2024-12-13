#!/usr/bin/python3


base = 1378


def getLastDigit(num):
    return num % 10


def getPowerOf1378(n):
    power = n % 4

    if power == 0 and n != 0:
        power = 4

    return power


n = int(input())
power = getPowerOf1378(n)
print(getLastDigit(base**power))
