void randomize(char in [][9])
{
int randm1,randm2,i,temp[9];

	 for(randm1=0,randm2=4;randm2<9;randm1+=2,randm2=randm1+5)
                for(i=0;i<9;i++)
                {
                        temp[i]=in[randm1][i];
                        in[randm1][i]=in[randm2][i];
                        in[randm2][i]=temp[i];
                }
}
