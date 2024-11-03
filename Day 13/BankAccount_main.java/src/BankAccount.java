import java.util.Scanner;

public class BankAccount {
    Scanner scan = new Scanner(System.in);
    private float money;

    public BankAccount(){
        money = 0;
    }
    
    public void set_money(float money){
        this.money = money;
    }
    public float get_money(){
        return money;
    }

    public void deposit(){
        System.out.print("Enter Amount to Deposit: ");
        float amount = scan.nextFloat();
        money += amount;

    }

    public void withdraw(){
        System.out.println("Withdraws Money");
    }

}

