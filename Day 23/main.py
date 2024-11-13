from turtle import Turtle, Screen

import Resources
import random

p = Turtle()
screen = Screen()

p.speed(0)
p.pensize(15)

for _ in range(200):
    p.color(random.choice(Resources.colours))
    p.setheading(random.choice(Resources.direction))
    p.forward(30)

screen.exitonclick()