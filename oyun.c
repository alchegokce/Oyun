#include<stdio.h>

int main()
{
	char dizi[10][10];
	char key;
	int x=0, y=0;
	int i,j;
	
	printf("use WASD to move the X\n\n");
	printf("go to exit over the zeros\n\n");
	
	for(i=0; i<10; i++)
	{
		for(j=0;j<10;j++)
		{
			dizi[i][j]=(49);
		}
		
	}
	
	
	for(i=0; i<10; i++)
	{
		for(j=0;j<10;j++)
		{
			if(j==8 || i==2)
			dizi[i][j]=48;
		}
		
	}
	dizi[1][0]=48;
	char X=88;
	dizi[x][y] = X;
	dizi[9][9] = 'E';
	
	for(i=0; i<10; i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%3c",dizi[i][j]);	
		}
		printf("\n");
	}
	

	printf("\n");
	printf("\n");

		
		
    	while(dizi[9][9]!=X)
	{
		key = getch();
		system("CLS");
					
		switch(key)
		{
			case 'w' :
			case 'W' :
				
			if(x!=0) 
			{
				x--;
				if(dizi[x][y]!='1')
				{
					dizi[x][y]=X;
					dizi[x+1][y]='0';
					
					
				}
				else
				{
					x++;
					printf("you can't go there\n");					
				}
			}
			else
			{
				printf("you can't go outside of the map\n");
			}
			break;
			
			
			
			case 's' :
			case 'S' :
			
			if(x!=9)
			{
				x++;			
				if(dizi[x][y]!='1')
				{
					dizi[x][y]=X;
					dizi[x-1][y]='0';
				}
				else
				{
					x--;
					printf("you can't go there\n");
				}
			}
			else
			{
				printf("you can't go outside of the map\n");
			}
			break;
			
			
			
			case 'd' :
			case 'D' :
			
			if(y!=9)
			{
				y++;
			 	if(dizi[x][y]!='1')
				{
					dizi[x][y]=X;
					dizi[x][y-1]='0';
					
				}
				else
				{
					y--;
					printf("you can't go there\n");
				}
			}
			else
			{
				printf("you can't go outside of the map\n");
			}
			break;
			
			
			
			case 'a' :
			case 'A' : 
			
			if(y!=0)
			{
				y--;
				if(dizi[x][y]!='1')
				{
					dizi[x][y]=X;
					dizi[x][y+1]='0';
					
				}
				else
				{
					y++;	
					printf("you can't go there\n");
				}	
			}
			else
			{
				printf("you can't go outside of the map\n");
			}
			break;
			
			
			
			default: printf("wrong key\n");
			break;
	    }
	    
		for(i=0; i<10; i++)
		{
			for(j=0;j<10;j++)
			{
				printf("%3c",dizi[i][j]);	
			}
			printf("\n");
		}
		printf("\n");
		
		if(dizi[9][9]==X)
		printf("VICTORY!\n");
	    
	 
	

	}

	
	

	
}
