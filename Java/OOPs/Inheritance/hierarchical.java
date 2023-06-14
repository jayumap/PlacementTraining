package OOPs.Inheritance;

public class hierarchical {
    public static void main(String[] args) {
        B b = new B();
        C c = new C();
        b.a();
        c.a();
    }

}

    class A{
        public void a(){
            System.out.println("Class A");
        }
    }

    class B extends A{
        public void b(){
            System.out.println("Class B");
        }
    }

    class C extends A{
        public void c(){
            System.out.println("Class C");
        }
    }

