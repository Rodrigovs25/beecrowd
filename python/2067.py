#rodrigo25.vs@hotmail.com


entrada = input().split()
linha = int(entrada[0])
coluna = int(entrada[1])


matriz_aux = []
for i in range(linha):
    matriz_aux.append([0] * coluna)
maior = 0

matriz = []
for i in range(linha):
    str = input().split()  
    str = [int(j) for j in str]  
    matriz.append(str)



for i in range(linha):
    for j in range(coluna):
        if matriz[i][j] == 0:
            matriz_aux[i][j] = 0
        else:
            if i == 0 or j == 0:
                matriz_aux[i][j] = 1
            else:
                matriz_aux[i][j] = min(matriz_aux[i-1][j-1], matriz_aux[i-1][j], matriz_aux[i][j-1]) + 1
            maior = max(maior, matriz_aux[i][j])

num_pergunta = int(input())

for i in range(num_pergunta):

    quadrado = int(input())
    if(quadrado <= maior):
        print("yes")
    else:
        print("no")

