package Threads;

class Main {
    public static void main(String[] args) {
        
    }
}

class SystemA{
    synchronized void display(){
        System.out.println("System");
    }
};

class B extends Thread{
    public B(SystemA o1) {
        
    }

    public void run(){
        for(int i=1;i<=10;i++){
            System.out.println("B: "+i);
        }
    }
}   

class C extends Thread{
    public C(SystemA o1) {
    }

    public void run(){
        for(int i=1;i<=10;i++){
            System.out.println("C: "+i);
        }
    }
}

