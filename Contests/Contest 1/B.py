#!/usr/bin/python3

def count_dominos(m, n):
    return (m * n) // 2

m, n = map(int, input().split(" "))
print(count_dominos(m, n))
