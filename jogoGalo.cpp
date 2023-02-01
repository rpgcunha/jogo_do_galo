#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include <fstream>


using namespace std;

void cabecalho()
{
    cout << "**********************************************\n";
    cout << "*                                            *\n";
    cout << "*                JOGO DO GALO                *\n";
    cout << "*                                            *\n";
    cout << "**********************************************\n";
    cout << endl;
    cout << endl;
}

void tabuleiro(string posicao[9])
{
    cout << "       Posicoes              Tabuleiro\n";
    cout << "     ___________            ___________\n";
    cout << "    |   |   |   |          |   |   |   |\n";
    cout << "    | 1 | 2 | 3 |          | " << posicao[0] << " | " << posicao[1] << " | " << posicao[2]  << " |\n";
    cout << "    |___|___|___|          |___|___|___|\n";
    cout << "    |   |   |   |          |   |   |   |\n";
    cout << "    | 4 | 5 | 6 |          | " << posicao[3] << " | " << posicao[4] << " | " << posicao[5] << " |\n";
    cout << "    |___|___|___|          |___|___|___|\n";
    cout << "    |   |   |   |          |   |   |   |\n";
    cout << "    | 7 | 8 | 9 |          | " << posicao[6] << " | " << posicao[7] << " | " << posicao[8] << " |\n";
    cout << "    |___|___|___|          |___|___|___|\n";
    cout << endl;
    cout << endl;
}

void CabecalhoDificuldade(string dificuldade)
{
    cout << endl;
    cout << "             Dificuldade: " << dificuldade;
    cout << endl;
    cout << endl;
}

void delay(int milliseconds) {
    this_thread::sleep_for(chrono::milliseconds(milliseconds));
}

void loading(string pos[9], string dificuldade)
{
    string loading[3] = { ".", "..", "..." };
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t i = 0; i < 3; i++)
        {
            cabecalho();
            CabecalhoDificuldade(dificuldade);
            tabuleiro(pos);
            cout << "O cpu esta a escolher a posicao:" << loading[i];
            delay(500);
            system("cls");
        }
    }

}

void Taca()
{
    cout << "             ___________" << endl;
    cout << "            '._==_==_=_.'" << endl;
    cout << "            .-\\:      /-." << endl;
    cout << "           | (|:.     |) |" << endl;
    cout << "            '-|:.     |-'" << endl;
    cout << "              \\::.    /" << endl;
    cout << "               '::. .'" << endl;
    cout << "                 ) (" << endl;
    cout << "               _.' '._" << endl;
    cout << "              `````````" << endl;
    cout << endl;
}

int RegistoPontuacao(string nome, int derrotas, int empates, int vitorias)
{
    ofstream escrever("pontuacao.txt", ios::app);

    if (!escrever.is_open())
    {
        cout << "pontuacao.txt nao pode ser aberto" << endl;
        return 0;
    }
    else
    {
        escrever << nome << "-" << derrotas << "-" << empates << "-" << vitorias << endl;

        escrever.close();
    }
}

int LerPontuacao()
{
    ifstream ler("pontuacao.txt", ios::app);

    if (!ler.is_open())
    {
        cout << "pontuacao.txt nao pode ser aberto" << endl;
        return 0;
    }
    else
    {
        string linha;
        string tabela[25];
        int i = 0;
        while (getline(ler, linha))
        {
            tabela[i] = linha;
            i++;
        }
        cout << "Nome - Derrotas - Empates - Vitorias" << endl;
        for (size_t j = 0; j < i; j++)
        {
            cout << tabela[j] << endl;
        }
        ler.close();
    }
}

