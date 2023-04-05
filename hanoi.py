def hanoi(n, s, e):
    if 1 == n:
        print(f"{s} {e}")
    else:
        ss = 6 - s - e
        hanoi(n-1, s, ss)
        print(f"{s} {e}")
        hanoi(n-1, ss, e)

N = int(input())
print(2**N-1)
hanoi(N, 1, 3)
