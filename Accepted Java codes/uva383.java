
package testcode;

import java.util.*;
public class Main{
        public static void shipmentCost(Map<String,ArrayList<String>> link,String s,String d,int shipNo){
            Map<String,Integer>visited=new HashMap();
            visited.put(s,0);
            LinkedList<String> q=new LinkedList();
            q.add(s);
            while(!q.isEmpty()){
                String u=q.poll() ;
                ArrayList<String>al=link.get(u);
                for(String ss: al){
                    if(!visited.containsKey(ss)){
                        visited.put(ss, visited.get(u)+1);
                        q.add(ss);
                    }
                }
            }
            if(visited.containsKey(d)==false){
                System.out.println("NO SHIPMENT POSSIBLE");
            }
            else {
                System.out.println("$"+ (visited.get(d)*shipNo*100));
            }
            
        }
        public static void main(String[] args){
            Scanner input=new Scanner(System.in);
            int T=input.nextInt(),test=1;
            System.out.println("SHIPPING ROUTES OUTPUT\n");
            while(T!=0){
                T--;
                int m=input.nextInt(),n=input.nextInt(),p=input.nextInt();
                Map<String,ArrayList<String>> shipment=new HashMap();
                for(int i=0; i<m; ++i){
                    String s=input.next();
                    shipment.put(s,new ArrayList());
                }
                for(int i=0; i<n; ++i){
                    String u=input.next(),v=input.next();
                    ArrayList<String> al=shipment.get(u);
                    al.add(v);
                    shipment.put(u,al);
                    al=shipment.get(v);
                    al.add(u);
                    shipment.put(v,al);
                }
                System.out.println("DATA SET  "+ (test++) + "\n");
                for(int i=0; i<p; ++i){
                    int shipNo=input.nextInt();
                    String source=input.next();
                    String destination=input.next();
                    shipmentCost(shipment,source,destination,shipNo);
                }
                System.out.println();
            };
            System.out.println("END OF OUTPUT");
        }
}