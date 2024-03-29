#include <stdio.h> 
#include <stdlib.h> 
/* A tree node structure */

typedef struct node {

int data;
struct node* left;
struct node* right;
} node;
// Helper function for getLevel(). It returns level of the
// data if data is present in tree, otherwise returns 0.
int getLevelUtil(node* node, int data, int level)
{
if (node == NULL)
return 0;
if (node->data == data)
return level;
int downlevel
= getLevelUtil(node->left, data, level + 1);
if (downlevel != 0)
return downlevel;
downlevel = getLevelUtil(node->right, data, level + 1);
return downlevel;
}
/* Returns level of given data value */
int getLevel(node* node, int data)
{
return getLevelUtil(node, data, 1);
}
// Utility function to create a new Binary Tree node
node* newNode(int data)
{
node* temp = (node*)malloc(sizeof(node));
temp->data = data;
temp->left = NULL;
temp->right = NULL;
return temp;
}
/* Driver code */
int main()
{
node* root;
int x;
// Constructing tree given in the above figure
root = newNode(3);
root->left = newNode(2);
root->right = newNode(5);
root->left->left = newNode(1);
root->left->right = newNode(4);
for (x = 1; x <= 5; x++) {
int level = getLevel(root, x);
if (level)
printf(" Level of %d is %d\n", x,
getLevel(root, x));
else
printf(" %d is not present in tree \n", x);
}
getchar();
return 0;
}