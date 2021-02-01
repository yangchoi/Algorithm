import java.util.Scanner;

public class BubbleSort {
    static void swap(int[] a, int index1, int index2){
        int t = a[index1];
        a[index1] = a[index2];
        a[index2] = t;
    }

    // 버블 정렬
    static void bubbleSort(int[] a, int n){
        for(int i = 0; i < n; i++){
            for(int j = n - 1; j > i; j--){
                if(a[j - 1] > a[j]){
                    swap(a, j -1, j);
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("버블 정렬 : ");
        System.out.print("요소수 : ");
        int number = scan.nextInt();
        int[] x = new int[number];

        for(int i = 0; i < number; i++){
            System.out.print("x[" + i + "] :");
            x[i] = scan.nextInt();
        }

        bubbleSort(x, number);

        System.out.println("오름차순 정렬");
        for(int i = 0; i < number; i++){
            System.out.println("x[" + i + "]:" + x[i]);
        }
    }
}
