import numpy as np
from numpy.linalg import inv, det
import time

# Checa abertura de arquivo


def ChecaArquivo():
    try:
        open("matrix.csv", 'r')
        return True
    except IOError:
        print("Error: Arquivo não existe.")
        return False

# Trata o valor


def Tratamento(x, t):
    x = x.replace('"', "")
    y = x.split(',')
    x = x.replace(y[0]+",", "")
    t.append(x)
    if x == '\n':
        t = list()
    return t

# Armazena em um arquivo


def Armazena(primeiro, t):
    arq2 = open("arquivos/"+str(primeiro)+".csv", 'w')
    for l in t:
        arq2.write(l)
    arq2.close()


start = time.time()

if (ChecaArquivo()):
    arq = open("matrix.csv", 'r')
    cont = primeiro = 0
    arquivo = 1
    t = list()

    for x in arq:
        if(primeiro == 0):
            primeiro += 1
            continue

        t = Tratamento(x, t)
        if len(t) == 0:
            break
        cont += 1

        if cont >= 12:
            Armazena(primeiro, t)
            primeiro += 1
            t.pop(0)

    # print(primeiro)
    primeiro = primeiro-1

    for i in range(1, primeiro):
        # print(i)
        matrix = np.genfromtxt("arquivos/"+str(i)+'.csv', delimiter=',')
        try:
            np.savetxt("inversas/"+str(i)+'.csv',
                       np.linalg.inv(matrix), delimiter=",")
            # print(np.linalg.inv(matrix))
        except:
            print("Inversa não pode ser calculada pois determinante é igual a zero")

end = time.time()
print(f"Tempo gasto pelo programa foi de  {end - start}")
