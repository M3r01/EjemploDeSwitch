#include <iostream>

using namespace std;

/*
Inicializamos la variable
le mostramos un mensaje al usuario para que ingrese el valor de la variable de caracter numerico
El usuario ingresa el valor de la variable
abrimos un switch (ponemos una condicion la cual es la variable del principio)
Declaramos todos los casos posibles y caso "default"
Mostramos un mensaje

*/

int main () {

int numeroIngresadoParaElMes;

cout<<"Ingrese un numero para saber que mes es:"<<endl;

cin>>numeroIngresadoParaElMes;

switch (numeroIngresadoParaElMes){

case 1:

    cout<<"El mes es enero"<<endl;

    break;

case 2:

    cout<<"El mes es febrero"<<endl;

    break;

case 3:

    cout<<"El mes es marzo"<<endl;

    break;

case 4:

    cout<<"El mes es abril"<<endl;

    break;

case 5:

    cout<<"El mes es mayo"<<endl;

    break;

case 6:

    cout<<"El mes es junio"<<endl;

    break;

case 7:

    cout<<"El mes es julio"<<endl;

    break;

case 8:

    cout<<"El mes es agosto"<<endl;

    break;

case 9:

    cout<<"El mes es septiembre"<<endl;

    break;

case 10:

    cout<<"El mes es octubre"<<endl;

    break;

case 11:

    cout<<"El mes es noviembre"<<endl;

    break;

case 12:

    cout<<"El mes es diciembre"<<endl;

    break;

default:

    cout<<"No sabemos que mes es"<<endl;

    break;


}


return 0;

}
