
import java.util.*;

class Main {
        public static Scanner input=new Scanner(System.in);
        public static Map<Character,ArrayList<Character>> link;      
        public static Map<Character,Boolean> visited;
        public static void dfsCalling(char c){
            ArrayList<Character> al=link.get(c);
            visited.put(c, Boolean.TRUE);
            for(Character cc: al){
                if(!visited.containsKey(cc)){
                    dfsCalling(cc);
                }
            }
        }
        public static void main(String []agrs){
                
                int T=input.nextInt();
                String sss=input.nextLine();
                input.nextLine();
                while(T!=0){
                    T--;
                    link=new HashMap();
                    String ss=input.nextLine();
                    for(char a='A'; a<=ss.charAt(0); ++a){
                        link.put(a, new ArrayList());
                    }
                    while(input.hasNext()){
                        String s=input.nextLine();
                        if(s.length()==0)
                            break;
                        char u=s.charAt(0);
                        char v=s.charAt(1);
                        ArrayList<Character> al=link.get(u);
                        al.add(v);
                        link.put(u,al);
                        al=link.get(v);
                        al.add(u);
                        link.put(v,al);
                    }
                    visited=new HashMap();
                    int ans=0;
                    for(Character c: link.keySet()){
                        if(!visited.containsKey(c)){
                            ans++;
                            dfsCalling(c);
                        }
                    }
                    System.out.println(ans);
                    if(T!=0)
                        System.out.println();
                }
         }
}
