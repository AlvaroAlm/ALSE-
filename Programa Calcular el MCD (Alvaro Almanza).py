# Programa para calcular el Máximo Común Divisor (MCD)

# Pedir al usuario los dos números
num1 = int(input("Ingresa el primer número: "))
num2 = int(input("Ingresa el segundo número: "))

# Guardamos los valores originales para mostrar al final
a, b = num1, num2

# Método de Euclides para calcular el MCD
while num2 != 0:
    residuo = num1 % num2
    num1 = num2
    num2 = residuo

# El MCD es el último valor no nulo de num1
print(f"El MCD de {a} y {b} es {num1}")
