import java.util.*;

class Main {
        public static TreeMap<Character,Character> keyBoard;
        public static void QWERTYToDvorak(){
                    keyBoard=new TreeMap<>();
                    keyBoard.put('`','`');
                    keyBoard.put('1','1');
                    keyBoard.put('2','2');
                    keyBoard.put('3','3');
                    keyBoard.put('4','q');
                    keyBoard.put('5','j');
                    keyBoard.put('6','l');
                    keyBoard.put('7','m');
                    keyBoard.put('8','f');
                    keyBoard.put('9','p');
                    keyBoard.put('0','/');
                    keyBoard.put('-','[');
                    keyBoard.put('=',']');

                    keyBoard.put('q','4');
                    keyBoard.put('w','5');
                    keyBoard.put('e','6');
                    keyBoard.put('r','.');
                    keyBoard.put('t','o');
                    keyBoard.put('y','r');
                    keyBoard.put('u','s');
                    keyBoard.put('i','u');
                    keyBoard.put('o','y');
                    keyBoard.put('p','b');
                    keyBoard.put('[',';');
                    keyBoard.put(']','=');
                    keyBoard.put('\\','\\');

                    keyBoard.put('a','7');
                    keyBoard.put('s','8');
                    keyBoard.put('d','9');
                    keyBoard.put('f','a');
                    keyBoard.put('g','e');
                    keyBoard.put('h','h');
                    keyBoard.put('j','t');
                    keyBoard.put('k','d');
                    keyBoard.put('l','c');
                    keyBoard.put(';','k');
                    keyBoard.put('\'','-');

                    keyBoard.put('z','0');
                    keyBoard.put('x','z');
                    keyBoard.put('c','x');
                    keyBoard.put('v',',');
                    keyBoard.put('b','i');
                    keyBoard.put('n','n');
                    keyBoard.put('m','w');
                    keyBoard.put(',','v');
                    keyBoard.put('.','g');
                    keyBoard.put('/','\'');
                    
                    keyBoard.put('~','~');
                    keyBoard.put('!','!');
                    keyBoard.put('@','@');
                    keyBoard.put('#','#');
                    keyBoard.put('$','Q');
                    keyBoard.put('%','J');
                    keyBoard.put('^','L');
                    keyBoard.put('&','M');
                    keyBoard.put('*','F');
                    keyBoard.put('(','P');
                    keyBoard.put(')','?');
                    keyBoard.put('_','{');
                    keyBoard.put('+','}');

                    keyBoard.put('Q','$');
                    keyBoard.put('W','%');
                    keyBoard.put('E','^');
                    keyBoard.put('R','>');
                    keyBoard.put('T','O');
                    keyBoard.put('Y','R');
                    keyBoard.put('U','S');
                    keyBoard.put('I','U');
                    keyBoard.put('O','Y');
                    keyBoard.put('P','B');
                    keyBoard.put('{',':');
                    keyBoard.put('}','+');
                    keyBoard.put('|','|');

                    keyBoard.put('A','&');
                    keyBoard.put('S','*');
                    keyBoard.put('D','(');
                    keyBoard.put('F','A');
                    keyBoard.put('G','E');
                    keyBoard.put('H','H');
                    keyBoard.put('J','T');
                    keyBoard.put('K','D');
                    keyBoard.put('L','C');
                    keyBoard.put(':','K');
                    keyBoard.put('\"','_');
                                          
                    keyBoard.put('Z',')');
                    keyBoard.put('X','Z');
                    keyBoard.put('C','X');
                    keyBoard.put('V','<');
                    keyBoard.put('B','I');
                    keyBoard.put('N','N');
                    keyBoard.put('M','W');
                    keyBoard.put('<','V');
                    keyBoard.put('>','G');
                    keyBoard.put('?','\"');
                    keyBoard.put(' ',' ');
		    keyBoard.put('\t','\t');
        }
        public static void main(String []agrs){
                Scanner input=new Scanner(System.in);
                QWERTYToDvorak();
                String line;
                while(input.hasNext()){
                    line=input.nextLine();
                    for(int i=0; i<line.length(); ++i){
			if(keyBoard.get(line.charAt(i)) == null)
                            System.out.print(line.charAt(i));
                        else 
                            System.out.print(keyBoard.get(line.charAt(i)));
                    }
                    System.out.println();
                }
         }
}

