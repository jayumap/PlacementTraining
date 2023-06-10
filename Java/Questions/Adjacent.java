package Questions;
import java.util.Scanner;

public class Adjacent {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a double number: ");
        double number = scanner.nextDouble();

        scanner.close();

        double increment = 1.0;
        double adjacentPositive = number;
        double adjacentNegative = number;

        while (true) {
            adjacentPositive += increment;
            adjacentNegative -= increment;

            if (adjacentPositive != number && adjacentPositive > number)
                break;

            increment /= 10;
        }

        System.out.println("Adjacent Positive: " + adjacentPositive);
        System.out.println("Adjacent Negative: " + adjacentNegative);
    }
}
