package uri.pkg1176.solver;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        int i, a, t;
        long fib[] = new long[61];
        fib[0] = 0;
        fib[1] = 1;
        Scanner s = new Scanner(System.in);

        for (i = 2; i < 61; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        t = s.nextInt();
        for (i = 0; i < t; i++) {
            a = s.nextInt();
            System.out.println("Fib(" + a + ") = " + fib[a]);
        }
    }
}
