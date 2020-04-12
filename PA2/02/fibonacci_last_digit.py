# Uses python3
import sys

def get_fibonacci_last_digit_naive(n):
    if n <= 1:
        return n

    previous = 0
    current  = 1

    for _ in range(n - 1):
        # JDH original previous, current = current, previous + current
        previous, current = (current % 10), (previous + current) % 10   # JDH added

    return current # JDH was 5 10

if __name__ == '__main__':
    input = sys.stdin.readline()    # JDH was .read()
    n = int(input)
    print(get_fibonacci_last_digit_naive(n))
