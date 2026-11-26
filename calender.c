#include <stdio.h> 
// Function to check if a year is a leap year 
int isLeapYear(int year) { 
return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0); 
} 
// Function to get the day of the week for January 1st 
// Returns 0 for Sunday, 1 for Monday, ..., 6 for Saturday
 int getFirstDayOfYear(int year) { 
 int d = 1; // Day 1 
 int m = 13; // January is treated as month 13 
 int y = year - 1;
 int k = y % 100; 
 int j = y / 100; 
 
 // Zeller's Congruence formula 
 int h = (d + (13 * (m + 1)) / 5 + k + (k / 4) + (j / 4) + (5 * j)) % 7; 
 // Convert Zeller's output (0=Sat, 1=Sun, 2=Mon...) 
 // to (0=Sun, 1=Mon, 2=Tue...) 
 return (h + 6) % 7; 
 } 
 int main() 
 { 
 int year; 
 printf("Enter the year: "); 
 if (scanf("%d", &year) != 1 || year < 1) 
 { 
printf("Invalid input. Please enter a positive year.\n");
 return 1; } 
 // Names of the months 
 char *months[] = { "January", "February", "March", "April", "May", "June","July","August","September","October","November","December"};
 int daysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
 
 // Adjust February for leap years 
 if (isLeapYear(year)) 
 { 
daysInMonth[1] = 29; 
} // Find the starting day of the year 
int currentDay = getFirstDayOfYear(year); 
printf("\n============== CALENDAR - %d ==============\n", year); 
// Loop through all 12 months 
for (int i = 0; i < 12; i++) { printf("\n------------ %s ------------\n", months[i]); 
printf(" Sun Mon Tue Wed Thu Fri Sat\n");
 // Print leading spaces for the first week 
 for (int space = 0; space < currentDay; space++) 
 { 
printf(" "); 
} // Print all days of the current month 
for (int day = 1; day <= daysInMonth[i]; day++) 
{ printf("%5d", day); 
// Move to the next line after Saturday 
currentDay++; 
if (currentDay > 6) 
{ 
currentDay = 0;
 printf("\n"); 
 } 
 } 
 printf("\n"); 
 } 
 return 0;
 }
 