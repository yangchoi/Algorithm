import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Question2751 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        StringBuilder sb = new StringBuilder();

        int n = scan.nextInt();

        ArrayList<Integer> list = new ArrayList<>();

        for(int i = 0; i < n; i++){
            list.add(scan.nextInt());
        }
        Collections.sort(list);

        for(int value : list){
            sb.append(value).append("\n");
        }
        System.out.println(sb);
    }
}
