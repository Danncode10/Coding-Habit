import turtle as t
import random as r

def main():
    #setup module
    t.colormode(255)

    # Set up point
    p = t.Turtle()
    p.speed(7)
    p.pensize(6)



    steps = 0
    while((steps <=0 or steps > 360)):
        steps = int(input("Enter Steps: "))
        if((steps <=0 or steps > 360)):
            print("Invalid Input.")

    # Screen Setup
    screen = t.Screen()
    for i in range(0,360,steps):
        p.color(r.randint(0,255), r.randint(0,255), r.randint(0,255)) # USE .colormode in setup
        p.setheading(i)
        p.circle(100)

    screen.exitonclick()


# Call main

main()