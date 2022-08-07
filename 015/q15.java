import java.math.*;

public class q15 {
    public static void main(String[] args){
        
        System.out.println(combination(40, 20));
    }

    public static BigInteger combination(int n ,int k){
        BigInteger up = BigInteger.ONE;

        for (int i = n; i > n-k; i--) {
            up = up.multiply(BigInteger.valueOf(i));
        }

        return up.divide(fact(k));
    }

    public static BigInteger fact(int x){
        
        BigInteger sum = BigInteger.ONE;

        for (int i = x; i >= 1; i--) {
            sum = sum.multiply(BigInteger.valueOf(i));
        }
        return sum;
    }
}
