x = 10

def f():
    print(f"Valor de X: {x}")

def g():
    x = 20
    f()

g()