void Caveira()
{
    cout << "                 uuuuuuu" << endl;
    cout << "             uu$$$$$$$$$$$uu" << endl;
    cout << "          uu$$$$$$$$$$$$$$$$$uu" << endl;
    cout << "         u$$$$$$$$$$$$$$$$$$$$$u" << endl;
    cout << "        u$$$$$$$$$$$$$$$$$$$$$$$u" << endl;
    cout << "       u$$$$$$$$$$$$$$$$$$$$$$$$$u" << endl;
    cout << "       u$$$$$$$$$$$$$$$$$$$$$$$$$u" << endl;
    cout << "       u$$$$$$\"   \"$$$\"   \"$$$$$$u" << endl;
    cout << "       \"$$$$\"      u$u       $$$$\"" << endl;
    cout << "        $$$u       u$u       u$$$" << endl;
    cout << "        $$$u      u$$$u      u$$$" << endl;
    cout << "         \"$$$$uu$$$   $$$uu$$$$\"" << endl;
    cout << "          \"$$$$$$$\"   \"$$$$$$$\"" << endl;
    cout << "            u$$$$$$$u$$$$$$$u" << endl;
    cout << "             u$\"$\"$\"$\"$\"$\"$u" << endl;
    cout << "  uuu        $$u$ $ $ $ $u$$       uuu" << endl;
    cout << " u$$$$        $$$$$u$u$u$$$       u$$$$" << endl;
    cout << "  $$$$$uu      \"$$$$$$$$$\"     uu$$$$$$" << endl;
    cout << "u$$$$$$$$$$$uu    \"\"\"\"\"    uuuu$$$$$$$$$$" << endl;
    cout << "$$$$\"\"\"$$$$$$$$$$uuu   uu$$$$$$$$$\"\"\"$$$\"" << endl;
    cout << " \"\"\"      \"\"$$$$$$$$$$$uu \"\"$\"\"\"" << endl;
    cout << "           uuuu \"\"$$$$$$$$$$uuu" << endl;
    cout << "  u$$$uuu$$$$$$$$$uu \"\"$$$$$$$$$$$uuu$$$" << endl;
    cout << "  $$$$$$$$$$\"\"\"\"           \"\"$$$$$$$$$$$\"" << endl;
    cout << "   \"$$$$$\"                      \"\"$$$$\"\"" << endl;
    cout << "     $$$\"                         $$$$\"" << endl;
    cout << "" << endl;
}

void Draw()
{
    cout << "        '$$$$`                             ,,, " << endl;
    cout << "       '$$$$$$$`                         '$$$`" << endl;
    cout << "        `$$$$$$$`      ,,        ,,       '$$$$'" << endl;
    cout << "         `$$$$$$$`    '$$`     '$$`    '$$$$$'" << endl;
    cout << "          `$$$$$$$` '$$$$$` '$$$$$`  '$$$$$$$'" << endl;
    cout << "           `$$$$$$$ $$$$$$$ $$$$$$$ '$$$$$$$' " << endl;
    cout << "            `$$$$$$ $$$$$$$ $$$$$$$`'$$$$$$' " << endl;
    cout << "   ,,,,,,   `$$$$$$ $$$$$$$ $$$$$$$ $$$$$$' " << endl;
    cout << " '$$$$$`    `$$$$$$ $$$$$$$ $$$$$$$ $$$$$$' " << endl;
    cout << "'$$$$$$$$$`'$$$$$$$ $$$$$$$ $$$$$$$ $$$$$' " << endl;
    cout << "'$$$$$$$$$$$$$$$$$$ $$$$$$$ $$$$$$$ $$$$$' " << endl;
    cout << "   `$$$$$$$$$$$$$$$ $$$$$$$ $$$$$$ $$$$$$' " << endl;
    cout << "      `$$$$$$$$$$$$$ $$$$$         $$$$$$' " << endl;
    cout << "       `$$$$$$$$$$$$,   , $$$$,   ,$$$$$' " << endl;
    cout << "         `$$$$$$$$$$$$$$$$$$$$$$$$$$$$$' " << endl;
    cout << "          `$$$$$$$$$$$$$$$$$$$$$$$$$$$' " << endl;
    cout << "            `$$$$$$$$$$$$$$$$$$$$$$$$' " << endl;
    cout << "               `$$$$$$$$$$$$$$$$$$$$' " << endl;
    cout << "" << endl;
    cout << "" << endl;
}

