/*EJERCICIO 9: CONTROL DE PAQUETES EN UNA EMPRESA DE MENSAJERIA.

Una empresa de mensajeria desea gestionar los paquetes que procesa, cada uno con un numero de seguimiento unico, el nombre
del destinatario y el peso del paquete. Los paquetes deben ser almacenados de forma eficiente y sin duplicados.

utiliza un set para almacenar los paquetes

implementa las siguientes funciones 

1- Registrar paquete: Añade un nuevo paquete al sistema.
2- Eliminar Paquete: Elimina un paquete usando su numero de seguimiento.
3- Mostrar Paquetes por Peso: Muestra los paquetes con un peso mayor a un valor dado.

*/



#include <iostream>
#include <set> // --> Libreria para utilizar arboles

void MostrarPaquetesPorPeso();

int main(int argc, char *argv[]) {

  // Ingresar codigo aqui

    return 0;

}

struct Paquete {
    int id;
    std::string destinario;
    double peso;
};

void MostrarPaquetesPorPeso(){

    double pesoMinimo;
    std::cout << "Ingrese el peso mínimo de los paquetes a mostrar: ";
    std::cin >> pesoMinimo;

    std::cout << "Paquetes con peso mayor a " << pesoMinimo << " kg:" << "\n\n";
    for (const Paquete& paquete : paquetes) {
        if (paquete.peso > pesoMinimo) {
            std::cout << "id: " << paquete.id << "\n";
            std::cout << "Nombre del destinatario: " << paquete.destinario << "\n";
            std::cout << "Peso: " << paquete.peso << " kg" << "\n";
            std::cout << "\n";
        }
    }
}
