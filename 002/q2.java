public class q2 {
    public static void main(String[] args){
        
        int first = 1;
        int second = 1;
        int third = 2;

        int sum = 0;

        while(third<=4000000){
            sum = sum + third;
            first = third + second;
            second = first + third;
            third = first + second;
        }

        System.out.println(sum);
    }
}
