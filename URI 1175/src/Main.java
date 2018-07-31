
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        int n = 20;
        int array[] = new int[n];
        Scanner s = new Scanner(System.in);

        for (int i = 0; i < n; i++) {
            array[i] = s.nextInt();
        }

        for (int i = n - 1; i >= 0; i--) {
            System.out.println("N[" + (n - i - 1) + "] = " + array[i]);
        }
    }
}
