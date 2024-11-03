public class CheckingAccount extends BankAccount{
    public final float fee = 0; 
    
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
        set_money(get_money() - (amount - fee)); // walang kaltas, fee = 0
}

}
