"""lista = [12, 543, 123, 66, 774]"""
"""for e in lista:
    suma += e
    r.append(e)"""

"""for i in range(len(lista)-1,-1,-1):
    s.append(lista[i])

print(s, suma)"""

"""for i,e in enumerate(lista):
    if i % 2 != 0:
        print(e)"""

"""s = list(filter(lambda e: e%2 == 0, lista))
print(s)"""

"""r = []
for i in range(3):
    b = int(input("Dime: "))
    r.append(b)
 print(r)"""


nombres = [[0] * 2 for _ in range(5)]

# Entrada de datos
for i in range(5):
    for j in range(2):
        nombres[i][j] = int(input())

# Salida de datos
for i in range(5):
    for j in range(2):
        print("----------------------------------------------------------")
        print(f"L'array de la fila {i} i la columna {j+1} val: {nombres[i][j]}")



