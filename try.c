#include<stdio.h>
#include<time.h>
#include</home/ninad/graph_color/print.c>
#include</home/ninad/graph_color/randomize.c>
#include</home/ninad/graph_color/permute.c>
#include</home/ninad/graph_color/check.c>
#include</home/ninad/graph_color/arrange.c>


int main()
{
	char in[9][9],list[9],e;
	int i,j,k,size,flag,size_freeze = 0;

	//Reading the graph from the in_graph.txt
	for(i=0;i<9;i++)
	{
		scanf("%[^\n]s",temp);
       		scanf("%c",&e);

		for(j=0;j<9;j++)
		in[i][j] = temp[j];
	}
	
	randomize(in);		//generating a random starting configuration
	print(in);		//print the adjacency matrix	
	list[]={0,1,2,3,4,5,6,7,8};
	permute(in,list,0,9,9);
	return 0;
}	
