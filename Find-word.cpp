#include <iostream>
#include <cstring>
using namespace std;
int main () 
{
cout<<"\t\t\t\t\t\t    ----------- \n";
	cout<<"\t\t\t\t\t\t   | FIND WORD |\n";
	cout<<"\t\t\t\t\t\t    ----------- \n";
	char find[15][15]=  { {'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'},
						  {'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'},
						  {'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'},
						  {'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'},
						  {'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'},
						  {'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'},
						  {'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'},
						  {'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'},
						  {'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'},
						  {'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'},
						  {'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'},
						  {'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'},
						  {'m','o','s','g','z','c','z','e','t','d','b','o','o','t','o'},
						  {'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'},
						  {'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'} };
	
	cout<<"\n-----------------------------";
	cout<<"\n\tTabel Huruf \n";
	cout<<"-----------------------------\n\n";
	for(int x=0; x<15; x++)
	{
		for (int y=0; y<15; y++) 
		{ cout<<find[x][y]<<" "; }
		cout<<endl; 
	}
///FUNGSI FIND WORD
int findword(char *(input))
{
	int found=0,jml=strlen(input),cek;
	char find[15][15]= {  {'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'},
						  {'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'},
					  	  {'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'},
						  {'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'},
						  {'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'},
						  {'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'},
						  {'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'},
					  	  {'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'},
						  {'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'},
						  {'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'},
						  {'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'},
						  {'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'},
						  {'m','o','s','g','z','c','z','e','t','d','b','o','o','t','o'},
						  {'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'},
						  {'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'} };
	for (int x=0; x<15; x++)
	{
		for (int y=0; y<15; y++)
		{
			if (input[0]==find[x][y])
			{
				
//Horizontal Kanan
				for (int z=0; z<jml; z++)
				{
					if (input[z]==find[x][y+z])
					{ cek=z; }
					else
					{ break; } 
				}		
				if (cek==jml-1)
				{ found+=1; }
				else
				{ found+=0; }
				cek=0;
//Horizontal Kiri
				for (int z=0; z<jml; z++)
				{  
					if (input[z]==find[x][y-z])
					{ cek=z; }
					else
					{ break; }
				}		
				if (cek==jml-1)
				{ found+=1; }
				else 
				{ found+=0; }
				cek=0;						  			
//Vertikal Bawah
				for (int z=0; z<jml; z++)
				{
					if (input[z]==find[x+z][y])
					{ cek=z; }
					else
					{ break; }
				}
				if (cek==jml-1)
				{ found+=1; }
				else 
				{ found+=0; }
				cek=0;
//Vertikal Atas
				for (int z=0; z<jml; z++) 
				{
					if (input[z]==find[x-z][y]) 
					{ cek=z; }
					else 
					{ break; } 
				}
				if (cek==jml-1)
				{ found+=1; }
				else
				{ found+=0; }
				cek=0;
//Diagonal Kiri Atas
				for (int z=0; z<jml; z++)
				{ 
					if (input[z]==find[x-z][y-z])
					{ cek=z; }
					else
					{ break; } 
				}
				if (cek==jml-1)
				{ found+=1; }
				else
				{ found+=0; }
				cek=0;
//Diagonal Kanan Atas
				for (int z=0; z<jml; z++)
				{
					if (input[z]==find[x-z][y+z]) 
					{ cek=z; }
					else
					{ break; }
				}
				if (cek==jml-1)
				{ found+=1; }
				else
				{ found+=0; }
				cek=0;
//Diagonal Kiri Bawah
				for (int z=0; z<jml; z++)
				{
					if (input[z]==find[x+z][y-z])
					{ cek=z; }
					else
					{ break; } 
				}
				if (cek==jml-1)
				{ found+=1; }
				else 
				{ found+=0; }
				cek=0;
