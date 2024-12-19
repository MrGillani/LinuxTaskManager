#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;
//Adan

void displayProcesses() {
    system("ps -A -o pid,comm");
}

void killProcess(int pid) {
    string command = "kill " + to_string(pid);
    system(command.c_str());
}

int main() {
    int choice;
    int pid;

    while (true) {
        cout << "\nCommand Line Task Manager\n";
        cout << "1. Display Running Processes\n";
        cout << "2. Kill Process by PID\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayProcesses();
                break;
            case 2:
                cout << "Enter PID to kill: ";
                cin >> pid;
                killProcess(pid);
                cout << "Process " << pid << " has been killed.\n";
                break;
            case 3:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    }

    return 0;
}
