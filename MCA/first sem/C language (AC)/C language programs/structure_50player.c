// #include <stdio.h>
// #include <string.h>

// #define MAX_PLAYERS 50
// #define MAX_NAME_LENGTH 50
// #define MAX_COUNTRY_LENGTH 50

// // Define the structure for player details
// struct Player {
//     char name[MAX_NAME_LENGTH];
//     char country[MAX_COUNTRY_LENGTH];
//     float battingAverage;
// };

// int main() {
//     // Declare an array of structures to store player details
//     struct Player players[MAX_PLAYERS];

//     // Input details for each player
//     for (int i = 0; i < MAX_PLAYERS; i++) {
//         printf("Enter details for player %d:\n", i + 1);
//         printf("Name: ");
//         fgets(players[i].name, sizeof(players[i].name), stdin);
//         players[i].name[strcspn(players[i].name, "\n")] = '\0'; // Remove newline character
//         printf("Country: ");
//         fgets(players[i].country, sizeof(players[i].country), stdin);
//         players[i].country[strcspn(players[i].country, "\n")] = '\0'; // Remove newline character
//         printf("Batting Average: ");
//         scanf("%f", &players[i].battingAverage);
//         getchar(); // Consume the newline character left by scanf
//     }

//     // Display the details of all players
//     printf("\nPlayer Details:\n");
//     for (int i = 0; i < MAX_PLAYERS; i++) {
//         printf("Player %d\n", i + 1);
//         printf("Name: %s\n", players[i].name);
//         printf("Country: %s\n", players[i].country);
//         printf("Batting Average: %.2f\n\n", players[i].battingAverage);
//     }

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_PLAYERS 50
#define MAX_NAME_LENGTH 50
#define MAX_COUNTRY_LENGTH 50

struct Player {
    char name[MAX_NAME_LENGTH];
    char country[MAX_COUNTRY_LENGTH];
    float battingAverage;
};

// Function to generate a random string of specified length
void generateRandomString(char *str, int length) {
    static const char alphanum[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < length - 1; ++i) {
        str[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    str[length - 1] = '\0';
}

void inputPlayerDetails(struct Player players[], int count) {
    srand(time(NULL)); // Seed for random number generator
    for (int i = 0; i < count; i++) {
        // Generate random name (up to 10 characters)
        generateRandomString(players[i].name, rand() % 10 + 1);

        // Generate random country (up to 10 characters)
        generateRandomString(players[i].country, rand() % 10 + 1);

        // Generate random batting average between 20 and 50
        players[i].battingAverage = (float)(rand() % 31 + 20);
    }
}

void displayPlayerDetails(struct Player players[], int count) {
    printf("\nPlayer Details:\n");
    for (int i = 0; i < count; i++) {
        printf("Player %d\n", i + 1);
        printf("Name: %s\n", players[i].name);
        printf("Country: %s\n", players[i].country);
        printf("Batting Average: %.2f\n\n", players[i].battingAverage);
    }
}

int main() {
    struct Player players[MAX_PLAYERS];
    inputPlayerDetails(players, MAX_PLAYERS);
    displayPlayerDetails(players, MAX_PLAYERS);

    return 0;
}

