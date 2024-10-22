import random

def enter_difficulty():
    while True:
        choice = str(input("Enter Difficulty: "))
        if choice == 'hard' or choice == 'easy':
            if choice == 'hard':
                return "hard", 5
            else:
                return "easy", 10
        else:
            print("Invalid Input")


#-----------M A I N -----------#


mode, attempt = enter_difficulty()

num = random.randint(1,100)

while attempt != 0:
    your_guess = int(input("\nEnter Your Guess: "))
    
    if your_guess > num:
        attempt -= 1
        print("Too High.\nGuess again.")
    elif your_guess < num:
        attempt -= 1
        print("Too Low.\nGuess again.")
    else:#equal na
        print("You Win")
        break
    print(f"You have {attempt} attempt/s left")
    
#outside loop
if attempt == 0:
    print("You Lose")
    print("The number you need to guess is {num} ")
        
    
