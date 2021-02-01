import com.sun.scenario.effect.impl.sw.sse.SSEBlend_SRC_OUTPeer;

import java.util.Scanner;

public class InsertionSort {
    static void insertionSort(int[] a, int n){
        for(int i = 1; i < n; i++){
            int j;
            int tmp = a[i];
            for(j = i; j > 0 && a[j - 1] > tmp; j--){
                a[j] = a[j - 1];
            }
            a[j] = tmp;
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("단순 삽입 정렬");
        System.out.print("요소수 : ");
        int number = scan.nextInt();
        int[] x = new int[number];

        for(int i = 0; i < number; i++){
            System.out.print("x[" + i + "]: ");
            x[i] = scan.nextInt();
        }

        insertionSort(x, number);

        System.out.println("오름차순으로 정렬 끝");
        for(int i = 0; i < number; i++){
            System.out.println("x[" + i + "] = " + x[i]);
        }
    }
}
