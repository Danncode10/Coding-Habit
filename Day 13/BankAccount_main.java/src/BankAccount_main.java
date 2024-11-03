// Instructions

// 1. BankAccount class as base class ✅
//     - method for deposit and withdraw ✅

// 2. subclasses of SavingsAccount and CheckingAccount ✅
//     - SavingsAccount - 
//         - Everytime you withdraw there is a fee. ✅
//     - CheckingAccount - 
//         - for more frequent transactions ✅
//         - no fee 

import java.util.Scanner;

public class BankAccount_main {
    

    public static BankAccount createAccount(BankAccount x){
        Scanner scan = new Scanner(System.in);

        String accountType = "";

        while(!accountType.equals("s") && !accountType.equals("c")){
            System.out.print("Enter Account Type ('s' for Savings and 'c' for Checking): ");
            accountType = scan.next();
            if(!accountType.equals("s") && !accountType.equals("c")){
                System.out.println("Invalid Input!");
            }
        }

            if(accountType.equals("s")){
                x = new SavingsAccount();
            }
            else{
                x = new CheckingAccount();
            }

            return x;

    }

    public static int showOperations(BankAccount x){
        Scanner scan = new Scanner(System.in);
        int choice = 0;

        while(choice != 1 && choice != 2){

            System.out.printf("Balance: %.2f\n\n", x.get_money());
            System.out.println("(1) Withdraw\n(2) Deposit\n ");

            System.out.print("Enter (1) for Withdraw and (2) for Deposit: ");
            choice = scan.nextInt();

            if(choice != 1 && choice != 2){
                System.out.println("Invalid Input!");
            }
        }
        return choice;

    }

    public static void processChoice(int choice, BankAccount x){
        if(choice == 1){
            x.withdraw();
        }
        else{
            x.deposit();
        }
    }

    public static boolean runAgain(){
        Scanner scan = new Scanner(System.in); 
        String choice = "";

        while(!choice.equals("y") && !choice.equals("n")){

            System.out.println("Run Again? 'y' or 'n': )");
            choice = scan.next();
            if(!choice.equals("y") && !choice.equals("n")){
                System.out.println("Invalid Input.");
            }
        }
        if (choice.equals("y")){
            return true;
        }
        else{
            return false;
        }
    }



    public static void main(String[] args) {
        boolean running = true;
        BankAccount x = new BankAccount();
        x = createAccount(x);

        while(running){
            int choice = showOperations(x);
            processChoice(choice, x);
            running = runAgain();
        }
    }
}
