// Genarate Fibonacci Number upto 1000 
import java.util.Scanner;
import java.math.BigInteger;
class Fibonacci{
    public BigInteger N,b1,b2,neg,zero;    
    public BigInteger [] dp;
    public Fibonacci(){
        N=new BigInteger("1005");
        b1=new BigInteger("1");
        b2=new BigInteger("2");
        neg=new BigInteger("-1");
        zero=new BigInteger("0");
        dp=new BigInteger[1010];
    }
    public void setDp(){
        dp[0]=b1;
        dp[1]=b2;
        for(int i=2; i<1010; ++i){
              dp[i]=neg;
        }
    }  
    public  BigInteger fibo(BigInteger bi){
           if(bi.equals(zero))
                  return b1;
           if(bi.equals(b1))
           		return b2;
           if(!dp[bi.intValue()].equals(neg))
                     return dp[bi.intValue()];
             return dp[bi.intValue()]=fibo(bi.subtract(b1)).add(fibo(bi.subtract(b2))) ;
    }
    /*public void show(){
        for(int i=0; i<N.intValue(); ++i){
            System.out.println("F["+i+"] = "+dp[i]);
        }
    }*/
}
class Main {
    public static void main(String[] args) {
        Scanner ip=new Scanner(System.in);
	Fibonacci a=new Fibonacci();
        a.setDp();
        a.fibo(a.N);
        ///a.show();
	while(ip.hasNext()){
		int n=ip.nextInt();
		System.out.println(a.dp[n]);
	} 
    }
    
}