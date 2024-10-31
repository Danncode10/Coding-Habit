from Art import logo
from Game_data import data

score = 0

#SHows Art
print(logo)

#Takes 2 Random Index (not the same) in the Game data
import random

a = random.randint(0,len(data) - 1)
b = random.randint(0,len(data) - 1)

if(a == b):
    while(a == b):
        b = random.randint(0,len(data) - 1)
        

running = True

while(running):
    print(f"Score: {score}\n")
    #User Choose Higher or Lower

    print(f"Compare A: {data[a]['name']} a {data[a]['description']}, from {data[a]['country']}.")
    from Art import vs
    print(vs)
    print(f"Compare B: {data[b]['name']} a {data[b]['description']}, from {data[b]['country']}.")

    choice = str(input("Who has more followers? Type 'A' or 'B': "))

    #if correct
    correct_answer = ''
    if(data[a]['follower_count'] > data[b]['follower_count']):
        correct_answer = 'A'
    else:
        correct_answer = 'B'
        

    if(choice == correct_answer):
        score += 1
        a = b
        b = random.randint(0,len(data) - 1)
        if(a == b):
            while(a == b):
                b = random.randint(0,len(data) - 1)
    else:
        running = False
        print(f"Your Score is {score}")







