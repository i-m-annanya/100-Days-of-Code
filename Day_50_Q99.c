//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>

int main() {
    char date[11]; // dd/mm/yyyy
    char newDate[11]; // dd-MMM-yyyy

    printf("Enter a date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);

    // Remove newline character
    date[strcspn(date, "\n")] = '\0';

    // Extract day, month, and year
    int day, month, year;
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Convert month number to name
    const char *monthNames[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                                "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    const char *monthName = monthNames[month - 1];

    // Format the new date
    snprintf(newDate, sizeof(newDate), "%02d-%s-%d", day, monthName, year);

    printf("New date format: %s\n", newDate);

    return 0;
}