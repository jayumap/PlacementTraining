package Questions;

import java.util.Scanner;
import java.util.Date;
import java.text.SimpleDateFormat;

public class Ticket {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the source: ");
        String source = sc.nextLine();

        System.out.print("Enter the destination: ");
        String destination = sc.nextLine();

        System.out.print("Enter the number of people: ");
        int numOfPeople = sc.nextInt();

        sc.close();

        double ticketPrice = 15.50;
        double totalAmount = ticketPrice * numOfPeople;

        // Print the ticket
        System.out.println("+---------------------------------------+");
        System.out.println("|             BUS TICKET                |");
        System.out.println("+---------------------------------------+");
        System.out.println("|\tSource: " + source + "\t\t\t|");
        System.out.println("|\tDestination: " + destination + "\t\t|");
        System.out.println("|\tNumber of People: " + numOfPeople + "\t\t|");
        System.out.println("|\tTicket Price: Rs." + ticketPrice + " \t\t|");
        System.out.println("|\tTotal Amount: "+numOfPeople+" * "+ticketPrice+" = "+totalAmount+"\t|");
        System.out.println("+---------------------------------------+");
        System.out.println("|\tTotal Amount: Rs." + totalAmount + "\t\t|");
        System.out.println("+---------------------------------------+");
        System.out.println("|             THANK YOU!                |");
        System.out.println("+---------------------------------------+");
    }
}
