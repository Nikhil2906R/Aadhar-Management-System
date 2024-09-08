#include<stdio.h>
#include<string.h>
struct user
{
	char ano[50];
	char dob[50],fname[50],lname[50],mno[50];
	char gen[50],vill[50],mdl[50],dist[50];
};
void main()
{
	struct user usr;
	char filename[50],ano[50],dob[50],fname[50],lname[50],mno[50];
	char gen[50],vill[50],mdl[50],dist[50];
	int opt,choice;
	char cont = 'y';
	FILE *fp;
	printf("\nWhat do you want to do?");
	printf("\n\n1.Enroll a aadhar for new user");
	printf("\n2.Update your existing details in aadhar");
	printf("\n\nPlease enter your choice:\t");
	scanf("%d",&opt);
	if(opt == 1)
	{
		printf("\nEnter your aadhar number:\t");
		scanf("%s",usr.ano);
		printf("Enter your date of birth (in format ddmmyyyy):\t");
		scanf("%s",usr.dob);
		printf("Enter your first name :\t");
		scanf("%s",usr.fname);
		printf("Enter your last name :\t");
		scanf("%s",usr.lname);
		printf("Enter mobile number :\t");
		scanf("%s",usr.mno);
		printf("Enter Gender :\t");
		scanf("%s",usr.gen);
		printf("Enter your village name :\t");
		scanf("%s",vill);
		printf("Enter your mandal name :\t");
		scanf("%s",mdl);
		printf("Emter your district name :\t");
		scanf("%s",dist);
		strcpy(filename,usr.ano);
		fp=fopen(strcat(filename,".txt"),"w");
		fwrite(&usr,sizeof(usr),1,fp);
		if(fwrite != 0)
		{
			printf("Succesfully enrolled");
		}
	}
	
	else if(opt==2)
	{
		printf("Enter 12 digit aadhar number\n");
		scanf("%s",ano);
		printf("Enter date of birth :\t");
		printf("(in format of ddmmyyyy)\n");
		scanf("%s",dob);
		fp = fopen(strcat(ano,".txt"),"r");
		if(fp == NULL)
			printf("Invalid Aadhar number");
		else
		{
			fread(&usr,sizeof(struct user),1,fp);
			fclose(fp);
			if(!strcmp(dob,usr.dob))
			{
				while(cont == 'y')
				{
					printf("\n\tWelcome %s %s",usr.fname,usr.lname);
					printf("\nPress 1 for showing details");
					printf("\nPress 2 for changing name");
					printf("\nPress 3 for channging date of birth");
					printf("\nPress 4 for changing mobile number");
					printf("\nPress 5 for changing gender");
					printf("\nPress 6 for changing address\n");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							printf("Your Details are :\n");
							printf("Aadhar number : %s",usr.ano);
							printf("\nName : %s %s",usr.fname,usr.lname);
							printf("\nGender : %s",usr.gen);
							printf("\nDate of birth : %s",usr.dob);
							printf("\nMobile number : %s",usr.mno);
							printf("\nAddress : %s, %s, %s",usr.vill,usr.mdl,usr.dist);
							break;
						case 2:
							printf("Enter new first name :\t");
							scanf("%s",fname);
							printf("Enter new last name :\t");
							scanf("%s",lname);
							strcpy(usr.fname,fname);
							strcpy(usr.lname,lname);
							strcpy(filename,usr.ano);
							fp = fopen(strcat(filename,".txt"),"w");
							fwrite(&usr,sizeof(struct user),1,fp);
							fclose(fp);
							printf("Successfully changed User name");
							break;
						case 3:
							printf("\n\nPlease enter your old date of birth:\t");
							scanf("%s",dob);
							if(!strcmp(dob,usr.dob))
							{
								printf("Enter your new date of birth(in format of ddmmyyyy):\t");
								scanf("%s",dob);
								strcpy(usr.dob,dob);
								strcpy(filename,usr.ano);
								fp = fopen(strcat(filename,".txt"),"w");
								fwrite(&usr,sizeof(struct user),1,fp);
								fclose(fp);
								printf("Successfully changed your date of birth");
							}
							else
							{
								printf("\nInvalid date of birth");
							}
							break;
						case 4:
							printf("Enter you new mobile number :\t");
							scanf("%s",mno);
							strcpy(usr.mno,mno);
							strcpy(filename,usr.ano);
							fp = fopen(strcat(filename,".txt"),"w");
							fwrite(&usr,sizeof(struct user),1,fp);
							fclose(fp);
							printf("Successfully changed your mobile number");
							break;
						case 5:
							printf("Enter new gender :\t");
							scanf("%s",gen);
							strcpy(usr.gen,gen);
							strcpy(filename,usr.ano);
							fp= fopen(strcat(filename,".txt"),"w");
							fwrite(&usr,sizeof(struct user),1,fp);
							fclose(fp);
							printf("Successfully changed your gender");
							break;
						case 6:
							printf("Enter new address :\n");
							printf("Village Name :\t");
							scanf("%s",vill);
							printf("Mandal Name :\t");
							scanf("%s",mdl);
							printf("District Name :\t");
							scanf("%s",dist);
							strcpy(usr.vill,vill);
							strcpy(usr.mdl,mdl);
							strcpy(usr.dist,dist);
							strcpy(filename,usr.ano);
							fp= fopen(strcat(filename,".txt"),"w");
							fwrite(&usr,sizeof(struct user),1,fp);
							fclose(fp);
							printf("Successfully changed your Address");
							break;
						default:
							printf("Invalid option");
							break;
					}
					printf("\n\nDo you want to continue?(If yes press 'y',if not press 'n'):\t");
					scanf("%s",&cont);			
				}
			}
			else
			{
				printf("Invalid date of birth");
			}	
		}
		printf("\n\n***Thank you for enrolling aadhar***\n\n");
	}
}
