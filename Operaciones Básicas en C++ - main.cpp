
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float num1, num2;
    float suma=0, resta=0, multi=0, divi=0;
    
    int r;
    r = 1;
    
    while (r == 1)
    {
    
    cout << " Ingresa el Primer Numero: ";
    cin >> num1;
    
    cout << " Ingresa el Segundo Numero: ";
    cin >> num2;
    
    suma = num1 + num2;
    resta = num1 - num2;
    multi = num1 * num2;
    divi = num1 / num2;
    
    cout << "\n";
     
    cout << " Resultado de la Suma es: " << suma << endl;
    cout << " Resultado de la Resta es: " << resta << endl;
    cout << " Resultado de la Multiplicación es: " << multi << endl;
    cout << " Resultado de la Divición es: " << divi << endl;
    
    cout << "\n";
   
    cout << " Desea Realizar mas Operaciones?: 1:Si, 2:No \n";
	cout << " Oprime 1 para (Si):\n Oprime 2 para (No): ";
	cin >> r;
	   
	cout << "\n";
    
    }

    cout << "Fin del Programa";
    
    getch();
    return 0;
}
