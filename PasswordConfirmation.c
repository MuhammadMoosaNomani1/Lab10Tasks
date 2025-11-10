#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
char password[50];
char confirmedPassword[50];
while(1){

	printf("\nEnter the Password:(atleast 8 characters) ");
	fgets(password,sizeof(password),stdin);
	password[strcspn(password,"\n")]='\0';
	int n=strlen(password);
	if(n!=8){
			printf("\nError! minimum 8 characters required.");
			continue;
		}
	else {
	printf("\nPlease confirm the password by retyping it: ");
	 fgets(confirmedPassword,sizeof(confirmedPassword),stdin);	
	 confirmedPassword[strcspn(confirmedPassword,"\n")]='\0';
	 if(strcmp(password,confirmedPassword)==0) {
	 printf("Confirmed Successfully!");
	 break;}
	 else{
	  printf("Sorry Not matched!\n");
	 break;}
	}
}
return 0;
}