void EscolherRandom(string pos[9])
{
    int livre = false;
    int jogada;
    do
    {
        //sorteia uma posiçao random ate escolher uma livre
        srand(time(0));
        jogada = rand() % 9;
        if (pos[jogada] == " ")
        {
            livre = true;
            pos[jogada] = "O";
        }
    } while (livre == false);

}

int FecharLinha(string pos[9])
{
    if (pos[0] == "O" && pos[1] == "O" && pos[2] == " ")
    {
        pos[2] = "O";
        return 1;
    }
    if (pos[1] == "O" && pos[2] == "O" && pos[0] == " ")
    {
        pos[0] = "O";
        return 1;
    }
    if (pos[0] == "O" && pos[2] == "O" && pos[1] == " ")
    {
        pos[1] = "O";
        return 1;
    }
    if (pos[3] == "O" && pos[4] == "O" && pos[5] == " ")
    {
        pos[5] = "O";
        return 1;
    }
    if (pos[4] == "O" && pos[5] == "O" && pos[3] == " ")
    {
        pos[3] = "O";
        return 1;
    }
    if (pos[3] == "O" && pos[5] == "O" && pos[4] == " ")
    {
        pos[4] = "O";
        return 1;
    }
    if (pos[6] == "O" && pos[7] == "O" && pos[8] == " ")
    {
        pos[8] = "O";
        return 1;
    }
    if (pos[7] == "O" && pos[8] == "O" && pos[6] == " ")
    {
        pos[6] = "O";
        return 1;
    }
    if (pos[6] == "O" && pos[8] == "O" && pos[7] == " ")
    {
        pos[7] = "O";
        return 1;
    }
    if (pos[0] == "O" && pos[3] == "O" && pos[6] == " ")
    {
        pos[6] = "O";
        return 1;
    }
    if (pos[3] == "O" && pos[6] == "O" && pos[0] == " ")
    {
        pos[0] = "O";
        return 1;
    }
    if (pos[0] == "O" && pos[6] == "O" && pos[3] == " ")
    {
        pos[3] = "O";
        return 1;
    }
    if (pos[1] == "O" && pos[4] == "O" && pos[7] == " ")
    {
        pos[7] = "O";
        return 1;
    }
    if (pos[4] == "O" && pos[7] == "O" && pos[1] == " ")
    {
        pos[1] = "O";
        return 1;
    }
    if (pos[1] == "O" && pos[7] == "O" && pos[4] == " ")
    {
        pos[4] = "O";
        return 1;
    }
    if (pos[2] == "O" && pos[5] == "O" && pos[8] == " ")
    {
        pos[8] = "O";
        return 1;
    }
    if (pos[5] == "O" && pos[8] == "O" && pos[2] == " ")
    {
        pos[2] = "O";
        return 1;
    }
    if (pos[2] == "O" && pos[8] == "O" && pos[5] == " ")
    {
        pos[5] = "O";
        return 1;
    }
    if (pos[0] == "O" && pos[4] == "O" && pos[8] == " ")
    {

        pos[8] = "O";
        return 1;
    }
    if (pos[4] == "O" && pos[8] == "O" && pos[0] == " ")
    {
        pos[0] = "O";
        return 1;
    }
    if (pos[0] == "O" && pos[8] == "O" && pos[4] == " ")
    {
        pos[4] = "O";
        return 1;
    }
    if (pos[2] == "O" && pos[4] == "O" && pos[6] == " ")
    {
        pos[6] = "O";
        return 1;
    }
    if (pos[4] == "O" && pos[6] == "O" && pos[2] == " ")
    {
        pos[2] = "O";
        return 1;
    }
    if (pos[2] == "O" && pos[6] == "O" && pos[4] == " ")
    {
        pos[4] = "O";
        return 1;
    }
    return 0;
}

