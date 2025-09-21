def processa_lista(numeros):
    for n in numeros:
        if n == 0:
            print("Encontrado zero, parando execução.")
            break
        if n < 0:
            continue
        if n % 2 == 0:
            return n * 2
    return None

lista = [5, -3, 7, -1, 8, 0, 10]
resultado = processa_lista(lista)
print("Resultado:", resultado)
