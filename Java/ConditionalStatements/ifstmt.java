package ConditionalStatements;

import java.util.Scanner;

public class ifstmt {
    public static void main(String[] args) {
        int setPassword1 = 4757;
        int setPassword2 = 1234;
        Scanner sc = new Scanner(System.in);
        int userPassword = sc.nextInt();
        if(userPassword==setPassword1){
            System.out.println("Login");
        }
        else if(userPassword==setPassword2){
            System.out.println("Login");
        }
        else{
            System.out.println("Incorrect");
        }
    }  
}
