
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a, b, n;
        double c, d;

        int y = 0;
        n = s.nextInt();
        for (int i = 0; i < n; i++) {
            a = s.nextInt();
            b = s.nextInt();
            c = s.nextDouble();
            d = s.nextDouble();

            while (a <= b) {
                a = (int) (a + (double) ((a * c) / 100));       //Calculation of percentage
                b = (int) (b + (double) ((b * d) / 100));

                y++;
                if (y > 100) {
                    System.out.println("Mais de 1 seculo.");
                    break;
                }
            }
            if (y <= 100) {
                System.out.println(y + " anos.");
            }
            y = 0;

        }
        s.close();

    }
}
