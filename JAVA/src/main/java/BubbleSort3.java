import java.util.Scanner;

public class BubbleSort3 {
    static void swap(int[] a, int index1, int index2){
        int t = a[index1];
        a[index1] = a[index2];
        a[index2] = t;
    }

    // 버블 정렬
    // 만약 배열 중 어느 세 요소가 어느 시점부터 교환이 이루어지지 않고 있다면
    // 그 요소들은 이미 정렬이 마친 상태일 것
    // 따라서 그 다음 부터는 그 요소들을 제외한 그 다음 요소들 부터 비교해도 될 것
    static void bubbleSort(int[] a, int n) {
        int k = 0; // a[k] 보다 앞쪽은 정렬을 마친 상태
        // k가 0 인 이유는 첫번째 패스에서 모든 요소를 검사해야하기 때문
        while (k < n - 1) {
            int last = n - 1; // 각 패스에서 마지막으로 교환한 두 요소 가운데 오른쪽 요소 a[i] 의 인덱스를 저장하기 위한 변수
            // 교환을 수행할 때 마다 오른쪽 요소의 인덱스 값을 last에 저장 
            // 하나의 패스를 마쳐을 때 last 값을 k 에 대입해 다음 수행할 패스의 범위 제한
            for (int j = n - 1; j > k; j--) {
                if (a[j - 1] > a[j]) {
                    swap(a, j - 1, j);
                    last = j;
                }
            }
            k = last;
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
