#include <iostream>
#include <cstdlib>
using namespace std;

template < class T >
void shaker( T vec[], int n ) {
    int i, d, j;
    i = 0;
    d = n - 1;
    while( i < d ) {
        for( j = i + 1; j <= d; j++ )
            if( vec[i] > vec[j] ) {
                T tem = vec[i];
                vec[i] = vec[j];
                vec[j] = tem;
            }
        for( j = d - 1; j  > i; j-- )
            if( vec[d] < vec[j] ) {
                T tem = vec[d];
                vec[d] = vec[j];
                vec[j] = tem;
            }
        i++; d--;
    }
}
metro

template < class T >
void imprime( T vec[], int elem ) {
    int i;
    cout << "[";
    for( i = 0; i < elem - 1 ; i++ )
        cout << vec[i] << ", ";
    cout << vec[i] << "]" << endl;
}

int main() {

    int nums[ 7 ] = { 99, 100, 9, 1, 3, 50, 2 };
      cout<<"numeros a ordenar"<<endl;
    string pals[5] = { "Bertha", "Zulema", "Alma", "Valeria", "Lissette" };

    imprime( nums, 7 );
    shaker( nums, 7 );
    imprime( nums, 7 );
    imprime( pals, 5 );
    shaker( pals, 5 );
    imprime( pals, 5 );
    cout<<"numeros"<<:
    return EXIT_SUCCESS;
}
