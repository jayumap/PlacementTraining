package Input;
import java.io.BufferedReader;
//import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
//import java.util.*;

public class input {
    public static void main(String[] args) throws IOException {
        // //DataInputStream;
        // String a,b;
        // System.out.println("Enter a and b values");
        // DataInputStream dis = new DataInputStream(System.in);
        // a = dis.readLine();
        // b = dis.readLine();
        // System.out.println("Sum: "+(a+b));

        //Buffered Reader
        int a;
        BufferedReader obj = new BufferedReader(new InputStreamReader(System.in));
        a = obj.read();
        int val = Character.getNumericValue(a); //to convert ASCII value to integer 
        System.out.println(val);

        
    }
    
}
