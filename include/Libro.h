#ifndef LIBRO_H
#define LIBRO_H
#include <string>

class Libro {
private:
    std::string titulo;
    std::string autor;
    std::string ISBN_SN;
    bool disponible;

public:
    Libro(std::string t, std::string a, std::string isbn, bool disp);
    std::string getTitulo();
    std::string getAutor();
    std::string getISBN_SN();
    bool isDisponible();
    void setDisponible(bool disp);
};

#endif