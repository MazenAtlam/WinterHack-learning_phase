#!/usr/bin/python3

testcases = int(input())

for _ in range(testcases):
    size = int(input())

    arr1 = list(map(int, input().split(" ")))
    arr2 = list(map(int, input().split(" ")))

    l = -1
    r = -1

    for i in range(size - 1):
        if arr1[i] != arr2[i]:
            l = i + 1
            break

    for i in range(size - 1, 0, -1):
        if arr1[i] != arr2[i]:
            r = i + 1
            break

    while l > 1 and arr1[l - 2] <= arr2[l - 1]:
        l -= 1

    while r < size and arr1[r] >= arr2[r - 1]:
        r += 1

    print(f"{l} {r}")
