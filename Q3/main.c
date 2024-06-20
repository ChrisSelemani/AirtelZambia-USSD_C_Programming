
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//THESE ARE MY FUNCTIOPNS PROTOTYPES
dataPacks();
allNetSoche();
buyForOther();
weeklyPack(airtelMoney2);
monthlyPack();
airtelMoney();
airtelMoney2();
allNet();
ikali();

int main()
{
    int entry, choice;
    int option, sub_option1, sub_option11, sub_option12, answer;
    int  pin,yatu, back1, Freedom, Freedom1, sub_option;
    int cheza_choice1, cheza_choice2, cheza_choice3, cheza_choice, cheza_choice33, cheza_choice21, cheza_choice11, dailyCheza;

   printf("Enter the USSD Code: \n");
   scanf(" %d", &entry);
   system("cls");

    if(entry == 117){

// Airtel WELCOME PAGE / MENU........................................................................

    printf("\tInformation\n");
    printf("1) Ikali \n");
    printf("2) Airtel Soche Pack \n");
    printf("3) All networks Soche \n");
    printf("4) Data Packs \n");
    printf("5) Buy for Other\n");
    printf("6) Balance Check \n");
    printf("7) Siliza-Airtel Loan \n");
    printf("8) Get Airtel App(100MB Free)\n");

// MY FIRST USER INPUT OPTION
    scanf("%d", &option);
    system("cls");

//1ST CONDITION TO SELECT AN OPTION

    if (option == 1){
            ikali();
   }//SECOND OPTION FOR AIRTEL SOCHE PACK................................................................
   else if (option == 2){
        allNetSoche();
   }
   //THIRD OPTION FOR ALL NETWORKS SOCHE.........................................................
    else if (option == 3)
        {
    allNetSoche();

    }
    //FOURTH OPTION FOR DATA PACKS................................................................
    else if (option == 4)
        {
        dataPacks();

    }
    //FITH OPTION FOR BUY FOR OTHER..................................................................
     else if (option == 5)
        {
        buyForOther();
    }
    //SIXTH OPTION FOR BALANCE CHECK....................................................................
    else if (option == 6)
        {
        printf("\n");
        printf("Dear Customer, your balance request is being processed.\n");
        printf("You will receive a confirmation message shortly\n");
    }
    //SEVENTH OPTION FOR SILIZA AIRTIME LOAN...............................................................
    else if (option == 7)
        {
        printf("\n");
    printf("1) For Siliza Airtime \n");
    printf("2) For Eligibility\n");
    printf("3) For Payment\n");
    printf("4) For help \n");
    printf("5) For balance\n");

    scanf("%d", &sub_option);
    if (sub_option == 1){
        printf("\n");
        printf("Dear customer, your request was successful. \nTop up more to qualify for this service\n");
    }
    else if (sub_option == 2){
        printf("\n");
        printf("Dear customer, your request was successful. \nTop up more to qualify for this service\n");
    }
    else if (sub_option == 3){
        printf("\nPlease Recharge with K0.000 to fully Payback your Loan\n");
    }//Options under "For help entity"................
    else if (sub_option == 4){
        printf("Reply with:\n\n");
        printf("1. Qualification\n");
        printf("2. Repayment\n");
        printf("# Main Menu\n");

        scanf("%d", &sub_option);
    system("cls");
        if (sub_option == 1){
            printf("To qualify you must have been an active Airtel subscriber for at least 1 month.\n");
            printf("Reply with: \n1 to return \n");
            scanf("%d", &sub_option);
    system("cls");
            if (sub_option==1){
                main();
            }else printf("Invalid input\n");
        }
        else if (sub_option == 2){
            printf("The advanced amount should be paid back within 48hrs. \nTo repay, please recharge your line.\n");
            printf("Reply with: \n1 to return\n");
            scanf("%d", &sub_option);
    system("cls");
             if (sub_option==1){
                main();
            }else printf("Invalid input\n");
        }
        else if (sub_option == "#"){
            main();
        }else printf("Invalid input\n");
    }
    else if (sub_option == 5){
        printf("\nDear Customer, your request is being processed. \nYou will receive an SMS confirmation shortly\n");
    }else printf("Invalid input\n");
    }
    //EIGHTH OPTION FOR GET AIRTEL APP (1OOMB FREE)........................................................
    else if (option == 8)
        {printf("\n");
        printf("Dear Customer, your request is processed , You will receive a \nconfirmation message with a link shortly.\n");
        printf("Click the link to download the App.\n");
    }
    //LAST CONDITION........................................................................................
    else {
        printf("Invalid Key\n");
    }
    //........................................................................................................
 }

 return 0;
}

int airtelMoney(){
    int sub_option11, pin;
         printf("Thank you for Selecting ikali K2 for 16 Airtel mins valid for 24hrs. Choose payment option bellow:\n1.Main Account\n2.Airtel money\n");

         scanf("%d", &sub_option11);
         system("cls");
                    if(sub_option11 == 1){
                        printf("Airtel Message\n\n");
                        printf("You cannot buy the offer/package due to\n insufficient fund on your account\n\n");
                      }
                    else if (sub_option11 == 2){
                        printf("Please input your Mobile Money PIN\n");
                        scanf("%d", &pin);
                        system("cls");
                        printf("You have entered a wrong PIN Please try again later!\n");
                    }else{
                    printf("Invalid request\n");
                    }
}
//3rd FUNCTION
int airtelMoney2(){
    int sub_option11, pin;
     printf("\n1.Main Account\n2.Airtel money\n");

         scanf("%d", &sub_option11);
         system("cls");
                    if(sub_option11 == 1){
                        printf("Airtel Message\n\n");
                        printf("You cannot buy the offer/package due to\n insufficient fund on your account\n\n");
                      }
                    else if (sub_option11 == 2){
                        printf("Please input your Mobile Money PIN\n");
                        scanf("%d", &pin);
                        system("cls");
                        printf("You have entered a wrong PIN Please try again later!\n");
                    }else{
                    printf("Invalid request\n");
                    }
}//4th FUNCTION
int allNet(){
    printf("Select:\n");
    printf("1.K2 = 9Min + 100SMS  \n2.K5 = 36Min+20MB+250SMS \n");
    printf("3.K10 = 90Min+50MB+250SMS  \n0 Return to main menu\n");
}
 //FITH FUNCTION
