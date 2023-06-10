package Questions;

import java.io.IOException;
import java.util.Scanner;

public class BreakNum {
    public static void main(String[] args) throws IOException{
        Scanner sc = new Scanner(System.in);
        long num = sc.nextInt();
        long rem=0;
        while(num>0){
            rem = num%10;
            System.out.println(rem);
            num/=10;
        }
        sc.close();
    }
}
