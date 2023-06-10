package Questions;
import java.util.Scanner;

public class Lift {
    public static void main(String[] args) {
        int liftPos = 0;
        int movedestFloor = 0;
        int stop = 0;
        int maxFloors = 5; // Maximum number of floors

        Scanner sc = new Scanner(System.in);

        while (true) {
            System.out.println("Enter the Destination Floor (0-" + maxFloors + "):");
            int destFloor = sc.nextInt();

            // Check if destination floor is within the allowed range
            if (destFloor < 0 || destFloor > maxFloors) {
                System.out.println("Invalid floor! Please enter a floor between 0 and " + maxFloors + ".");
                continue; // Restart the loop
            }

            // If current destFloor and destination destFloor are the same
            if (liftPos == destFloor) {
                System.out.println("You are on your destination floor");
            }

            // Move from ground to top
            else if (liftPos < destFloor) {
                for (int i = liftPos; i < destFloor; i++) {
                    System.out.println("You are on floor: " + (i + 1) + "\n");
                    movedestFloor = i;

                    if (destFloor == (i + 1)) {
                        System.out.println("You are on your destination floor");
                        break;
                    }

                    System.out.println("Do you want to stop? (1/0): ");
                    stop = sc.nextInt();

                    // Check if the stop input is not 0 or 1
                    while (stop != 0 && stop != 1) {
                        System.out.println("Invalid input! Please enter 1 to stop or 0 to continue:");
                        stop = sc.nextInt();
                    }

                    if (stop == 1) {
                        break;
                    }
                }
                liftPos = movedestFloor + 1;
            }

            // Move from top to bottom
            else if (liftPos > destFloor) {
                for (int i = liftPos; i > destFloor; i--) {
                    System.out.println("You are on floor: " + (i - 1) + "\n");
                    movedestFloor = i;

                    if (destFloor == (i + 1)) {
                        System.out.println("You are on your destination floor");
                        break;
                    }

                    System.out.println("You want to stop? (1/0): ");
                    stop = sc.nextInt();

                    // Check if the stop input is not 0 or 1
                    while (stop != 0 && stop != 1) {
                        System.out.println("Invalid input! Please enter 1 to stop or 0 to continue:");
                        stop = sc.nextInt();
                    } 

                    if (stop == 1) {
                        break;
                    }
                }
                liftPos = movedestFloor - 1;
            }
        }
    }
}
