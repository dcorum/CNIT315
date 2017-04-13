/*Daniel Corum Lab08*/

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

struct node{
int value;
struct node *left;
struct node *right;
};

struct node* createTree0();
struct node* createTree1(int);

struct node *tree;

int main(){
/*For the first menue - creating tree*/
int choiceTree;
bool goTree=true;
bool treeTwo=true;
int firstKey;
/*For the second menu - manipulation tree */
bool choiceGood = true;
int choiceOption;
/*For adding a node*/
int newValue;
bool isInt=true;

while(goTree){
printf("\nWould you like to create an empty tree? (1)\nWould you like to create a tree with a value of your choice? (2)\n");

scanf("%d",&choiceTree);

if(choiceTree == 1 || choiceTree == 2){
goTree=false;
}
}

if(choiceTree == 1){
tree = createTree0();
}

if(choiceTree == 2){
while(treeTwo){
printf("\nEnter an integer you would like to go into the root node:\n");
scanf("%d",&firstKey);
if(firstKey > 0){
tree = createTree1(firstKey);
treeTwo = false;
}
}
}
printf("\nYou have now created a binary tree!\n");
/*We now have either an empty tree or a tree with data in the root*/

while(choiceGood){
printf("\nWould you like to add a node? (1)\nWould you like to delete a node? (2)\nWould you like to find a node? (3)\nWould you like to print the binary tree? (4)\n");

scanf("%d",&choiceOption);

if(choiceOption == 1 || choiceOption == 2 || choiceOption == 3 || choiceOption == 4){
choiceGood = false;
}
}
/*adding node*/
if(choiceOption == 1){
while(isInt){
printf("\nWhat value would you like this node to have?\n");
scanf("%d",&newValue);
if(newValue > 0 ){
isInt = false;
}
}
/*Create new Node setting value to newValue*/

}

if(choiceOption == 2){

}

if(choiceOption == 3){

}

if(choiceOption == 4){

}

return 0;
}

struct node* createTree0(){
struct node *leaf;
leaf=(struct node*) malloc( sizeof( struct node ) );
leaf->value = 0;
leaf->left = 0;
leaf->right = 0;
return leaf;
}

struct node* createTree1(int key){
struct node *leaf;
leaf=(struct node*) malloc( sizeof( struct node ) );
leaf->value = key;
leaf->left = 0;
leaf->right = 0;
return leaf;
}
