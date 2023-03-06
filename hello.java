import java.util.Scanner;

public class HelloWorld {

    public static void main(String[] args) throws InterruptedException {
        System.out.println("Hello, World!");

        Scanner scanner = new Scanner(System.in);
        System.out.print("What is your name? ");
        String name = scanner.nextLine();

        System.out.printf("Hello %s %n", name);
        Thread.sleep(1000);

        System.out.print("I ");
        Thread.sleep(300);
        System.out.print("a");
        Thread.sleep(300);
        System.out.print("m  ");
        Thread.sleep(300);
        System.out.print("L");
        Thread.sleep(200);
        System.out.print("i");
        Thread.sleep(200);
        System.out.print("n");
        Thread.sleep(200);
        System.out.print("u");
        Thread.sleep(200);
        System.out.println("x");

        System.out.print("please ");
        Thread.sleep(500);
        System.out.print("wait ");
        Thread.sleep(100);
        for (int i = 0; i < 16; i++) {
            System.out.print("=");
            Thread.sleep(100);
        }
        System.out.println("=");
    }
}
