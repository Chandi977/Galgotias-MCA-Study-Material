#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void show_record();
void reset_score();
void help();
void edit_score(float, char []);

int main(){
    int countr, r, r1, count, i, n;
    float score;
    char choice;
    char playername[20];
    time_t t;

    time(&t);

    printf("=================== your name please =====================\n\t\t");
    fgets(playername, 20, stdin);

    mainhome:
    printf("Clear");
    printf("\n\t\t___________________________________________________");

    printf("\n\t\t\t                 WELCOME ");
    printf("\n\t\t\t                    TO ");
    printf("\n\t\t\t           QUIZ GAME %s", playername);
    printf("\n\t\t___________________________________________________");
    printf("\n\t\t___________________________________________________");
    printf("\n\t\t      TEST YOUR GK...SET YOUR HIGH SCORE !!  ");
    printf("\n\t\t___________________________________________________");
    printf("\n\t\t___________________________________________________");
    printf("\n\t\t -> Press S to start the game");
    printf("\n\t\t -> Press V to view the highest score");
    printf("\n\t\t -> Press R to reset score");
    printf("\n\t\t -> Press H for help");
    printf("\n\t\t -> Press Q to quit the game");
    printf("\n\t\t___________________________________________________");

    for (int i = 0; i<80; i++){
        printf("=");
    }
    printf("\nCurrent date and time : %s", ctime(&t));
    for (int i = 0; i<80; i++){
        printf("=");
    }
    printf("\n");

    choice = toupper(getchar());
    getchar();

    if(choice == 'S'){
        system("Clear");
        printf("------------------------------ Welcome %s to C Program Quiz Game--------------------------", playername);
        printf("\n\n                 Here are some tips you might wanna know before playing : ");
        printf("------------------------------------------------------------------------------------------");

        printf("\n >> There are 2 rounds in this Quiz Game , WARMUP ROUND & CHALLENGE");
        printf("\n >> In Warmup Round You Will be Asked total 6 Questions to test your");
        printf("\n    general knowledge. you are eligible to play the game if you give atleast 2");
        printf("\n    Right answers , otherwise you can't process further to the challenge");
        printf("\n >> Your game starts with CHALLENGE ROUND . In this round you will be asked  ");
        printf("\n    total of 23 questions. Each right answer will be awarded $100.00 !! ");
        printf("\n    By this way you can win upto one MILLION cash prize!!!!!!.....");
        printf("\n >> You will be given 4 options and you haveto press A, B, C or D for the");
        printf("\n    the right option.");
        printf("\n >> You will be asked questions continuously ,till right answers are given");
        printf("\n >> No negative marking for the wrong answers !");
        printf("\n\n\t!!!!!!!!!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!!!!!!!");
        printf("\n\n\n Press Y To start the game !\n");
        printf("\n Press any other key to return to the main menu !\n");

        if(toupper(getchar()) == 'Y'){
            goto home;
        } else {
            goto mainhome;
        }
    }
    if(choice == 'H'){
        help();
        getchar();
        goto mainhome;
    } else if(choice == 'V'){
        show_record();
        goto mainhome;
    } else if(choice == 'R'){
        reset_score();
        getchar();
        goto mainhome;
    } else if(choice == 'Q'){
        system("Clear");
        printf("==================== Thanks for playing ====================");
        exit(1);
    } else{
        printf("please choose anything : ");
        goto mainhome;
    }

    home:
    system("Clear");
    count = 0;
    for( i = 1; i<=6; i++){
        getchar();
        system("Clear");
        r1 = i;
        switch (r1)
        {
        case 1 :
            printf("\n\n What is Tunisia ??");
            printf("\n\nA. Car\t\tB. Disease\t\tC. Country\t\tD. Animal");
            if(toupper(getchar() == 'C')){
                printf("\n\nCorrect !!!");
                getchar();
                count++;
                break;
            } 
            else {
                printf("\n\n Wrong !!! The correct Answer is C. country\n");
                getchar();
                break;
            }
        case 2:
            printf("\n\n Where is Tunisia ??");
            printf("\n\nA. America\t\tB. Asia\t\tC. North Africa\t\tD. Europe");
            if(toupper(getchar() == 'C')){
                printf("\n\nCorrect !!!");
                getchar();
                count++;
                break;
            } 
            else {
                printf("\n\n Wrong !!! The correct Answer is C. North Africa\n");
                getchar();
                break;
            }
        case 3:
            printf("\n\n What is the language of  Tunisia ??");
            printf("\n\nA. French\t\tB. Arabic\t\tC. English\t\tD. Bambara");
            if(toupper(getchar() == 'B')){
                printf("\n\nCorrect !!!");
                getchar();
                count++;
                break;
            } 
            else {
                printf("\n\n Wrong !!! The correct Answer is B. Arabic\n");
                getchar();
                break;
            }
        case 4:
            printf("\n\n What is the currency of  Tunisia ??");
            printf("\n\nA. Dollar\t\tB. Dinar\t\tC. Franc\t\tD. Rupee");
            if(toupper(getchar() == 'B')){
                printf("\n\nCorrect !!!");
                getchar();
                count++;
                break;
            } 
            else {
                printf("\n\n Wrong !!! The correct Answer is B. Dinar\n");
                getchar();
                break;
            }
        case 5:
            printf("\n\n What is the Capital of  Tunisia ??");
            printf("\n\nA. Mahres\t\tB. Tunis\t\tC. Sousse\t\tD. Gafga");
            if(toupper(getchar() == 'B')){
                printf("\n\nCorrect !!!");
                getchar();
                count++;
                break;
            } 
            else {
                printf("\n\n Wrong !!! The correct Answer is B. Tunis\n");
                getchar();
                break;
            }
        case 6:
            printf("\n\n What is the Religion of  Tunisia ??");
            printf("\n\nA. Christian\t\tB. Hinduism\t\tC. Buddhism\t\tD. Islam");
            if(toupper(getchar() == 'D')){
                printf("\n\nCorrect !!!");
                getchar();
                count++;
                break;
            } 
            else {
                printf("\n\n Wrong !!! The correct Answer is D. Islam\n");
                getchar();
                break;
            }
        default:
            break;
        }
    }
    printf("\n The number of correct answer = %d", count);
    if(count>= 2){
        goto test;
    } else{
        system("Clear");
        printf("\n\n  SORRY YOU ARE NOT ELIGIBLE TO PLAY THE GAME , BETTER LUCK NEXT TIME");
        getchar();
        goto mainhome;
    }

    test:
    system("Clear");
    printf("\n\n\t ************** CONGRATULATIONS %s you are eligible to play the game **************", playername);
    printf("\n\n\n\n\t Press P to start the game ! \n");
    if(toupper(getchar()) == 'P'){
        goto game;
    } else{
        goto mainhome;
    }

    game: 
    system("Clear");
    countr = 0;
    for( i =1; i<=23; i++){
        getchar();
        system("Clear");
        r=i;
        switch (r)
        {
        case 1:
            printf("\n\n How many countries are in Africa ??");
            printf("\n\nA. 13\t\tB. 14\t\tC. 54\t\tD. 53\n");
            if(toupper(getchar()) == 'C'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is C.54\n");
                getchar();
                goto score;
                break;
            }
        
        case 2:
            printf("\n\n Study of Earthqake is called... ??");
            printf("\n\nA. Seismology\t\tB. Cosmology\t\tC. Orology\t\tD. Etiomology\n");
            if(toupper(getchar()) == 'A'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is A.Seismology\n");
                getchar();
                goto score;
                break;
            }
        
        case 3:
            printf("\n\n Where is mount Everest ??");
            printf("\n\nA. Algeria\t\tB. Africa\t\tC. china-Nepal border\t\tD. Russia\n");
            if(toupper(getchar()) == 'C'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is C.china-Nepal Border\n");
                getchar();
                goto score;
                break;
            }
        
        case 4:
            printf("\n\n The Law of electromanetic induction is given by  ??");
            printf("\n\nA. Faraday\t\tB. Tesla\t\tC. Maxwell\t\tD. Coulomb\n");
            if(toupper(getchar()) == 'A'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is A.Faraday\n");
                getchar();
                goto score;
                break;
            }
        
        case 5:
            printf("\n\n Grand central terminal, park avenue, new york is the world's ??");
            printf("\n\nA. largest railway station\t\tB. highest railway station\t\tC. longest railway station\t\tD. None of these\n");
            if(toupper(getchar()) == 'A'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is A.largest railway station\n");
                getchar();
                goto score;
                break;
            }
        
        case 6:
            printf("\n\n Entomology is the science deals with  ??");
            printf("\n\nA. Behaviour of human\t\tB. insects\t\tC. history of science\t\tD. formation of rocks\n");
            if(toupper(getchar()) == 'B'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is B.insects\n");
                getchar();
                goto score;
                break;
            }
        
        case 7:
            printf("\n\n Garampani santuary is located at  ??");
            printf("\n\nA. Junagarh, gujrat\t\tB. Diphu, assam\t\tC. Kohima, nagaland\t\tD. Gangtok, sikkim\n");
            if(toupper(getchar()) == 'B'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is B.Diphu, assam\n");
                getchar();
                goto score;
                break;
            }
        
        case 8:
            printf("\n\n For which of the following disciplines is nobel prize awarded ??");
            printf("\n\nA. Physics & chemistry\t\tB. physiology &medicine\t\tC. literature & economics\t\tD. All of these\n");
            if(toupper(getchar()) == 'D'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is D.All of the above\n");
                getchar();
                goto score;
                break;
            }
        
        case 9:
            printf("\n\n Which is the longest river in the world ??");
            printf("\n\nA. ganga\t\tB. Nile\t\tC. Amazon\t\tD. Niger\n");
            if(toupper(getchar()) == 'B'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is B.Nile\n");
                getchar();
                goto score;
                break;
            }
        
        case 10:
            printf("\n\n which is the india's first super computer ??");
            printf("\n\nA. Param8000\t\tB. Param800000\t\tC. param800\t\tD. param8\n");
            if(toupper(getchar()) == 'A'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is A.Param8000\n");
                getchar();
                goto score;
                break;
            }
        
        case 11:
            printf("\n\n Which is the largest island in the world ??");
            printf("\n\nA. New Guinea\t\tB. Andman Nicobar\t\tC. Greenland\t\tD. Hawaii\n");
            if(toupper(getchar()) == 'C'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is C.Greenland\n");
                getchar();
                goto score;
                break;
            }
        
        case 12:
            printf("\n\n who was the programmer of the MS-DOS OS ??");
            printf("\n\nA. Tim Paterson\t\tB. Andrew N.\t\tC. Bill Gates\t\tD. Dennis Ritchie\n");
            if(toupper(getchar()) == 'A'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is A.Tim Paterson\n");
                getchar();
                goto score;
                break;
            }
        
        case 13:
            printf("\n\n Which technology is used in a CDROM drive ??");
            printf("\n\nA. Glass\t\tB. Hybrid\t\tC. Optical\t\tD. All of these\n");
            if(toupper(getchar()) == 'C'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is C.Optical\n");
                getchar();
                goto score;
                break;
            }
        
        case 14:
            printf("\n\n What is the scientific naame of the computer ??");
            printf("\n\nA. Homo Silicum\t\tB. Homo digitalis\t\tC. Homo Computatrix\t\tD. Silico Sapiens\n");
            if(toupper(getchar()) == 'D'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is D.Silico Sapiens\n");
                getchar();
                goto score;
                break;
            }
        
        case 15:
            printf("\n\n Who is the father of personal computer ??");
            printf("\n\nA. Bill Gates\t\tB. Steve jobs\t\tC. Alan turing\t\tD. Ed robert\n");
            if(toupper(getchar()) == 'D'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is D.Ed robert\n");
                getchar();
                goto score;
                break;
            }
        
        case 16:
            printf("\n\n How many characters are there in ASCII ??");
            printf("\n\nA. 1024\t\tB. 128\t\tC. 256\t\tD. 512\n");
            if(toupper(getchar()) == 'B'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is B.128\n");
                getchar();
                goto score;
                break;
            }
        
        case 17:
            printf("\n\n What code describe the action of code scrambling ??");
            printf("\n\nA. Encryption\t\tB. Obfuscation\t\tC. Segementation\t\tD. Aggregation\n");
            if(toupper(getchar()) == 'A'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is A.Encryption\n");
                getchar();
                goto score;
                break;
            }
        
        case 18:
            printf("\n\n unit of measurement of output quality of a printer ??");
            printf("\n\nA. Pixel per inch\t\tB. Megapixels\t\tC. Lines per inch\t\tD. Dot per sq Inch\n");
            if(toupper(getchar()) == 'D'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is D.Dot per sq Inch\n");
                getchar();
                goto score;
                break;
            }
        
        case 19:
            printf("\n\n What type of virus uses computer hosts to reproduce itself ??");
            printf("\n\nA. Spyware\t\tB. Adware\t\tC. Worm\t\tD. Trojan\n");
            if(toupper(getchar()) == 'C'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is C.Worm\n");
                getchar();
                goto score;
                break;
            }
        
        case 20:
            printf("\n\n In which year the microsoft company was founded  ??");
            printf("\n\nA. 1972\t\tB. 1975\t\tC. 1980\t\tD. 1982\n");
            if(toupper(getchar()) == 'B'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is B.1975\n");
                getchar();
                goto score;
                break;
            }
        
        case 21:
            printf("\n\n What is a half-byte is also called ??");
            printf("\n\nA. Nibble\t\tB. Bit\t\tC. Bytelet\t\tD. Trit\n");
            if(toupper(getchar()) == 'A'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is A.Nibble\n");
                getchar();
                goto score;
                break;
            }
        
        case 22:
            printf("\n\n What kind of scheme is the http protocol ??");
            printf("\n\nA. Client-server\t\tB. Request-response\t\tC. Data-transfer\t\tD. File-share\n");
            if(toupper(getchar()) == 'B'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is B.Request-response\n");
                getchar();
                goto score;
                break;
            }
        
        case 23:
            printf("\n\n Which type of Storage device is the BIOS ??");
            printf("\n\nA. Primary\t\tB. Secondary\t\tC. Tertiary\t\tD. Cache\n");
            if(toupper(getchar()) == 'A'){
                printf("\n\n Correct !!!");
                getchar();
                count++;
                break;
            } else {
                printf("\n\n Wrong !!! The correct answer is A.Primary\n");
                getchar();
                goto score;
                break;
            }
        }
        score:
        system("Clear");
        score = (float)countr*100000;

        if(score>0.00 && score<1000000){
            printf("\n\n\n\t ***************************** CONGRATULATION *******************************");
            printf("\n\t you won $%.2f", score);
            goto go;
        } else if(score <= 1000000.0){
            printf("\n\n\n\t ***************************** CONGRATULATION *******************************");
            printf("\n\t\t\t\t YOU ARE MILLIONAIRE!!!!!!!!!!!!!!");
            printf("\n\t\t YOU WON $%.2f", score);
            printf("\t\t THANK YOU");
        } else {
            printf("\n\n\t*************** SORRY YOU DIDN'T WIN ANY CASH **************");
            printf("\n\t\t THANKS FOR YOUR PARTICIPATION ");
            printf("\n\t\t TRY AGAIN");
            goto go;
        }

        go:
        puts("\n\n Press Y if you want to play the next game ");
        puts("Press any key if you want to go main menu \n");
        if(toupper(getchar()) == 'Y'){
            goto home;
        } else {
            edit_score(score, playername);
            goto mainhome;
        }
    }
}

