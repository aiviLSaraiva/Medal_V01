#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;

struct Conquista
{
    string Nome;
    string Area;
    string Tipo;
    string Categoria;
    int Ano;
    int Pontos;
};

vector<Conquista> conquistas;

int localEdit;
int localExc;

// ========================================
// ADICIONAR CONQUISTA
// ========================================

void adicionaConquista()
{

    Conquista nova;

    cout << "Para adicionar sua conquista siga as instrucoes a seguir:" << endl;

    cout << "Digite o nome da competicao: ";
    getline(cin, nova.Nome);

    cout << "Digite a area da competicao: ";
    getline(cin, nova.Area);

    cout << "Digite o tipo da conquista: ";
    getline(cin, nova.Tipo);

    cout << "Digite a categoria da competicao: ";
    getline(cin, nova.Categoria);

    cout << "Digite o ano da competicao: ";
    cin >> nova.Ano;

    cout << "Digite a sua pontuacao na competicao: ";
    cin >> nova.Pontos;

    cin.ignore();

    conquistas.push_back(nova);

    cout << endl;
    cout << "Conquista adicionada com sucesso!" << endl;
}

// ========================================
// MOSTRAR CONQUISTAS
// ========================================

void mostraConquistas()
{

    if (conquistas.empty())
    {
        cout << "Voce ainda nao possui conquistas cadastradas." << endl;
        return;
    }

    cout << endl;
    cout << "========================================" << endl;
    cout << "         MINHAS CONQUISTAS" << endl;
    cout << "========================================" << endl;

    for (int i = 0; i < conquistas.size(); i++)
    {

        cout << endl;
        cout << "Conquista " << i + 1 << endl;

        cout << "Competicao: " << conquistas[i].Nome << endl;
        cout << "Area: " << conquistas[i].Area << endl;
        cout << "Tipo: " << conquistas[i].Tipo << endl;
        cout << "Categoria: " << conquistas[i].Categoria << endl;
        cout << "Ano: " << conquistas[i].Ano << endl;
        cout << "Pontuacao: " << conquistas[i].Pontos << endl;

        cout << "----------------------------------------" << endl;
    }
}

// ========================================
// BUSCAR CONQUISTA
// ========================================

void buscaConquista()
{

    if (conquistas.empty())
    {
        cout << "Voce ainda nao possui conquistas cadastradas." << endl;
        return;
    }

    string busca;

    cout << "Digite o nome da competicao que deseja buscar: ";
    getline(cin, busca);

    bool encontrou = false;

    for (int i = 0; i < conquistas.size(); i++)
    {

        if (conquistas[i].Nome == busca)
        {

            cout << endl;
            cout << "Conquista encontrada!" << endl;

            cout << "Competicao: " << conquistas[i].Nome << endl;
            cout << "Area: " << conquistas[i].Area << endl;
            cout << "Tipo: " << conquistas[i].Tipo << endl;
            cout << "Categoria: " << conquistas[i].Categoria << endl;
            cout << "Ano: " << conquistas[i].Ano << endl;
            cout << "Pontuacao: " << conquistas[i].Pontos << endl;

            encontrou = true;
            return;
        }
    }

    if (!encontrou)
    {
        cout << "Nenhuma conquista encontrada." << endl;
    }
}
// ========================================
// ALTERA CONQUISTA - A SER USADA NA EDITA
// ========================================
void alteraConquista()
{
    int op;

    do
    {

        cout << endl;
        cout << "Para prosseguir selecione uma das opções abaixo:" << endl;

        cout << "1 - Alterar área" << endl;
        cout << "2 - Alterar tipo" << endl;
        cout << "3 - Alterar categoria" << endl;
        cout << "4 - Alterar ano" << endl;
        cout << "5 - Alterar pontos" << endl;
        cout << "0 - Sair" << endl;

        cin >> op;

        cin.ignore();

        cout << endl;

        if (op == 1)
        {

            cout << "Digite a nova Área" << endl;
            string novo;
            getline(cin, novo);

            conquistas[localEdit].Area = novo;

            cout << "Dado editado com sucesso!" << endl;
        }

        else if (op == 2)
        {

            cout << "Digite o novo Tipo: " << endl;
            string novo;
            getline(cin, novo);

            conquistas[localEdit].Tipo = novo;

            cout << "Dado editado com sucesso!" << endl;
        }

        else if (op == 3)
        {

            cout << "Digite a nova Categoria: " << endl;
            string novo;
            getline(cin, novo);

            conquistas[localEdit].Categoria = novo;

            cout << "Dado editado com sucesso!" << endl;
        }

        else if (op == 4)
        {

            cout << "Digite o novo Ano" << endl;
            int novo;
            cin >> novo;

            conquistas[localEdit].Ano = novo;

            cout << "Dado editado com sucesso!" << endl;
        }

        else if (op == 5)
        {

            cout << "Digite a nova pontuação" << endl;
            int novo;
            cin >> novo;

            conquistas[localEdit].Pontos = novo;

            cout << "Dado editado com sucesso!" << endl;
        }

        else if (op == 0)
        {
            cout << "Retornando..." << endl;
        }
        else
        {

            cout << "Opcao invalida!" << endl;
        }
    } while (op != 0);
}
// ========================================
// EDITA CONQUISTA
// ========================================
void editaConquista()
{
    // Sem nada cadastrado ainda
    if (conquistas.empty())
    {
        cout << "Você ainda não cadastrou nenhuma conquista" << endl;
        return;
    }

    // Digitar a conquista
    string busca;
    cout << "Digite o nome da competição que você deseja editar" << endl;
    getline(cin, busca);

    // Procura a conquista
    bool encontrou = false;
    for (int i = 0; i < conquistas.size(); i++)
    {
        if (conquistas[i].Nome == busca)
        {
            cout << endl;
            cout << "Conquista encontrada!" << endl;

            cout << "Competicao: " << conquistas[i].Nome << endl;
            cout << "Area: " << conquistas[i].Area << endl;
            cout << "Tipo: " << conquistas[i].Tipo << endl;
            cout << "Categoria: " << conquistas[i].Categoria << endl;
            cout << "Ano: " << conquistas[i].Ano << endl;
            cout << "Pontuacao: " << conquistas[i].Pontos << endl;

            localEdit = i;
            encontrou = true;
        }
    }

    // Edição se achou
    if (encontrou)
    {
        alteraConquista();
    }
    // Não achou
    else
    {
        cout << "Competição não encontrada" << endl;
    }
}

