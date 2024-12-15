import matplotlib.pyplot as plt

# データの読み込み
x_vals, A_vals, B_vals = [], [], []

with open("plot_data.txt", "r") as file:
    for line in file:
        x, A, B = map(float, line.split())
        x_vals.append(x)
        A_vals.append(A)
        B_vals.append(B)

# グラフを描画
plt.figure(figsize=(8, 6))
plt.plot(x_vals, A_vals, label="A = -x^2 + 2x + 3", color="blue")
plt.plot(x_vals, B_vals, label="B = 3x + 3", color="red")
plt.axhline(0, color="black", linewidth=0.5)  # x軸
plt.axvline(0, color="black", linewidth=0.5)  # y軸
plt.grid(True)
plt.legend()
plt.xlabel("x")
plt.ylabel("y")
plt.title("Graph of A and B")
plt.show()
