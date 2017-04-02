import java.util.*;

class Main {


    public static void main(String[] args) {


        Scanner sc = new Scanner(System.in);
        int testCases = sc.nextInt();
        int counter = 0;
        int flag,high,low;
        int[][] arr = new int[testCases][2];
        while(counter < testCases) {
            arr[counter][0] = sc.nextInt();
            arr[counter][1] = sc.nextInt();
            ++counter;
        }
        for (int i = 0 ; i< testCases; i++) {
            high = arr[i][1];
            low = arr[i][0];
            findPrime(low, high);
        }

    }

    public static void printNumbers(int n) {
        System.out.println(n);
    }

    public static void findPrime(int low , int high) {
        int flag;
        while (low < high) {
            flag = 0;

            for (int j = 2; j <= low / 2; ++j) {

                if (low % j == 0) {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0) {
                printNumbers(low);
            }
            ++low;
        }
    }



}
