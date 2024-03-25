
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int edad;
    int r;
    
    r = 1;
    
    while (r == 1)
    {
    
    cout << " Ingresar Edad: ";
    cin >> edad;
    
      if (edad > 17)
    
      { 
          cout << " Si es Mayor de Edad \n\n" ;
      }
      
      else
    
      {
          cout << " No es Mayor de Edad \n\n";
      }
    
      cout << " Quieres Ingresar Otra Edad?: 1: Si, 2: No \n";
	  cout << " Oprime 1 para (Si):\n Oprime 2 para (No): ";
	  cin >> r;
	   
	  cout << "\n";
    
    }

    cout << "Fin del Programa";
    
    getch();
    return 0;
}