#include <iostream>
using namespace std ;

int main(int argc, char const *argv[])
{
    int articulos[15]{0}, venta[15]{0}, numeroArticulo{0}, mayorVenta{0}, articuloMasVendido{0}, ventas{0} ;

    for(int i = 0 ; i < 15 ; i++)
    {
        articulos[i] = i+1 ;
    }
    
    cout <<"Digite el numero del articulo: " ;
    cin  >> numeroArticulo ;

    while(numeroArticulo != 0)
    {
        for(int i = 0 ; i < 15 ; i++)
        {
            if(articulos[i] == numeroArticulo)
            {
                cout <<"Digite las unidades vendidas: " ;
                cin  >> ventas ;

                venta[i] += ventas ;
            }
        }
        cout <<"Digite el numero del articulo: " ;
        cin  >> numeroArticulo ;
    }

    for(int i = 0 ; i < 15 ; i++)
    {
        if(venta[i] > mayorVenta)
        {
            mayorVenta = venta[i] ;
            articuloMasVendido = articulos[i] ;
        }

        if(venta[i] == 0)
        {
            cout <<"Articulos sin venta: " << articulos[i] <<"\n" ;
        }

    }

    cout <<"\nEl articulo con mas venta fue " << articuloMasVendido <<" con un total de " << mayorVenta <<"\n" ;
    cout <<"La cantidad de articulos vendidos del producto 10 fue de: " << venta[9] <<"\n\n" ;

    return 0;
}