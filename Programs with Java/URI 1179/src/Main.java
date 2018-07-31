
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        int n = 5, a, j = 0, l = 0, i;
        int par[] = new int[n];
        int impar[] = new int[n];
        Scanner s = new Scanner(System.in);

        for (i = 0; i < 15; i++) {
            a = s.nextInt();

            if (a % 2 == 0) {

                par[j] = a;
                j++;
                if (j == 5) {
                    for (int k = 0; k < 5; k++) {
                        System.out.println("par[" + k + "] = " + par[k]);
                        par[k] = 0;
                    }
                    j = 0;
                }

            } else {

                impar[l] = a;
                l++;
                if (l == 5) {
                    for (int m = 0; m < 5; m++) {
                        System.out.println("impar[" + m + "] = " + impar[m]);
                        impar[m] = 0;
                    }
                    l = 0;
                }
            }
        }
        for (i = 0; i < 5; i++) {
            if (impar[i] == 0) {
                break; 
            }

            System.out.println("impar[" + i + "] = " + impar[i]);

        }
        for (i = 0; i < 5; i++) {
            if (par[i] == 0) {
                break;
            }
            System.out.println("par[" + i + "] = " + par[i]);
        }
    }
}
