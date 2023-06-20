package Exceptions;

public class trycatch {
    public static void main(String[] args) {
        try{
            int a =10, b=0;
            System.out.println("The value is:"+(a/b));
        }
        catch(Exception e){
            System.out.println("Exception catched: "+e);
        }
        finally{
            System.out.println("Exception mechanism is completed");
        }
    }
    
}