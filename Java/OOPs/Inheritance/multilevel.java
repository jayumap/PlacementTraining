package OOPs.Inheritance;

public class multilevel {
    public static void main(String[] args) {
        D d = new D();
        d.a();
        d.b();
        d.c();
        d.d();
    }
}

class A{
    void a(){
        System.out.println("Class A");
    }
}

class B extends A{
    void b(){
        System.out.println("Class B");
    }
}

class C extends B{
    void c(){
        System.out.println("Class C");
    }
}

class D extends C{
    void d(){
        System.out.println("Class D");
    }
}