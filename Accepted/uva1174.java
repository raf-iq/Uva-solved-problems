package main;

import java.util.*;
class Linkage implements Comparable<Linkage> {
    private String nodeTo,nodeFrom;
    private int cost;
    public Linkage(String u,String v,int c){
        nodeTo=u;
        nodeFrom=v;
        cost=c;
    }

    public String getNodeTo() {
        return nodeTo;
    }

    public String getNodeFrom() {
        return nodeFrom;
    }

    public int getCost() {
        return cost;
    }
    @Override
    public int compareTo(Linkage a){
        if(a.cost==cost)
            return 0;
        else if(cost < a.cost)
            return -1;
        else 
            return 1;
    }
}
class IP_TV{
    private ArrayList<Linkage> link;
    private Map<String,String> parent;
    public IP_TV(){
        link=new ArrayList();
        parent=new HashMap();
    }
    public void  getInput(Scanner input){
        String s[]=input.nextLine().split(" ");
        String u=s[0];
        String v=s[1];
        int c=Integer.parseInt(s[2]);
        link.add(new Linkage(u,v,c));
        parent.put(v, v);
        parent.put(u, u);
    }
    public String find_set(String s){
        if(parent.get(s).equals(s)){
            return s;
        }
        else {
            return find_set(parent.get(s));
        }
    }
    public void union_set(String u,String v){
        parent.put(parent.get(u), parent.get(v));
    }
    public void krushkal(){
        Collections.sort(link);
        int ans=0;
        for(Linkage lt: link){
            String u=find_set(lt.getNodeTo());
            String v=find_set(lt.getNodeFrom());
            if(u.compareTo(v) != 0){
                ans+=lt.getCost();
                union_set(u,v);
            }
        }
        System.out.println(ans);
    }
}
class Main {
        public static Scanner input=new Scanner(System.in);
        public static void main(String []agrs){
                int T=input.nextInt();
                while(T!=0){
                    T--;
                    int m=input.nextInt();
                    int n=input.nextInt();
                    input.nextLine();
                    IP_TV tv=new IP_TV();
                    for(int i=0; i<n; ++i){
                        tv.getInput(input);
                    }
                    tv.krushkal(); 
                    if(T!=0)
                     System.out.println();
                }
         }
}

