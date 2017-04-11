#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

struct attendee{
int id, month, day, year;
char firstName[31], middleName[31], lastName[31], association[31], title[31];
struct attendee *prioradd;
};

void deleteNode(struct attendee **, int);
struct attendee* getNth(struct attendee *, int);
void push(struct attendee *);
void pop(struct attendee *);
struct attendee *tosp;

int main() {
char input[31], test=0;
int choice=0, id=1;


struct attendee *tmp;
tmp = malloc(sizeof(struct attendee));

while(test==0){
printf("\n#Menu \n1. Enter Attendee Information \n2. Deregister an Attendee \n3. List All Attendees \n4. Search for an Attendee \n5. Quit\n\nWhat do you want to do? (1/2/3/4/5): ");
while(choice == 0){
fgets(input,128, stdin);
sscanf(input, "%d", &choice);
}

while(choice == 1){

printf("\n#Enter Attendee Information\n");



printf("Title: ");
fgets(input, 128, stdin);
if(input[0]=='\n'){
printf("\n## Total Attendees: %d\n", tmp->id); 

choice = 0;
break;
}
sscanf(input, "%31s", tmp->title);

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
memset(input,0,sizeof input);
printf("Membership Since(MM/DD/YYYY): ");
fgets(input, 128, stdin);
sscanf(input, "%d/%d/%d", &(tmp->month), &(tmp->day), &(tmp->year));

tmp->id = id;

push(tmp);

id=id+1;
}

while(choice == 5){
test=1;
break;
}

while(choice == 3){
struct attendee *temp;
temp = (struct attendee *) malloc(sizeof(struct attendee));
temp = tosp;
if(tosp != NULL){
printf("\n# List of All Attendees \n## There are %d attendees registered.\n", tosp->id);
}
while(tosp != NULL){
pop(tosp);

}
printf("\n\n##End of the List\n");

tosp = temp;

choice=0;
}

while(choice == 2){
char ch;
int dereg;
int index=0;


while(dereg != 1 && dereg != 2 && dereg != 3 && dereg != 4 && dereg != 5){
printf("\n# Deregistering an Attendee \n## Additional information required \n1. Deregister by Registration Number \n2. Deregister by Registration Number \n3. Deregister by Last Name \n4. Deregister by Association \n5. Deregister by Membership Begin Date\n");

fgets(input,128, stdin);
sscanf(input, "%d", &dereg);
}

if(dereg == 1){
while(index <= 0){
printf("\n## Deregister by Registration Number\n");
fgets(input,128, stdin);
sscanf(input, "%d", &index);
}

if(tosp != NULL){
struct attendee *test= getNth(tosp, index); /*breaks here if you enter a number that is not in the list*/
printf("\n%d. %s %s %s %s (%s) Member since %d/%d/%d\n", test->id,test->title,test->firstName,test->middleName,test->lastName,test->association,test->month,test->day,test->year);

while(ch != 'y' && ch != 'n'){
printf("\nIs this the attendee the one you want to deregister? (y/n) ");
fgets(input,128,stdin);
sscanf(input, "%c", &ch);
}
if(ch == 'y'){
deleteNode(&tosp, index);
dereg = 0;
choice = 0;
}
if(ch == 'n'){
break;
}
}


}
}

while(choice != 0 && choice != 1 && choice != 2 && choice != 3 && choice !=4 &&choice != 5){
choice = 0;
}

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
new->month=attendee->month;
new->day=attendee->day;
new->year=attendee->year;
new->id=attendee->id;

new->prioradd = tosp;
tosp = new;

}

void pop(struct attendee *attendee){
struct attendee *tempAddr;


strcpy(attendee->title,tosp->title);
strcpy(attendee->firstName,tosp->firstName);
strcpy(attendee->middleName,tosp->middleName);
strcpy(attendee->lastName,tosp->lastName);
strcpy(attendee->association,tosp->association);
attendee->month=tosp->month;
attendee->day=tosp->day;
attendee->year=tosp->year;
attendee->id=tosp->id;

printf("\n %d. %s %s %s %s (%s) Member since %d/%d/%d", attendee->id,attendee->title,attendee->firstName,attendee->middleName,attendee->lastName,attendee->association,attendee->month,attendee->day,attendee->year);

tempAddr=tosp->prioradd;

tosp = tempAddr;

}

struct attendee* getNth(struct attendee *head, int userID){
struct attendee *current = tosp;
int count = tosp->id;

while(current != NULL)
{

if(userID == count){
return(current);
}
count--;
current = current->prioradd;
}
printf("Sorry, there is no attendee with this registration number, try again");
return(NULL);
}

void deleteNode(struct attendee **head, int key){
struct attendee *temp = *head, *prev;
int i=temp->id;

if(temp != NULL && temp->id==key){
*head = temp->prioradd;
free(temp);
return;
}

while(temp != NULL && i!=key){
prev = temp;
temp = temp->prioradd;
}
if(temp==NULL) return;

prev->prioradd = temp->prioradd;

free(temp);
}

