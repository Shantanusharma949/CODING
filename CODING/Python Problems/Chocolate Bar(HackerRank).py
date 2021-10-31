T = int(input())
for t in range(T):
    N, C, M = [int(e) for e in input().strip().split()]
    chocolates = 0
    wrappers = 0
    while N >= C:
        nc = N // C
        N -= (nc * C)
        chocolates += nc
        wrappers += nc
    while wrappers >= M:
        wr = wrappers // M
        wrappers -= M * wr
        wrappers += wr
        chocolates += wr
    print(chocolates)
