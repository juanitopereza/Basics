def fibonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)

fibonacci(8)

import time


enes = []
tiempos = []
for i in range(1,40):
    init = time.time()

    fibonacci(i)

    difference_time = time.time() - init
    enes.append(i)
    tiempos.append(difference_time)

import matplotlib.pyplot as plt
plt.plot(enes, tiempos)
plt.show()
