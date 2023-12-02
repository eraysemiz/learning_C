#include <stdio.h>
#include <string.h>

typedef struct
{
    char username[25];
    char password[12];
    int id;
}User;

int main()
{
    User user1 = {"Eray", "babababa67", 7928};
    User user2 = {"Naim", "babababa61", 2005};

    printf("username : %s\npassword : %s\nid : %d\n", user1.username, user1.password, user1.id);
    printf("\n");
    printf("username : %s\npassword : %s\nid : %d\n", user2.username, user2.password, user2.id);

    return 0;
}