#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct BiTNode {
	int data;
	struct BiTNode* lchild;
	struct BiTNode* rchild;
}BiTNode,*BiTree;

bool Create_BiTree(BiTree* T) {
	char  ch;
	scanf_s("%c", &ch);
	if (ch=='#')
	{
		*T = NULL;
		return true;
	}
	else
	{
		*T = (BiTNode*)malloc(sizeof(BiTNode));
		(*T)->data = ch;
		Create_BiTree(&(*T)->lchild);
		Create_BiTree(&(*T)->rchild);
	}
	return true;
}

int main()
{
	BiTree T;
	Create_BiTree(&T);
	return 0;
}

//test program!!!!!