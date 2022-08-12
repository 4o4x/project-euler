import java.util.ArrayList;

public class q36 {
    public static void main(String[] args){
        
        ArrayList<Integer> listOfPalindromicNumber = new ArrayList<>();

        listOfPalindromicNumber.addAll(oneDigitPalindromicNumber());
        listOfPalindromicNumber.addAll(twoDigitPalindromicNumber());
        listOfPalindromicNumber.addAll(threeDigitPalindromicNumber());
        listOfPalindromicNumber.addAll(fourDigitPalindromicNumber());
        listOfPalindromicNumber.addAll(fiveDigitPalindromicNumber());
        listOfPalindromicNumber.addAll(sixDigitPalindromicNumber());

        int sum = 0;
        for (int i = 0; i < listOfPalindromicNumber.size(); i++) {
            if(isPalindromicBase2(listOfPalindromicNumber.get(i))){
                sum += listOfPalindromicNumber.get(i);
            }
        }

        System.out.println(sum);

        
    }

    public static boolean isPalindromicBase2(int number){
        String binaryNumber = Integer.toBinaryString(number);

        for(int down = 0,up = binaryNumber.length()-1; up>=down;down++,up--){
            if(binaryNumber.charAt(up) != binaryNumber.charAt(down)){
                return false;
            }
        }

        return true;
    }

    public static ArrayList<Integer> oneDigitPalindromicNumber(){
        ArrayList<Integer> list = new ArrayList<>();
        
        for (int i = 1; i < 10; i++) {
            list.add(new Integer(i));
        }

        return list;

    }

    public static ArrayList<Integer> twoDigitPalindromicNumber(){
        ArrayList<Integer> list = new ArrayList<>();

        for (int i = 1; i < 10; i++) {
            list.add(new Integer(11*i));
        }

        return list;
    }

    public static ArrayList<Integer> threeDigitPalindromicNumber(){
        ArrayList<Integer> list = new ArrayList<>();
        
        for (int i = 1; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                list.add(new Integer(101*i+j*10));
            }       
        }

        return list;
    }

    public static ArrayList<Integer> fourDigitPalindromicNumber(){
        ArrayList<Integer> list = new ArrayList<>();

        for (int i = 1; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                list.add(new Integer(1001*i+110*j));
            } 
        }

        return list;
    }

    public static ArrayList<Integer> fiveDigitPalindromicNumber(){
        ArrayList<Integer> list = new ArrayList<>();
        
        for (int i = 1; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                for (int k = 0; k < 10; k++) {
                    list.add(new Integer(10001*i+1010*j+100*k));
                }
            }
            
            
        }

        return list;
    }

    public static ArrayList<Integer> sixDigitPalindromicNumber(){
        ArrayList<Integer> list = new ArrayList<>();
        
        
        for (int i = 1; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                for (int k = 0; k < 10; k++) {
                    list.add(new Integer(100001*i+10010*j+1100*k));
                }
            } 
        }

        return list;
    }

    


}
