package ConditionalStatements;

import java.util.Scanner;

public class switchCase {
    public static void main(String[] args) {
        String ch;
        Scanner sc = new Scanner(System.in);
        ch = sc.nextLine();
        switch (ch) {
            case "hi":
                System.out.println("hello");
                break;
        
            default:
                break;
        }
    }
}
