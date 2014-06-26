
void check(char in[][9])
{
	int size, size_freeze=0,flag,i,j;
	
	for(size=1;size<9;size++)		//size of current zero matrix cannot be equal to 9, which would mean no connections
	{
	flag = 0;
		for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
			{		
				if(in[i][j] != '0')
				{
					printf("%d\n",(size - 1));
					flag = 1;
					break;
				}
			
			}
		if(flag == 1)
		break;
		}
	if(flag == 1)
	break;
	}
	
	size_freeze = size;
	for(;size<10;size++)               //size of current zero matrix cannot be equal to 9, which would mean no connections
        {
        flag = 0;
                for(i=size_freeze -1;i<size;i++)
                {
                        for(j=size_freeze-1;j<size;j++)
                        {
                                if(in[i][j] != '0'||(i==8 && j==8 && in[i][j]=='0'))
                                {
                                        printf("%d\n",(size - (size_freeze-1)));
                                        flag = 1;
                                        break;
                                }

                        }
                if(flag == 1)
                break;
                }
        if(flag == 1)
        break;
        }
	
}
