#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct data{
	int obs;
	char a[100];
	char b[100];
	char c[100];
	int d;
	int e;
};

struct data def;
void removeSpaces(char line[]){
	
int i=0;
int l=strlen(line);
int j=0;

	while(line[j]!='\0'){
		 if(line[j]==' '){
		 	l-=1;
		 }
		
		 ++j;
	}
	while(line[strlen(line)-1]==' '){
		line[strlen(line)-1]='\0';
	}
	while(line[i]!='\0'){
		if(line[i]==' '){
			int j=i;
			int k=i;
			while(line[j]==' '){
				j++;
				
			}
		
						while(j<strlen(line)){
				line[k]=line[j];
				k++;j++;
			}
			continue;
		}
		i++;
	}
	line[l]='\0';

}
void removeCommas(char line[]){
	removeSpaces(line);
	int i=0;
	while(line[i]!='\0'){
		if(line[i]==','){
			line[i]=' ';
		}
		i++;
	}
}		
int main(int argc, char const *argv[])
{
	FILE *fp; //a file pointer 
	fp=fopen("test.csv","r"); //opening file in read mode
	char x[100];
	printf("%s\n",a);
		while(fgets(x,100,fp)!=NULL){
			
		removeCommas(x);
		printf("\n");
		sscanf(x,"%d %s %s %s %d %d",&(def.obs),def.a,def.b,def.c,&(def.d),&(def.e));
		printf("%d\n",def.obs);
		printf("%s\n",def.a);
		printf("%s\n", def.b);
		printf("%s\n", def.c);
		printf("%d\n",def.d);
		printf("%d\n",def.e);
		
		// 
}
	
	fclose(fp);

	return 0;
}
