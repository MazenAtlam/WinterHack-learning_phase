#!/usr/bin/python3

str = input()

q = int(input())

prefix = [0] * len(str)

if str[0] == 'a':
    prefix[0] = 1

for i in range(1, len(str)):
    prefix[i] = prefix[i - 1] + (1 if str[i] == 'a' else 0)

for i in range(q):
    l, r = list(map(int, input().split(" ")))
    l -= 1
    r -= 1

    occur = prefix[r] - (prefix[l - 1] if l > 0 else 0)

    print(occur)
