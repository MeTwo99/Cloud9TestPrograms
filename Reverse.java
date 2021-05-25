import java.util.Scanner;

public class Reverse {
  public static void main(String []args) {
    System.out.print("Enter a string to reverse: ");
    Scanner s = new Scanner(System.in);
    String string = s.nextLine(), reverse = "";
    
    for(int i = string.length()-1; i >= 0; i--){
      reverse += string.charAt(i);
    }
    
    System.out.println(reverse);
  }
}