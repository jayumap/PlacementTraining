package Threads;

class A implements Runnable{
    public void run(){
        for(int i=0;i<=10;i++){
            System.out.println("A "+i);
        }
    }
}

class B implements Runnable{
    public void run(){
        for(int i=0;i<=10;i++){
            System.out.println("B "+i);
        }
    }
}

class C implements Runnable{
    public void run(){
        for(int i=0;i<=10;i++){
            System.out.println("C "+i);
        }
    }
}

public class threadMain {
    public static void main(String[] args) {
        A o1 = new A();
        B o2 = new B();
        C o3 = new C();
        Thread t1 = new Thread(o1);
        Thread t2 = new Thread(o2);
        Thread t3 = new Thread(o3);
        t1.setPriority(10);
        t2.setPriority(5);
        t3.setPriority(1);
        t1.start();
        t2.start();
        t3.start();
    }
}
