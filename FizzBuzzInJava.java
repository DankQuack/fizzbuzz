class FizzBuzzInJava{
    public static void main(String[] args) {
        String fizz = "Fizz", buzz = "Buzz";
        for(int i=1; i<101;++i){
            if(i%15 == 0)
                System.out.println(fizz+buzz);
            else if(i%3 == 0)
                System.out.println(fizz);
            else if(i%5 == 0)
                System.out.println(buzz);
            else
                System.out.println(i);
        }

    }
}