int VerificarFim(string simbolo, string pos[9])
{
    if (pos[0] == simbolo && pos[1] == simbolo && pos[2] == simbolo)
    {
        return 1;
    }
    if (pos[3] == simbolo && pos[4] == simbolo && pos[5] == simbolo)
    {
        return 1;
    }
    if (pos[6] == simbolo && pos[7] == simbolo && pos[8] == simbolo)
    {
        return 1;
    }
    if (pos[0] == simbolo && pos[3] == simbolo && pos[6] == simbolo)
    {
        return 1;
    }
    if (pos[1] == simbolo && pos[4] == simbolo && pos[7] == simbolo)
    {
        return 1;
    }
    if (pos[2] == simbolo && pos[5] == simbolo && pos[8] == simbolo)
    {
        return 1;
    }
    if (pos[0] == simbolo && pos[4] == simbolo && pos[8] == simbolo)
    {
        return 1;
    }
    if (pos[2] == simbolo && pos[4] == simbolo && pos[6] == simbolo)
    {
        return 1;
    }
    return 0;
}

void EscolhaUser(string nome, int jogador, string pos[9], string dificulade)
{
    bool livre = false;
    char temp;
    int jogada;

    cabecalho();
    CabecalhoDificuldade(dificulade);
    tabuleiro(pos);
    do
    {
        cout << nome << " escolha a posicao onde deseja jogar: ";
        //garantir que o valor é um numero
        temp = 0;
        do
        {
            char c = getchar();
            if (isdigit(c))
            {
                jogada = atoi(&c) - 1;
                temp = 1;
            }

        } while (temp == 0);
        //verifica se a posiçao ja esta ocupada
        if (pos[jogada] == " ")
        {
            livre = true;
            if (jogador == 0)
            {
                pos[jogada] = "X";
            }
            else
            {
                pos[jogada] = "O";
            }
        }
        else
        {
            cout << nome <<" essa posicao ja esta ocupada, tente novamente.\n";
        }
    } while (livre == false);
}

