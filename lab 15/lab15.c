#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};


struct Node* constructTreeUtil(int pre[], int* preIndex, int low, int high, int size)
{
    if (*preIndex >= size || low > high)
        return NULL;

    struct Node* root = (struct Node *)malloc(sizeof(struct Node));
    root->left = NULL;
    root->right = NULL;
    root->data = pre[*preIndex];
    *preIndex = *preIndex + 1;

    if (low == high)
        return root;

    int i;
    for (i = low; i <= high; ++i)
        if (pre[i] > root->data)
            break;

    root->left = constructTreeUtil(pre, preIndex, *preIndex, i - 1, size);
    root->right = constructTreeUtil(pre, preIndex, i, high, size);
    return root;
}

struct Node* constructTree(int pre[], int size)
{
    int preIndex = 0;
    return constructTreeUtil(pre, &preIndex, 0, size - 1, size);
}

void inorder(struct Node *t)
{
    if (t!=NULL)
    {
        inorder(t->left);
        printf("%d ", t->data);
        inorder(t->right);
    }

}

void preorder(struct Node *t)
{
    if (t!=NULL)
    {
        printf("%d ", t->data);
        preorder(t->left);
        preorder(t->right);
    }
    
}


int FindMin(struct Node *tree)
{
    int min;
    min = tree->data;
    if (tree->left == NULL) 
    {
        return min;
    }
    FindMin(tree->left);

}

int FindMax(struct Node *tree)
{
    int max;
    max = tree->data;
    if (tree->right == NULL) 
    {
        return max;
    }
    FindMax(tree->right);

}
int search(struct Node *tree, int n)
{
    if (n == tree->data)
    {
        printf("Found it ");
        return 0;
    }
    else if (n < tree->data)
    {
        search(tree->left, n);
    }
    else if (n > tree->data)
    {
        search(tree->right, n);
    }
    
}
void main()
{
    int opt;
    printf("1 for default values\n2 for custom values\n");
    printf(" Enter the option\n");
    scanf("%d", &opt);
    if (opt == 1)
    {
        int pre[] = { 27 ,19 ,14, 10, 35, 31, 42 };
        int size = sizeof(pre) / sizeof(pre[0]);
        struct Node *head;
        head = constructTree(pre, size);
        printf("Display in Inorder ");
        inorder(head);
        printf("\nThe min value %d \n", FindMin(head));
        printf("The max value %d ", FindMax(head));
        int n;
        printf("Enter the num to be searched ");
        scanf("%d", &n);
        search(head, n);
        
    }
    else if(opt == 2)
    {
        int pre[100], i = 0, data, size;
        struct Node *Tree;
        printf("\nEnte the pre order values, enter 0 to exit ");
        do
        {
            printf("\nEnter the data :");
            scanf("%d", &data);
            pre[i] = data;
            i++;
        }while(data);
        size = i - 1;
        Tree = constructTree(pre, size);
        printf("\nDisplay in Inorder ");
        inorder(Tree);
        printf("\nThe min value %d", FindMin(Tree));
        printf("\nThe max value %d ", FindMax(Tree));

        int n;
        printf("Enter the num to be searched ");
        scanf("%d", &n);
        search(Tree, n);

    }
    else
    {
        printf("Thank you ");
    }
    
}
