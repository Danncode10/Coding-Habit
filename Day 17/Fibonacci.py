import turtle
import math
from turtle import Screen

# Function to plot Fibonacci Spiral
def fiboPlot(n):
    a, b = 0, 1  # First 2 Fibonacci numbers
    sq_a, sq_b = a, b  # Square sides based on Fibonacci numbers

    # Draw the first square
    x.pencolor("blue")
    x.forward(b * factor)
    x.left(90)
    x.forward(b * factor)
    x.left(90)
    x.forward(b * factor)
    x.left(90)
    x.forward(b * factor)

    # Fibonacci sequence for square sizes
    temp = sq_b
    sq_b = sq_b + sq_a
    sq_a = temp

    for i in range(1, n):
        # Draw remaining squares
        x.backward(sq_a * factor)
        x.right(90)
        x.backward(sq_a * factor)
        x.right(90)
        x.backward(sq_a * factor)
        x.right(90)
        x.backward(sq_a * factor)

        # Update Fibonacci numbers
        temp = sq_b
        sq_b = sq_b + sq_a
        sq_a = temp

    # Set up for drawing the spiral
    x.penup()
    x.setposition(factor, 0)
    x.seth(0)
    x.pendown()

    x.pencolor("red")
    x.left(90)

    for i in range(n):
        # Print Fibonacci number for debugging
        print(b)

        fdwd = math.pi * b * factor / 2  # Arc length
        fdwd /= 90  # Scale for a 90-degree turn

        # Draw the spiral
        for j in range(90):
            x.forward(fdwd)
            x.left(1)

        # Update Fibonacci numbers for next spiral
        temp = a
        a = b
        b = temp + b

# Main Program
factor = 30  # Scaling factor for plot size
n = int(input("Enter Size (n): "))  # Number of iterations

screen = Screen()

if n > 0:
    x = turtle.Turtle()
    x.speed(100)  # Set drawing speed
    fiboPlot(n)
    screen.exitonclick()  # Close on click
else:
    print("Number of iterations must be greater than 0")
