#include <stdio.h>
#include <windows.h>
#include <string.h>

// funcao para capturar o enter
void esperarEnter(void) {

    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// funcao para fazer efeito de digitacao
void digitar(const char *texto) {

    for (int i = 0; texto[i] !=  '\0'; i++) {
        putchar(texto[i]);
        fflush(stdout);
        Sleep(80);
    }
}

// struct para os personagens
typedef struct personagem{
    char equipe[50];
    char nome[50];
    int vida;
    int ataque;
    int defesa;
    int energia;
    int velocidade;
} Personagem;

// vetor que ira armazenar os personagens de cada equipe
Personagem autobots[4];
Personagem decepticons[4];

// funcao para inicializar os personagens e colocar no vetor
void inicializarPersonagens(void) {
    // AUTOBOTS

    // OPTIMUS PRIME
    strcpy(autobots[0].equipe, "Autobots");
    strcpy(autobots[0].nome, "Optimus Prime");
    autobots[0].vida = 120;
    autobots[0].ataque = 28;
    autobots[0].defesa = 25;
    autobots[0].energia = 100;
    autobots[0].velocidade = 15;

    // BUMBLEBEE
    strcpy(autobots[1].equipe, "Autobots");
    strcpy(autobots[1].nome, "Bumblebee");
    autobots[1].vida = 85;
    autobots[1].ataque = 23;
    autobots[1].defesa = 12;
    autobots[1].energia = 110;
    autobots[1].velocidade = 30;

    // HOUND
    strcpy(autobots[2].equipe, "Autobots");
    strcpy(autobots[2].nome, "Hound");
    autobots[2].vida = 140;
    autobots[2].ataque = 25;
    autobots[2].defesa = 30;
    autobots[2].energia = 80;
    autobots[2].velocidade = 8;

    // DRIFT
    strcpy(autobots[3].equipe, "Autobots");
    strcpy(autobots[3].nome, "Drift");
    autobots[3].vida = 95;
    autobots[3].ataque = 30;
    autobots[3].defesa = 15;
    autobots[3].energia = 100;
    autobots[3].velocidade = 25;

    // DECEPTICONS

    // MEGATRON
    strcpy(decepticons[0].equipe, "Decepticons");
    strcpy(decepticons[0].nome, "Megatron");
    decepticons[0].vida = 130;
    decepticons[0].ataque = 32;
    decepticons[0].defesa = 25;
    decepticons[0].energia = 100;
    decepticons[0].velocidade = 12;

    // GALVATRON
    strcpy(decepticons[1].equipe, "Decepticons");
    strcpy(decepticons[1].nome, "Galvatron");
    decepticons[1].vida = 115;
    decepticons[1].ataque = 30;
    decepticons[1].defesa = 20;
    decepticons[1].energia = 120;
    decepticons[1].velocidade = 16;

    // LOCKDOWN
    strcpy(decepticons[2].equipe, "Decepticons");
    strcpy(decepticons[2].nome, "Lockdown");
    decepticons[2].vida = 100;
    decepticons[2].ataque = 29;
    decepticons[2].defesa = 18;
    decepticons[2].energia = 110;
    decepticons[2].velocidade = 28;

    // STINGER
    strcpy(decepticons[3].equipe, "Decepticons");
    strcpy(decepticons[3].nome, "Stinger");
    decepticons[3].vida = 80;
    decepticons[3].ataque = 25;
    decepticons[3].defesa = 12;
    decepticons[3].energia = 100;
    decepticons[3].velocidade = 32;
}

// funcao que recebe o id do autobot e retorna o struct correspondente
Personagem selecionarAutobot(int id) {

    switch (id) {

        case 1:
            return autobots[0];
            break;
        case 2:
            return autobots[1];
            break;
        case 3:
            return autobots[2];
        case 4:
            return autobots[3];
            break;
    }
}

// funcao para jogar com autobots
void jogarAutobots(void) {

    int opcao;

    do {
        printf("Boa escolha! Voce decidiu se juntar a Optimus Prime e sua equipe!\n");
        printf("Para comecar, escolha com qual personagem voce quer jogar\n");
        printf("-------------------------------\n");
        printf("1 - OPTIMUS PRIME\n");
        printf("2 - BUMBLEBEE\n");
        printf("3 - HOUND\n");
        printf("4 - DRIFT\n");
        printf("-------------------------------\n");
        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 4) {
            printf("Opcao invalida!Tente novamente!\n\n");
        }

    } while (opcao < 1 || opcao > 4);

    Personagem jogador;
    jogador = selecionarAutobot(opcao);

    printf("Voce jogara com:  %s", jogador.nome);


}

