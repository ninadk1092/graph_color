
void permute(char in[][9], char list[] , int k , int m, int n)
{
    int i;
    char temp;
    if(k == m)
    {
	arrange(list, in);
        printf("\n");
    }
    else
    {
        for( i = k ; i < m ; i++)
        {
            temp = list[i];
            list[i] = list[m-1];
            list[m-1] = temp;

            permute(in, list , k , m-1, n);

            temp = list[m-1];
            list[m-1] = list[i];
            list[i] = temp;
        }
    }
}

/*int main()
{
	char e;
	int len;
	printf("enter number of characters\n");
	scanf("%d",&len);
	scanf("%c",&e);
 	
	char in[len];
	printf("enter string: ");
	scanf("%[^\n]s",in);
	scanf("%c",&e);
	
	permute(in,0,len,len);

	return 0;
}*/
