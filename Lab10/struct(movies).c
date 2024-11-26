#include <stdio.h>
#include <string.h>

struct Movie {
    char title[100];
    char genre[50];
    char director[50];
    int releaseYear;
    double rating;
};

void addMovie(struct Movie movies[], int *count) {
    printf("\nEnter title: ");
    scanf(" %[^\n]", movies[*count].title);
    printf("Enter genre: ");
    scanf(" %[^\n]", movies[*count].genre);
    printf("Enter director: ");
    scanf(" %[^\n]", movies[*count].director);
    printf("Enter release year: ");
    scanf("%d", &movies[*count].releaseYear);
    printf("Enter rating: ");
    scanf("%lf", &movies[*count].rating);
    (*count)++;
}

void displayMovies(struct Movie movies[], int count) {
	int i;
    if (count == 0) {
        printf("\nNo movies available.\n");
        return;
    }
    printf("\nMovie Details:\n");
    for (i = 0; i < count; i++) {
        printf("\nTitle: %s\nGenre: %s\nDirector: %s\nRelease Year: %d\nRating: %.1f\n",
               movies[i].title, movies[i].genre, movies[i].director, movies[i].releaseYear, movies[i].rating);
    }
}

void searchByGenre(struct Movie movies[], int count, char *genre) {
    int found = 0;
	int i;
    printf("\nMovies in Genre: %s\n", genre);
    for (i = 0; i < count; i++) {
        if (strcmp(movies[i].genre, genre) == 0) {
            printf("\nTitle: %s\nDirector: %s\nRelease Year: %d\nRating: %.1f\n",
                   movies[i].title, movies[i].director, movies[i].releaseYear, movies[i].rating);
            found = 1;
        }
    }
    if (!found) {
        printf("No movies found in this genre.\n");
    }
}

int main() {
    struct Movie movies[100];
    int movieCount = 0;

    int choice;
    do {
        printf("\nMovie Management System:\n");
        printf("1. Add a new movie\n");
        printf("2. Display all movies\n");
        printf("3. Search for movies by genre\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMovie(movies, &movieCount);
                break;
            case 2:
                displayMovies(movies, movieCount);
                break;
            case 3: {
                char genre[50];
                printf("Enter genre to search: ");
                scanf(" %[^\n]", genre);
                searchByGenre(movies, movieCount, genre);
                break;
            }
            case 4:
                printf("Exiting.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
