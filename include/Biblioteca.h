#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "Libro.h"     
#include <string>
#include <vector>

class Biblioteca {
private:
    std::vector<Libro> libros;

public:
    void agregarLibro(Libro libro);
    void eliminarLibro(std::string isbn);
    void mostrarLibrosDisponibles();
    Libro* buscarLibroPorTitulo(std::string titulo);
    Libro* buscarLibroPorAutor(std::string autor);
};

#endif
