#include "Biblioteca.h"
#include "Libro.h"
#include <iostream>

int main() {
    Biblioteca biblioteca;

    Libro libro1("C++ para principiantes", "Autor 1", "1234", true);
    Libro libro2("Java para expertos",      "Autor 2", "5678", true);

    biblioteca.agregarLibro(libro1);
    biblioteca.agregarLibro(libro2);

    std::cout << "Libros disponibles:\n";
    biblioteca.mostrarLibrosDisponibles();

    if (auto* l = biblioteca.buscarLibroPorTitulo("C++ para principiantes")) {
        std::cout << "Libro encontrado: " << l->getTitulo()
                  << " por " << l->getAutor() << '\n';
    } else {
        std::cout << "Libro no encontrado\n";
    }
    return 0;
}