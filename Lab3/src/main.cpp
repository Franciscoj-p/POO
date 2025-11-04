#include <iostream>
#include <vector>
#include "../include/consultorio.h"
#include "../include/cita.h"


using namespace std;

int main() {
    Consultorio consultorio("Vivir Sano");

    Doctor d1("Dr. Juancho Rizzo", "Medicina General - Univalle", "657686");
    Doctor d2("Dra. Camila Ortaliz", "Medicina General - Javeriana", "454575");
    Doctor d3("Dra. Anacleta Dique ", "Oncologia - UniLibre", "243535");

    vector<Doctor> doctores;
    doctores.push_back(d1);
    doctores.push_back(d2);
    doctores.push_back(d3);


    vector<Cita> citas; 

    int opcion;

    do {
        cout << "\n--- CONSULTORIO 'VIVIR SANO' ---\n";
        cout << "1. Consultar doctores\n";
        cout << "2. Pedir cita\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cin.ignore(); // limpiar buffer

        if (opcion == 1) {

            cout << "\n--- DOCTORES DISPONIBLES ---\n";
            for (size_t i = 0; i < doctores.size(); ++i) {
            doctores[i].verInfo();
            cout << "\n";
            }

        } else if (opcion == 2) {

            cout << "\nREGISTRAR NUEVA CITA\n";

            string nombre, id, telefono, correo, motivo;
            int edad, dia, mes, año, hora;
            int indiceDoc;

            cout << "Nombre del paciente: ";
            getline(cin, nombre);
            cout << "ID o cédula: ";
            getline(cin, id);
            cout << "Teléfono: ";
            getline(cin, telefono);
            cout << "Correo: ";
            getline(cin, correo);
            cout << "Edad: ";
            cin >> edad;
            cin.ignore();

            cout << "Motivo de consulta: ";
            getline(cin, motivo);

            cout << "\nSeleccione médico:\n";
            for (size_t i = 0; i < doctores.size(); ++i) {
                cout << i + 1 << ". " << doctores[i].getNombre() << endl;
            }
            cout << "Opción: ";
            cin >> indiceDoc;
            cin.ignore();

            if (indiceDoc < 1 || indiceDoc > (int)doctores.size()) {
                cout << "Opción inválida.\n";
                continue;
            }

            cout << "Fecha de la cita (dia mes año): ";
            if (!(cin >> dia >> mes >> año)) {
                cout << "Entrada inválida. Intente de nuevo.\n";
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }
            cout << "Hora (0-23): ";
            cin >> hora;
            cin.ignore();

            Paciente paciente(edad, nombre, id, telefono, correo, motivo);
            Fecha fecha(dia, mes, año, hora);
            Cita cita(doctores[indiceDoc - 1], paciente, fecha);

            citas.push_back(cita);

            cout << "\nCita registrada exitosamente:\n";
            cita.reportar();

        } else if (opcion == 3) {
            cout << "Saliendo del sistema...\n";
        } else {
            cout << "Opción no válida.\n";
        }

    } while (opcion != 3);

    return 0;
}
