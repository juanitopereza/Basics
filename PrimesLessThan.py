import sys
import numpy as np
from funciones import *

#%%

def PrimesLessThan(n):
    Papuchis = np.arange(2,n)
    Primates = []
    for num in Papuchis:
        if IsPrime(num):
            Primates.append(num)
    return Primates

#%%

print (PrimesLessThan(int(sys.argv[1])))
