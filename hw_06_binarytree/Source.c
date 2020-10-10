#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "binarytree.h"
int main()
{
	struct node* root = NULL;
	int menu = -1, value, i;
	while (menu != 0)
	{
		printf("1 add new \n");
		printf("2 breadth first search \n");
		printf("3 depth first search \n");
		printf("4 search number \n");
		printf("0 exit \n");
		printf("Enter number: ");
		scanf("%d", &menu);
		if (menu == 1)
		{
			printf("Enter your number: ");
			scanf("%d", &value);
			add_new(&root, value);
		}
		else if (menu == 2)
		{
			bfs(root);
		}
		else if (menu == 3)
		{
			dfs(root);
			printf("\n");
		}
		else if (menu == 4)
		{
			printf("Enter your number: ");
			scanf("%d", &value);
			search(root, value);
		}
		else if (menu == 0)
		{
			printf("\n");
		}
		else
		{
			printf("Wrong number\n");
		}
	}
	return 0;
}