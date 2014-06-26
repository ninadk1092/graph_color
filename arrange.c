void arrange(char list[], char in[][9])
{
	int i,j,k;
	char temp[9][9];
	
	for(i=0;i<9;i++)
	strcpy(temp[i],in[list[i]]);	//copy rows in list[i]'s order to temp
	
	for(i=0;i<9;i++)
	for(j=0;j<9;j++)
	temp[j][i] = in[j][list[i]];
		
	check(temp);
}
