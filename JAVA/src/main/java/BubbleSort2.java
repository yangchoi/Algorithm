import java.util.Scanner;

public class BubbleSort2 {
    static void swap(int[] a, int index1, int index2){
        int t = a[index1];
        a[index1] = a[index2];
        a[index2] = t;
    }

    // 버블 정렬
    // BubbleSort2 와 다르게 어떤 패스에서 교환 횟수가 0이면
    // 더 이상 정렬할 요소가 없다는 뜻이기 때문에
    // 정렬 작업을 멈춘다
    // 정렬을 마친 배열이나 거의 다 된 상태의 배열에 대한
    // 비교 연산이 많이 생략되어 짧은 시간에 정렬을 마칠 수 있음
    // 멈춤으로 개선한 버블 정렬
    static void bubbleSort(int[] a, int n){
        for(int i = 0; i < n; i++){
            // 교환 횟수 기록
            int exchangeTime = 0; 
            for(int j = n - 1; j > i; j--){
                if(a[j - 1] > a[j]){
                    swap(a, j - 1, j);
                    exchangeTime++;
                    // 요소들의 패스
                }
                if(exchangeTime == 0) break;
                // 교환이 이루어지지 않으면 종료
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
