
package testcode;

import java.util.*;
public class Main{
        public static int intermediatCamarades(Map<Integer,ArrayList<Integer>> link,Integer s,Integer d){
            Map<Integer,Integer>distance=new HashMap();
            distance.put(s,0);
            LinkedList<Integer> q=new LinkedList();
            q.add(s);
            while(!q.isEmpty()){
                int u=q.poll() ;
                ArrayList<Integer>al=link.get(u);
                for(int ss: al){
                    if(!distance.containsKey(ss)){
                        distance.put(ss,distance.get(u)+1);
                        q.add(ss);
                    }
                }
            }
          return distance.get(d)-1;
        }
        public static void main(String[] args){
            Scanner input=new Scanner(System.in);
            int T=input.nextInt();
            while(T!=0){
                T--;
                int n=input.nextInt();
                Map<Integer,ArrayList<Integer>>camarades=new HashMap();
                for(int i=0; i<n; ++i){
                    int num=input.nextInt(),no=input.nextInt();
                    ArrayList<Integer>al=new ArrayList();
                    for(int j=0; j<no; ++j){
                        int inp=input.nextInt();
                        al.add(inp);
                    }
                    camarades.put(num,al);
                }
                int s=input.nextInt();
                int t=input.nextInt();
                System.out.printf("%d %d %d\n", s,t,intermediatCamarades(camarades,s,t) );
                if(T!=0)
                    System.out.println();
            }        
        }
}