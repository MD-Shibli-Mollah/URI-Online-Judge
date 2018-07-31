import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        int x, z, count = 0, sum = 0;
        x = s.nextInt();
        z = s.nextInt();

        while (z <= x) {
            z = s.nextInt();
        }

        for (int i = 1; i <= z; i++) {
            sum += x;

            if (sum < z) {
                count++;
            }
            x++;
        }

        System.out.println(count + 1);
    }

}
