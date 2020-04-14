# Uses python3
import sys

def lcm_naive(a, b):
    for l in range(1, a*b + 1):
        if l % a == 0 and l % b == 0:
            return l
    return a*b

def lcd_fast (dividend, divisor):   # JDH added
    if (divisor == 0):
        return dividend
    remainder = dividend % divisor
    return lcd_fast(divisor, remainder)

def lcm_fast (a, b):    # JDH added
    result = (a * b // lcd_fast (a, b)) # JDH use // so it's not a float
    return result

if __name__ == '__main__':
    input = sys.stdin.readline()
    a, b = map(int, input.split())
    # print(lcm_naive(a, b)) # JDH original
    print(lcm_fast(a, b))   # JDH added

