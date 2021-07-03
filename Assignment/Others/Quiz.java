import java.util.Scanner;

public class Quiz {
    public static void main(String[] args) {

            Scanner sc = new Scanner(System.in);

        int count = 1;
        boolean exit = false;
        String str;

        while (!exit) {
            System.out.print("Choose an option:\n1.Validate Input\n2.Exit\n");
            String check = sc.nextLine();

            boolean num1= false;
            boolean num2=false;
            boolean mail= false;
            boolean mail2=false;
            boolean lowercase= false;
            boolean underscore= false;
            boolean dot=false;
            switch (Integer.parseInt(check)) {
                case 1:
                    System.out.print("Enter your input ");
                    str = sc.nextLine();
                    if (Integer.parseInt(str.substring(0, 3)) >0 ) {
                            num1=true;
                    }
                    String[] stg = str.split("@");
                    String a = stg[0];
                    String b = stg[1];
                    if (b.contains("gmail.") ||b.contains("ymail.") ||b.contains("yahoo.") ||b.contains("yandex.") ||b.contains("outlook.") ){
                       mail=true;
                    }
                    if (b.contains(".com") ||b.contains(".net") ||b.contains(".ru") ||b.contains(".bd")  ){
                        mail2=true;
                    }
                    if (Character.isLowerCase(a.charAt(a.length()-1))){
                        lowercase=true;
                    }
                    char x=a.charAt(a.length()-2);
                    if(x == '_'){
                        underscore=true;
                    }
                    int len=a.length()-2;
                    if (Integer.parseInt(str.substring(len - 3, len)) ==11){
                        num2=true;
                    }
                    x=a.charAt(len-4);
                    if(x == '.'){
                        dot=true;

                    }
                    if( dot && num1 && num2 && underscore && lowercase && mail && mail2){
                        System.out.println("Accepted, enter next choice");
                    }
                    else{
                        System.out.println("Not accepted");
                    }
                    break;
                case 2:

                    exit = true;
            }
        }
    }
}
