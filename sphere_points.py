import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import axes3d
#%%

# x = np.linspace(0,10, 1000)
#
# fig = plt.figure(figsize=(10,10))
# ax1 = fig.add_subplot(331)
# ax1.plot(x, x**2)
#
# ax2 = fig.add_subplot(332)
# ax2.plot(x,x**3)
#
# ax3 = fig.add_subplot(333)
# ax3.plot(x,x**4)
#
# ax4 = fig.add_subplot(334)
# ax4.plot(x,x**5)
#
# plt.show()

#%%

x = np.random.uniform(-1,1,1000)
y = np.random.uniform(-1,1,1000)
z = np.sqrt(np.abs(1-x**2-y**2))
z2 = -np.sqrt(np.abs(1-x**2-y**2))
ii = x**2 + y**2 + z**2 < 1.0

fig = plt.figure(figsize=(10,10))
ax = fig.add_subplot(111, projection='3d')
ax.scatter(x, y, z)
ax.scatter(x, y, z2)
plt.show()
