#include <iostream> 
#include <string>

using namespace std;


double saldo = 1000.0;


bool validarPassword(string);
bool validarChip();
void consultarNIP(double&);
void retirarEfectivo(double&);

bool validarNIP(string NIP) 
{
    return NIP == "1234";
}


bool validarChip() 
{
    return true;
}

void consultarSaldo() 
{
    cout << "El saldo de su cuenta es: $" << saldo << endl;
}

void retirarEfectivo(double& saldo) 
{
    double cantidad;
    cout << "Ingrese la cantidad a retirar: ";
    cin >> cantidad;

    if (cantidad <= saldo) {
        saldo -= cantidad;
        cout << "Operación exitosa. Recoge tu efectivo." << endl;
        // Aquí enviaría la petición de actualización del saldo a la central
    }
    else {
        cout << "Fondos insuficientes." << endl;
    }
}

int main() 
{
    string NIP;
    cout << "Ingrese su NIP: ";
    cin >> NIP;

    if (validarNIP(NIP) && validarChip()) 
    {
        int opcion;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Retirar efectivo" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            consultarSaldo();
            break;
        case 2:
            retirarEfectivo(saldo);
            break;
        default:
            cout << "Opcion no valida." << endl;
        }
    }
    else 
    {
        cout << "Validacion fallida." << endl;
    }

    return 0;
}