int ikali(){
    int sub_option1;
    printf("1) K2=16 Aitel Min, 24Hrs \n");
    printf("2) K2=12 All Networks Min, 24hrs \n");
    printf("3) K5 = All Network Min, 7Days \n");
    printf("4) K3 =240MB, 24Hrs \n");
    printf("5) K10 =1.2GB, 24Hrs\n");
    printf("\n");

    //1st SUB_OPTION USER INPUT/ PLUS TWO CHILDREN OPTIONS
    scanf("%d", &sub_option1);
    system("cls");

     if ( sub_option1 == 1 )
        {
         airtelMoney();
        }
        else if( sub_option1 == 2 )
        {
            //SECOND Sub_OPTION.......................................
            airtelMoney2();
        }
        else if( sub_option1 == 3 )
        {
           airtelMoney2();
        }
        else if( sub_option1 == 4 )
        {
           airtelMoney2();
        }
        else if( sub_option1 == 5 )
        {
           airtelMoney2();
        }
        else
        {
          printf("Invalid Key!\n");
        }

}
int weeklyPack(){
    int pin;
    printf("1. K20=180Min+100MB+500SMS  \n2. K10=65Min+75MB+200SMS \n");
    printf("3. K5=20Min+100SMS  \n0 Return to main menu\n");
    scanf("%d",&pin);
  system("cls");
    if (pin==1){
        airtelMoney2();
    }
    else if (pin==2){
         airtelMoney2();
    }
    else if (pin==3){
         airtelMoney2();
    }
    else if (pin==0){
         airtelMoney2();
    }
    else printf("Invalid Key\n");
}
int monthlyPack(){
    int pin;
    printf("1. K50=300Min+500MB+500SMS  \n2. K100=800Min+1GB+1000SMS \n");
    printf("3. K200=2000Min+3GB+2000SMS  \n0 Return to main menu\n");
    scanf("%d",&pin);
  system("cls");
    if (pin==1){
        airtelMoney2();
    }
    else if (pin==2){
         airtelMoney2();
    }
    else if (pin==3){
         airtelMoney2();
    }
    else if (pin==0){
         airtelMoney2();
    }
    else printf("Invalid Key\n");
}//FUNCTION................................
int buyForOther(){
    char pinP="11";
    int pin;
    printf("\nPlease enter the subscribers number you wish to purchase a SoChe Pack for \n097xxxxxxx/077xxxxxxx\n");
    scanf("%d", &pin);
  system("cls");
    if (pin==pinP){
        airtelMoney2();
    }else {
        printf("Dear Customer, the entered number is not Airtel number \n%d \n", pin);
    }
}
//FUCTION.................................
int allNetSoche(){

    int sub_option1, sub_option11;
    printf("Select:\n");
    printf("1.For 24Hrs Daily Pack\n");
    printf("2.FOr Weekly Pack \n");
    printf("3.For Monthly Pack\n");
    printf("4.Buy for other\n");
    printf("0 Return to main menu\n");

    scanf("%d", &sub_option1);
    system("cls");


    if (sub_option1 == 1){
        printf("Select:\n");
        allNet();                    //function calling
        scanf("%d", &sub_option11);  //after termination of the function the user input is needed
        system("cls");               //and the system will be cleaned again
        if (sub_option11 == 1)
        {
           airtelMoney2();
        }else if( sub_option11 == 2 )
        {
           airtelMoney2();
        }
        else if( sub_option11 == 3 )
        {
           airtelMoney2();
        }
        else if( sub_option11 == 0 )
        {
           main();
        }
        else {
            printf("Invalid key");
        }
    }//This is Suboption1_2....................
    else if (sub_option1 == 2){
    weeklyPack();
    }//This is Suboption1_3....................
    else if (sub_option1 == 3){
    monthlyPack();
    }//This is Suboption1_4....................
    else if (sub_option1 == 4){
    buyForOther();
    }//This is Suboption1_5....................
    else if (sub_option1 == 0){
        main();
    }//This is Suboption1_ Invalid Key....................
    else {
        printf("Invalid Key\n");
    }
}
//THIS IS MY FUCTION FOR DATA PACKS...................
int dataPacks(){

    int sub_option;
    printf("1. ikali - Data and Voice  \n2. Tonse Internet Bundles\n");
    printf("3. Buy for Other  \n4. Check Balance\n");
    printf("5. Night balance \n6. Cancel auto renewal \n");
    scanf("%d", &sub_option);

    if (sub_option == 1){
        ikali();
        }
        else if( sub_option == 2 )  //Tonse internet.......
        {
           tonseInternet();
        }
        else if( sub_option == 3 )  //Buy for other.......
        {
           buyForOther();
        }
        else if( sub_option == 4 )  //Check balance......
        {
        printf("Dear Customer, your balance request is being processed.\n");
        printf("You will receive a confirmation message shortly\n");
        }
        else if( sub_option == 5 )  //Night data..........
        {

        }else if( sub_option == 6 )
        {

        }
        else {
            printf("Invalid key");
        }

}
// THIS IS MY FUCTION FOR TONSE INTERNET
int tonseInternet(){


}
