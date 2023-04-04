/*
This code creates an splay tree.
The code starts by defining a structure for nodes and setting the node structure's attributes.
The code then defines another structure for splay trees and sets the splay tree structure's attribute to the root node.
The code then creates a new_node function that takes in an IP address as a parameter.
The code then creates a new node and sets the node's IP address to the parameter.
The code then sets the node's parent, right, and left attributes to NULL.
The code then returns the node.
The code then creates a new_splay_tree function.
The code then creates a new splay tree and sets the tree's root node to NULL.
The code then returns the splay tree.
The code then creates a maximum function that takes in the splay tree as a parameter as well as a node.
The code then enters a while loop that will run as long as the node's right attribute is not NULL.
The code will then set the node equal to the node's right attribute.
The code will then return the node.
The code then creates a left_rotate function that takes in the splay tree as a parameter and a node.
The code then creates a y variable and sets it to the node's right attribute.
The code then sets the node's right attribute to the y variable's left attribute.
The code then checks to see if the y variable's left attribute is not NULL.
If it is not NULL, the code will then set the y variable's left attribute's parent attribute to the node.
The code then sets the y variable's parent attribute to the node's parent attribute.
The code then checks to see if the node's parent attribute is NULL.
If it is NULL, the code will then set the splay tree's root attribute to the y variable.
The code then checks to see if the node is equal to the node's parent attribute's left attribute.
If it is, the code will then set the node's parent attribute's left attribute to the y variable.
Otherwise, the code will set the node's parent attribute's right attribute to the y variable.
The code then sets the y variable's left attribute to the node.
The code then sets the node's parent attribute to the y variable.
The code then creates a right_rotate function that takes in the splay tree as a parameter and a node.
The code then creates a y variable and sets it to the node's left attribute.
The code then sets the node's left attribute to the y variable's right attribute.
The code then checks to see if the y variable's right attribute is not NULL.
If it is not NULL, the code will then set the y variable's right attribute's parent attribute to the node.
The code then sets the y variable's parent attribute to the node's parent attribute.
The code then checks to see if the node's parent attribute is NULL.
If it is NULL, the code will then set the splay tree's root attribute to the y variable.
The code then checks to see if the node is equal to the node's parent attribute's right attribute.
If it is, the code will then set the node's parent attribute's right attribute to the y variable.
Otherwise, the code will set the node's parent attribute's left attribute to the y variable.
The code will then set the y variable's right attribute to the node.
The code will then set the node's parent attribute to the y variable.
The code then creates a splay function that takes in the splay tree as a parameter and a node.
The code then enters a while loop that will run as long as the node's parent attribute is not NULL.
The code then checks to see if the node's parent attribute is equal to the splay tree's root attribute.
If it is, the code will then check to see if the node is equal to the node's parent attribute's left attribute.
If it is, the code will then run the right_rotate function on the node's parent attribute.
Otherwise, the code will run the left_rotate function on the node's parent attribute.
The code then checks to see if the node's parent attribute's parent attribute is equal to the node's parent attribute.
If it is, the code will then check to see if the node is equal to the node's parent attribute's left attribute and if the node's parent attribute is equal to the node's parent attribute's parent attribute's left attribute.
If both conditions are true, the code will then run the right_rotate function on the node's grandparent attribute and then run the right_rotate function on the node's parent attribute.
The code then checks if the node is equal to the node's parent attribute's right attribute and if the node's parent attribute is equal to the node's parent attribute's parent attribute's right attribute.
If both conditions are true, the code will then run the left_rotate function on the node's grandparent attribute and then run the left_rotate function on the node's parent attribute.
The code then checks if the node is equal to the node's parent attribute's right attribute and if the node's parent attribute is equal to the node's parent attribute's parent attribute's left attribute.
If both conditions are true, the code will then run the left_rotate function on the node's parent attribute and then run the right_rotate function on the node's grandparent attribute.
The code then checks if the node is equal to the node's parent attribute's left attribute and if the node's parent attribute is equal to the node's parent attribute's parent attribute's right attribute.
If both conditions are true, the code will then run the right_rotate function on the node's parent attribute and then run the left_rotate function on the node's grandparent attribute.
The code then creates an insert function that takes in the splay tree as a parameter and a node.
The code then creates a y variable and sets it to NULL. It then creates a temp variable and sets it to the splay tree's root attribute.
The code then enters a while loop that will run as long as temp is not NULL.
The code will then set the y variable equal to temp.
The code will then check to see if the node's IP address is less than the temp variable's IP address.
If it is, the code will set the temp variable equal to the temp variable's left attribute.
Otherwise, the code will set the temp variable equal to the temp variable's right attribute.
The code then sets the node's parent attribute to the y variable.
The code then checks to see if the y variable is NULL.
If it is, the code will then set the splay tree's root attribute to the node.
Otherwise, the code checks to see if the node's IP address is less than the y variable's IP address.
If it is, the code will set the y variable's left attribute to the node.
Otherwise, the code will set the y variable's right attribute to the node.
The code will then run the splay function on the node.
The code then creates a search function that takes in the splay tree as a parameter as well as a node and an integer.
The code then checks to see if the integer is equal to the node's IP address.
If it is, the code will then run the splay function on the node and then return the node.
The code will then check to see if the integer is less than the node's IP address.
If it is, the code will then return the search function on the node's left attribute and the integer.
The code will then check to see if the integer is greater than the node's IP address.
If it is, the code will then return the search function on the node's right attribute and the integer.
The code will then return NULL.
The code then creates an inorder function that takes in the splay tree as a parameter as well as a node and a string.
The code then checks to see if the node is not NULL.
If it is not NULL, the code will then run the inorder function on the node's left attribute and the string.
The code will then print the node's IP address and data packet.
The code will then run the inorder function on the node's right attribute and the string.
The code then creates a main function.
The code then creates a cmn variable and a t variable and sets them to a string and a splay tree.
The code then creates variables a-m and sets them to new nodes.
The code then runs the insert function on the t variable and the a-m nodes.
The code then creates 2 arrays and sets them to 11 integers.
The code then sets the first integer of the first array to 104, the second integer to 112, the third integer to 117, the fourth integer to 124, the fifth integer to 121, the sixth integer to 108, the seventh integer to 109, the eighth integer to 111, the ninth integer to 122, the tenth integer to 125, and the eleventh integer to 129.
The code then sets the first integer of the second array to a, the second integer to b, the third integer to c, the fourth integer to d, the fifth integer to e, the sixth integer to f, the seventh integer to g, the eighth integer to h, the ninth integer to i, the tenth integer to j, and the eleventh integer to k.
The code then creates an x variable and sets it to 0.
The code then enters a for loop that will run 11 times.
The code will then create a data variable and set it to a random number between 0 and 200.
The code will then create a temp variable and set it to the search function on the t variable, the second array, and the first array.
The code will then check to see if the temp variable is not NULL.
If it is not NULL, the code will then set the temp variable's dataPacket attribute to the data variable.
The code will then increment x by 1.
The code will then print "IP ADDRESS -> DATA PACKET".
The code will then run the inorder function on the t variable, the t variable's root attribute, and the cmn variable.
The code will then return 0.
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int ipAdd;
    int dataPacket;
    struct node *left;
    struct node *right;
    struct node *parent;
} node;

typedef struct splay_tree
{
    struct node *root;
} splay_tree;

node *new_node(int ipAdd)
{
    node *n = malloc(sizeof(node));
    n->ipAdd = ipAdd;
    n->parent = NULL;
    n->right = NULL;
    n->left = NULL;
    return n;
}

splay_tree *new_splay_tree()
{
    splay_tree *t = malloc(sizeof(splay_tree));
    t->root = NULL;
    return t;
}

node *maximum(splay_tree *t, node *x)
{
    while (x->right != NULL)
        x = x->right;
    return x;
}

void left_rotate(splay_tree *t, node *x)
{
    node *y = x->right;
    x->right = y->left;
    if (y->left != NULL)
    {
        y->left->parent = x;
    }
    y->parent = x->parent;
    if (x->parent == NULL)
    {
        t->root = y;
    }
    else if (x == x->parent->left)
    {
        x->parent->left = y;
    }
    else
    {
        x->parent->right = y;
    }
    y->left = x;
    x->parent = y;
}

void right_rotate(splay_tree *t, node *x)
{
    node *y = x->left;
    x->left = y->right;
    if (y->right != NULL)
    {
        y->right->parent = x;
    }
    y->parent = x->parent;
    if (x->parent == NULL)
    {
        t->root = y;
    }
    else if (x == x->parent->right)
    {
        x->parent->right = y;
    }
    else
    {
        x->parent->left = y;
    }
    y->right = x;
    x->parent = y;
}

void splay(splay_tree *t, node *n)
{
    while (n->parent != NULL)
    {
        if (n->parent == t->root)
        {
            if (n == n->parent->left)
            {
                right_rotate(t, n->parent);
            }
            else
            {
                left_rotate(t, n->parent);
            }
        }
        else
        {
            node *p = n->parent;
            node *g = p->parent;
            if (n->parent->left == n && p->parent->left == p)
            {
                right_rotate(t, g);
                right_rotate(t, p);
            }
            else if (n->parent->right == n && p->parent->right == p)
            {
                left_rotate(t, g);
                left_rotate(t, p);
            }
            else if (n->parent->right == n && p->parent->left == p)
            {
                left_rotate(t, p);
                right_rotate(t, g);
            }
            else if (n->parent->left == n && p->parent->right == p)
            {
                right_rotate(t, p);
                left_rotate(t, g);
            }
        }
    }
}

void insert(splay_tree *t, node *n)
{
    node *y = NULL;
    node *temp = t->root;
    while (temp != NULL)
    {
        y = temp;
        if (n->ipAdd < temp->ipAdd)
            temp = temp->left;
        else
            temp = temp->right;
    }
    n->parent = y;
    if (y == NULL)
        t->root = n;
    else if (n->ipAdd < y->ipAdd)
        y->left = n;
    else
        y->right = n;
    splay(t, n);
}

node *search(splay_tree *t, node *n, int x)
{
    if (x == n->ipAdd)
    {
        splay(t, n);
        return n;
    }
    else if (x < n->ipAdd)
        return search(t, n->left, x);
    else if (x > n->ipAdd)
        return search(t, n->right, x);
    else
        return NULL;
}

void inorder(splay_tree *t, node *n, char *cmn)
{
    if (n != NULL)
    {
        inorder(t, n->left, cmn);
        printf("%s%d -> %d\n", cmn, n->ipAdd,
               n->dataPacket);
        inorder(t, n->right, cmn);
    }
}

int main()
{
    char *cmn = "192.168.3.";
    splay_tree *t = new_splay_tree();
    node *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k, *l, *m;
    a = new_node(104);
    b = new_node(112);
    c = new_node(117);
    d = new_node(124);
    e = new_node(121);
    f = new_node(108);
    g = new_node(109);
    h = new_node(111);
    i = new_node(122);
    j = new_node(125);
    k = new_node(129);
    insert(t, a);
    insert(t, b);
    insert(t, c);
    insert(t, d);
    insert(t, e);
    insert(t, f);
    insert(t, g);
    insert(t, h);
    insert(t, i);
    insert(t, j);
    insert(t, k);
    int x;
    int find[11] = {104, 112, 117, 124, 121, 108, 109, 111,
                    122, 125, 129};
    int add[11] = {a, b, c, d, e, f, g, h, i, j, k};
    srand(time(0));
    for (x = 0; x < 11; x++)
    {
        int data = rand() % 200;
        node *temp = search(t, add[x], find[x]);
        if (temp != NULL)
        {
            temp->dataPacket = data;
        }
    }
    printf("IP ADDRESS -> DATA PACKET\n");
    inorder(t, t->root, cmn);
    return 0;
}
