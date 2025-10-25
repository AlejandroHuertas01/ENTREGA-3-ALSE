#include "../include/Biblioteca.h"
#include "../include/Libro.h"
#include <iostream>

void Biblioteca::agregarLibro(Libro libro) { libros.push_back(libro); }

void Biblioteca::eliminarLibro(std::string isbn) {
    for (auto it = libros.begin(); it != libros.end(); ++it) {
        if (it->getISBN_SN() == isbn) { libros.erase(it); return; }
    }
}

void Biblioteca::mostrarLibrosDisponibles() {
    for (auto &libro : libros) {
        if (libro.isDisponible()) {
            std::cout << "Título: " << libro.getTitulo()
                      << ", Autor: " << libro.getAutor() << '\n';
        }
    }
}

Libro* Biblioteca::buscarLibroPorTitulo(std::string titulo) {
    for (auto &libro : libros) if (libro.getTitulo() == titulo) return &libro;
    return nullptr;
}

Libro* Biblioteca::buscarLibroPorAutor(std::string autor) {
    for (auto &libro : libros) if (libro.getAutor() == autor) return &libro;
    return nullptr;
}