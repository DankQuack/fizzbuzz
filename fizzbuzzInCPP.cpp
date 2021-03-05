#include <iostream>

using namespace std;

int main()
{
    char fizz[]= "Fizz", buzz[]="Buzz" ;

   for(int i=1; i<101;++i){
            if(i%15 == 0)
                cout<<fizz<<buzz<<"\n";
            else if(i%3 == 0)
                cout<<fizz<<"\n";
            else if(i%5 == 0)
                cout<<buzz<<"\n";
            else
                cout<<i<<"\n";
        }

    return 0;
}