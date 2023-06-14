package Ojects;

import java.util.Scanner;

public class clsobj {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a,b;
        a = sc.nextInt();//nextInt is called parser 
        b = sc.nextInt();
        Arith o = new Arith();
        o.add(a, b);
        o.sub(a, b);
    }
}

class Arith{
    void add(int a, int b){
        System.out.println(a+b);
    }

    void sub(int a, int b){
        System.out.println(a-b);
    }
}

