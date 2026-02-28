

P = float(input("Ingrese el principal (cantidad inicial): "))
r = float(input("Ingrese la tasa de interés anual (en decimal, ej: 0.05): "))
n = float(input("Número de veces que se aplica el interés por año: "))
t = float(input("Número de años: "))

A = P * (1 + r/n) ** (n*t)

print("Monto final:", A)
