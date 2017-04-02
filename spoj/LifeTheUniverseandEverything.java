import java.util.*;

public class Main {

    public static void main(String[] args) {


        Scanner input = new Scanner(System.in);
        int count;
        int num;
        while(true)
        {
            num =input.nextInt();
            if(num==42)
            {
                break;
            }
            else
            {
                System.out.println(num);
            }
        }

    }



}
