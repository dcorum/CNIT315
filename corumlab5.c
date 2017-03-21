#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct attendee{
int id;
char firstName[31], middleName[31], lastName[31], association[31], title[31];
struct attendee *prioradd;
};

void push(struct attendee *);
void pop(struct attendee *);
struct attendee *tosp;

int main() {
char input[31];
int choice=0;
int month, day, year;
struct attendee *tmp;

printf("#Menu \n1. Enter Attendee Information \n2. List All Attendees \n3. Quit\n\nWhat do you want to do? (1/2/3): ");
while(choice == 0){
scanf(" %d", &choice);
}

while(choice == 1){

printf("\n#Enter Attendee Information\n");
printf("Title: ");

fgets(input, 128, stdin);
sscanf(input, "%31s", tmp->title);

/*if(tmp.title[0] == '\n'){choice  = 0; break;}*/

printf("First Name: ");
fgets(input, 128, stdin);
sscanf(input, "%31s", tmp->firstName);

printf("Middle Name: ");
fgets(input, 128, stdin);
sscanf(input, "%31s", tmp->middleName);

printf("Last Name: ");
fgets(input, 128, stdin);
sscanf(input, "%31s", tmp->lastName);

printf("Association: ");
fgets(input, 128, stdin);
sscanf(input, "%31s", tmp->association);

push(tmp);
}

return 0;
}

void push(struct attendee *attendee){
struct attendee *new;

new = (struct attendee *) malloc(sizeof(struct attendee));
if(new == (struct attendee *) NULL){
printf("\nFailed to allocate mem\n");
exit(1);
}

strcpy(new->title,attendee->title);
strcpy(new->firstName,attendee->firstName);
strcpy(new->middleName,attendee->middleName);
strcpy(new->lastName,attendee->lastName);
strcpy(new->association,attendee->association);
printf("\n%s\n",new->association);
new->prioradd = tosp;
tosp = new;

}

void pop(struct attendee *attendee){

}
