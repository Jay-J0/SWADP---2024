#include "Applicatie.h"

void Applicatie::launch() {
	while (1) {
        system("cls");
        std::cout << "Machine Status:" << std::endl;
        string str;

        if (machine->getMotor1()->status() == 1) { str = "running"; } else { str = "halted"; }
        std::cout << "Motor 1: " << str << " (";
        machine->getMotor1()->getTSensor()->read();
        if (machine->getMotor2()->status() == 1) { str = "running"; }
        else { str = "halted"; }
        std::cout << "Motor 2: " << str << " (";
        machine->getMotor2()->getTSensor()->read();
        std::cout << "\n0: stoppen;\n1: start;\n2: stop;\n3: Toon temp;\n";
        std::cout << "Maak een keuze:";

        int keuze = 0;
        std::cin >> keuze;

        switch (keuze) {
        case 0:
            exit(69);
            break;
        case 1:
            machine->run();
            break;
        case 2:
            machine->halt();
            break;
        default:
            break;
        }
	}
};