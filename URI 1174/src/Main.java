
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        double a[] = new double[100];
        Scanner s = new Scanner(System.in);

        for (int i = 0; i < 100; i++) {                      //Input
            a[i] = s.nextDouble();
        }

        for (int i = 0; i < 100; i++) {
            if (a[i] <= 10.0) {
                System.out.println("A[" + i + "] = " + String.format("%.1f", a[i])); //output
            }
        }
        s.close();
    }

}