// ========================================
// EXCLUI CONQUISTA
// ========================================
void excluiConquista()
{
    // SEM NADA CADASTRADO
    if (conquistas.empty())
    {
        cout << "Você ainda não cadastrou nenhuma conquista" << endl;
        return;
    }
    // Digitar a conquista
    string busca;
    cout << "Digite o nome da competição que você deseja excluir" << endl;
    getline(cin, busca);

    // Procura a conquista
    bool encontrou = false;
    for (int i = 0; i < conquistas.size(); i++)
    {
        if (conquistas[i].Nome == busca)
        {
            cout << endl;
            cout << "Conquista encontrada!" << endl;

            localExc = i;
            encontrou = true;
        }
    }

    // Exluir se achou
    if (encontrou)
    {
        cout << "Realmente deseja excluir a conquista abaixo?" << endl;

        cout << "Competicao: " << conquistas[localExc].Nome << endl;
        cout << "Area: " << conquistas[localExc].Area << endl;
        cout << "Tipo: " << conquistas[localExc].Tipo << endl;
        cout << "Categoria: " << conquistas[localExc].Categoria << endl;
        cout << "Ano: " << conquistas[localExc].Ano << endl;
        cout << "Pontuacao: " << conquistas[localExc].Pontos << endl;

        int op;

        do
        {
            cout << "Selecione a opção desejada:" << endl;

            cout << "1 - Sim" << endl;
            cout << "2 - Não" << endl;

            cin >> op;
            cin.ignore();

            if (op == 1)
            {
                conquistas.erase(conquistas.begin() + localExc);
                cout << "Conquista excluida com sucesso!" << endl;
                break;
            }
            else if (op == 2)
            {
                cout << "Retornando..." << endl;
            }
            else
            {
                cout << "Opção inválida!" << endl;
            }
        } while (op != 2);
    }
    // Não achou
    else
    {
        cout << "Competição não encontrada" << endl;
    }
}

// ========================================
// MAIN
// ========================================

int main()
{

    cout << "PROGRAMA INICIOU!" << endl;

    int opcao;

    do
    {
        cout << endl;
        cout << "========================================" << endl;
        cout << "             MEDAL01" << endl;
        cout << "========================================" << endl;

        cout << "1 - Adicionar conquista" << endl;
        cout << "2 - Mostrar minhas conquistas" << endl;
        cout << "3 - Buscar conquista" << endl;
        cout << "4 - Editar conquista" << endl;
        cout << "5 - Excluir conquista" << endl;
        cout << "0 - Sair" << endl;

        cout << endl;
        cout << "Escolha uma opcao: ";

        cin >> opcao;

        cin.ignore();

        cout << endl;

        if (opcao == 1)
        {
            adicionaConquista();
        }
        else if (opcao == 2)
        {
            mostraConquistas();
        }
        else if (opcao == 3)
        {
            buscaConquista();
        }
        else if (opcao == 4)
        {
            editaConquista();
        }
        else if (opcao == 5)
        {
            excluiConquista();
        }
        else if (opcao == 0)
        {
            cout << "Encerrando o programa..." << endl;
        }
        else
        {
            cout << "Opcao invalida!" << endl;
        }

    } while (opcao != 0);

    return 0;
}