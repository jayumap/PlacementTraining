package OOPs.polymorphism;

public class methodoverload {
    public static void main(String[] args) {
        A o = new A();
        o.add(10, 20);
        o.add(10, 20, 30);
    }
}

class A{
    //parameters with different datatypes is also a method overloading 
    void add(int a,int b){
        System.out.println(a+b);
    }

    void add(int a, int b, int c){
        System.out.println(a+b+c);
    }
}
