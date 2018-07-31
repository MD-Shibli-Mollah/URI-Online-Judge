package uri.pkg1180;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int n, l = 0;
        Scanner s = new Scanner(System.in);
        n = s.nextInt();
        int min = 0;
        int[] array = new int[n];

        for (int i = 0; i < n; i++) {
            array[i] = s.nextInt();
        }

        min = array[0];
        for (int i = 1; i < n; i++) {
            if (min > array[i]) {
                min = array[i];
                l = i;
            }
        }
        System.out.println("Menor valor: " + min + "\n" + "Posicao: " + (l));
    }
}
 