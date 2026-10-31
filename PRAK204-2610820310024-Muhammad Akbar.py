baris1 = input().split()

if len(baris1) >= 2:
    r = float(baris1[0])
    t = float(baris1[1])
else:
    r = float(baris1[0])
    t = float(input())

phi = 3.142857

volume = phi * (r ** 2) * t
luas = 2 * phi * r * (r + t)
keliling = 2 * phi * r

print("Volume = %.2f" % volume)
print("Luas = %.2f" % luas)
print("Keliling = %.2f" % keliling)