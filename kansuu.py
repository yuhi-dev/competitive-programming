import matplotlib.pyplot as plt
import numpy as np

# xの範囲を設定
x = np.linspace(-1, 1, 100)  # -2から2までの範囲を100点で分割
#y = x**2 + 2*0.5*x + 0.5**2 + 2 # y = x^2 を計算
y1 = -x**2 + 2*x + 3

y2 = -2*x

# グラフの描画
plt.plot(x, y1, color='blue')
plt.plot(x, y2, color='red') 
plt.xlabel('x')  # x軸ラベル
plt.ylabel('y')  # y軸ラベル
plt.axhline(0, color='black', linewidth=0.5)  # x軸
plt.axvline(0, color='black', linewidth=0.5)  # y軸
plt.grid(True)  # グリッド線を表示
plt.legend()  # 凡例を表示
plt.show()