#rodrigo25.vs@hotmail.com

numero = int(input())

print(numero)

resultado = numero//100
numero = numero%100
print(resultado, "nota(s) de R$ 100,00")

resultado = numero//50
numero = numero%50
print(resultado, "nota(s) de R$ 50,00")

resultado = numero//20
numero = numero%20
print(resultado, "nota(s) de R$ 20,00")

resultado = numero//10
numero = numero%10
print(resultado, "nota(s) de R$ 10,00")

resultado = numero//5
numero = numero%5
print(resultado, "nota(s) de R$ 5,00")

resultado = numero//2
numero = numero%2
print(resultado, "nota(s) de R$ 2,00")

resultado = numero
print(resultado, "nota(s) de R$ 1,00")
