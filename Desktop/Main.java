public class Main {
    
    public static void main(String[] args) {              
        Palindromo objclass=new palindromo();
        if(objclass.espalindromo("la ruta nos aporto otro paso natural")){
            System.out.println("Palindromo");
        }
        else
        {
            System.out.println("No Palindromo");
        }
    }    
}
