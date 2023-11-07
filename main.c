int main() {
    user currentUser;
    int choice, userId;
    char filename[] = "users.txt";

    while (1) {
        printf("1. Add User\n");
        printf("2. Modify User\n");
        printf("3. Delete User\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
         
            printf("Enter First Name: ");
            scanf("%s", currentUser.firstname);
            printf("Enter Last Name: ");
            scanf("%s", currentUser.lastname);
            printf("Enter ID: ");
            scanf("%s", currentUser.ID);
            printf("Enter BTC: ");
            scanf("%s", currentUser.BTC);
            printf("Enter Birth Day, Month, Year: ");
            scanf("%d %d %d", &currentUser.BD, &currentUser.BM, &currentUser.BY);
            printf("Enter Gender (1 for Male, 2 for Female): ");
            scanf("%d", &currentUser.gender);
            printf("Enter Role (1 for Doctor, 2 for Nurse): ");
            scanf("%d", &currentUser.role);
            printf("Enter 3 Checkboxes (0 or 1 for each): ");
            scanf("%d %d %d", &currentUser.T[0], &currentUser.T[1], &currentUser.T[2]);
            ajouter(filename, currentUser);
            printf("User added successfully.\n");
        } 

else if (choice == 2) {
            
            printf("Enter User ID to Modify: ");
            scanf("%d", &userId);
            currentUser = chercher(filename, userId);  // Search for the user by ID
            if (strcmp(currentUser.ID, "") == 0) {
                printf("User not found for modification.\n");
            } 
else {
                
                printf("Enter First Name: ");
                scanf("%s", currentUser.firstname);
                printf("Enter Last Name: ");
                scanf("%s", currentUser.lastname);
                printf("Enter ID: ");
                scanf("%s", currentUser.ID);
                printf("Enter BTC: ");
                scanf("%s", currentUser.BTC);
                printf("Enter Birth Day, Month, Year: ");
                scanf("%d %d %d", &currentUser.BD, &currentUser.BM, &currentUser.BY);
                printf("Enter Gender (1 for Male, 2 for Female): ");
                scanf("%d", &currentUser.gender);
                printf("Enter Role (1 for Doctor, 2 for Nurse): ");
                scanf("%d", &currentUser.role);
                printf("Enter 3 Checkboxes (0 or 1 for each): ");
                scanf("%d %d %d", &currentUser.T[0], &currentUser.T[1], &currentUser.T[2]);
                if (modifier(filename, userId, currentUser) == 1) {
                    printf("User modified successfully.\n");
                } 
else {
                    printf("User not found for modification.\n");
                }
            }
        } 

else if (choice == 3) {
           
            printf("Enter User ID to Delete: ");
            scanf("%d", &userId);
            if (supprimer(filename, userId) == 1) {
                printf("User deleted successfully.\n");
            } 
else {
                printf("User not found for deletion.\n");
            }
        } 

else if (choice == 4) {
            
            return 0;

        } 
else {
            printf("Invalid choice. Please enter a valid option.\n");
        }
    }
    return 0;
}
