
class q1{
    public static void main(String[] args){
        System.out.println(sumOfmultiplier(1000, 3) + sumOfmultiplier(1000, 5) - sumOfmultiplier(1000, 15));
    }

    static public int sumOfmultiplier(int number,int multiplier){
        
        for(int i=number-1; i>1;i--){
            if(i%multiplier == 0){

                return multiplier * ( ((i/multiplier) * ( (i/multiplier)+1))/2 );

            }
        }
        return 0;
    }
}
