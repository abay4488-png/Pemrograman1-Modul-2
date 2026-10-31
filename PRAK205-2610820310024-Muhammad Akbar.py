import math

try:
    baris1 = input().strip()
    tokens = baris1.split()
    
    if len(tokens) >= 2:
        A = int(tokens[0])
        B = int(tokens[1])
    else:
        A = int(tokens[0])
        B = int(input())

    alas = int(math.sqrt(B**2 - A**2))
    tinggi = A
    keliling = alas + tinggi + B
    luas = int(0.5 * alas * tinggi)

    print(f"Alas = {alas} cm")
    print(f"Tinggi = {tinggi} cm")
    print(f"Keliling = {keliling} cm")
    print(f"Luas = {luas} cm^2")

except (EOFError, ValueError):
    pass