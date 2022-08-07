import java.math.BigInteger;

public class q16 {
    public static void main(String[] args){
        
        BigInteger number = BigInteger.TWO;

        number = number.pow(1000);

        String strNum = number.toString();

        int sum = 0;

        for (int i = 0; i < strNum.length(); i++) {
            sum += strNum.charAt(i) - '0';
            
        }

        System.out.println(sum);
    }
}
