#include <iostream>
#include <conio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string obtenerhomoclave(const string& rfc) 
{
    return "XXX";
}


char vocalinterna(const string& vi)
{
    for(size_t i = 1; i < vi.length(); ++i)
    {
      char c = vi[i];
      
      if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
      
      return c; 
      
    }
    
    return 'X';
}


bool esAltisonante(string rfc, vector<string> listaAltisonantes) 
{
    if (find(listaAltisonantes.begin(), listaAltisonantes.end(), rfc) != listaAltisonantes.end()) 
    {
        return true;
    } 
    
    else 
    {
        return false;
    }
}


string calcularRFC(const string& nombre, const string& paterno, const string& materno, const string& fechana) 
{
    string rfc;
    
    char inicialpaterno = paterno[0];
    char primervocalinterna = vocalinterna(paterno);
    
    char inicialmaterno = (!materno.empty()) ? materno[0] : 'X';
    
    char inicialnombre = nombre[1];
    
    string anio = fechana.substr(2, 2);
    string mes = fechana.substr(5, 2);
    string dia = fechana.substr(8, 2);
    
    rfc = inicialpaterno;
    rfc += primervocalinterna;
    rfc += inicialmaterno;
    rfc += inicialnombre;
    rfc += anio;
    rfc += mes;
    rfc += dia;
    
    transform(rfc.begin(), rfc.end(), rfc.begin(), ::toupper);

    return rfc;
}

int main() 
{
    
    vector<string> listaAltisonantes = {"BUEI", "KOGE", "KOJO", "CACA", "KAKA", "CACO", "KULO", "CAGA", "MAME", "CAGO", "MAMO", 
                                        "CAKA", "COGE", "COJA", "COJE", "MOCO", "COJI", "MULA", "COJO", "PEDA", "CULO", "PEDO", 
                                        "FETO", "PENE", "GUEY", "PUTA", "JOTO", "PUTO", "KACA", "QULO", "KACO", "RATA", "KAGA", 
                                        "RUIN", "KAGO", "CACA", "JOTO", "COLA"};
    
    int r;
    
    do 
    {
        string nombre, paterno, materno, anio, mes, dia;
    
        cout << " Ingresa tu Nombre(s): ";
        getline(cin, nombre);
    
        cout << " Ingresa tu Apellido Paterno: ";
        getline(cin, paterno);
    
        cout << " Ingresa tu Apellido Materno: (Presione *ENTER* si no tiene): ";
        getline(cin, materno);
    
        cout << " Ingresa tu fecha de Nacimiento:\n";
        cout << " Ingresa el Año (AAAA): ";
        getline(cin, anio);
    
        cout << " Ingresa el Mes (MM): ";
        getline(cin, mes);
    
        cout << " Ingresa el Dia (DD): ";
        getline(cin, dia);
    
        string fechana = anio + "/" + mes + "/" + dia;
    
        cout << "\n";
    
        string rfc = calcularRFC(nombre, paterno, materno, fechana);
        rfc += obtenerhomoclave(rfc);
        cout << " Su RFC es: " << rfc << endl;
    
        cout << "\n";
   
        cout << " Desea calcular otro RFC?: 1:Si, 2:No \n";
        cout << " Oprime 1 para (Si):\n Oprime 2 para (No): ";
        cin >> r;
        cin.ignore();
    
        cout << "\n";

    } while (r == 1);

    cout << "Fin del programa";
    return 0;
}

    