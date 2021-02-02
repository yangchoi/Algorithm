import java.util.Scanner;

public class QuickSort {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int[] array = new int[3];

        for(int i = 0; i < array.length; i++){
            array[i] = scan.nextInt();
        }

        int i, j, min, temp, index;
        for(i = 0; i < array.length; i++){
            min = 999;
            if(min > array[i]){
                min = array[i];
                index = i;
            }
            for(j = 0; j < array.length; j++){
                if(array[j] > array[i]){
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        for(int k = 0; k < array.length; k++){
            System.out.print(array[k]+ " ");
        }

    }

}
