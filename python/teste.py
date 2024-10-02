def merge(a, n, inv):
    if n > 1:
        merge(a, n // 2, inv)
        merge(a[n // 2:], (n + 1) // 2, inv)
        i = 0
        j = n // 2
        b = [0] * n

        for k in range(n):
            if i < n // 2 and j < n:
                if a[i] < a[j]:
                    b[k] = a[i]
                    i += 1
                elif a[j] < a[i]:
                    b[k] = a[j]
                    j += 1
                    inv[0] += (n // 2) - i
                else:
                    b[k] = a[i]
                    i += 1
            elif i < n // 2:
                b[k] = a[i]
                i += 1
            else:
                b[k] = a[j]
                j += 1

        a[:n] = b


while True:
    entrada = input().split()
    n = int(entrada[0])
    if n == 0:
        break

    a = list(map(int, input().split()))
    inv = [0]
    merge(a, n, inv)
    print("Marcelo" if inv[0] & 1 else "Carlos")



