package uri1149;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        int a, n, b = 0;
        Scanner s = new Scanner(System.in);
        a = s.nextInt();
        n = s.nextInt();

        while (n <= 0) {
            n = s.nextInt();
        }
        s.close();
        for (int i = 1; i <= n; i++) {
            b = b + a;
            a++;
        }
        System.out.println(b);

    }

}
