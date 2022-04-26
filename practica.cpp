#include <iostream>
using namespace std ;

int main(int argc, char const *argv[])
{
    int numeroArticulo[300], stock[300], compradores[300]{0}, unidadesVendidas[300]{0},articulo{0}, cliente{0}, indice{0}, mejorCliente{0} ;
    float precioUnitario[300], totalVenta[300]{0}, ventas{0}, maximaVenta{0} ;

    for(int i = 0 ; i < 300 ; i++)
    {
        cout <<"Digite el Numero de Articulo: " ;
        cin  >> numeroArticulo[i] ;
        cout <<"Digite la cantidad de unidades: " ;
        cin  >> stock[i] ;
        cout <<"Digite el Precio del Articulo: " ;
        cin  >> precioUnitario[i] ;
    }

    cout <<"Ingrese el numero de Cliente: ";
    cin  >> cliente ;
    cout <<"Ingrese el numero de Articulo: ";
    cin  >> articulo ;
    cout <<"Ingrese la venta: ";
    cin  >> ventas ;

    while(cliente != 0)
    {
        for(int i = 0 ; i < 300 ; i++)
        {
            if(articulo == numeroArticulo[i])
            {
                indice = i ;
            }
        }

        compradores[indice] = cliente ;
        unidadesVendidas[indice] = ventas ;
        totalVenta[indice] = unidadesVendidas[indice] * precioUnitario[indice] ;

        cout <<"\nIngresando Datos nuevos:\n" ;

        cout <<"Ingrese el numero de Cliente: ";
        cin  >> cliente ;
        cout <<"Ingrese el numero de Articulo: ";
        cin  >> articulo ;
        cout <<"Ingrese la venta: ";
        cin  >> ventas ;
    }

    cout <<"\n\nNcliente\tNarticulo\tCantidadVendida\tImporteTotal\n" ;

    for(int i = 0 ; i < 300 ; i++)
    {
        if(unidadesVendidas[i] != 0)
        {
            cout << compradores[i] <<"\t\t"<< numeroArticulo[i] <<"\t\t"<< unidadesVendidas[i] <<"\t\t"<< totalVenta[i] <<"\n" ;
        }
    }

    cout <<"\n" ;

    for(int i = 0 ; i < 300 ; i++)
    {
        if(totalVenta[i] > maximaVenta)
        {
            maximaVenta = totalVenta[i] ;

            mejorCliente = compradores[i] ;
        }

        if(unidadesVendidas[i] == 0)
        {
            cout <<"Articulo sin venta: " << numeroArticulo[i] <<"\n" ;
        }

    }

    cout <<"La mejor venta fue: $" << maximaVenta <<"\n" ;
    cout <<"El mejor cliente fue: " << mejorCliente <<"\n" ;

    return 0;
}