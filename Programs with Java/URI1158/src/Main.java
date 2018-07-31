
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        int a, b, c, sum;
        a = s.nextInt();
        for (int i = 0; i < a; i++) {
            b = s.nextInt();
            c = s.nextInt();
               
            sum= 0;
            for (int j = 0; j < c; j++) {
                if (b % 2 == 0) {
                    b++;
                }

                sum += b;
                b += 2;
            }
            System.out.println(sum);
        }
    }

}
