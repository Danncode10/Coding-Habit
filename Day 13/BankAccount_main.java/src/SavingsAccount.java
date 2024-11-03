

public class SavingsAccount extends BankAccount{
    public final float fee = 30; //Gawa gawa kong fee
    
    public void withdraw(){
        float amount = 0;
        while(true){
            System.out.print("Enter Amount to Withdraw: ");
            amount = scan.nextFloat();

            if(amount > get_money()){
                System.out.println("Insufficient Balance. ");
            }
            else{
                break;
            }
        }
        set_money(get_money() - (amount + fee));
        System.out.printf("Your money is now %.2f (fee: $%.2f)", get_money(), fee);
    }

}
