package Questions;

import java.util.Scanner;

public class Gmt {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        // int hours = num/3600;
        // int minutes = (num%3600)/60;
        // int seconds = num%60;
        // System.out.printf("%02d:%02d:%02d\n", hours, minutes, seconds);

        int seconds = num%60;
        int minutes=0,hours=0;
        if(num>60){
            minutes = num/60;
            if(minutes>59){
                hours = minutes/60;
                minutes = minutes % 60;
            }
        }

        System.out.printf("%02d:%02d:%02d\n", hours, minutes, seconds);

    }
    
}
