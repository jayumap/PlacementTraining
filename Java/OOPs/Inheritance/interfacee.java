package OOPs.Inheritance;

public class interfacee {
    public static void main(String[] args) {
        C c = new C();
        c.add();
        c.sub();
    }
}

interface A{
    public void add();//declaration
}

interface B{
    public void sub();//declaration
}

class C implements A,B {
    public void add(){//implementation
        int a = 10, b = 20;
        System.out.println(a+b);
    }
    public void sub(){//implmentation
        int a = 10, b = 5;
        System.out.println(a-b);
    }
}