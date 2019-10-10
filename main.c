#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	int sumTwo (int a, int b)
	{
		int output;
		output=a+b;
		return output;
	}


 	int square (int n)
 	{
	   	return(n*n);
    }
    
    int get_max (int a, int b)
	{
		if (a>b)
			
			 return (a);
		
		return b;
		
	}
    
int main(int argc, char *argv[]) {


    int x,y;
    
    x=2;
    y=5;
    
 
    printf("sum is %d\n",sumTwo(x,y));
       
    printf("square x : %d\n",square(x));
    printf("square y : %d\n",square(y));
    
    printf("max is %d",get_max(x,y));


	 
	return 0;
}
