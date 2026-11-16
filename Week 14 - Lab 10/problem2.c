#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 100

struct Movie {
    char title[50];
    char genre[30];
    char director[50];
    int release_year;
    float rating;
};

void addMovie(struct Movie movies[], int *count) {
    if (*count >= MAX_MOVIES) {
        printf("Movie database is full!\n");
        return;
    }

    getchar(); 

    printf("Enter movie title: ");
    fgets(movies[*count].title, sizeof(movies[*count].title), stdin);
    movies[*count].title[strcspn(movies[*count].title, "\n")] = '\0';

    printf("Enter movie genre: ");
    fgets(movies[*count].genre, sizeof(movies[*count].genre), stdin);
    movies[*count].genre[strcspn(movies[*count].genre, "\n")] = '\0';

    printf("Enter director name: ");
    fgets(movies[*count].director, sizeof(movies[*count].director), stdin);
    movies[*count].director[strcspn(movies[*count].director, "\n")] = '\0';

    printf("Enter release year: ");
    scanf("%d", &movies[*count].release_year);

    printf("Enter rating (out of 10): ");
    scanf("%f", &movies[*count].rating);

    (*count)++;
    printf("Movie added successfully!\n");
}

void displayAllMovies(struct Movie movies[], int count) {
    if (count == 0) {
        printf("\nNo movies available in the database.\n");
        return;
    }

    printf("\n--- All Movies ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nMovie %d:\n", i + 1);
        printf("Title        : %s\n", movies[i].title);
        printf("Genre        : %s\n", movies[i].genre);
        printf("Director     : %s\n", movies[i].director);
        printf("Release Year : %d\n", movies[i].release_year);
        printf("Rating       : %.1f/10\n", movies[i].rating);
    }
}

void searchByGenre(struct Movie movies[], int count) {
    if (count == 0) {
        printf("\nNo movies available to search.\n");
        return;
    }

    char search_genre[30];
    getchar();
    printf("Enter genre to search: ");
    fgets(search_genre, sizeof(search_genre), stdin);
    search_genre[strcspn(search_genre, "\n")] = '\0';

    int found = 0;
    printf("\n--- Movies in Genre: %s ---\n", search_genre);
    for (int i = 0; i < count; i++) {
        if (strcasecmp(movies[i].genre, search_genre) == 0) {
            printf("\nTitle        : %s\n", movies[i].title);
            printf("Director     : %s\n", movies[i].director);
            printf("Release Year : %d\n", movies[i].release_year);
            printf("Rating       : %.1f/10\n", movies[i].rating);
            found = 1;
        }
    }

    if (!found) {
        printf("No movies found under the genre '%s'.\n", search_genre);
    }
}

int main() {
    struct Movie movies[MAX_MOVIES];
    int count = 0;
    int choice;

    do {
        printf("\n--- Movie Management System ---\n");
        printf("1. Add New Movie\n");
        printf("2. Display All Movies\n");
        printf("3. Search Movies by Genre\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMovie(movies, &count);
                break;
            case 2:
                displayAllMovies(movies, count);
                break;
            case 3:
                searchByGenre(movies, count);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}