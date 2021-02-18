#include <windows.h>
#include <stdio.h>
#include <iostream>

int main()
{
    std::cout << "This is OUR Windows now!\n";
    PlaySound("soviet.wav", NULL, SND_ASYNC);
    while(1 == 1){
	 ;
    }
 
}