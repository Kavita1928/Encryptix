#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef struct tree_t
{
int key;
struct tree_t *left;
struct tree_t *right;
struct tree_t *parent;
}*Tree;

Tree newtree(int key,Tree left,Tree right,Tree parent)
{
    Tree t=(Tree*)malloc(sizeof(Tree));
    assert(t);
    t->key = key;
    t->left=left;
    t->right=right;
    t->parent=parent;
    return t;
}

Tree insertintobst_re(Tree tree,int key,Tree parent)
{
    if(!tree)
        return newtree(key,NULL,NULL,parent);

    if(key<tree->left)
     tree->left=insertintobsta_re(tree->left,key,tree);
    else
        tree->right=insertintobst_re(tree->right,key,tree);

    return tree;
}


Tree insertintobst_it(Tree tree,int key)
{
    if(!tree)
    {
        return newtree(key,NULL,NULL,NULL);
    }
    Tree current= tree;
    Tree parent=tree->parent;

     while(current)
        {
        parent =current;
        if(key<current->key)
            current =current ->left;
        else
            current = current->right;
        }

        if(key < parent->key)
                parent->left = newtree(key,NULL,NULL,parent);
        else
            parent->right=newtree(key,NULL,NULL,parent);

        return tree;
}

Tree findmin(Tree tree)
{
    for(;tree->left;tree=tree->left)
        ;
    return tree;
}

Tree findmax(Tree tree)
{
    for(;tree->right;tree=tree->right)
        ;
    return tree;
}
Tree findtree(Tree tree,int key)
{
    while(tree)
    {
        if(key == tree->key)
            return tree;
        if(key < tree->key)
            tree=tree->left;
        else
            tree=tre->right;
    }
    return NULL;

}

Tree deleteTree(Tree tree,int key){
if(!tree)
{
    printf("Error!!");
    return NULL;
}
 if(key<tree->key)
 {


 }



   }



void main()
{
    Tree BST=NULL;
    int size,choice;
    printf("input size of array :");
    scanf("%d",&size);

    int *arr = (int*)calloc(size,sizeof(int));
    printf("enter elements of tree :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        insert_bst_iterative(bST,arr[i]);
    }

    printf("1.insert into bst non-recursively");
    printf("2.insert into bst recursively ");
    printf("3.find minimum of bst ");
    printf("4.find maximum of bst");
    printf("5.find key ");
    printf("6.delete key ");
    printf("7.print inorder");
    printf("8.print preorder");
    printf("9.print postorder");
    printf("10. find min key");
    printf("11. find max key");
    printf("12. check fro bst ");
    printf("13.Exit");
    int k=-1;
    while(k)
    {
        printf("Enter choice :");
        scanf("%d",&k);

        switch(k)
        {
            case 1: int insert;
            printf("Enter data to insert into bst :");
            scanf("%d",&insert);
            BST = insertintobst_it(BST,insert);
            break;

            case 2: int insert;
            printf("Enter data to insert into bst :");
            scanf("%d",&insert);
            BST=insertintobst_re(BST,insert);

            case 3: tree min=findmin(BST);
                    printf("the minimum of tree is %d\n",min->key);
                    break;


            case 4: tree max=findmax(BST);
                    printf("the maximum of tree is %d\n",min->key);
                    break;

            case 5: int find;
                    printf("Enter key to find:");
                    scanf("%d",&find);
                    Tree tree=find_treeinbst(BST,find);
                    if(!tree)
                        printf("key not found \n");

                    else
                        printf("found !!!!!");
                    break;

            case 6: int delete ;
                    printf("Enter thekey to delete :");
                    scanf("%d",&delete);
                    BST=deleteTree(BST,delete);


        }



    }







}
