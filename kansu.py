import numpy as np

# データを保存するファイル名
output_file = "plot_data.txt"

# xの範囲とステップ
x_start = -10
x_end = 10  # 適宜変更可能
step = 0.1

# xの値を生成
x_vals = np.arange(x_start, x_end, step)

# データ計算と保存
with open(output_file, "w") as file:
    for x in x_vals:
        A = -x**2 + 2*x + 3
        B = 3*x + 3
        file.write(f"{x} {A} {B}\n")  # x, A, Bを1行に保存

print(f"Data saved to {output_file}")
