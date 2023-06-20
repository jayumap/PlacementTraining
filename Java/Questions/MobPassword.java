package Questions;

import java.util.Scanner;

public class MobPassword {
    public static void main(String[] args) {
        String password = "1234"; // Set the password here
        int maxAttempts = 5; // Total number of attempts allowed
        int attempts = 0; // Counter for the number of attempts

        Scanner scanner = new Scanner(System.in);

        while (attempts < maxAttempts) {
            System.out.print("Enter your password: ");
            String userInput = scanner.nextLine();

            if (userInput.equals(password)) {
                System.out.println("Access granted! Welcome to your mobile phone.");
                break;
            } else {
                attempts++;
                int remainingAttempts = maxAttempts - attempts;
                System.out.println("Access denied! Incorrect password. " + remainingAttempts + " attempts remaining.");
            }
        }

        if (attempts == maxAttempts) {
            System.out.println("Maximum number of attempts reached. Access denied!");
        }
    }
}
