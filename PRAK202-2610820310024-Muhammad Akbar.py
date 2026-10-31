nilai1 = float(input("Masukkan Nilai Pertama : "))
nilai2 = float(input("Masukkan Nilai Kedua : "))

hasil = nilai1 + nilai2

str_nilai1 = int(nilai1) if nilai1.is_integer() else nilai1
str_nilai2 = int(nilai2) if nilai2.is_integer() else nilai2
print(f'Hasil dari penjumlahan nilai pertama "{str_nilai1}" dan nilai kedua "{str_nilai2}" adalah "{hasil:.2f}"')