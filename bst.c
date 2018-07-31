#include<stdlib.h>
#include<stdio.h>
struct node{
	int key;
	struct node  *left, *right;
};
struct node *newNode(int item){
	struct node *temp=(struct node *) malloc(sizeof(struct node));
	temp->key=item;
	temp->left=temp->right=NULL;
	return temp;
}
	struct node *search(struct node *root,int key)
	{
		if(root==NULL)
			return NULL;
	    if(root->key==key)
			return root;
		if(root->key >key)
			return search(root->left,key);
		else
		    return search(root->right,key);
	}
	struct node *insert(struct node *node,int key)
	{
		if(node==NULL)
			return newNode(key);
		if(node->key > key)
			node->left=insert(node->left,key);
		else
			node->right=insert(node->right,key);
		return node;
	}
	void inorder(struct node *root)
	{
		if(root!=NULL){
			inorder(root->left);
			printf("%d\n",root->key);
			inorder(root->right);
		}
	}
	void preorder(struct node *root)
	{
		if(root!=NULL)
		{
			printf("%d\n",root->key);
			preorder(root->left);
			preorder(root->right);
		}
	}
	void postorder(struct node *root)
	{
		if(root!=NULL)
		{   postorder(root->left);
			postorder(root->right);
			printf("%d\n",root->key);
		}
	}
	int main(){
		struct node *root=NULL;
		/*char *s=(char) malloc(sizeof(char));int key;int flag=1;
		while(flag==1)
		{ 
        printf("Do u want to enter a tree element? Y/N?");
        scanf("%s",s);
        if(*s=='Y')
         {
         	printf("Enter element");
            scanf("%d",&key);
            insert(root,key);
       	 }
       	 else
       	 	flag=0;
       	}*/
       	int len;int i;int key;
       	printf("Enter length of tree\n");
       	scanf("%d",&len);
       	for(i=0;i<len;i++)
       	{
       		scanf("%d",&key);
       		if(i==0)
       			root=insert(root,key);
       		else
       			insert(root,key);
       	}
       	printf("\nEnter the element to be searched\n");
       	scanf("%d",&key);
       struct node *ans=search(root,key);
       if(ans==NULL)
       insert(root,key);
       else printf("\nKey Found");
        printf("\nInorder traversal\n");
        inorder(root);
        printf("\nPreorder traversal\n");
        preorder(root);
        printf("\nPostorder traversal\n");
        postorder(root);
       return 0;

   }

       	 

       	 

