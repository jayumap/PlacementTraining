package Questions;

import java.util.Scanner;

public class MovieTicketBooking {
    public static void main(String[] args) {
        // Movie details
        String movieName = "The Avengers";
        int totalSeats = 100;
        double ticketPrice = 10.0;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Welcome to Movie Ticket Booking");
        System.out.println("Movie: " + movieName);
        System.out.println("Seats Available: " + totalSeats);
        System.out.println("Ticket Price: Rs." + ticketPrice);

        System.out.print("Enter the number of tickets to book: ");
        int numberOfTickets = scanner.nextInt();

        if (numberOfTickets <= totalSeats) {
            double totalPrice = ticketPrice * numberOfTickets;
            System.out.println("Total Price: Rs." + totalPrice);

            System.out.print("Confirm booking? (yes/no): ");
            String confirmation = scanner.next();

            if (confirmation.equalsIgnoreCase("yes")) {
                totalSeats -= numberOfTickets;
                System.out.println("Booking confirmed! Enjoy the movie.");
                System.out.println("Seats Remaining: " + totalSeats);
            } else {
                System.out.println("Booking cancelled.");
            }
        } else {
            System.out.println("Insufficient seats available. Booking cannot be processed.");
        }
    }
}

