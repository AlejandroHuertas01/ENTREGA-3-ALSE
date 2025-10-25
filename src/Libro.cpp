#include "../include/Libro.h"

Libro::Libro(std::string t, std::string a, std::string isbn, bool disp)
    : titulo(t), autor(a), ISBN_SN(isbn), disponible(disp) {}

std::string Libro::getTitulo()    { return titulo; }
std::string Libro::getAutor()     { return autor; }
std::string Libro::getISBN_SN()   { return ISBN_SN; }
bool        Libro::isDisponible() { return disponible; }
void        Libro::setDisponible(bool disp) { disponible = disp; }