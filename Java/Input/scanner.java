package Input;
import java.util.*;
import java.io.*;

public class scanner {
    public static void main(String[] args) throws IOException{
        int a,b;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        System.out.println("Addition: "+(a+b));
    }  
}
