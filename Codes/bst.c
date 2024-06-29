#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     struct node*lnode;
     struct node*rnode;
};
struct node*getnode(int key)
{
     struct node*newnode;
     newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=key;
     newnode->lnode=NULL;
     newnode->rnode=NULL;
     return newnode;
}
struct node* createTree(struct node*root,int key)
{
     if(root==NULL)
     {
          root=getnode(key);
          return root;
     }
     if(root->data<key)
     {
          root->rnode=createTree(root->rnode,key);
          return root;
     }
     if(root->data>key)
     {
          root->lnode=createTree(root->lnode,key);
          return root;
     }
     //t(n)=2t(n/2)+c
}
struct node* search(struct node*root,int key)
{
     if(root==NULL)
     {
       printf("key not found\n");
      return root;
     }
     if(root->data==key)
     {
       printf("key is found\n");
      return root;
     }
     if(root->data<key)
     {
          root->rnode=search(root->rnode,key);
          return root;
     }
     if(root->data>key)
     {
          root->lnode=search(root->lnode,key);
          return root;
     }
     //t(n)=2t(n/2)+c
}
void min(struct node*root)
{
     while(root->lnode!=NULL)
     {
          root=root->lnode;
     }
     printf("min=%d\n",root->data);
}
void inorder(struct node*root)
{
     if(root==NULL)
     {
          return;
     }
     inorder(root->lnode);
     printf("%d \n",root->data);
     inorder(root->rnode);

}
void preorder(struct node*root)
{
     if(root==NULL)
     {
          return;
     }
     printf("%d \n",root->data);
     preorder(root->lnode);
     preorder(root->rnode);

}
void postorder(struct node*root)
{
     if(root==NULL)
     {
          return;
     }
     postorder(root->lnode);
     postorder(root->rnode);
     printf("%d \n",root->data);

}
int max(struct node*root)
{
     if(root==NULL)
     {
          return;
     }
     while(root->rnode!=NULL)
     {
          root=root->rnode;
     }

     return root->data;
}
struct node* delete_node(struct node*root,int key)
{
      if(root==NULL)
     {
       printf("key not found\n");
       return;

     }
     if(root->data==key)
     {
       printf("key is found\n");
       if(root->lnode==NULL && root->rnode==NULL)
     {
;
          free(root);
          return NULL;
     }
     if(root->lnode!=NULL && root->rnode==NULL)
     {
          struct node *temp;
          temp=root->lnode;
          free(root);
          return temp;
     }
      if(root->lnode==NULL &&root->rnode!=NULL)
     {
          struct node*temp;
          temp=root->rnode;
          free(root);
          return temp;
     }


     if(root->lnode!=NULL && root->rnode!=NULL)
     {

          int maxi;
          maxi = max(root->lnode);
          root->data=maxi;
          root->lnode=delete_node(root->lnode,maxi);
          return root;

     }
     }
     if(root->data<key)
     {
          root->rnode=delete_node(root->rnode,key);
     }
     if(root->data>key)
     {
          root->lnode=delete_node(root->lnode,key);
     }


}

int main()
{
     int c,key,maxi;
     struct node*root=NULL;

     while(1) 
     {
     printf("select 1.create tree  2.search tree  3.inorder display 4.preorder 5.postorder 6.find minimum 7.find maximum  8.DELETE 9.HEIGHT OF THE TREE\n");
     scanf("%d",&c);
     switch(c)
     {
          case 1:printf("enter the key\n");
                 scanf("%d",&key);
                 root=createTree(root,key);
                 break;
          case 2:printf("enter the key\n");
                 scanf("%d",&key);
                 root=search(root,key);;
                 break;
          case 3:inorder(root);
                 break;
          case 4:preorder(root);
                 break;
          case 5:postorder(root);
                 break;
          case 6:min(root);
                 break;
          case 7:max(root);
                 break;
          case 8:printf("enter the key\n");
                 scanf("%d",&key);
                 root=delete_node(root,key);
                 break;
     }
     }

}

