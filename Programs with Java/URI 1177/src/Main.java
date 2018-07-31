
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        int n = 1000, m;
        int array[] = new int[n];
        Scanner s = new Scanner(System.in);
        m = s.nextInt();

        for (int i = 0; i < n; i++) {
            array[i] = i;
        }

        for (int i = 0; i < n; i++) {
            System.out.println("N[" + i + "] = " + (i % m));
        }
    }
}
