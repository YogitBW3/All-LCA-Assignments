#include <stdio.h> 
#include <string.h>

#define DEPTH_LIMIT 300.0 
#define PRESSURE_LIMIT 30.0 
#define TEMP_LIMIT 35.0 
#define BATTERY_LIMIT 20

void addRecord() { FILE *fp = fopen("underwater_log.txt", "a");

if (fp == NULL)
{
    printf("Cannot open file\n");
    return;
}

int id, battery;
float depth, pressure, temp;
char defect[50];

printf("Enter ID: ");
scanf("%d", &id);

printf("Enter Depth (m): ");
scanf("%f", &depth);

printf("Enter Pressure (MPa): ");
scanf("%f", &pressure);

printf("Enter Temperature (C): ");
scanf("%f", &temp);

printf("Enter Battery: ");
scanf("%d", &battery);

printf("Enter Defect: ");
scanf("%49s", defect);

fprintf(fp, "%d %.2f %.2f %.2f %d %s\n",
        id, depth, pressure, temp, battery, defect);

fclose(fp);

printf("Record added successfully!\n");


}

void generateReport() { FILE *fp = fopen("underwater_log.txt", "r"); FILE *report = fopen("underwater_report.txt", "w");

if (fp == NULL || report == NULL)
{
    printf("Cannot open file!\n");

    if (fp != NULL)
        fclose(fp);

    if (report != NULL)
        fclose(report);

    return;
}

int id, battery, total = 0, unsafe = 0;
float depth, pressure, temp;
char defect[50], reason[200];

printf("\n--- UNDERWATER ROBOT REPORT ---\n");

fprintf(report, "--- UNDERWATER ROBOT REPORT ---\n");

while (fscanf(fp, "%d %f %f %f %d %49s",
              &id, &depth, &pressure, &temp,
              &battery, defect) == 6)
{
    total++;

    int isUnsafe = 0;

    strcpy(reason, "");

    if (depth > DEPTH_LIMIT)
    {
        isUnsafe = 1;
        strcat(reason, "Depth>300m, ");
    }

    if (pressure > PRESSURE_LIMIT)
    {
        isUnsafe = 1;
        strcat(reason, "Pressure>30MPa, ");
    }

    if (temp > TEMP_LIMIT)
    {
        isUnsafe = 1;
        strcat(reason, "Temp>35C, ");
    }

    if (battery < BATTERY_LIMIT)
    {
        isUnsafe = 1;
        strcat(reason, "Battery<20, ");
    }

    if (strcmp(defect, "None") != 0)
    {
        isUnsafe = 1;
        strcat(reason, defect);
    }

    if (isUnsafe)
    {
        unsafe++;

        printf("%d | UNSAFE | %s\n", id, reason);

        fprintf(report, "%d | UNSAFE | %s\n", id, reason);
    }
    else
    {
        printf("%d | SAFE\n", id);

        fprintf(report, "%d | SAFE\n", id);
    }
}

printf("\nTotal: %d Unsafe: %d Safe: %d\n",
       total, unsafe, total - unsafe);

fprintf(report, "\nTotal: %d Unsafe: %d Safe: %d\n",
        total, unsafe, total - unsafe);

fclose(fp);
fclose(report);

printf("Report generated successfully!\n");


}

int main() { int choice;

while (1)
{
    printf("\n1. Add Record\n");
    printf("2. Generate Report\n");
    printf("3. Exit\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        addRecord();
    }
    else if (choice == 2)
    {
        generateReport();
    }
    else if (choice == 3)
    {
        break;
    }
    else
    {
        printf("Invalid choice!\n");
    }
}

return 0;


}