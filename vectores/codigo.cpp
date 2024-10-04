#include <random>
#include <iostream>
#include <vector>
#include <chrono> 
using namespace std;
using namespace std::chrono;

//funcion prototipo 

void burbuja(vector < double > & v);



void imprime(vector<double> v)
{
    for (auto elemento : v)
    {
        cout << elemento << " , ";
    }
    cout << endl;
    system("pause");
    system("cls");
}


int main()
{
    // vector con 1000 elementos 

    vector <double> v1000; 
    random_device rd; 
    default_random_engine gen(rd());
    uniform_real_distribution <double> distribution(1.5, 1.90); 


    // generar 1000 datos con una instruccion ciclica 

    for (int i = 0; i < 1000; i++)
    {
        double num = distribution(gen); 
        v1000.push_back(num); 
    }

    imprime(v1000); 

}
