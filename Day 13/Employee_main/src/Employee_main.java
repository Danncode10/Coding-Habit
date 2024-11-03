// //Steps
// 1. Create Employee class
//     - set get and method to calculate salary
// 2. create another class Manager and Developer
//     - method to calculate salary in each class

import java.util.Scanner;

public class Employee_main {

    public static String enterEmployee(){
        Scanner scan = new Scanner(System.in);
        String choice = "";
        while (!choice.equals("d") && !choice.equals("m")){
            System.out.print("\nEnter Employee if Manager or Developer ('m' or 'd'): ");
            choice = scan.next();
            if(!choice.equals("d") && !choice.equals("m")){
                System.out.println("Invalid Input! ");
            }
        }
        return choice;
    }

    public static Boolean runAgain(){
        Scanner scan = new Scanner(System.in);
        String choice = "";
        while(!choice.equals("y") && !choice.equals("n")){
            System.out.print("Run Again? ('y' or 'n'): ");
            choice = scan.next();
            if(!choice.equals("y") && !choice.equals("n")){
                System.out.println("Invalid Input! ");
            }
        }
        if(choice.equals("y")){
            return true;
        }

        else{
            return false;
        }
        
        
    }

    public static void main(String[] args) {
        Boolean running = true;
        while(running){
            Employee x = new Employee();
            String choice = enterEmployee();

            if(choice.equals("d")){
                x = new Developer();
            }
            else{
                x = new Manager();
            }

            x.calculate_salary();
            running = runAgain();
        }

        System.out.println("\nProgram Finished...");
        
    }
}
