package Constructors;

class A{
    int x,y;
    public void th(int x, int y){
        this.x = x;
        this.y = y;
        System.out.println(this.x+" "+this.y);
    }
}

public class thiskey {
    public static void main(String[] args) {
        int a =10;
        int b = 20;
        A o = new A();
        o.th(a,b);
        System.out.println(o instanceof A);
    }
}