void help(){
    system("Clear");
        char playername[20];
    printf("------------------------------ Welcome %s to C Program Quiz Game--------------------------", playername);
        printf("\n\n Here are some tips you might wanna know before playing : ");
        printf("------------------------------------------------------------------------------------------");

        printf("\n >> There are 2 rounds in this Quiz Game , WARMUP ROUND & CHALLENGE");
        printf("\n >> In Warmup Round You Will be Asked total 6 Questions to test your");
        printf("\n    general knowledge. you are eligible to play the game if you give atleast 2");
        printf("\n    Right answers , otherwise you can't process further to the challenge");
        printf("\n >> Your game starts with CHALLENGE ROUND . In this round you will be asked  ");
        printf("\n    total of 23 questions. Each right answer will be awarded $100.00 !! ");
        printf("\n    By this way you can win upto one MILLION cash prize!!!!!!.....");
        printf("\n >> You will be given 4 options and you haveto press A, B, C or D for the");
        printf("\n    the right option.");
        printf("\n >> You will be asked questions continuously ,till right answers are given");
        printf("\n >> No negative marking for the wrong answers !");
        printf("\n\n\t!!!!!!!!!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!!!!!!!");
}

void edit_score(float score,  char plnm[20]){
    system("Clear");
    float sc;
    char nm[20];
    FILE *f;
    f = fopen("score.txt", "w");
    fscanf(f, "%s%f", nm, &sc);
    if(score >= sc){
        sc = score;
        fclose(f);
        f = fopen("score.txt", "w");
        fprintf(f, "%s\n%.2f", plnm, sc);
        fclose(f);
    }
}

void reset_score(){
    system("Clear");
    float sc;
    char nm[20];
    FILE *f;
    f = fopen("score.txt", "w");
    sc = 0;
    fprintf(f, "%s %2.f", nm, sc);
    fclose(f);
}

void show_record(){
    system("Clear");
    char name;
    FILE *f;
    f = fopen("score.txt", "r");
    if(f == NULL ){
        perror("Error while opening the file. \n");
        exit(EXIT_FAILURE);
    }
    while((name = fgetc(f)) != EOF)
    printf("%c", name);
    getchar();
}