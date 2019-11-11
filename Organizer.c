#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Menu() {

    printf("::::::::::::::::::::::::::::::::::::: MENU ::::::::::::::::::::::::::::::::::::: \n");
    printf("\n");
    printf("   [01] Inserir uma pessoa na agenda         [02] Busca por nome \n");
    printf("\n");
    printf("   [03] Busca por data de nascimento         [04] Imprimir agenda \n");
    printf("\n");
    printf("   [05] SAIR \n");
    printf("\n");
    printf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: \n");

}

struct Endereco {

        char Rua[50];
        char Bairro[50];
        char Cidade[50];
        char Estado[50];
        char Pais[50];

        int Numero;
        int CEP;

};

struct Nascimento {

        int Dia;
        int Mes;
        int Ano;

    };

struct Telefone {

        int DDD;
        int Numero;

    };

struct Pessoa {

    char Nome[100];
    char Email[50];
    char Obs[200];

    struct Telefone Telefone_pessoa;
    struct Nascimento Nascimento_pessoa;
    struct Endereco Endereco_pessoa;

};



int main() {

    int Escolha, i;
    int Flag;

    struct Pessoa Registro_de_pessoas[100];

    i = 0;
    Flag = 1;

    while (Flag == 1){

        Menu();

        scanf("%d", &Escolha);

        if (Escolha == 01 || Escolha == 1){

            i = i + 1; //contador para rodar o vetor de structs

            printf(":: Insira o nome da pessoa a ser cadastrada na agenda :: \n");
            gets(Registro_de_pessoas[i].Nome);

            printf(":: Insira o e-mail da pessoa a ser cadastrada na agenda :: \n");
            gets(Registro_de_pessoas[i].Email);

            printf(":: Insira a data de nascimento da pessoa a ser cadastrada na agenda :: \n");
            printf(":: Dia :: \n");
            scanf("%d", &Registro_de_pessoas[i].Nascimento_pessoa.Dia);

            printf(":: Mês :: \n");
            scanf("%d", &Registro_de_pessoas[i].Nascimento_pessoa.Mes);

            printf(":: Ano :: \n");
            scanf("%d", &Registro_de_pessoas[i].Nascimento_pessoa.Ano);

            printf(":: Insira o telefone da pessoa a ser cadastrada na agenda ::\n");
            scanf("%d", &Registro_de_pessoas[i].Telefone_pessoa.Numero);

            printf(":: Insira o DDD do telefone :: \n");
            scanf("%d", &Registro_de_pessoas[i].Telefone_pessoa.DDD);

            printf(":: Dados sobre o endereço :: \n");
            printf(":: Insira o nome da rua :: \n");
            gets(Registro_de_pessoas[i].Endereco_pessoa.Rua);

            printf(":: Insira o número da residencia :: \n");
            gets(Registro_de_pessoas[i].Endereco_pessoa.Numero);

            printf(":: Insira o bairro :: \n");
            gets(Registro_de_pessoas[i].Endereco_pessoa.Bairro);

            printf(":: Insira o nome da cidade :: \n");
            gets(Registro_de_pessoas[i].Endereco_pessoa.Cidade);

            printf(":: Insira o CEP da cidade :: \n");
            scanf("%d", &Registro_de_pessoas[i].Endereco_pessoa.CEP);

            printf(":: Insira o estado :: \n");
            gets(Registro_de_pessoas[i].Endereco_pessoa.Estado);

            printf(":: Insira o pais :: \n");
            gets(Registro_de_pessoas[i].Endereco_pessoa.Pais);

        }

        if (Escolha == 02 || Escolha == 2){

            int j;
            char Nome_requisitado;

            printf(":: Insira o nome a ser buscado na agenda :: \n");
            gets(Nome_requisitado);

            for (j = 0; j < 100; j ++){

                if (strcmp(Nome_requisitado, Registro_de_pessoas[j].Nome) == 1){

                    printf(":: Nome encontrado :: \n");
                    printf("\n");
                    printf(":: Exibindo informações :: \n");
                    printf("\n");
                    printf("Nome : %s \n", Registro_de_pessoas[j].Nome);
                    printf("E-mail : %s \n", Registro_de_pessoas[j].Email);
                    printf("Nascimento : %d / %d / %d \n", Registro_de_pessoas[j].Nascimento_pessoa.Dia, Registro_de_pessoas[j].Nascimento_pessoa.Mes, Registro_de_pessoas[j].Nascimento_pessoa.Ano);
                    printf("Telefone : %d %d",Registro_de_pessoas[j].Telefone_pessoa.DDD, Registro_de_pessoas[j].Telefone_pessoa.Numero);
                    printf("\n");
                    printf(":: Dados do endereço :: \n");
                    printf("\n");
                    printf("Rua: %s \n", Registro_de_pessoas[j].Endereco_pessoa.Rua);
                    printf("Numero da residencia : %d \n", Registro_de_pessoas[j].Endereco_pessoa.Numero);
                    printf("Bairro : %s \n", Registro_de_pessoas[j].Endereco_pessoa.Bairro);
                    printf("Cidade : %s \n", Registro_de_pessoas[j].Endereco_pessoa.Cidade);
                    printf("CEP : %d \n", Registro_de_pessoas[j].Endereco_pessoa.CEP);
                    printf("Estado : %s \n", Registro_de_pessoas[j].Endereco_pessoa.Estado);
                    printf("Pais : %s \n", Registro_de_pessoas[j].Endereco_pessoa.Pais);

                }

            }

        }
        
        if (Escolha == 03 || Escolha == 3){

            int Dia_requisitado, Mes_requisitado, Ano_requisitado;
            int k;

            scanf("%d/%d/%d", &Dia_requisitado, &Mes_requisitado, &Ano_requisitado);

            for (k = 0; k < 100; k ++){

                if (Dia_requisitado == Registro_de_pessoas[k].Nascimento_pessoa.Dia && Mes_requisitado == Registro_de_pessoas[k].Nascimento_pessoa.Mes && Ano_requisitado == Registro_de_pessoas[k].Nascimento_pessoa.Ano);

                    printf(":: Data de nascimento encontrada :: \n");
                    printf("\n");
                    printf(":: Exibindo informações :: \n");
                    printf("\n");
                    printf("Nome : %s \n", Registro_de_pessoas[k].Nome);
                    printf("E-mail : %s \n", Registro_de_pessoas[k].Email);
                    printf("Nascimento : %d / %d / %d \n", Registro_de_pessoas[k].Nascimento_pessoa.Dia, Registro_de_pessoas[k].Nascimento_pessoa.Mes, Registro_de_pessoas[k].Nascimento_pessoa.Ano);
                    printf("Telefone : %d %d",Registro_de_pessoas[k].Telefone_pessoa.DDD, Registro_de_pessoas[k].Telefone_pessoa.Numero);
                    printf("\n");
                    printf(":: Dados do endereço :: \n");
                    printf("\n");
                    printf("Rua: %s \n", Registro_de_pessoas[k].Endereco_pessoa.Rua);
                    printf("Numero da residencia : %d \n", Registro_de_pessoas[k].Endereco_pessoa.Numero);
                    printf("Bairro : %s \n", Registro_de_pessoas[k].Endereco_pessoa.Bairro);
                    printf("Cidade : %s \n", Registro_de_pessoas[k].Endereco_pessoa.Cidade);
                    printf("CEP : %d \n", Registro_de_pessoas[k].Endereco_pessoa.CEP);
                    printf("Estado : %s \n", Registro_de_pessoas[k].Endereco_pessoa.Estado);
                    printf("Pais : %s \n", Registro_de_pessoas[k].Endereco_pessoa.Pais);

            }

        }
    }


}
