import sys
import numpy as np

#%%
def IsPrime(n):
    JotaMario = np.arange(1,n+1)
    Pacheco = n%JotaMario
    index = np.where(Pacheco == 0)
    if (len(index[0]) <= 2):
        return 1
    else:
        return 0

#%%

print (IsPrime(int(sys.argv[1])))
