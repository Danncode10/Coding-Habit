import math
from turtle import Turtle, Screen

#SET UP SCREEN
screen = Screen()
screen.setup(800,600)
screen.colormode(255)

#Turtle SETUP
t = Turtle()
t.hideturtle()
t.pensize(5)
t.speed("slow")

def draw_rose(a, k, num_points = 1000): #num_points is default
    t.penup()
    for i in range(num_points):
        theta = math.radians(i) #dpat radians
        r = a * math.cos(k * theta)
        x = r * math.cos(theta)
        y = r * math.sin(theta)
        t.goto(x * 200, y * 200)
        t.pendown()


draw_rose(1, 10)


screen.exitonclick()
