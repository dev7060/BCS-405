#include<iostream>
using namespace std;
int main(int argc, char *argv[]) 
{ 
	int counter; 
	printf("Program Name: %s",argv[0]); 
	if(argc>=2) 
	{ 
		printf("\nNumber Of Arguments: %d\n",argc); 
		for(counter=0;counter<argc;counter++) 
			printf("\nargv[%d]: %s",counter,argv[counter]); 
	}
  system("pause");
	return 0; 
} 
