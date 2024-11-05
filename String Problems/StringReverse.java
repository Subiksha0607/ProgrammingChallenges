package problem.solving;
import java.lang.String;
import java.util.Scanner;

public class StringReverse {

public static void main(String[] args) {
	Scanner scan=new Scanner(System.in);
	String sen=scan.next();
	System.out.println((sentenceRev(sen)));	
	scan.close();
}
static String sentenceRev(String str) {
	String rev="";
	String[] sarr=str.split(" ");
	for(String x:sarr) {
		rev=rev+revStr(x)+" ";
	}
	return rev;
}

static String revStr(String ostr) {
     String rev = "";   
     for(int i=0;i<ostr.length();i++)
        rev=ostr.substring(i,i+1)+rev;
        return rev;
}
}
