package OOPs.Inheritance;

public class single {
    public static void main(String[] args) {
        B b = new B();
        b.a();
        b.b();
    }
}

class A{
    void a(){
        System.out.println("class A");
    }
}

class B extends A{
    void b(){
        System.out.println("class B");
    }
}