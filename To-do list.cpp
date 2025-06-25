#include <iostream>
#include <vector>
#include <string>

using namespace std;

void mostrarMenu() {
    cout << "\n===== TO-DO LIST =====\n";
    cout << "1. Adicionar tarefa\n";
    cout << "2. Listar tarefas\n";
    cout << "3. Remover tarefa\n";
    cout << "4. Sair\n";
    cout << "Escolha uma opção: ";
}

int main() {
    vector<string> tarefas;
    int opcao;

    do {
        mostrarMenu();
        cin >> opcao;
        cin.ignore(); // Limpar o buffer do cin

        if (opcao == 1) {
            cout << "Digite a tarefa: ";
            string tarefa;
            getline(cin, tarefa);
            tarefas.push_back(tarefa);
            cout << "Tarefa adicionada!\n";

        } else if (opcao == 2) {
            cout << "\nLista de tarefas:\n";
            if (tarefas.empty()) {
                cout << "Nenhuma tarefa na lista.\n";
            } else {
                for (size_t i = 0; i < tarefas.size(); i++) {
                    cout << i + 1 << ". " << tarefas[i] << "\n";
                }
            }

        } else if (opcao == 3) {
            cout << "Digite o número da tarefa para remover: ";
            int num;
            cin >> num;
            cin.ignore();

            if (num > 0 && num <= (int)tarefas.size()) {
                tarefas.erase(tarefas.begin() + num - 1);
                cout << "Tarefa removida!\n";
            } else {
                cout << "Número inválido!\n";
            }

        } else if (opcao == 4) {
            cout << "Saindo...\n";

        } else {
            cout << "Opção inválida! Tente novamente.\n";
        }

    } while (opcao != 4);

    return 0;
}
