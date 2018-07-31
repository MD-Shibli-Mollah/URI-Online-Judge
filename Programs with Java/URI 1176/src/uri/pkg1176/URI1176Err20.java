/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uri.pkg1176;

import java.util.Scanner;

/**
 *
 * @author mdtas
 */
public class URI1176Err20 {

    public static void main(String[] args) {
        int i, n, a, f0 = 0, f1 = 1, f2 = 0;
        long fib[] = new long[60];
        Scanner s = new Scanner(System.in);
        n = s.nextInt();

        for (i = 0; i < n; i++) {
            a = s.nextInt();
            switch (a) {
                case 0:
                    fib[0] = a;
                    System.out.println("Fib(" + a + ") = " + fib[0]);
                    break;
                case 1:
                    fib[1] = a;
                    System.out.println("Fib(" + a + ") = " + fib[1]);
                    break;
                default:
                    for (int j = 0; j < a - 1; j++) {
                        f2 = f0 + f1;
                        f0 = f1;
                        f1 = f2;
                    }   System.out.println("Fib(" + a + ") = " + f2);
                    f2 = 0;
                    f0 = 0;
                    f1 = 1;
                    break;
            }
        }
    }

}
