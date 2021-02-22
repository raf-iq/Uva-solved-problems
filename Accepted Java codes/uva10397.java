package main;

import java.util.*;
class Location {
    private int x,y;
    public Location(int x,int y){
        this.x=x;
        this.y=y;
    }
    public double distance(Location a){
        double d=(x-a.x)*(x-a.x)+(y-a.y)*(y-a.y);
        return Math.sqrt(d);
    }
}
class Building implements Comparable<Building>{
    private int to,from;
    private double wire;
    public Building(int to,int from,double w){
        this.to=to;
        this.from=from;
        this.wire=w;
    }

    public int getTo() {
        return to;
    }

    public int getFrom() {
        return from;
    }

    public double getWire() {
        return wire;
    }
    @Override
    public int compareTo(Building a){
        int com=Double.compare(wire, a.wire);
        return com;
    }
}
class Main {
        public static Scanner input=new Scanner(System.in);
        public static ArrayList<Building> building ;
        public static ArrayList<Location> location;
        public static int parent[];
        public static void make_set(int u,int v){
            parent[u]=v;
        }
        public static int find_set(int i){
            if(parent[i]==i)
                return i;
            else 
                return find_set(parent[i]);
        }
        public static double krushkal(){
            double ans=0; 
            Collections.sort(building);
            for(Building bd:building){
                int a=find_set(bd.getTo());
                int b=find_set(bd.getFrom());
                if(a!=b){
                    ans+=bd.getWire();
                    make_set(a,b);
                }
            }
            return ans;
        }
        public static void main(String []agrs){
                while(input.hasNext()){
                    location=new ArrayList();
                    building=new ArrayList();
                    int n=input.nextInt();
                    parent=new int[n+2];
                    for(int i=0; i<=n; ++i){
                        parent[i]=i;
                    }
                    for(int i=1; i<=n; ++i){
                        int x=input.nextInt();
                        int y=input.nextInt();
                        Location loc=new Location(x,y);
                        int v=1;
                        for(Location lc: location){
                            double d=loc.distance(lc);
                            building.add(new Building(i,v,d));
                            v++;
                        }
                       location.add(loc);
                    }
                    int m=input.nextInt();
                    for(int i=0; i<m; ++i){
                        int u=input.nextInt();
                        int v=input.nextInt();
                        int a=find_set(u);
                        int b=find_set(v);
                        if(a!=b)
                            make_set(a,b);
                    }
                    System.out.printf("%.2f\n",krushkal());
                }
         }
}
