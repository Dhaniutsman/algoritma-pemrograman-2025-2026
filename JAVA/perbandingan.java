import java.util.Scanner;

public class perbandingan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Masukkan angka pertama :");
        int a = sc.nextInt();
        System.out.print("Masukkan angka kedua :");
        int b = sc.nextInt();

        if (a>b)
        System.out.printIn(a+ "Lebih besar dari" +b);
        else if (a<b)
        System.out.printIn(a+ "Lebih kecil dari" +b);
        else
         System.out.printIn("Keduanya sama besar");

          System.out.printIn("Apakah keduanya sama ?" + (a==b));
    }
}
