package Questions;

import java.util.Scanner;

public class Chat {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Welcome to the Chat Program!");
        System.out.println("Enter 'exit' to end the chat.\n");

        System.out.print("Enter your name (sender): ");
        String sender = scanner.nextLine();

        System.out.print("Enter the name of the recipient: ");
        String recipient = scanner.nextLine();

        System.out.println("\nChat started! Begin typing your messages.\n");

        while (true) {
            System.out.print(sender + ": ");
            String message = scanner.nextLine();

            if (message.equalsIgnoreCase("exit")) {
                break;
            }

            System.out.println(recipient + ": " + message + "\n");

            System.out.print(recipient + ": ");
            message = scanner.nextLine();

            if (message.equalsIgnoreCase("exit")) {
                break;
            }

            System.out.println(sender + ": " + message + "\n");
        }

        System.out.println("Chat ended. Goodbye!");
    }
}
