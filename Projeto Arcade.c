#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    int j1;        // Receber o comando para o jogo
    int pergunta1; // Usada para receber a resposta da primeira pergunta
    int pergunta2; // Usada para receber a resposta da segunda pergunta
    int pergunta3; // Usada para receber a resposta da terceira pergunta
    int pergunta4; // Usada para receber a resposta da quarta pergunta
    int j2;        // Receber o comando para o jogo
    int j3;        // Receber o comando para o jogo
    int opcao;     // Receber as opcoes
    int opcao2;

    while (opcao != 4)
    {
        opcao = 1;
        // Comando de opções para os jogos
        printf("Escolha uma opcao:\n");
        printf("1 - Pergunta e resposta\n");
        printf("2 - Cobra na caixa\n");
        printf("3 - Gousmas War \n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);

<<<<<<< HEAD
        switch (opcao)
        {
        case 1:
            opcao2 = 1;
            printf("Voce escolheu JOGO1\n");
            while (opcao2)
            {
                // Primeira pergunta

                printf("'Em pleno 2022, ano da tecnologia', quem disse essa frase?\n [1] Toguro\n [2] Elon Musk\n [3] Cbum\n [4] Girotto\n");
                scanf("%d", &pergunta1);

                if (pergunta1 == 1)
                {
                    printf("Resposta correta! :)\n");
                }
                else if (pergunta1 != 1)
                {
                    printf("Resposta incorreta... :( \n");
                }

                // Segunda Pergunta
                printf("Qual das seguintes tecnologias e utilizada para enviar dados atraves de fibras oticas?\n [1]Wi-Fi\n [2]Bluetooth\n [3]NFC\n [4]Laser\n");
                scanf("%d", &pergunta2);

                if (pergunta2 == 4)
                {
                    printf("Resposta correta! :) \n");
                }
                else if (pergunta2 != 4)
                {
                    printf("Resposta incorreta... :( \n");
                }

                // Terceira Pergunta
                printf("Qual das seguintes tecnologias é usada para armazenar dados em dispositivos de armazenamento externo?\n [1]SSD\n [2]RAM\n [3]CPU\n [4]GPU\n");
                scanf("%d", &pergunta3);

                if (pergunta3 == 1)
                {
                    printf("Resposta correta! :) \n");
                }
                else if (pergunta3 != 1)
                {
                    printf("Resposta incorreta... :( \n");
                }

                // Quarta Pergunta
                printf("Qual das seguintes linguagens de programação é amplamente utilizada para desenvolver aplicativos para dispositivos móveis?\n [1]Python\n [2]Java\n [3]C#\n [4]Ruby\n");
                scanf("%d", &pergunta4);

                if (pergunta4 == 1)
                {
                    printf("Resposta correta! :) \n");
                }
                else if (pergunta4 != 2)
                {
                    printf("Resposta incorreta... :( \n");
                }

                printf("Voce gostaria de voltar ao menu?\n [0] SIM [1] NAO\n");
                scanf("%i", &opcao2);
            }
            break;

        case 2:
            printf("Voce escolheu JOGO2\n");
            opcao2 = 1;
            while (opcao2)
            {
#define NUM_BOXES 5

                void clear_input_buffer()
                {
                    int c;
                    while ((c = getchar()) != '\n' && c != EOF)
                    {
                    }
                }

                srand(time(NULL)); // inicializa a semente do gerador de números aleatório
                char name1[100];
                char name2[100];
                int player_turn;
                char boxes[NUM_BOXES] = {' ', ' ', ' ', ' ', ' '};
                int button_box = rand() % NUM_BOXES;
                int snake_box = rand() % NUM_BOXES;

                while (opcao2)
                {

                    while (snake_box == button_box)
                    {
                        snake_box = rand() % NUM_BOXES;
                    }
                    fflush(stdin);
                    printf("Digite o nome do primeiro jogador: ");
                    fgets(name1, 100, stdin);
                    name1[strcspn(name1, "\n")] = '\0'; // remove o caractere de nova linha do nome
                    printf("Digite o nome do segundo jogador: ");
                    fgets(name2, 100, stdin);
                    name2[strcspn(name2, "\n")] = '\0'; // remove o caractere de nova linha do nome
                    printf("\nBem-vindos ao jogo, %s e %s!\n", name1, name2);
                    printf("Voces estao presos em uma sala com 5 caixas. Uma das caixas contem um botao que abre a porta, as outras contem uma cobra mortal!\n");
                    printf("Voces vao jogar turnos para abrir uma caixa de cada vez, na esperanca de nao encontrar a cobra.\n");
                    printf("O jogador que descobrir a caixa que contem o botao ganha o jogo.\n");
                    printf("O jogador que descobrir a caixa que contem a cobra perde o jogo.\n");
                    printf("Boa sorte!\n\n");
                    player_turn = rand() % 2;
                    while (opcao2)
                    {
                        printf("%s, e a sua vez. Escolha uma caixa (1-5): ", player_turn == 0 ? name1 : name2);
                        int box_choice;
                        scanf("%d", &box_choice);
                        clear_input_buffer();
                        if (box_choice < 1 || box_choice > NUM_BOXES || boxes[box_choice - 1] != ' ')
                        {
                            printf("Escolha invalida. Por favor, tente novamente.\n");
                            continue;
                        }
                        printf("\n");
                        if (box_choice - 1 == button_box)
                        {
                            printf("Parabens, %s! Voce encontrou o botao e abriu a porta!\n", player_turn == 0 ? name1 : name2);
                            break;
                        }
                        else if (box_choice - 1 == snake_box)
                        {
                            printf("Voce abriu a caixa %d e encontrou uma cobra mortal! %s perdeu o jogo.\n", box_choice, player_turn == 0 ? name1 : name2);
                            break;
                        }
                        else
                        {
                            printf("Voce abriu a caixa %d e nao encontrou nada.\n\n", box_choice);
                            boxes[box_choice - 1] = 'X';
                            player_turn = 1 - player_turn;
                        }
                    }

                    printf("Desejam jogar novamente?  : ");
                    scanf("%i", &opcao2);

                    if (opcao2 == 0)
                    {
                        printf("tchau\n");
                    }
                    else if (opcao2 != 1 && opcao2 != 0)
                    {
                        printf("Escolha invalida. Por favor, tente novamente.\n");
                        opcao2 = 0;
                    }
                    else
                    {
                        printf("\nBem-vindos ao jogo novamente, %s e %s!\n", name1, name2);
                        player_turn = rand() % 2;
                        memset(boxes, ' ', sizeof(boxes));
                        button_box = rand() % NUM_BOXES;
                        snake_box = rand() % NUM_BOXES;
                        while (snake_box == button_box)
                        {
                            snake_box = rand() % NUM_BOXES;
                        }
                        continue;
                    }
                    break;
                }
            }
            break;
        case 3:
            opcao2 = 1;
            printf("Voce escolheu JOGO3\n");

#define MAX_GOUSMAS 2
#define MAX_FURY 5
            int j3;
            typedef struct
            {
                int fury_level;
            } Gousma;

            typedef struct
            {
                Gousma gousmas[MAX_GOUSMAS];
                int num_gousmas;
            } Player;

            void print_gousma(Gousma gousma)
            {
                printf("Gousma com nivel de furia %d\n", gousma.fury_level);
            }

            void print_player(Player player)
            {
                printf("Jogador com %d Gousmas:\n", player.num_gousmas);
                int i;
                for (i = 0; i < player.num_gousmas; i++)
                {
                    printf(" - ");
                    print_gousma(player.gousmas[i]);
                }
            }

            void attack_gousma(Gousma * attacker, Gousma * attacked)
            {
                attacked->fury_level += attacker->fury_level;
                attacker->fury_level = 1;
            }

            void divide_gousma(Gousma * gousma1, Gousma * gousma2, int fury)
            {
                if (fury >= gousma1->fury_level)
                {
                    printf("Erro: valor de furia inválido para divisao\n");
                    return;
                }

                gousma2->fury_level = fury;
                gousma1->fury_level -= fury;
            }

            srand(time(NULL)); // Inicializa gerador de números aleatórios

            Player players[2];
            players[0].num_gousmas = 2;
            players[1].num_gousmas = 2;

            // Escolhe aleatoriamente qual jogador começa
            int current_player = rand() % 2;

            printf("Jogador %d começa o jogo\n", current_player + 1);

            while (opcao2)
            {
                // Verifica se algum jogador perdeu todas as suas Gousmas
                if (players[current_player].num_gousmas == 0)
                {
                    printf("Jogador %d perdeu o jogo\n", current_player + 1);
                    break;
                }

                // Exibe informações dos jogadores
                printf("=== Turno do jogador %d ===\n", current_player + 1);
                printf("Status atual dos jogadores:\n");
                print_player(players[0]);
                printf("\n");
                print_player(players[1]);
                printf("\n");

                int action;
                printf("Escolha uma acao (1 - Atacar, 2 - Dividir): ");
                scanf("%d", &action);

                if (action == 1)
                {
                    // Seleciona Gousma para atacar
                    int attacker_idx;
                    printf("Escolha a Gousma que irá atacar (1 ou 2): ");
                    scanf("%d", &attacker_idx);
                    attacker_idx--;

                    // Seleciona Gousma para ser atacada
                    int attacked_idx;
                    printf("Escolha a Gousma que será atacada pelo jogador %d (1 ou 2): ", (current_player + 1) % 2 + 1);
                    scanf("%d", &attacked_idx);
                    attacked_idx--;

                    // Executa ataque
                    attack_gousma(&players[current_player].gousmas[attacker_idx], &players[(current_player + 1) % 2].gousmas[attacked_idx]);
                }
                else if (action == 2)
                {
                    // Seleciona Gousma para dividir
                    int gousma1_idx;
                    printf("Escolha a Gousma que sera dividida (1 ou 2): ");
                    scanf("%d", &gousma1_idx);
                    gousma1_idx--;

                    // Seleciona Gousma para receber a divisão
                    int gousma2_idx;
                    printf("Escolha a Gousma que recebera a divisao (1 ou 2): ");
                    scanf("%d", &gousma2_idx);
                    gousma2_idx--;

                    // Seleciona nível de furia para a divisão
                    int fury;
                    printf("Escolha o nivel de furia para a divisao (0 a %d): ", players[current_player].gousmas[gousma1_idx].fury_level - 1);
                    scanf("%d", &fury);

                    // Executa divisão
                    divide_gousma(&players[current_player].gousmas[gousma1_idx], &players[current_player].gousmas[gousma2_idx], fury);
                }
                else
                {
                    printf("Opico invalida, tente novamente\n");
                    continue;
                }
                // Verifica se alguma Gousma foi derrotada
                int i; // Move a declaração de variável para fora do laço
                for (i = 0; i < MAX_GOUSMAS; i++)
                {
                    if (players[0].gousmas[i].fury_level > MAX_FURY)
                    {
                        printf("Jogador 1 perdeu a Gousma %d\n", i + 1);
                        players[0].gousmas[i].fury_level = 0;
                        players[0].num_gousmas--;
                    }
                    if (players[1].gousmas[i].fury_level > MAX_FURY)
                    {
                        printf("Jogador 2 perdeu a Gousma %d\n", i + 1);
                        players[1].gousmas[i].fury_level = 0;
                        players[1].num_gousmas--;
                    }
                }

                // Troca de jogador
                current_player = (current_player + 1) % 2;
            }

            break;
        case 4:
            printf("Saindo...\n");
            return 0;
        default:
            printf("Opcao invalida, tente novamente.\n");
            break;
        }
    }
    == == == =
                 switch (opcao)
    {
    case 1:
        opcao2 = 1;
        printf("Voce escolheu JOGO1\n");
        while (opcao2)
        {
            // Primeira pergunta

            printf("'Em pleno 2022, ano da tecnologia', quem disse essa frase?\n [1] Toguro\n [2] Elon Musk\n [3] Cbum\n [4] Girotto\n");
            scanf("%d", &pergunta1);

            if (pergunta1 == 1)
            {
                printf("Resposta correta! :)\n");
            }
            else if (pergunta1 != 1)
            {
                printf("Resposta incorreta... :( \n");
            }

            // Segunda Pergunta
            printf("Qual das seguintes tecnologias e utilizada para enviar dados atraves de fibras oticas?\n [1]Wi-Fi\n [2]Bluetooth\n [3]NFC\n [4]Laser\n");
            scanf("%d", &pergunta2);

            if (pergunta2 == 4)
            {
                printf("Resposta correta! :) \n");
            }
            else if (pergunta2 != 4)
            {
                printf("Resposta incorreta... :( \n");
            }

            // Terceira Pergunta
            printf("Qual das seguintes tecnologias é usada para armazenar dados em dispositivos de armazenamento externo?\n [1]SSD\n [2]RAM\n [3]CPU\n [4]GPU\n");
            scanf("%d", &pergunta3);

            if (pergunta3 == 1)
            {
                printf("Resposta correta! :) \n");
            }
            else if (pergunta3 != 1)
            {
                printf("Resposta incorreta... :( \n");
            }

            // Quarta Pergunta
            printf("Qual das seguintes linguagens de programação é amplamente utilizada para desenvolver aplicativos para dispositivos móveis?\n [1]Python\n [2]Java\n [3]C#\n [4]Ruby\n");
            scanf("%d", &pergunta4);

            if (pergunta4 == 1)
            {
                printf("Resposta correta! :) \n");
            }
            else if (pergunta4 != 2)
            {
                printf("Resposta incorreta... :( \n");
            }

            printf("Voce gostaria de voltar ao menu?\n [0] SIM [1] NAO\n");
            scanf("%i", &opcao2);
        }
        break;

    case 2:
        printf("Voce escolheu JOGO2\n");
        opcao2 = 1;
        while (opcao2)
        {
#define NUM_BOXES 5

            void clear_input_buffer()
            {
                int c;
                while ((c = getchar()) != '\n' && c != EOF)
                {
                }
            }

            srand(time(NULL)); // inicializa a semente do gerador de números aleatório
            char name1[100];
            char name2[100];
            int player_turn;
            char boxes[NUM_BOXES] = {' ', ' ', ' ', ' ', ' '};
            int button_box = rand() % NUM_BOXES;
            int snake_box = rand() % NUM_BOXES;

            while (opcao2)
            {

                while (snake_box == button_box)
                {
                    snake_box = rand() % NUM_BOXES;
                }
                fflush(stdin);
                printf("Digite o nome do primeiro jogador: ");
                fgets(name1, 100, stdin);
                name1[strcspn(name1, "\n")] = '\0'; // remove o caractere de nova linha do nome
                printf("Digite o nome do segundo jogador: ");
                fgets(name2, 100, stdin);
                name2[strcspn(name2, "\n")] = '\0'; // remove o caractere de nova linha do nome
                printf("\nBem-vindos ao jogo, %s e %s!\n", name1, name2);
                printf("Voces estao presos em uma sala com 5 caixas. Uma das caixas contem um botao que abre a porta, as outras contem uma cobra mortal!\n");
                printf("Voces vao jogar turnos para abrir uma caixa de cada vez, na esperanca de nao encontrar a cobra.\n");
                printf("O jogador que descobrir a caixa que contem o botao ganha o jogo.\n");
                printf("O jogador que descobrir a caixa que contem a cobra perde o jogo.\n");
                printf("Boa sorte!\n\n");
                player_turn = rand() % 2;
                while (opcao2)
                {
                    printf("%s, e a sua vez. Escolha uma caixa (1-5): ", player_turn == 0 ? name1 : name2);
                    int box_choice;
                    scanf("%d", &box_choice);
                    clear_input_buffer();
                    if (box_choice < 1 || box_choice > NUM_BOXES || boxes[box_choice - 1] != ' ')
                    {
                        printf("Escolha invalida. Por favor, tente novamente.\n");
                        continue;
                    }
                    printf("\n");
                    if (box_choice - 1 == button_box)
                    {
                        printf("Parabens, %s! Voce encontrou o botao e abriu a porta!\n", player_turn == 0 ? name1 : name2);
                        break;
                    }
                    else if (box_choice - 1 == snake_box)
                    {
                        printf("Voce abriu a caixa %d e encontrou uma cobra mortal! %s perdeu o jogo.\n", box_choice, player_turn == 0 ? name1 : name2);
                        break;
                    }
                    else
                    {
                        printf("Voce abriu a caixa %d e nao encontrou nada.\n\n", box_choice);
                        boxes[box_choice - 1] = 'X';
                        player_turn = 1 - player_turn;
                    }
                }

                printf("Desejam jogar novamente?  : ");
                scanf("%i", &opcao2);

                if (opcao2 == 0)
                {
                    printf("tchau\n");
                }
                else if (opcao2 != 1 && opcao2 != 0)
                {
                    printf("Escolha invalida. Por favor, tente novamente.\n");
                    opcao2 = 0;
                }
                else
                {
                    printf("\nBem-vindos ao jogo novamente, %s e %s!\n", name1, name2);
                    player_turn = rand() % 2;
                    memset(boxes, ' ', sizeof(boxes));
                    button_box = rand() % NUM_BOXES;
                    snake_box = rand() % NUM_BOXES;
                    while (snake_box == button_box)
                    {
                        snake_box = rand() % NUM_BOXES;
                    }
                    continue;
                }
                break;
            }
        }
        break;
    case 3:
        opcao2 = 1;
        printf("Voce escolheu JOGO3\n");

#define MAX_GOUSMAS 2
#define MAX_FURY 5
        int j3;
        typedef struct
        {
            int fury_level;
        } Gousma;

        typedef struct
        {
            Gousma gousmas[MAX_GOUSMAS];
            int num_gousmas;
        } Player;

        void print_gousma(Gousma gousma)
        {
            printf("Gousma com nivel de furia %d\n", gousma.fury_level);
        }

        void print_player(Player player)
        {
            printf("Jogador com %d Gousmas:\n", player.num_gousmas);
            int i;
            for (i = 0; i < player.num_gousmas; i++)
            {
                printf(" - ");
                print_gousma(player.gousmas[i]);
            }
        }

        void attack_gousma(Gousma * attacker, Gousma * attacked)
        {
            attacked->fury_level += attacker->fury_level;
            attacker->fury_level = 1;
        }

        void divide_gousma(Gousma * gousma1, Gousma * gousma2, int fury)
        {
            if (fury >= gousma1->fury_level)
            {
                printf("Erro: valor de furia inválido para divisao\n");
                return;
            }

            gousma2->fury_level = fury;
            gousma1->fury_level -= fury;
        }

        srand(time(NULL)); // Inicializa gerador de números aleatórios

        Player players[2];
        players[0].num_gousmas = 2;
        players[1].num_gousmas = 2;

        // Escolhe aleatoriamente qual jogador começa
        int current_player = rand() % 2;

        printf("Jogador %d começa o jogo\n", current_player + 1);

        while (opcao2)
        {
            // Verifica se algum jogador perdeu todas as suas Gousmas
            if (players[current_player].num_gousmas == 0)
            {
                printf("Jogador %d perdeu o jogo\n", current_player + 1);
                break;
            }

            // Exibe informações dos jogadores
            printf("=== Turno do jogador %d ===\n", current_player + 1);
            printf("Status atual dos jogadores:\n");
            print_player(players[0]);
            printf("\n");
            print_player(players[1]);
            printf("\n");

            int action;
            printf("Escolha uma acao (1 - Atacar, 2 - Dividir): ");
            scanf("%d", &action);

            if (action == 1)
            {
                // Seleciona Gousma para atacar
                int attacker_idx;
                printf("Escolha a Gousma que irá atacar (1 ou 2): ");
                scanf("%d", &attacker_idx);
                attacker_idx--;

                // Seleciona Gousma para ser atacada
                int attacked_idx;
                printf("Escolha a Gousma que será atacada pelo jogador %d (1 ou 2): ", (current_player + 1) % 2 + 1);
                scanf("%d", &attacked_idx);
                attacked_idx--;

                // Executa ataque
                attack_gousma(&players[current_player].gousmas[attacker_idx], &players[(current_player + 1) % 2].gousmas[attacked_idx]);
            }
            else if (action == 2)
            {
                // Seleciona Gousma para dividir
                int gousma1_idx;
                printf("Escolha a Gousma que sera dividida (1 ou 2): ");
                scanf("%d", &gousma1_idx);
                gousma1_idx--;

                // Seleciona Gousma para receber a divisão
                int gousma2_idx;
                printf("Escolha a Gousma que recebera a divisao (1 ou 2): ");
                scanf("%d", &gousma2_idx);
                gousma2_idx--;

                // Seleciona nível de furia para a divisão
                int fury;
                printf("Escolha o nivel de furia para a divisao (0 a %d): ", players[current_player].gousmas[gousma1_idx].fury_level - 1);
                scanf("%d", &fury);

                // Executa divisão
                divide_gousma(&players[current_player].gousmas[gousma1_idx], &players[current_player].gousmas[gousma2_idx], fury);
            }
            else
            {
                printf("Opico invalida, tente novamente\n");
                continue;
            }
            // Verifica se alguma Gousma foi derrotada
            int i; // Move a declaração de variável para fora do laço
            for (i = 0; i < MAX_GOUSMAS; i++)
            {
                if (players[0].gousmas[i].fury_level > MAX_FURY)
                {
                    printf("Jogador 1 perdeu a Gousma %d\n", i + 1);
                    players[0].gousmas[i].fury_level = 0;
                    players[0].num_gousmas--;
                }
                if (players[1].gousmas[i].fury_level > MAX_FURY)
                {
                    printf("Jogador 2 perdeu a Gousma %d\n", i + 1);
                    players[1].gousmas[i].fury_level = 0;
                    players[1].num_gousmas--;
                }
            }

            // Troca de jogador
            current_player = (current_player + 1) % 2;
        }

        break;
    case 4:
        printf("Saindo...\n");
        return 0;
    default:
        printf("Opcao invalida, tente novamente.\n");
        break;
    }
}
>>>>>>> 57a1435 (Adição readme e indentação do código)
return 0;
}
