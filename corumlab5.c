#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
int choice=0;
char firstName[31], middleName[31], lastName[31], association[31], title[31], input[128];
int month, day, year;

printf("#Menu \n1.Enter Attendee Information \n2. List All Attendees \n3. Quit\n\nWhat do you want to do? (1/2/3): ");
while(choice == 0){
scanf(" %d", &choice);
}

while(choice == 1){
title[0]=' ';
printf("\n#Enter Attendee Information\n");
printf("Title: ");
while(title[0]==' '){
fgets(input, 128, stdin);
sscanf(input, "%31s", title);
}
if(title[0] == '\n'){break;}
printf("First Name: ");
fgets(input, 128, stdin);
sscanf(input, "%31s", firstName);

printf("Middle Name: ");
fgets(input, 128, stdin);
sscanf(input, "%31s", firstName);

printf("Last Name: ");
fgets(input, 128, stdin);
sscanf(input, "%31s", lastName);

printf("Association: ");
fgets(input, 128, stdin);
sscanf(input, "%31s", association);
}

return 0;
}

