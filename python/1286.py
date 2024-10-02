#rodrigo25.vs@hotmail.com

def tempo_entrega(pizza, vetor_pizza, vetor_tempo, numero):
    tabela = []
    for i in range(numero+1):
        tabela.append([0] * (pizza+1))

    for i in range(1, numero+1):
        for j in range(pizza+1):
            if vetor_pizza[i-1] > j:
                tabela[i][j] = tabela[i-1][j]
            else:
                tabela[i][j] = tabela[i][j] = max(tabela[i - 1][j], vetor_tempo[i - 1] + tabela[i - 1][j - vetor_pizza[i - 1]])

    return tabela[numero][pizza]       
    


while True:

    numero = int(input())
    if numero == 0:
        break
        
    pizza = int(input())

    tempo_total = []
    qtd_pizzas = []

    for i in range(numero):
        entrada = input().split()
        t = int(entrada[0])
        p = int(entrada[1])
        tempo_total.append(t)
        qtd_pizzas.append(p)

    minimo = tempo_entrega(pizza, qtd_pizzas, tempo_total, numero)
    print(minimo, "min.")

