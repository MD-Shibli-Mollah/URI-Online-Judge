
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        int n = 100;
        double m;
        double array[] = new double[n];
        Scanner s = new Scanner(System.in);
        m = s.nextDouble();

        for (int i = 0; i < n; i++) {
            array[i] = i;
        }

        for (int i = 0; i < n; i++) {
            System.out.println("N[" + i + "] = " + String.format("%.4f", ( m)));
            m=m/2;
        }
    }
}
