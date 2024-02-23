#include<stdio.h>
void userdetails();
void moviedetails();
void nowshowing();
void comingsoon();
int main()
{
    printf("'WELCOME TO YOUR MOVIE BOOTH'\n\n");
    userdetails();
}

void userdetails()
{
    char email,name;
    int mob,city;
    printf("Kindly enter your email: ");
    scanf("%s",&email);
    printf("Kindly enter your name: ");
    scanf("%s",&name);
    printf("Kindly enter your mobile number: ");
    scanf("%d",&mob);
    printf("Kindly choose your city: \n");
    printf("1.DELHI\n2.BARAUT\n3.NOIDA\n4.BAGHPAT\n");
    scanf("%d",&city);
    if(city==1||city==2||city==3||city==4)
    {
        moviedetails();
    }
    else
        printf("Invalid Option!!");
}

void moviedetails()
{
    int theater,type;
    printf("In which theater do you wish to see movie? \n");
        printf("1.Inox\n2.Icon\n3.PVR\n4.Wave\n5.Carnival\n");
               scanf("%d",&theater);
               if(theater==1||theater==2||theater==3||theater==4||theater==5)
               {
                   printf("Choose the type of movie you wish to watch: \n");
                   printf("1.NOW SHOWING\t 2.COMING SOON\n");
                          scanf("%d",&type);
                          if(type==1)
                            nowshowing();
                          else if(type==2)
                            comingsoon();
                          else
                            printf("INVALID INPUT!!");
               }
               else
                printf("INVALID INPUT!!");
}

void nowshowing()
{
    int a,time,date,seat;
    int ticket;
 printf("\n\n'MOVIES'\n\n");
 printf("Kindly choose your movie\n1.Drishyam 2\n2.Avatar\n3.Bhediya\n");
 scanf("%d",&a);
 if(a==1||a==2||a==3)
 {
     printf("\nRATINGS:x/10\n");
     printf("CAST:___________\n");
     printf("CREW:___________\n");
     printf("Top Reviews: _______________\n\n");
     printf("Do you want to book tickets?\n\n");
     printf("Kindly enter\n1.yes\t2.no\n");
     scanf("%d",&ticket);
     if(ticket==1)
     {
     printf("Kindly choose date\n");
     printf("22.12.2022\n23.12.2022\n24.12.2022\n25.12.2022\n26.12.2022\n27.12.2022\n28.12.2022\n");
     scanf("%d",&date);
     if(date==22||date==23||date==24||date==25||date==26||date==27||date==28)
     {
     printf("\nKindly select timing\n");
     printf("1. 04:00 PM\n2. 07:00PM\n3. 10:00PM\n");
     scanf("%d",&time);
     if(time==1||time==2||time==3)
     {
     printf("\nHow many seats?\n");
     printf("NORMAL-X Rs.\nEXECUTIVE-Y Rs.\nVIP-Z Rs.\n");
     scanf("%d",&seat);
     printf("THANKYOU!! HAVE A NICE DAY \n");
     }
     else
        printf("INVALID INPUT!!");
     }
     else
        printf("INVALID INPUT!!");
}
else
    printf(":( wish to see you again");
 }
else
    printf("INVALID INPUT!!");
}

void comingsoon()
{
    int a,time,date,seat,ticket;
    printf("\n\nMOVIES\n\n");
    printf("Kindly choose your movie\n1.Cirkus\n2.Adipurush\n");
    scanf("%d",&a);
    if(a==1||a==2)
        {
     printf("\nRATINGS:x/10\n");
     printf("CAST:___________\n");
     printf("CREW:___________\n");
     printf("Top Reviews: _______________\n\n");
     printf("Do you want to book tickets?\n\n");
     printf("Kindly enter\n1.yes\t2.no\n");
     scanf("%d",&ticket);
     if(ticket==1)
     {
     printf("Kindly choose date\n");
     printf("22.12.2022\n23.12.2022\n24.12.2022\n25.12.2022\n26.12.2022\n27.12.2022\n28.12.2022\n");
     scanf("%d",&date);
     if(date==22||date==23||date==24||date==25||date==26||date==27||date==28)
     {
     printf("\nKindly select timing\n");
     printf("1. 04:00 PM\n2. 07:00PM\n3. 10:00PM\n");
     scanf("%d",&time);
     if(time==1||time==2||time==3)
     {
     printf("\nHow many seats?\n");
     printf("NORMAL-X Rs.\nEXECUTIVE-Y Rs.\nVIP-Z Rs.\n");
     scanf("%d",&seat);
     printf("THANKYOU!! HAVE A NICE DAY \n");
     }
     else
        printf("INVALID INPUT!!");
     }
     else
        printf("INVALID INPUT!!");
}
else
    printf("wish to see you again");
 }
else
    printf("INVALID INPUT!!");
}

