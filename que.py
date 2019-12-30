import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits import mplot3d

#%%

def circulo(N):
    x = np.random.uniform(-1,1,N)
    y = np.random.uniform(-1,1,N)
    z = np.random.uniform(-1,1,N)

    ii = (x**2 + y**2 + z**2) <= 1

    return x[ii],y[ii],z[ii]

#%%

N = 10000

x, y, z = circulo(N)

x

#%%
fig = plt.figure()
ax = plt.axes(projection = '3d')
ax.scatter(x,y,z, s=5)

#%%

x = np.linspace(-40,40,1000)

N = 20
vx = -19
vy = (400 - vx**2)**0.5
vy
y = x*(vy/vx) - 5*(x/vx)**2
plt.plot(x,y)
plt.ylim(0,20)

for i in range(N):
    vx += (19*2)/N
    vy = (400 - vx**2)**0.5
    y = x*(vy/vx) - (10*x**2)/(2*20**2*(vx/20)**2)
    plt.plot(x,y)
    plt.ylim(0,20)
plt.savefig("plo.png")
