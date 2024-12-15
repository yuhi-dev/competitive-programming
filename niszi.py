import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

# x, yの範囲を設定
x_range = np.linspace(-2, 2, 100)
y_range = np.linspace(-2, 2, 100)

# (x+y)^3 の計算
X, Y = np.meshgrid(x_range, y_range)
Z1 = (X + Y) ** 6

# (x-y)^3 の計算
Z2 = (X - Y) ** 6

# 3次元プロット
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# (x+y)^3 のプロット
ax.plot_surface(X, Y, Z1, alpha=0.5, cmap='viridis')

# (x-y)^3 のプロット
ax.plot_surface(X, Y, Z2, alpha=0.5, cmap='plasma')

ax.set_xlabel('X')
ax.set_ylabel('Y')
ax.set_zlabel('Z')
ax.set_title('(x+y)^3 vs (x-y)^3')

plt.show()




