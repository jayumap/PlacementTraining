package Threads;

// class basic {
//     public static void main(String[] args) {
//         B o = new B();
//         o.start();
//     }
// }

// class A extends Thread{
//     public void run(){
//         for(int i=0;i<=10;i++)
//         System.out.println("A "+i);
//     }
// }

// class B extends A{
//     public void run(){
//         for(int i=0;i<=10;i++){
//             System.out.println("B "+i);
//         }
//     }
// }


class A extends Thread{
    public void run(){
        for(int i=1;i<=10;i++){
            System.out.println("A "+i);
        }
    }
}

class B extends Thread{
    public void run(){
        for(int i=1;i<=10;i++){
            System.out.println("B "+i);
        }
    }
}

class ThreadClass{
    public static void main(String[] args) {
        A o1 = new A();
        B o2 = new B();
        o1.start();
        o2.start();
    }
}