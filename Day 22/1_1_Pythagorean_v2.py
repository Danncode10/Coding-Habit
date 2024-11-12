import math

def calculate_hypotenuse(a, b):
    hypotenuse = math.sqrt(a**2 + b**2)  # Correct formula
    return hypotenuse

side_a = 3
side_b = 4

print("The length of the hypotenuse is:", calculate_hypotenuse(side_a, side_b))
