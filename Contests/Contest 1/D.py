#!/usr/bin/python3

while (True):
    packets = int(input())

    if packets == -1:
        break

    block_candies = 0
    packet_candies = [-1] * packets

    for i in range(packets):
        packet_candies[i] = int(input())
        block_candies += packet_candies[i]

    if block_candies != 0 and block_candies % packets != 0:
        print(-1)
        continue

    child_candies = block_candies / packets
    count_moves = 0

    for candies in packet_candies:
        if child_candies < candies:
            count_moves += candies - child_candies

    print(int(count_moves))
