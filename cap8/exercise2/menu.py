def fatorial(n):
    fat = 1
    for i in range(1, n + 1):
        fat *= i
    return fat

while True:
    print("\nMenu:")
    print("1 - Calcular o quadrado de um número")
    print("2 - Calcular o fatorial de um número")
    print("3 - Sair")
    opcao = int(input("Escolha: "))

    if opcao == 1:
        num = int(input("Digite um número: "))
        print("Quadrado:", num * num)
    elif opcao == 2:
        num = int(input("Digite um número: "))
        print("Fatorial:", fatorial(num))
    elif opcao == 3:
        print("Saindo...")
        break
    else:
        print("Opção inválida!")
