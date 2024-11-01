from operator import truediv

from dictionary_coffee import menu
from dictionary_coffee import resources
from dictionary_coffee import coin

def enterChoice():
    running = True
    while(running):
        choice = str(input("What would you like? (espresso/latte/cappuccino): "))
        if(choice == "espresso" or choice == "latte" or choice == "cappuccino" or choice == "report"):
            return choice
        else:
            print("Invalid Input")

def report():
    print(f"Water: {resources['water']}")
    print(f"Milk: {resources['milk']}")
    print(f"Coffee: {resources['coffee']}")
    print(f"Money: $ {money}")

def checkResources(choice):
    if choice == "report":
        return

    water_to_be_deducted = menu[choice]['ingredients']['water']
    coffee_to_be_deducted = menu[choice]['ingredients']['coffee']
    milk_to_be_deducted = menu[choice]['ingredients']['milk']

    if water_to_be_deducted > resources['water']:
        print("Sorry there is not enough water.")
        return
    if coffee_to_be_deducted > resources['coffee']:
        print("Sorry there is not enough coffee.")
        return
    if milk_to_be_deducted > resources['milk']:
        print("Sorry there is not enough milk.")
        return

    #if not, proceed to next:

def processResources(choice):
    if choice == "report":
        return
    global money
    resources['water'] -= menu[choice]['ingredients']['water']
    resources['coffee'] -= menu[choice]['ingredients']['coffee']
    resources['milk'] -= menu[choice]['ingredients']['milk']
    money += menu[choice]['cost']

# ----------- M A I N -----------
running = True
money = 0
while(running):
    choice = enterChoice()
    if (choice == "report"):
        report()
    checkResources(choice)
    processResources(choice)



