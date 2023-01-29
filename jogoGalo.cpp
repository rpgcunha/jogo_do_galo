#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cstdlib>
#include <ctime>
using namespace std;


string pos[9];

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

void EscolherRandom()
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

int FecharLinha()
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

int VerificarFim(string simbolo)
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

void EscolhaUser(string nome)
{
    bool livre = false;
    char temp;
    int jogada;

    cabecalho();
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
            pos[jogada] = "X";
        }
        else
        {
            cout << nome <<" essa posicao ja esta ocupada, tente novamente.\n";
        }
    } while (livre == false);
}

int CortarLinhaDificil()
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

int CortarLinhaNormal()
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

string facil(string nome)
{
    string vez = "user";
    bool livre = false;
    int contador = 0;

    do
    {
        //se for a vez do jogador
        if (vez == "user")
        {
            EscolhaUser(nome);
            vez = "cpu";
            contador++;
            system("cls");
            if (VerificarFim("X") == 1)
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
            if (FecharLinha()==1)
            {
                return "perdeu";
            }
            else
            {
                EscolherRandom();
            }
            vez = "user";
            contador++;
            system("cls");
            if (VerificarFim("O")==1)
            {
                return "perdeu";
            }
        }
    } while (true);
}

string Normal(string nome)
{
    string vez = "user";
    bool livre = false;
    int contador = 0;

    do
    {
        //se for a vez do jogador
        if (vez == "user")
        {
            EscolhaUser(nome);
            vez = "cpu";
            contador++;
            system("cls");
            if (VerificarFim("X") == 1)
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
            if (FecharLinha() == 1)
            {
                return "perdeu";
            }
            else
            {
                if (CortarLinhaNormal()==0)
                {
                    EscolherRandom();
                }
            }
            vez = "user";
            contador++;
            system("cls");
            if (VerificarFim("O") == 1)
            {
                return "perdeu";
            }
        }
    } while (true);
}

string Dificil(string nome)
{
    string vez = "user";
    bool livre = false;
    int contador = 0;

    do
    {
        //se for a vez do jogador
        if (vez == "user")
        {
            EscolhaUser(nome);
            vez = "cpu";
            contador++;
            system("cls");
            if (VerificarFim("X") == 1)
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
            if (FecharLinha() == 1)
            {
                return "perdeu";
            }
            else
            {
                if (CortarLinhaDificil() == 0)
                {
                    EscolherRandom();
                }
            }
            vez = "user";
            contador++;
            system("cls");
            if (VerificarFim("O") == 1)
            {
                return "perdeu";
            }
        }
    } while (true);
}

void single()
{
    int dificuldade;
    char temp = 0;
    string resultado, nome;

    //definer nome do utilizador
    cabecalho();
    cout << "Digite o seu nome: "; cin >> nome;
    system("cls");
    //ciclo para escolher a dificuldade, so avança depois de escolher uma opçao valida
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
        cout << "************************************\n\n\n";
        cout << nome << " escolha o modo de Jogo: ";

        char c = getchar();
        if (isdigit(c))
        {
            dificuldade = atoi(&c);
            if (dificuldade == 1 || dificuldade == 2 || dificuldade ==3)
            {
                temp = 1;
            }
        }
        system("cls");
    } while (temp==0);
    //avança para a dificuldade escolhida
    switch (dificuldade)
    {
    case 1:
        resultado = facil(nome);
        break;
    case 2 :
        resultado = Normal(nome);
        break;
    case 3:
        resultado = Dificil(nome);
        break;
    default:
        break;
    }

    if (resultado=="venceu")
    {
        cabecalho();
        tabuleiro(pos);
        Taca();
        cout << "Parabens " << nome << " Venceu!!";
    }
    if (resultado == "perdeu")
    {
        cabecalho();
        tabuleiro(pos);
        Caveira();
        cout << nome << " que pena, perdeu!!";
    }
    if (resultado == "empate")
    {
        cabecalho();
        tabuleiro(pos);
        Draw();
        cout << nome << " voce empatou!!";
    }

}

int main()
{
    //declarar e inicializar var
    bool sair = false;
    char temp;
    int modo;


    for (int i = 0; i < 9; i++)
    {
        pos[i] = " ";
    }

    //apresentacao
    cabecalho();
    tabuleiro(pos);
    cout << "Escolha a posicao onde quer jogar pelo guia de posicoes.\n";
    cout << endl;
    cout << "Pressione uma tecla para continuar...";
    temp = _getch();
    system("cls");

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
        cout << "*                                  *\n";
        cout << "************************************\n\n\n";
        cout << "Escolha o modo de Jogo: ";
        //verifica se o escolhido foi uma das opçoes
        char c = getchar();
        if (isdigit(c)) //verifica se é numero
        {
            modo = atoi(&c); //converte de char para int
            if (modo == 1 || modo == 2)
            {
                temp = 1;
            }
        }
        system("cls");
    } while (temp == 0);
    system("cls");
    //verifica qual o modo de jogo escolhido
    if (modo == 1)
    {
        single();
    }    
}
