def draw_pattern(N, x, y):
    if N == 1:
        pattern[y][x] = '*'
    else:
        n = N // 3
        draw_pattern(n, x, y)
        draw_pattern(n, x + n, y)
        draw_pattern(n, x + 2*n, y)
        draw_pattern(n, x, y + n)
        pattern[y + n][x + n] = ' '
        draw_pattern(n, x + 2*n, y + n)
        draw_pattern(n, x, y + 2*n)
        draw_pattern(n, x + n, y + 2*n)
        draw_pattern(n, x + 2*n, y + 2*n)

N = 81
pattern = [[' ']*N for _ in range(N)]
draw_pattern(N, 0, 0)
for row in pattern:
    print(''.join(row))