// funcao para historia de introducao
void iniciarHistoria(void) {
    digitar("TRANSFORMERS: A ERA DA EXTINCAO\n");
    printf("[Pressione ENTER para continuar]\n");
    esperarEnter();

    digitar("Ha milhares de anos os dinossauros foram extintos, "
            "devido a um meteoro que caiu na terra e provocou mudancas climaticas...\n");
    printf("[Pressione ENTER para continuar]\n");
    esperarEnter();

    digitar("O que muitos nao sabem e que esse meteoro era na verdade "
            "uma nave vinda do planeta Cybertron...\n");
    printf("[Pressione ENTER para continuar]\n");
    esperarEnter();

    digitar("Essa nave continha a primeira raca cybertroniana a chegar a terra.\n");
    printf("[Pressione ENTER para continuar]\n");
    esperarEnter();

    digitar("Antes que os dinossauros morressem, essa raca escaneou e tomou a forma deles.\n");
    printf("[Pressione ENTER para continuar]\n");
    esperarEnter();

    digitar("Essa especie cybertroniana ficou conhecida como Dinobots.\n");
    printf("[Pressione ENTER para continuar]\n");
    esperarEnter();

    digitar("Milhares de anos depois, duas novas racas chegaram a terra em busca "
            "de abrigo apos o planeta Cybertron entrar em guerra e ser destruido: "
            "os Autobots e os Decepticons.\n");
    printf("[Pressione ENTER para continuar]\n");
    esperarEnter();

    digitar("Os Autobots tem como lider Optimus Prime, cujo objetivo e proteger "
            "a terra e nao deixar que ela seja destruida.\n");
    printf("[Pressione ENTER para continuar]\n");
    esperarEnter();

    digitar("Ja os Decepticons sao comandados por Megatron, que antes de provocar "
            "a guerra em Cybertron, tentando tomar todo o poder, era irmao e "
            "lutava ao lado de Optimus Prime.\n");
    printf("[Pressione ENTER para continuar]\n");
    esperarEnter();

    digitar("Seu objetivo e conquistar a terra e transforma-la em seu novo imperio.\n");
    printf("[Pressione ENTER para continuar]\n");
    esperarEnter();

    printf("Agora que voce um pouco mais sobre a historia dos Cybertronianos chegou a hora de jogar!!\n");
    printf("A primeira escolha a se fazer e escolher um lado para lutar");
}

// funcao para iniciar o jogo
void iniciarJogo(void) {

    //iniciarHistoria();

    int opcao;

    do {
        printf("-------------------------------\n");
        printf("1 - AUTOBOTS\n");
        printf("2 - DECEPTICONS\n");
        printf("-------------------------------\n");
        printf("\nSelecione em qual equipe deseja lutar: ");
        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 2) {
            printf("ERROR! Opcao invalida! Tente novamente!\n");
        }

        else if (opcao == 1) {
            jogarAutobots();
        }

    } while (opcao < 1 || opcao > 2);

}



// funcao do menu
void menu(void) {

    int opcao;

    do {
        printf("-------------------------------\n");
        printf("TRANSFORMERS: A ERA DA EXTINCAO\n");
        printf("-------------------------------\n\n");
        printf("1 - Iniciar Jogo\n");
        printf("2 - Instrucoes\n");
        printf("3 - Creditos\n");
        printf("4 - Sair\n");
        printf("\nSelecione uma opcao acima: ");
        scanf("%d", &opcao);
        esperarEnter();

        switch (opcao) {

            case 1:
                iniciarJogo();
                break;

                default:
                printf("Opcao invalida! Tente novamente!\n");
        }

    } while (opcao < 1 || opcao > 4);

}
int main () {

    inicializarPersonagens();
    menu();
    return 0;
}