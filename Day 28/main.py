from turtle import Turtle, Screen
import math
import random

def set_triangle_coordinates(turtle):
    turtle.setposition(0,100)
    turtle.setposition(-100,-50)
    turtle.setposition(-100,50)

def make_triangle_and_return_height():
    # size = 400 <in global>
    global side1, side2, side3
    draw = Turtle()

    draw.forward(int(size/2))
    side1 = draw.pos()

    draw.setheading(120)
    draw.forward(size)
    side2 = draw.pos()

    draw.setheading(240)
    draw.forward(size)
    side3 = draw.pos()

    draw.setheading(0)
    draw.forward(int(size/2))

    draw.hideturtle()
    b = size * size
    c = (size/2) * (size/2)
    a = math.sqrt(b - c)

    return a

def set_starting_point(height):
    y = int(height/4)
    x = int(size/4)
    p.penup()
    p.setheading(0)
    p.forward(x)
    p.setheading(90)
    p.forward(y)

    p.pendown()
    p.dot()

def chose_random_side():
    side = [side1, side2, side3]
    return random.choice(side)

def midpoint(side, current):
    x = (side[0] + current[0]) / 2

    y = (side[1] + current[1]) / 2

    mid = (x,y)
    return mid


def main():
    h = int(make_triangle_and_return_height())
    print(f"The Height is {h}")
    print(side1)

    set_starting_point(h)

    for _ in range(100000):
        next_point = midpoint(chose_random_side(), p.pos())

        p.penup()
        p.setposition(next_point)
        p.dot()
        p.pendown()


#global variable

p = Turtle()
p.hideturtle()
size = 400
p.speed("fastest")

#point Variables
side1 = (0,0)
side2 = (0,0)
side3 = (0,0)

screen = Screen()

main()

screen.mainloop()