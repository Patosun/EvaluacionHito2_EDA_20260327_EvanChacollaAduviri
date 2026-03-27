#include <iostream>
#include <string>
using namespace std;

struct Nodo {
    string nombre;
    string codigo;
    Nodo* sig;
    Nodo* ant;
};

Nodo* cabeza = NULL;
Nodo* cola = NULL;

void registrar(string nom, string cod) {
    Nodo* nuevo = new Nodo();
    nuevo->nombre = nom;
    nuevo->codigo = cod;
    nuevo->sig = NULL;
    nuevo->ant = NULL;

    if (cabeza == NULL) {
        cabeza = nuevo;
        cola = nuevo;
    } else {
        nuevo->ant = cola;
        cola->sig = nuevo;
        cola = nuevo;
    }

    cout << "Estudiante registrado." << endl;
}

void atender() {
    if (cabeza == NULL) {
        cout << "No hay estudiantes esperando" << endl;
        return;
    }

    cout << "Atendiendo a: " << cabeza->nombre << " - Codigo: " << cabeza->codigo << endl;

    Nodo* temp = cabeza;
    cabeza = cabeza->sig;

    if (cabeza != NULL) {
        cabeza->ant = NULL;
    } else {
        cola = NULL;
    }

    delete temp;
}

void mostrar() {
    if (cabeza == NULL) {
        cout << "No hay estudiantes esperando" << endl;
        return;
    }

    Nodo* aux = cabeza;
    int i = 1;
    cout << "Estudiantes esperando:" << endl;
    while (aux != NULL) {
        cout << i << ". " << aux->nombre << " - " << aux->codigo << endl;
        aux = aux->sig;
        i++;
    }
}

void buscar(string nom) {
    if (cabeza == NULL) {
        cout << "No hay estudiantes esperando" << endl;
        return;
    }

    Nodo* aux = cabeza;
    int pos = 1;
    bool encontrado = false;

    while (aux != NULL) {
        if (aux->nombre == nom) {
            cout << "Estudiante en posicion:  " << pos << ": " << aux->nombre << " - " << aux->codigo << endl;
            encontrado = true;
        }
        aux = aux->sig;
        pos++;
    }

    if (!encontrado) {
        cout << "No existe el estudiante" << endl;
    }
}

void mostrarInverso() {
    if (cola == NULL) {
        cout << "No hay estudiante esperando" << endl;
        return;
    }

    Nodo* aux = cola;
    cout << "Lista en orden inverso:" << endl;
    while (aux != NULL) {
        cout << aux->nombre << " - " << aux->codigo << endl;
        aux = aux->ant;
    }
}

int main() {
    int opcion;
    string nombre, codigo;

    do {
        cout << "\n Menu " << endl;
        cout << "1. Registrar estudiante" << endl;
        cout << "2. Atender estudiante" << endl;
        cout << "3. Mostrar estudiantes en espera" << endl;
        cout << "4. Buscar estudiante por nombre" << endl;
        cout << "5. Mostrar lista en orden inverso" << endl;
        cout << "6. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore();

        if (opcion == 1) {
            cout << "Nombre: ";
            getline(cin, nombre);
            cout << "Codigo: ";
            getline(cin, codigo);
            registrar(nombre, codigo);
        } else if (opcion == 2) {
            atender();
        } else if (opcion == 3) {
            mostrar();
        } else if (opcion == 4) {
            cout << "Nombre a buscar: ";
            getline(cin, nombre);
            buscar(nombre);
        } else if (opcion == 5) {
            mostrarInverso();
        } else if (opcion == 6) {
            cout << "Saliendo..." << endl;
        } else {
            cout << "Opcion no valida." << endl;
        }

    } while (opcion != 6);

    return 0;
}
