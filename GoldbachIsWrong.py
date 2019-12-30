import numpy as np
from funciones import *

#%%

Cuadrados = (np.arange(1,101))**2

Chiguiro = 1
Chicha = True

while Chicha:
    Chiguiro += 2
    Chicha = False
    i = 0
    while 2*Cuadrados[i] < Chiguiro:
        if IsPrime(Chiguiro) or IsPrime(Chiguiro - 2*Cuadrados[i]):
            Chicha = True
            break
        i += 1

print ("\nEl numero que jode a Goldbach es : {}\n\n".format(Chiguiro) )

Chicha = True

while Chicha:
    Chiguiro += 2
    Chicha = False
    i = 0
    while 2*Cuadrados[i] < Chiguiro:
        if IsPrime(Chiguiro) or IsPrime(Chiguiro - 2*Cuadrados[i]):
            Chicha = True
            break
        i += 1

print ("El otro numero que jode a Goldbach es : {}\n Mi animal favorito es el pejelagarto\n".format(Chiguiro) )
