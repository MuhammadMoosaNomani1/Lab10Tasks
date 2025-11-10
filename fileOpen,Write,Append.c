#include<stdio.h>
#include<string.h>
int main(){
    FILE *file;
    char filename[]="example.txt";
    char content[] = "Hello, World!";
    char appendContent[]=" Appended content";

    file=fopen(filename,"w");
    if(file==NULL){
        printf("\nCould not open file for writing.\n");
        return 1;
    }
    fprintf(file,"%s",content);
    fclose(file);

    file = fopen(filename,"r");
    if(file == NULL){
        printf("\nCould not open file for reading.\n");
        return 1;
    }

    char buffer[100];
    fgets(buffer,sizeof(buffer),file);
    printf("\nFile content: %s", buffer);
    fclose(file);

    file = fopen(filename,"a");
    if(file==NULL){
        printf("\nCould not open file for appending.\n");
        return 1;
    }
    fprintf(file,"%s",appendContent);
    fclose(file);
    
    file = fopen(filename,"r");
    if(file == NULL){
    	printf("\nCould not open file for reading.\n");
    	return 1;
	}
	
	char c;
	printf("\nFile content after appending: ");
	while((c=fgetc(file))!=EOF){
		printf("%c", c);
	}
	fclose(file);


    return 0;
   }


