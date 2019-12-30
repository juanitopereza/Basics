import sys
import numpy as np
import matplotlib.pyplot as plt
from scipy import special
from funciones import *

#%%

def NumberPrimesLessThan(x):
	Mulato = []
	for num in x:
		Mulato.append(len(PrimesLessThan(num)))
	return Mulato
#%%

Chirimia = np.arange(20)
print (NumberPrimesLessThan(Chirimia))

x = np.arange(1,1001)
pix = NumberPrimesLessThan(x)

PaVer = special.expi(np.log(x))

#%%
plt.plot(x,pix)
plt.plot(x,PaVer)
plt.title("$Aguanta\ Papu$")
plt.show()
