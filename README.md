# Level_of_node_in_binary_trees
This C program determines the level of a given node in a binary tree. The tree nodes are represented by the node structure, which contains an integer data and pointers to the left and right children.

## Functions

### `getLevelUtil`
```c
int getLevelUtil(node* node, int data, int level)
```
This helper function recursively searches for the given `data` in the binary tree starting from the given `node`. If found, it returns the level of the node; otherwise, it returns 0.

### `getLevel`
```c
int getLevel(node* node, int data)
```
This function serves as the entry point for obtaining the level of a node with the given `data`. It calls the `getLevelUtil` function and starts the recursion from the root with an initial level of 1.

### `newNode`
```c
node* newNode(int data)
```
A utility function to create a new binary tree node with the specified `data`. Allocates memory for the node, initializes its data, and sets both left and right pointers to NULL.

## Driver Code - `main`
```c
int main()
```
The `main` function initializes a sample binary tree with nodes containing integer values. It then iterates over a range of values, calling `getLevel` for each value and printing the result. If a node with the given value is present, it prints the level; otherwise, it indicates that the value is not in the tree.

## Example
For the given tree:
```
        3
       / \
      2   5
     / \
    1   4
```
The output would be:
```
 Level of 1 is 3
 Level of 2 is 2
 Level of 3 is 1
 Level of 4 is 3
 Level of 5 is 2
```
