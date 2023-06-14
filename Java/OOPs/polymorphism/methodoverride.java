package OOPs.polymorphism;

public class methodoverride {
    public static void main(String[] args) {
        B a = new B();
        a.add(10, 20);
    }
}

class A{
    void add(int a,int b){
        System.out.println("class A "+(a+b));
    }
}

class B extends A{
    void add(int a,int b){
        System.out.println("class B "+(a+b));
    }
}