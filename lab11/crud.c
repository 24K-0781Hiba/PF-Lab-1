#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//I went with making a seperate file for bowlers and a seperate file for batsmen and others
struct player {
    char name[20];
    char team[20];
};

struct bowl {
    char type[10]; 
    char arm[5];   
    struct player ply;
};

struct bat {
    char type[10];   
    char handed[8];  
    struct bowl ply2;
};

void createPlayer();
void readPlayers();
void updatePlayer();
void deletePlayer();
int countBowlers(); 

const char *bowlersFile = "bowlers.txt";
const char *othersFile = "others.txt";

int main() {
    int choice;
    do {
        printf("\n--- Player Management ---\n");
        printf("1. Create Player\n");
        printf("2. Read Players\n");
        printf("3. Update Player\n");
        printf("4. Delete Player\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createPlayer();
                break;
            case 2:
                readPlayers();
                break;
            case 3:
                updatePlayer();
                break;
            case 4:
                deletePlayer();
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

// Create a player
void createPlayer() {
    char role[10];
    printf("Enter player role (bowler/batsman): ");
    scanf("%s", role);

    if (strcmp(role, "bowler") == 0) {
        struct bowl newBowler;
        printf("Enter player name: ");
        scanf("%s", newBowler.ply.name);
        printf("Enter team name: ");
        scanf("%s", newBowler.ply.team);
        printf("Enter bowler type (seamer/pacer/spinner): ");
        scanf("%s", newBowler.type);
        printf("Enter bowling arm (left/right): ");
        scanf("%s", newBowler.arm);

        FILE *file = fopen(bowlersFile, "ab");
        if (file == NULL) {
            perror("Error opening file");
            return;
        }
        fwrite(&newBowler, sizeof(newBowler), 1, file);
        fclose(file);
        printf("Bowler added successfully.\n");
    } else if (strcmp(role, "batsman") == 0) {
        struct bat newBatsman;
        printf("Enter player name: ");
        scanf("%s", newBatsman.ply2.ply.name);
        printf("Enter team name: ");
        scanf("%s", newBatsman.ply2.ply.team);
        printf("Enter batsman type (top/middle/lower): ");
        scanf("%s", newBatsman.type);
        printf("Enter batting handedness (lefty/righty): ");
        scanf("%s", newBatsman.handed);

        strcpy(newBatsman.ply2.type, "N/A");
        strcpy(newBatsman.ply2.arm, "N/A");

        FILE *file = fopen(othersFile, "ab");
        if (file == NULL) {
            printf("Error opening file");
            return;
        }
        fwrite(&newBatsman, sizeof(newBatsman), 1, file);
        fclose(file);
        printf("Batsman added successfully.\n");
    } else {
        printf("Invalid role entered. Please try again.\n");
    }
}

// Read all players
void readPlayers() {
    struct bowl b;
    struct bat bt;

    printf("\n--- Bowlers ---\n");
    FILE *file = fopen(bowlersFile, "rb");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }
    while (fread(&b, sizeof(b), 1, file)) {
        printf("Name: %s, Team: %s, Type: %s, Arm: %s\n",
               b.ply.name, b.ply.team, b.type, b.arm);
    }
    fclose(file);

    printf("\n--- Batsmen ---\n");
    file = fopen(othersFile, "rb");
    if (file == NULL) {
        printf("Error opening file");
        return;
    }
    while (fread(&bt, sizeof(bt), 1, file)) {
        printf("Name: %s, Team: %s, Type: %s, Handedness: %s\n",
               bt.ply2.ply.name, bt.ply2.ply.team, bt.type, bt.handed);
    }
    fclose(file);
}

// Update a player
void updatePlayer() {
    char name[20], role[10];
    printf("Enter player role (bowler/batsman): ");
    scanf("%s", role);
    printf("Enter player name to update: ");
    scanf("%s", name);

    if (strcmp(role, "bowler") == 0) {
        struct bowl b;
        FILE *file = fopen(bowlersFile, "rb+");
        if (file == NULL) {
            printf("Error opening file");
            return;
        }
        int found = 0;
        while (fread(&b, sizeof(b), 1, file)) {
            if (strcmp(b.ply.name, name) == 0) {
                found = 1;
                printf("Enter new team: ");
                scanf("%s", b.ply.team);
                printf("Enter new type: ");
                scanf("%s", b.type);
                printf("Enter new arm: ");
                scanf("%s", b.arm);

                fseek(file, sizeof(b), SEEK_CUR);
                fwrite(&b, sizeof(b), 1, file);
                printf("Bowler updated successfully.\n");
                break;
            }
        }
        fclose(file);
        if (!found) {
            printf("Player not found.\n");
        }
    } else if (strcmp(role, "batsman") == 0) {
        struct bat bt;
        FILE *file = fopen(othersFile, "rb+");
        if (file == NULL) {
            printf("Error opening file");
            return;
        }
        int found = 0;
        while (fread(&bt, sizeof(bt), 1, file)) {
            if (strcmp(bt.ply2.ply.name, name) == 0) {
                found = 1;
                printf("Enter new team: ");
                scanf("%s", bt.ply2.ply.team);
                printf("Enter new type: ");
                scanf("%s", bt.type);
                printf("Enter new handedness: ");
                scanf("%s", bt.handed);

                fseek(file, sizeof(bt), SEEK_CUR);
                fwrite(&bt, sizeof(bt), 1, file);
                printf("Batsman updated successfully.\n");
                break;
            }
        }
        fclose(file);
        if (!found) {
            printf("Player not found.\n");
        }
    } else {
        printf("Invalid role entered.\n");
    }
}

// Delete a player
void deletePlayer() {
    char name[20], role[10];
    printf("Enter player role (bowler/batsman): ");
    scanf("%s", role);
    printf("Enter player name to delete: ");
    scanf("%s", name);

    if (strcmp(role, "bowler") == 0) {
        struct bowl b;
        FILE *file = fopen(bowlersFile, "rb");
        FILE *temp = fopen("temp.dat", "wb");
        if (file == NULL || temp == NULL) {
            printf("Error opening file");
            return;
        }
        int found = 0, bowlerCount = countBowlers();
        while (fread(&b, sizeof(b), 1, file)) {
            if (strcmp(b.ply.name, name) == 0) {
                found = 1;
                if (bowlerCount <= 3) {
                    printf("Cannot delete. At least 3 bowlers are required.\n");
                    fwrite(&b, sizeof(b), 1, temp);
                } else {
                    bowlerCount--;
                }
            } else {
                fwrite(&b, sizeof(b), 1, temp);
            }
        }
        fclose(file);
        fclose(temp);
        remove(bowlersFile);
        rename("temp.dat", bowlersFile);
        if (found) {
            printf("Bowler deleted successfully.\n");
        } else {
            printf("Player not found.\n");
        }
    } else if (strcmp(role, "batsman") == 0) {
        struct bat bt;
        FILE *file = fopen(othersFile, "rb");
        FILE *temp = fopen("temp.dat", "wb");
        if (file == NULL || temp == NULL) {
            printf("Error opening file");
            return;
        }
        int found = 0;
        while (fread(&bt, sizeof(bt), 1, file)) {
            if (strcmp(bt.ply2.ply.name, name) == 0) {
                found = 1;
            } else {
                fwrite(&bt, sizeof(bt), 1, temp);
            }
        }
        fclose(file);
        fclose(temp);
        remove(othersFile);
        rename("temp.dat", othersFile);
        if (found) {
            printf("Batsman deleted successfully.\n");
        } else {
            printf("Player not found.\n");
        }
    } else {
        printf("Invalid role entered.\n");
    }
}
int countBowlers() {
    FILE *file = fopen(bowlersFile, "rb");
    if (file == NULL) {
        perror("Error opening file");
        return 0;
    }
    int count = 0;
    struct bowl b;
    while (fread(&b, sizeof(b), 1, file)) {
        count++;
    }
    fclose(file);
    return count;
}
