import java.util.ArrayList;

public class q3 {

    public static ArrayList<Integer> primes = new ArrayList<Integer>();
    public static void main(String[] args){
        findPrimes(10000);
        
        long number = 600851475143L;
        int i = 0;
        
        while (number>1) {
            if(number%primes.get(i) == 0){
                number = number/primes.get(i);
                //System.out.println(primes.get(i));
                
            }
            
            else i++;
        }

        System.out.println(primes.get(i));
    }

    //Sieve of Eratosthenes
    public static void findPrimes(int range){ 
        boolean[] numbers = new boolean[range];
        for (int i = 2; i < numbers.length; i++) {
            if(!numbers[i]){
                primes.add(i);
                
                for(int j = i;j<range;j = j + i){
                    numbers[j] = true; 
                }
            }
        }
        
        //System.out.println(primes);
    }
}
