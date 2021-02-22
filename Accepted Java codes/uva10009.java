
package testcode;

import java.util.*;

public class Main{
        public static StringBuffer findRoad(Map<String,ArrayList<String>> map,String s,String d){
            StringBuffer path=new StringBuffer();
            Map<String,String> parent=new HashMap();
            parent.put(s,null);
            LinkedList<String> queue=new LinkedList();
            queue.add(s);
            while(!queue.isEmpty()){
                String u=queue.poll();
                boolean bk=false;
                ArrayList<String>al=map.get(u);
                for(String ss: al){
                    if(!parent.containsKey(ss)){
                        parent.put(ss,u);
                        queue.add(ss);
                        if(ss.equals(d)){
                            bk=true;
                            break;
                        }
                    }
                }
                if(bk)
                    break;
            }
            String des=d;
            while(des!=null){
                path.append(des.charAt(0));
                des=parent.get(des);
            }
          path.reverse();
          return path;  
        }
        public static void main(String[] args){
            Scanner input=new Scanner(System.in);
            int T=input.nextInt();
            while(T!=0){
                T--;
                Map<String,ArrayList<String>> road=new HashMap();
                int m=input.nextInt();
                int n=input.nextInt();
                for(int i=0; i<m; ++i){
                    String u=input.next();
                    String v=input.next();
                    if(!road.containsKey(u)){
                        ArrayList<String> al=new ArrayList();
                        al.add(v);
                        road.put(u, al);
                    }
                    else {
                        ArrayList<String> al=road.get(u);
                        al.add(v);
                        road.put(u, al);
                    }
                    if(!road.containsKey(v)){
                        ArrayList<String> al=new ArrayList();
                        al.add(u);
                        road.put(v, al);
                    }
                    else {
                        ArrayList<String> al=road.get(v);
                        al.add(u);
                        road.put(v, al);
                    }
                }
                for(int i=0; i<n; ++i){
                    String source=input.next();
                    String destination=input.next();
                    System.out.println(findRoad(road,source,destination));
                }
                if(T!=0)
                        System.out.println();
            }
        }
}