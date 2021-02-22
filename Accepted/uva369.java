import java.math.BigInteger;
import java.util.*;
public class uva369 {
    public static BigInteger dp[]=new BigInteger[101];
    public static void combination(){
        dp[0]=BigInteger.ONE;
        BigInteger I=new BigInteger("1");
        for(int i=1; i<101; ++i){
            dp[i]=dp[i-1].multiply(I);
            I=I.add(BigInteger.ONE);
        }
    }
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        combination();
        int N,M;
        while(input.hasNext()){
            N=input.nextInt();
            M=input.nextInt();
            if(N==0 && M==0)
                break;
            System.out.print(N+" things taken " + M + " at a time is ");
            System.out.println(dp[N].divide(dp[N-M].multiply(dp[M])) + " exactly.");
        }
        
    }
    
}
