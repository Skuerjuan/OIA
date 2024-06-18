
memo = {}
memo[1] = 1
memo[2] = 1

def fib(x):
    if x in memo:
        return memo[x]
    if x <= 2:
        return 1
    else:
        result = fib(x-1) + fib(x-2)
        memo[x] = result
        return result

for i in range(1, 15):
    print(fib(i))