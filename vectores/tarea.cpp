#include <iostream>
#include <string>
using namespace std;

// Declaraciones de funciones
void suma(int a, int b);
void suma(double a, double b);
void suma(float a, float b);
void suma(string a, string b);
void suma(int a, double b);
void suma(double a, int b);
void suma(int a, float b);
void suma(float a, int b);
void resta(int a, int b);
void resta(double a, double b);
void resta(float a, float b);
void resta(string a, string b);
void resta(int a, double b);
void resta(double a, int b);
void resta(int a, float b);
void resta(float a, int b);
void multiplicacion(int a, int b);
void multiplicacion(double a, double b);
void multiplicacion(float a, float b);
void multiplicacion(string a, string b);
void multiplicacion(int a, double b);
void multiplicacion(double a, int b);
void multiplicacion(int a, float b);
void multiplicacion(float a, int b);
void division(int a, int b);
void division(double a, double b);
void division(float a, float b);
void division(string a, string b);
void division(int a, double b);
void division(double a, int b);
void division(int a, float b);
void division(float a, int b);

int main() {
    auto a = 0.0;  
    auto b = 0.0;  
    int opcion;

    cout << "Ingresa el valor a: " << endl;
    cin >> a;
    cout << "Ingresa el valor b: " << endl;
    cin >> b;

    do {
        cout << "Menú de Operaciones Aritméticas\n";
        cout << "1. Suma\n";
        cout << "2. Resta\n";
        cout << "3. Multiplicación\n";
        cout << "4. División\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1: suma(a, b); break;
        case 2: resta(a, b); break;
        case 3: multiplicacion(a, b); break;
        case 4: division(a, b); break;
        case 5: cout << "Saliendo...\n"; break;
        default: cout << "Opción no válida, intente de nuevo.\n";
        }
    } while (opcion != 5);

    return 0;
}

// Definiciones de funciones
void suma(int a, int b) 
{ 
    cout << a + b << endl; 
}
void suma(double a, double b) 
{
    cout << a + b << endl; 
}
void suma(float a, float b) 
{ 
    cout << a + b << endl; 
}
void suma(string a, string b) 
{
    cout << a + b << endl; 
}
void suma(int a, double b) 
{ 
    cout << a + b << endl; 
}
void suma(double a, int b) 
{ 
    cout << a + b << endl; 
}
void suma(int a, float b) 
{ 
    cout << a + b << endl; 
}
void suma(float a, int b) 
{ 
    cout << a + b << endl; 
}
void resta(int a, int b) 
{ 
    cout << a - b << endl; 
}  
void resta(double a, double b) 
{ 
    cout << a - b << endl; 
}
void resta(float a, float b) 
{ 
    cout << a - b << endl; 
}
void resta(string a, string b) 
{ 
    cout << a + " - " + b << endl; 
}  
void resta(int a, double b) 
{
    cout << a - b << endl; 
}
void resta(double a, int b) 
{ 
    cout << a - b << endl; 
}
void resta(int a, float b) 
{ 
    cout << a - b << endl; 
}
void resta(float a, int b) 
{ 
    cout << a - b << endl; 
}
void multiplicacion(int a, int b) 
{ 
    cout << a * b << endl; 
}
void multiplicacion(double a, double b) 
{ 
    cout << a * b << endl;
}
void multiplicacion(float a, float b) 
{ 
    cout << a * b << endl; 
}
void multiplicacion(string a, string b) 
{ 
    cout << a + " * " + b << endl; 
} 
void multiplicacion(int a, double b) 
{ 
    cout << a * b << endl; 
}
void multiplicacion(double a, int b) 
{ 
    cout << a * b << endl; 
}
void multiplicacion(int a, float b) 
{ 
    cout << a * b << endl; 
}
void multiplicacion(float a, int b) 
{ 
    cout << a * b << endl; 
}
void division(int a, int b) 
{
    if (b != 0) cout << a / b << endl;
    else cout << "No se puede dividir por cero" << endl;
}
void division(double a, double b) 
{
    if (b != 0) cout << a / b << endl;
    else cout << "No se puede dividir por cero" << endl;
}
void division(float a, float b) 
{
    if (b != 0) cout << a / b << endl;
    else cout << "No se puede dividir por cero" << endl;
}
void division(string a, string b) 
{
    cout << a + " / " + b << endl; 
} 
void division(int a, double b) 
{
    if (b != 0) cout << a / b << endl;
    else cout << "No se puede dividir por cero" << endl;
}
void division(double a, int b) 
{
    if (b != 0) cout << a / b << endl;
    else cout << "No se puede dividir por cero" << endl;
}
void division(int a, float b) 
{
    if (b != 0) cout << a / b << endl;
    else cout << "No se puede dividir por cero" << endl;
}
void division(float a, int b) 
{
    if (b != 0) cout << a / b << endl;
    else cout << "No se puede dividir por cero" << endl;
}
