#include<stdio.h>
#include<stdlib.h>
//create binary tree
typedef struct Node
{
    int valeur;
    struct Node *right;
    struct Node *left;
}tree;

int main(){
    tree *sa = (tree*)malloc(sizeof(tree));
    sa->valeur=100;
    sa -> left = (tree*)malloc(sizeof(tree));
    sa -> left -> valeur= 3;
    sa -> left -> left = (tree*)malloc(sizeof(tree));
    sa -> left -> left -> valeur=10;
}