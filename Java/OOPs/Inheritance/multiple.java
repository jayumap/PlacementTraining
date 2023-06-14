package OOPs.Inheritance;

public class multiple {
    public static void main(String[] args) {
        C c = new C();
        c.a();
        c.c();
        c.b();
    }
}

class A{
    void a(){
        System.out.println("Class A");
    }
}

class B{
    void b(){
        System.out.println("Class B");
    }
}

class C extends A,B{
    void c(){
        System.out.println("Class C");
    }
}

//error in multiple inheritance
//to avoid these error we use interface
