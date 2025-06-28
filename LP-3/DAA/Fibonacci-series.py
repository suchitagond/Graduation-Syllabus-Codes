def recursive_fibo(n):
    if n <= 0:
        return []
    elif n == 1:
        return [0]
    elif n == 2:
        return [0, 1]
    seq = recursive_fibo(n - 1)
    seq.append(seq[-1] + seq[-2])
    return seq

def itrative_fibo(n):
    fib_sequence = []
    a, b = 0, 1
    for i in range(n):
        fib_sequence.append(a)
        a, b = b, a + b
    return fib_sequence


n=int(input("Enter value of n : "))
print(f"itrative fibonaci sequence of {n} elements : {itrative_fibo(n)}")
print(f"recursive fibonaci sequence of {n} elements : {recursive_fibo(n)}")
