#!/usr/bin/python3

n, m = list(map(int, input().split(" ")))
arr = list(map(int, input().split(" ")))

freqArr = [0] * ((2 * m) + 1)

for elem in arr:
    freqArr[elem + m] += 1

for i in range(len(freqArr)):
    if freqArr[i] == 0:
        print(i - m)
        break
