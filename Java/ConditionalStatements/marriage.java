package ConditionalStatements;

import java.util.Scanner;

public class marriage {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();
        int ch;
        
        if(age>=18){
            System.out.println("Major");
            if(age>=21 && age<=23){
                System.out.println("ELigible");
            }
            else{
                System.out.println("Not eligible");
            }
        }
        else{
            System.out.println("Minor");
        }
    }
}
