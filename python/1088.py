#rodrigo25.vs@hotmail.com

class Arvore:
    def __init__(self, tamanho):
        self.tamanho = tamanho
        self.arvore = [0] * (tamanho + 1)

    def adicionar(self, indice, valor):
        while indice <= self.tamanho:
            self.arvore[indice] += valor
            indice += indice & -indice

    def soma(self, indice):
        total = 0
        while indice > 0:
            total += self.arvore[indice]
            indice -= indice & -indice
        return total

def contar_inversoes(arr):
    n = len(arr)
    valor_maximo = max(arr)
    arvore = Arvore(valor_maximo)
    
    contagem_inversoes = 0
    for i in range(n-1, -1, -1):
        contagem_inversoes += arvore.soma(arr[i] - 1)
        arvore.adicionar(arr[i], 1)
    
    return contagem_inversoes


while True:
    linha = input().strip()
    if linha == '0':
        break
            
    dados = list(map(int, linha.split()))
    n = dados[0]
    sequencia = dados[1:]
        
    inversoes = contar_inversoes(sequencia)
        
    if inversoes % 2 == 1:
        print("Marcelo")
    else:
        print("Carlos")