int CortarLinhaDificil(string pos[9])
{
    if (pos[0] == "X" && pos[1] == "X" && pos[2] == " ")
    {
        pos[2] = "O";
        return 1;
    }
    if (pos[1] == "X" && pos[2] == "X" && pos[0] == " ")
    {
        pos[0] = "O";
        return 1;
    }
    if (pos[0] == "X" && pos[2] == "X" && pos[1] == " ")
    {
        pos[1] = "O";
        return 1;
    }
    if (pos[3] == "X" && pos[4] == "X" && pos[5] == " ")
    {
        pos[5] = "O";
        return 1;
    }
    if (pos[4] == "X" && pos[5] == "X" && pos[3] == " ")
    {
        pos[3] = "O";
        return 1;
    }
    if (pos[3] == "X" && pos[5] == "X" && pos[4] == " ")
    {
        pos[4] = "O";
        return 1;
    }
    if (pos[6] == "X" && pos[7] == "X" && pos[8] == " ")
    {
        pos[8] = "O";
        return 1;
    }
    if (pos[7] == "X" && pos[8] == "X" && pos[6] == " ")
    {
        pos[6] = "O";
        return 1;
    }
    if (pos[6] == "X" && pos[8] == "X" && pos[7] == " ")
    {
        pos[7] = "O";
        return 1;
    }
    if (pos[0] == "X" && pos[3] == "X" && pos[6] == " ")
    {
        pos[6] = "O";
        return 1;
    }
    if (pos[3] == "X" && pos[6] == "X" && pos[0] == " ")
    {
        pos[0] = "O";
        return 1;
    }
    if (pos[0] == "X" && pos[6] == "X" && pos[3] == " ")
    {
        pos[3] = "O";
        return 1;
    }
    if (pos[1] == "X" && pos[4] == "X" && pos[7] == " ")
    {
        pos[7] = "O";
        return 1;
    }
    if (pos[4] == "X" && pos[7] == "X" && pos[1] == " ")
    {
        pos[1] = "O";
        return 1;
    }
    if (pos[1] == "X" && pos[7] == "X" && pos[4] == " ")
    {
        pos[4] = "O";
        return 1;
    }
    if (pos[2] == "X" && pos[5] == "X" && pos[8] == " ")
    {
        pos[8] = "O";
        return 1;
    }
    if (pos[5] == "X" && pos[8] == "X" && pos[2] == " ")
    {
        pos[2] = "O";
        return 1;
    }
    if (pos[2] == "X" && pos[8] == "X" && pos[5] == " ")
    {
        pos[5] = "O";
        return 1;
    }
    if (pos[0] == "X" && pos[4] == "X" && pos[8] == " ")
    {
        pos[8] = "O";
        return 1;
    }
    if (pos[4] == "X" && pos[8] == "X" && pos[0] == " ")
    {
        pos[0] = "O";
        return 1;
    }
    if (pos[0] == "X" && pos[8] == "X" && pos[4] == " ")
    {
        pos[4] = "O";
        return 1;
    }
    if (pos[2] == "X" && pos[4] == "X" && pos[6] == " ")
    {
        pos[6] = "O";
        return 1;
    }
    if (pos[4] == "X" && pos[6] == "X" && pos[2] == " ")
    {
        pos[2] = "O";
        return 1;
    }
    if (pos[2] == "X" && pos[6] == "X" && pos[4] == " ")
    {
        pos[4] = "O";
        return 1;
    }
    return 0;
}

int CortarLinhaNormal(string pos[9])
{
    if (pos[0] == "X" && pos[1] == "X" && pos[2] == " ")
    {
        pos[2] = "O";
        return 1;
    }
    if (pos[0] == "X" && pos[2] == "X" && pos[1] == " ")
    {
        pos[1] = "O";
        return 1;
    }
    if (pos[3] == "X" && pos[4] == "X" && pos[5] == " ")
    {
        pos[5] = "O";
        return 1;
    }
    if (pos[7] == "X" && pos[8] == "X" && pos[6] == " ")
    {
        pos[6] = "O";
        return 1;
    }
    if (pos[6] == "X" && pos[8] == "X" && pos[7] == " ")
    {
        pos[7] = "O";
        return 1;
    }
    if (pos[0] == "X" && pos[3] == "X" && pos[6] == " ")
    {
        pos[6] = "O";
        return 1;
    }
    if (pos[0] == "X" && pos[6] == "X" && pos[3] == " ")
    {
        pos[3] = "O";
        return 1;
    }
    if (pos[2] == "X" && pos[5] == "X" && pos[8] == " ")
    {
        pos[8] = "O";
        return 1;
    }
    if (pos[2] == "X" && pos[8] == "X" && pos[5] == " ")
    {
        pos[5] = "O";
        return 1;
    }
    if (pos[0] == "X" && pos[4] == "X" && pos[8] == " ")
    {
        pos[8] = "O";
        return 1;
    }
    if (pos[0] == "X" && pos[8] == "X" && pos[4] == " ")
    {
        pos[4] = "O";
        return 1;
    }
    if (pos[2] == "X" && pos[4] == "X" && pos[6] == " ")
    {
        pos[6] = "O";
        return 1;
    }
    if (pos[2] == "X" && pos[6] == "X" && pos[4] == " ")
    {
        pos[4] = "O";
        return 1;
    }
    return 0;
}

