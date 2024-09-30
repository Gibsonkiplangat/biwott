#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;

    // Taking input from the user
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (as an integer): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (as an integer): ");
    scanf("%d", &returnDate);

    // Calculate the days overdue
    daysOverdue = returnDate - dueDate;

    // Display the inputs and the calculated days overdue
    printf("\nBook ID: %d", bookID);
    printf("\nDue Date: %d", dueDate);
    printf("\nReturn Date: %d", returnDate);
    printf("\nDays Overdue: %d\n", daysOverdue);

    return 0;
}