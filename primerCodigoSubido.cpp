#include <iostream>

using namespace std ;

int main(int argc, char const *argv[])
{
    int numProveedor{0}, dia{0}, mes{0}, proveedorActual{0}, cantidadProducto{0},cantidadCompras{0}, numProducto{0}, mayorCantidad{0}, proveedor{0}, productoAgosto{0} ;
    float precioUnitario{0}, mayorCompra{0}, compra{0}, facturaA{0}, facturaB{0}, facturaC{0}, compraMinima{0} ;
    char factura ;
    bool bandera{true} ;

    cout <<"Digite el numero del proveedor: " ;
    cin  >> numProveedor ;

    while(numProveedor != 0)
    {
        proveedorActual = numProveedor ;

        while(proveedorActual == numProveedor) // compras a proveedor
        {
            cout <<"Indique el numero de producto: " ;
            cin  >> numProducto ;
            
            cout <<"Ingrese precio unitario del producto: " ;
            cin  >> precioUnitario ;

            cout <<"Ingrese la cantidad de productos comprados: " ;
            cin  >> cantidadProducto ;

            cout <<"Indique el tipo de Factura -> Responsable Inscripto(A) Consumidor Final(B) Monotributista(C)" ;
            cin  >> factura ;

            cout <<"Indique mes(con numero) de la compra: " ;
            cin  >> mes ;

            compra = cantidadProducto * precioUnitario ;

            if(compra > mayorCompra)
            {
                mayorCompra = compra ;
            }

            if(factura == 'A')
            {
                facturaA += compra ;
            }
            else if(factura == 'B')
            {
                facturaB += compra ;
            }
            else
            {
                facturaC += compra ;
            }

            cantidadCompras++ ;
            
            if(cantidadProducto > mayorCantidad)
            {
                mayorCantidad = cantidadProducto ;
                proveedor = proveedorActual ;
            }

            if(mes == 8)
            {
                if(bandera)
                {
                    compraMinima = compra ;
                    productoAgosto = numProducto ;
                    bandera = false ;
                }
                else if(compra < compraMinima)
                {
                    compraMinima = compra ;
                    productoAgosto = numProducto ;
                }
            }

            cout <<"Digite el numero del proveedor: " ;
            cin  >> numProveedor ;

        }
        
        cout <<"Al proveedor N°" << proveedorActual <<" se le hizo " << cantidadCompras <<" compras\n" ;
        cout <<"La mayor compra fue $" << mayorCompra <<" al proveedor numero: " << proveedorActual <<"\n" ;

    }

    cout <<"La inversion total del año por tipo de factura:\n" ;
    cout <<"Factura A : $" << facturaA <<"\n" ;
    cout <<"Factura B : $" << facturaB <<"\n" ;
    cout <<"Factura C : $" << facturaC <<"\n" ;

    cout <<"La mayor cantidad de productos comprados en una sola compra fue de " << mayorCantidad <<" al proveedor N°" << proveedor <<"\n" ;
    cout <<"Durante el mes de Agosto la menor compra fue $" << compraMinima <<" del producto N°" << productoAgosto <<"\n" ;

    return 0;
}