int sorteio(string nomes[2])
{
    int tempo = 800;
    srand(time(0));
    int random = rand() % 1;

    for (size_t j   = 0; j < 7; j++)
    {
        for (size_t i = 0; i < 2; i++)
        {
            cabecalho();
            cout << "        A sortear o primeiro a jogar: \n";
            cout << endl;
            cout << "          **********************" << endl;
            cout << "                   " << nomes[i] << endl;
            cout << "          **********************" << endl;
            delay(tempo);
            tempo = tempo - 50;
            system("cls");
        }
    }
    cabecalho();
    cout << "        A sortear o primeiro a jogar: \n";
    cout << endl;
    cout << "          **********************" << endl;
    cout << "                   " << nomes[random] << endl;
    cout << "          **********************" << endl;
    cout << endl;
    cout << endl;
    cout << "        O primeiro a jogar e " << nomes[random];


    if (random == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

string facil(string nome, string pos[9], string dificuldade)
{
    string vez = "user";
    bool livre = false;
    int contador = 0;

    do
    {
        //se for a vez do jogador
        if (vez == "user")
        {
            EscolhaUser(nome, 0, pos, dificuldade);
            vez = "cpu";
            contador++;
            system("cls");
            if (VerificarFim("X", pos) == 1)
            {
                return "venceu";
            }
            //verifica se ja nao ha mais casas livre e anuncia empate
            if (contador == 9)
            {
                return "empate";
            }
        }
        else //vez do cpu
        {
            loading(pos, dificuldade);
            if (FecharLinha(pos)==1)
            {
                return "perdeu";
            }
            else
            {
                EscolherRandom(pos);
            }
            vez = "user";
            contador++;
            system("cls");
            if (VerificarFim("O", pos)==1)
            {
                return "perdeu";
            }
        }
    } while (true);
}

string Normal(string nome, string pos[9], string dificuldade)
{
    string vez = "user";
    bool livre = false;
    int contador = 0;

    do
    {
        //se for a vez do jogador
        if (vez == "user")
        {
            EscolhaUser(nome, 0, pos, dificuldade);
            vez = "cpu";
            contador++;
            system("cls");
            if (VerificarFim("X", pos) == 1)
            {
                return "venceu";
            }
            //verifica se ja nao ha mais casas livre e anuncia empate
            if (contador == 9)
            {
                return "empate";
            }
        }
        else
        {
            loading(pos, dificuldade);
            if (FecharLinha(pos) == 1)
            {
                return "perdeu";
            }
            else
            {
                if (CortarLinhaNormal(pos)==0)
                {
                    EscolherRandom(pos);
                }
            }
            vez = "user";
            contador++;
            system("cls");
            if (VerificarFim("O", pos) == 1)
            {
                return "perdeu";
            }
        }
    } while (true);
}

string Dificil(string nome, string pos[9], string dificuldade)
{
    string vez = "user";
    bool livre = false;
    int contador = 0;

    do
    {
        //se for a vez do jogador
        if (vez == "user")
        {
            EscolhaUser(nome, 0, pos, dificuldade);
            vez = "cpu";
            contador++;
            system("cls");
            if (VerificarFim("X", pos) == 1)
            {
                return "venceu";
            }
            //verifica se ja nao ha mais casas livre e anuncia empate
            if (contador == 9)
            {
                return "empate";
            }
        }
        else
        {
            loading(pos, dificuldade);
            if (FecharLinha(pos) == 1)
            {
                return "perdeu";
            }
            else
            {
                if (CortarLinhaDificil(pos) == 0)
                {
                    EscolherRandom(pos);
                }
            }
            vez = "user";
            contador++;
            system("cls");
            if (VerificarFim("O", pos) == 1)
            {
                return "perdeu";
            }
        }
    } while (true);
}

int single(string pos[9])
{
    int escolha;
    char temp = 0;
    string resultado, nome;
    bool reiniciar = false;
    string lixo;
    int vitorias=0, empates=0, derrotas=0;


    //definer nome do utilizador
    cabecalho();
    cout << "Digite o seu nome: "; 
    getline(cin, lixo);
    getline(cin, nome);
    system("cls");
    //ciclo para escolher a dificuldade, so avança depois de escolher uma opçao valida
    do
    {
        reiniciar = false;
        do
        {
            cabecalho();
            cout << "************************************\n";
            cout << "*                                  *\n";
            cout << "*             Escolha              *\n";
            cout << "*                                  *\n";
            cout << "*            1 - Facil             *\n";
            cout << "*                                  *\n";
            cout << "*            2 - Normal            *\n";
            cout << "*                                  *\n";
            cout << "*            3 - Dificil           *\n";
            cout << "*                                  *\n";
            cout << "*                                  *\n";
            cout << "*            4 - Voltar            *\n";
            cout << "*                                  *\n";
            cout << "************************************\n\n\n";
            cout << nome << " escolha o modo de Jogo: ";

            char c = getchar();
            if (isdigit(c))
            {
                escolha = atoi(&c);
                if (escolha == 1 || escolha == 2 || escolha == 3 || escolha == 4 || escolha == 5)
                {
                    temp = 1;
                }
            }
            system("cls");
        } while (temp == 0);
        //avança para a dificuldade escolhida
        switch (escolha)
        {
        case 1:
            resultado = facil(nome, pos, "Facil");
            break;
        case 2:
            resultado = Normal(nome, pos, "Normal");
            break;
        case 3:
            resultado = Dificil(nome, pos, "Dificil");
            break;
        case 4:
            return 0;
        case 5:
            LerPontuacao();
        default:
            break;
        }
        //verifica o resultado do jogo e apresenta mensagem
        if (resultado == "venceu")
        {
            cabecalho();
            tabuleiro(pos);
            Taca();
            cout << "Parabens " << nome << " Venceu!!";
            vitorias++;
        }
        if (resultado == "perdeu")
        {
            cabecalho();
            tabuleiro(pos);
            Caveira();
            cout << nome << " que pena, perdeu!!";
            derrotas++;
        }
        if (resultado == "empate")
        {
            cabecalho();
            tabuleiro(pos);
            Draw();
            cout << nome << " voce empatou!!";
            vitorias++;
        }
        //pede ao jogador para pressionar uma tecla para continuar
        cout << endl;
        cout << "Pressione uma tecla para continuar...";
        temp = _getch();
        system("cls");
        //apresenta o menu de fim de jogo
        do
        {
            temp = 0;
            cabecalho();
            cout << "************************************\n";
            cout << "*                                  *\n";
            cout << "*             Escolha              *\n";
            cout << "*                                  *\n";
            cout << "*          1 - Reiniciar           *\n";
            cout << "*                                  *\n";
            cout << "*          2 - Voltar              *\n";
            cout << "*                                  *\n";
            cout << "*          3 - Sair                *\n";
            cout << "*                                  *\n";
            cout << "************************************\n";
            cout << nome << " escolha uma opcao: ";

            char c = getchar();
            if (isdigit(c))
            {
                escolha = atoi(&c);
                if (escolha == 1 || escolha == 2 || escolha == 3)
                {                    
                    temp = 1;
                }
            }
            system("cls");

        } while (temp == 0);
        //executa a açao escolhida pelo utilizador
        switch (escolha)
        {
        // reinicia o jogo
        case 1:
            reiniciar = true;
            escolha = 0;
            temp = 0;
            for (size_t i = 0; i < 9; i++)
            {
                pos[i] = " ";
            }
            break;
        //volta ao menu anterior
        case 2:
            escolha = 0;
            temp = 0;
            for (size_t i = 0; i < 9; i++)
            {
                pos[i] = " ";
            }
            RegistoPontuacao(nome, derrotas, empates, vitorias);
            return 0;
        //sai da aplicaçao
        case 3:
            RegistoPontuacao(nome, derrotas, empates, vitorias);
            exit(0);
        default:
            break;
        }
    } while (reiniciar);
}

void multi(string pos[9])
{
    string nomes[2], jogador[2];
    char temp;
    string lixo;

    cabecalho();
    cout << "Insira o nome do primeiro jogador: "; 
    getline(cin, lixo);
    getline(cin, nomes[0]);
    cout << "Insira o nome do segundo jogador: ";
    getline(cin, nomes[1]);
    system("cls");

    int primeiro = sorteio(nomes);

    cout << endl;
    cout << endl;

    cout << "Pressione uma tecla para continuar...";
    temp = _getch();

    system("cls");

    if (primeiro == 0)
    {
        jogador[0] = nomes[0];
        jogador[1] = nomes[1];
    }
    else
    {
        jogador[0] = nomes[1];
        jogador[1] = nomes[0];
    }

    int vez = 0;
    int contador = 0;
    string resultado = "";
    do
    {
        EscolhaUser(jogador[vez], vez, pos, "Nao aplicavel");
        contador++;
        if (vez == 0)
        {
            vez = 1;
        }
        else
        {
            vez = 0;
        }
        if (VerificarFim("X", pos) == 1)
        {
            resultado = jogador[0];
        }
        if (VerificarFim("O", pos) == 1)
        {
            resultado = jogador[1];
        }
        //verifica se ja nao ha mais casas livre e anuncia empate
        if (contador == 9)
        {
            resultado = "empate";
        }
        system("cls");
    } while (resultado == "");
    
    if (resultado == "empate")
    {
        cabecalho();
        tabuleiro(pos);
        Draw();
        cout << nomes[0] << " e " << nomes[1] << " voces empataram!!";
    }
    else
    {
        cabecalho();
        tabuleiro(pos);
        Taca();
        cout << "Parabens " << resultado << " voce venceu!!";
    }

    cout << endl;
    cout << "Pressione uma tecla para continuar...";
    temp = _getch();
    system("cls");
    //reset ao tabuleiro
    for (int i = 0; i < 9; i++)
    {
        pos[i] = " ";
    }
}

int main()
{
    //declarar e inicializar var
    char temp;
    int escolha;
    bool repetir;
    string pos[9];

    //inicializar as pos
    for (int i = 0; i < 9; i++)
    {
        pos[i] = " ";
    }

    //apresentacao
    cabecalho();
    tabuleiro(pos);
    cout << "A esquerda tem o guia de posicoes e a direita o tabuleiro.\n";
    cout << endl;
    cout << "Pressione uma tecla para iniciar o jogo...";
    temp = _getch();
    system("cls");
    do
    {
        repetir = false;
        //escolher single ou multi
        do
        {
            temp = 0;
            cabecalho();
            cout << "************************************\n";
            cout << "*                                  *\n";
            cout << "*             Escolha              *\n";
            cout << "*                                  *\n";
            cout << "*         1 - Um jogador           *\n";
            cout << "*                                  *\n";
            cout << "*       2 - Dois jogadores         *\n";
            cout << "*                                  *\n";
            cout << "*            3 - Sair              *\n";
            cout << "*                                  *\n";
            cout << "************************************\n\n\n";
            cout << "Escolha o modo de Jogo: ";
            //verifica se o escolhido foi uma das opçoes
            char c = getchar();
            if (isdigit(c)) //verifica se é numero
            {
                escolha = atoi(&c); //converte de char para int
                if (escolha == 1 || escolha == 2 || escolha == 3)
                {
                    temp = 1;
                }
            }
            system("cls");
        } while (temp == 0);
        system("cls");
        //verifica qual o modo de jogo escolhido
        switch (escolha)
        {
        case 1:
            single(pos);
            repetir = true;
            escolha = 0;
            break;
        case 2:
            multi(pos);
            repetir = true;
            escolha = 0;
            break;
        case 3:
            exit(0);
        default:
            break;
        }
    } while (repetir);

}
