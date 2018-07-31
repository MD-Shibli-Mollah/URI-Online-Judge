package uri1144;

import java.util.Scanner;

/**
 *
 * @author mdtas
 */
public class Main {

    public static void main(String[] args) {

        int n;
        Scanner s = new Scanner(System.in);
        n = s.nextInt();
        int val = loop(n);
    }

    static int loop(int a) {
        for (int i = 1; i <= a; i++) {
            System.out.println(i + " " + i * i + " " + i * i * i);
            if (i == i) {
                System.out.println(i + " " + (i * i + 1) + " " + (i * i * i + 1));
            }
        }
        return a;
    }
}
