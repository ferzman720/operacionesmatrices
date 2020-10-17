#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;
    int main() {
    int dim{0};
    char opc{1};
    srand((int )time(0));
    std::cout << "¡Bienvenido!" << std::endl;
    std::cout << "Ingresa la dimención de la matriz sera una matriz de nxn" << std::endl;
    std::cin>>dim;
    int m[dim][dim];
    int m1[dim][dim];
    int s[dim][dim];
    int r[dim][dim];
    int dv[dim][dim];
    int mt[dim][dim];
    int mm[dim][dim];
        std::cout << "MENÚ" << std::endl;
        std::cout << "+" << std::endl;
        std::cout << "-" << std::endl;
        std::cout << "/" << std::endl;
        std::cout << "*" << std::endl;
        std::cout << "¿Que operación deseas realizar? Ingresa el simbolo " << std::endl;
        std::cin >> opc;
        std::cout<<"Primera Matriz"<<std::endl;
        for (int i = 0; i <dim ; ++i) {
            for (int j = 0; j <dim; ++j) {
                m[i][j]=(rand()%100)+1;

                cout<<m[i][j]<<" ";

            }
            cout<<endl;
        }
        std::cout<<"Segunda Matriz"<<std::endl;
        for (int i = 0; i <dim ; ++i)
        {
            for (int j = 0; j <dim; ++j){
                m1[i][j]=(rand()%100)+1;
                cout<<m1[i][j]<<" ";
            }
            cout<<endl;
        }
    if (opc ==('+'))
    {
        std::cout<<"Resultado:"<<std::endl;
        for (int i = 0; i < dim; ++i) {
            for (int j = 0; j < dim; ++j) {
                s[i][j]=m1[i][j]+m[i][j];
                cout<<s[i][j]<<" ";

            }
            cout<<endl;
        }
    }
    if (opc==('-')){
        std::cout<<"Resultado:"<<std::endl;
        for (int i = 0; i < dim; ++i) {
            for (int j = 0; j < dim; ++j) {
                r[i][j]=m[i][j]-m1[i][j];
                cout<<r[i][j]<<" ";

            }
            cout<<endl;
        }

    }
    if (opc==('/')){
        std::cout<<"Resultado:"<<std::endl;
        for (int i = 0; i < dim; ++i) {
            for (int j = 0; j < dim; ++j) {
                dv[i][j]=m[i][j]/m1[i][j];
                cout<<dv[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    if(opc==('*')){
        std::cout<<"Resultado:"<<std::endl;
        for (int i = 0; i < dim; ++i) {
            for (int j = 0; j < dim; ++j) {
                for (int k = 0; k < dim; ++k) {
                    mm[i][j]=m[i][k]*m1[k][j];

                }
                cout<<mm[i][j]<<" ";
            }

            cout<<endl;

        }

    }
    





    return 0;

    }
