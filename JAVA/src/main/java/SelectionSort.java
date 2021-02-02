import java.util.Scanner;
import java.util.SortedMap;

public class SelectionSort {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
        int[] arr = new int[n];

        for(int i = 0; i < n; i++){
            arr[i] = scan.nextInt();
        }

        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i] > arr[j]){
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }

        for(int value : arr){
            System.out.println(value);
        }
    }
}
