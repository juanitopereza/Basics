import sys
import math as m

#%%

n = int(sys.argv[1])
#%%

def factorial(n):
    if (n == 0):
        return 1
    else:
        return n * factorial(n-1)

def SINpecadoconcebido(x,m):
    if ( m == 1):
        return x
    else:
        return (-1)**(m - 1) * (x**(2*m -1))/factorial(2*m-1) + SINpecadoconcebido(x,m-1)
def error(x,n):
    return abs(SINpecadoconcebido(x,n) - m.sin(x))/m.sin(x)

#%%

theta = m.pi/6
print("Con {} términos sin(pi/6) = {}".format(n,SINpecadoconcebido(theta,n)))
print("Con la libreria sin(pi/6) = {}".format(m.sin(theta)))

err = 1
k = 1
while(err >= 0.001):
    err = error(theta,k)
    k += 1

print ("Se requieren {} términos para que el error sea menor a 0.1".format(k))
