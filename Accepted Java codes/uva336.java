
package testcode;

import java.util.*;

public class Main{
         public static int bfs(Map<Integer,ArrayList<Integer> > g, int s,int t){
             Map<Integer,Integer>dist = new TreeMap();
             int gSize=g.size();
             dist.put(s,0);
             Queue<Integer> q= new LinkedList();
             q.add(s);
             while(!q.isEmpty()){
                    int u=q.remove();
                    if(g.containsKey(u)){
                        ArrayList<Integer> al=g.get(u);
                        for(int i : al){
                            if(!dist.containsKey(i)){
                                dist.put(i,dist.get(u)+1);
                                q.add(i);
                            }
                        }
                    }
                    else {
                        gSize++;
                    }
              }
             int ans=0;
             
             for(int it : dist.keySet()){
                 if(dist.get(it) > t)
                     ans++;
             }
               ans+=gSize-dist.size();
                return ans;
         }
        public static void main(String[] args){
            Scanner input=new Scanner(System.in);
            int test=1;
            while(true){
                int nc=input.nextInt();
                if(nc==0)
                    break;
                Map<Integer,ArrayList<Integer> > graph= new TreeMap();
                for(int i=0; i<nc; ++i){
                    int u=input.nextInt();
                    int v=input.nextInt();
                    if(!graph.containsKey(u)){
                        ArrayList al=new ArrayList();
                        al.add(v);
                        graph.put(u,al);
                    }
                    else {
                        ArrayList al=graph.get(u);
                        al.add(v);
                        graph.put(u,al);
                    }
                    if(!graph.containsKey(v)){
                        ArrayList al=new ArrayList();
                        al.add(u);
                        graph.put(v,al);
                    }
                    else {
                        ArrayList al=graph.get(v);
                        al.add(u);
                        graph.put(v,al);
                    }
                
                }
                while(true){
                    int s=input.nextInt();
                    int t=input.nextInt();
                    if(s==0 && t==0)
                        break;
                    System.out.printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",test++ , bfs(graph,s,t),s,t);
                }
            }
        }
}