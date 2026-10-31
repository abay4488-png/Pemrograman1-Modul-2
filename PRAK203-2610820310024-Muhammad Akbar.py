import sys 

def main():
    buffer = []

    while True:
        try:
            line = input().strip()
            if not line:
                continue
            for token in line.split():
                buffer.append(float(token))
                if len(buffer) == 6:
                    a, b, i, j, x, y = buffer
                    hasil = (a - b) * (i / j) - (x + y)

                    print(f"Hasil: {hasil:.3f}")
                    buffer = []
        except EOFError:
            break

if __name__ == "__main__":
    main()