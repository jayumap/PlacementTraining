package Exceptions;

public class bank {
    public static void account(int x) throws Exception {
        int bankBal = 15000;
        int currentBal =  bankBal + x;
        System.out.println("Before balance is: "+bankBal);
        System.out.println("Credited amount is: "+x);
        System.out.println("Final balance is: "+currentBal);
        
        if(currentBal>20000){
            throw new Exception("Limit has been exceeded!");
        }
        else if (currentBal<500){
            throw new Exception("Insufficient Balance");
        }
        else{
            System.out.println("Final Balance is: "+currentBal);
        }
    }
    
    public static void main(String[] args) throws Exception {
        account(5000);
    }
}

