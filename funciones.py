import numpy as np

def IsPrime(n):
    JotaMario = np.arange(1,n+1)
    Pacheco = n%JotaMario
    index = np.where(Pacheco == 0)
    if (len(index[0]) <= 2):
        return 1
    else:
        return 0

def PrimesLessThan(n):
    Papuchis = np.arange(2,n)
    Primates = []
    for num in Papuchis:
        if IsPrime(num):
            Primates.append(num)
    return Primates
