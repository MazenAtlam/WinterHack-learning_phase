#!/usr/bin/python3

n = int(input())
arr = list(map(int, input().split()))
max = 100001
freqArr = [0] * (max)

for i in arr:
    freqArr[i] += 1

for i in range(len(freqArr)):
    while freqArr[i] > 0:
        freqArr[i] -= 1
        print(i, end=' ')
