#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
int main_exit;
char arrayData[100];
struct date
{
    int month, day, year;
};

typedef struct User
{
    char name[100];
    char accountNumber[17];
    char password[20];
    char address[100];
    char aadhaar[16];
    char mobile[15];
    long balance;
    int age;
    char acc_type[10];

    struct date dob;

} User;

User person, fetched, fetched2;

void createUser();
void updateUser();
void storeUser();
bool authUser();
void withdraw();
void deposit();
void menu();
void transactMenu();
bool fetchData(char user[]);
void fordelay();
void exit1();

void fordelay(int j)
{
    int i, k;
    for (i = 0; i < j; i++)
        k = i;
}
void exit1(void)
{
    printf("\t-----------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Thank You  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\t-----------------------------------------------------------------------------------------------------------\n");
}
void createUser()
{

    char repassword[20];
    int k = 0;
    char c;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("\t-----------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Create An Account  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\t-----------------------------------------------------------------------------------------------------------\n");
    printf("\n\n\t\tToday's Date(mm/dd/yyyy) and Time:  %d/%02d/%02d  %02d:%02d:%02d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min, tm.tm_sec);

    printf("\n\t\tAccount NUmber: ");
    scanf(" %s", &person.accountNumber);
    while (k == 0)
    {
        printf("\n\t\tPassword: ");
        scanf("%s", person.password);
        printf("\n\t\tEnter Password again: ");
        scanf("%s", repassword);
        if (strcmp(repassword, person.password) == 0)
        {
            printf("\n\t\tPasswords Matched\n");
            k++;
        }
        else
            printf("\n\t\tBoth the passwords were different. Enter Again\n");
    }
    printf("\n\t\tName: ");
    scanf(" %[^\n]%*c", &person.name);
    // printf("\n\t\tEnter the date of birth(mm/dd/yyyy):");
    // scanf("%d/%d/%d", &person.dob.month, &person.dob.day, &person.dob.year);
    // printf("\n\t\tEnter the age:");
    // scanf("%d", &person.age);
    printf("\n\t\tAddress: ");
    scanf(" %[^\n]%*c", &person.address);
    printf("\n\t\tEnter the Aadhar no. number:");
    scanf("%s", person.aadhaar);
    printf("\n\t\tEnter the mobile number: ");
    scanf(" %s", &person.mobile);
    // printf("\n\t\tType of account:\n\t\t#Saving\n\t\t#Current\n\t\t#Fixed1(for 1 year)\n\t\t#Fixed2(for 2 years)\n\t\t#Fixed3(for 3 years)\n\n\t\tEnter your choice: ");
    // scanf("%s", person.acc_type);
    person.balance = 1000;
    printf("\n\t\tAccount created successfully!!\n\t\tSaving Information");
    for (int i = 0; i <= 8; i++)
    {
        printf(".");
    }
    storeUser(person);

person_invalid:
    printf("\n\n\t-----------------------------------------------------------------------------------------------------------\n");
    printf("\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d", &main_exit);
    system("cls");
    if (main_exit == 1)
        menu();
    else if (main_exit == 0)
    {
        system("cls");
        exit1();
    }
    else
    {
        printf("\n\t\tInvalid!\a");
        goto person_invalid;
    }
}

void storeUser(User person)
{
    FILE *fuser;
    char filepath[23] = "users\\";
    strcat(filepath, person.accountNumber);
    strcat(filepath, ".txt");
    fuser = fopen(filepath, "w+");
    fprintf(fuser, "%s\n", person.accountNumber);
    fprintf(fuser, "%s\n", person.password);
    fprintf(fuser, "%s\n", person.name);
    // fprintf(fuser, "%d/%d/%d\n", person.dob);
    fprintf(fuser, "%s\n", person.mobile);
    fprintf(fuser, "%s\n", person.aadhaar);
    fprintf(fuser, "%s\n", person.address);
    // fprintf(fuser, "%s\n", person.acc_type);
    fprintf(fuser, "%ld\n", person.balance);
    // printf("helo storing %ld",person.balance);
    fprintf(fuser, "\0");
    fclose(fuser);

    printf("\n\t\tSaved Successfuly!\n");
}

void reStoreUser(User persons)
{
    FILE *fuser;
    char filepath[23] = "userr\\";
    strcat(filepath, person.accountNumber);
    strcat(filepath, ".txt");
    fuser = fopen("2222222222222222", "w+");
    fprintf(fuser, "%s\n", persons.accountNumber);
    fprintf(fuser, "%s\n", persons.password);
    fprintf(fuser, "%s\n", persons.name);
    // fprintf(fuser, "%d/%d/%d\n", persons.dob);
    fprintf(fuser, "%s\n", persons.mobile);
    fprintf(fuser, "%s\n", persons.aadhaar);
    fprintf(fuser, "%s\n", persons.address);
    //  fprintf(fuser, "%s\n", persons.acc_type);
    fprintf(fuser, "%ld\n", persons.balance);
    fprintf(fuser, "\0");
    fclose(fuser);
    // printf("User Stored Successfully");
}

bool authUser(char user[], char passwd[])
{
    fetchData(user);
    if (strcmp(fetched.password, passwd) == 0)
    {
        fordelay(100000);
        printf("\n\t\tLogging You In....");
        return true;
    }
    else
    {
        return false;
    }
}

void displayUser()
{
    system("cls");
    printf("\t-----------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Account Information  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\t-----------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\tName: %s\n", person.name);
    printf("\n\t\tAccount Number: XXXXXXXXXXXX%c%c%c%c\n", person.accountNumber[12], person.accountNumber[13], person.accountNumber[14], person.accountNumber[15]);
    printf("\n\t\tMobile Number: %s\n", person.mobile);
    printf("\n\t\tAddress: %s\n", person.address);
    printf("\n\t\tBalance: %ld\n", person.balance);

display:
    printf("\t-----------------------------------------------------------------------------------------------------------\n");
    printf("\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d", &main_exit);
    system("cls");
    if (main_exit == 1)
        menu();
    else if (main_exit == 0)
    {
        system("cls");
        exit1();
    }
    else
    {
        printf("\n\t\tInvalid!\a\n");
        goto display;
    }
}

bool fetchData(char user[])
{

    char filepath[23] = "users\\";
    strcat(filepath, user);
    strcat(filepath, ".txt");
    FILE *fptr = fopen(filepath, "r");
    if (fptr == NULL)
    {
        printf("Account does not exist\n");
        return false;
    }
    else
    {
        fgets(fetched.accountNumber, 20, fptr);
        fgets(fetched.password, 20, fptr);
        fgets(fetched.name, 20, fptr);
        fgets(fetched.mobile, 20, fptr);
        fgets(fetched.aadhaar, 20, fptr);
        fgets(fetched.address, 20, fptr);
        fetched.accountNumber[strcspn(fetched.accountNumber, "\n")] = "\0";
        fetched.password[strcspn(fetched.password, "\n")] = '\0';
        fetched.name[strcspn(fetched.name, "\n")] = '\0';
        fetched.mobile[strcspn(fetched.mobile, "\n")] = '\0';
        fetched.aadhaar[strcspn(fetched.aadhaar, "\n")] = '\0';
        fetched.address[strcspn(fetched.address, "\n")] = '\0';
        char balance[10];
        fgets(balance, 10, fptr);
        fetched.balance = 0;
        char *p;
        fetched.balance = strtol(balance, &p, 10);
        return true;
    }
    displayUser(fetched);
}

void updateUser()
{
    printf("\t-----------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Update Account Information  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\t-----------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\tEnter your Account No: ");
    char acc[17];
    scanf("%s", &acc);
    getchar();
    printf("\n\t\tEnter your password: ");
    char pass[17];
    scanf("%s", &pass);
    getchar();
    if (authUser(acc, pass))
    {
        printf("\n\n\t\tEnter your choice\n");
        printf("\n\t\t1. Update Name\n");
        printf("\n\t\t2. Update Mobile number\n");
        printf("\n\t\t3. Update Address\n");
        printf("\n\t\t4. Update Password\n");
        printf("\n\n\t\tSelect One of the choices below: ");
        int n;
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Update Name \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
            getchar();
            printf("\n\t\tEnter the updated name: ");
            scanf("%[^\n]%*c", &person.name);
            reStoreUser(person);
            printf("\n\t\tName updated sucessfully");
            break;
        case 2:
            printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Update Mobile No.  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
            fetchData(acc);
            printf("\n\t\tEnter the updated mobile number: ");
            scanf("%s", &person.mobile);
            reStoreUser(person);
            printf("\n\t\tMobile no. updated sucessfully");
            break;
        case 3:
            printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Update Address \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
            fetchData(acc);
            printf("\n\t\tEnter the updated address: ");
            scanf("%s", &person.address);
            reStoreUser(person);
            printf("\n\t\tAddress updated sucessfully");
            break;
        case 4:
            printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Update Password  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
            fetchData(acc);
            printf("\n\t\tEnter the updated password: ");
            scanf("%s", &person.password);
            reStoreUser(person);
            printf("\n\t\tPassword updated sucessfully");
            break;
        }
    }

invalid:
    printf("\n\n\t-----------------------------------------------------------------------------------------------------------\n");
    printf("\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d", &main_exit);
    system("cls");
    if (main_exit == 1)
        menu();
    else if (main_exit == 0)
    {
        system("cls");
        exit1();
    }
    else
    {
        printf("\n\t\tInvalid!\a");
        goto invalid;
    }
}

void transactMenu()
{
    char accNo[16];
    char filepath[23] = "users\\";
    printf("\t-----------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Welcome to PDEU BANK  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\t-----------------------------------------------------------------------------------------------------------\n");

    printf("\n\t\tEnter your Account Number: ");
    scanf("%s", &accNo);
    getchar();
    if (fetchData(accNo))
    {
        printf("Enter the password:");
        char pass[20];
        scanf("%s", &pass);
        if (authUser(accNo, pass))
        {
            printf("\n\n\t\tSelect One of the choices below:\n");
            printf("\n\t\t1. Deposit Money  \t\t\t\t  2. Withdraw Money\n\n");
            printf("\t\tEnter your choice: ");
            int ch1;
            scanf("%d", &ch1);
            long amt;
            switch (ch1)
            {
            case 1:
                printf("\n\t\tEnter the amount to be deposited: ");
                scanf("%ld", &amt);
                fetched.balance += amt;
                printf("\n\t\tThe amount %ld is deposited successfully!\n", amt);
                printf("\n\t\tThe updated balance is %ld\n", fetched.balance);
                reStoreUser(fetched);
                break;

            case 2:
                printf("\n\t\tEnter the amount to be withdrawn: ");
                scanf("%d", &amt);
                if (fetched.balance >= amt)
                {
                    fetched.balance -= amt;
                    printf("\n\t\tThe amount %ld is successfully withdrawn!!\n", amt);
                    printf("\n\t\tThe updated balance is %ld\n", fetched.balance);
                    reStoreUser(fetched);
                    printf("helo %ld", fetched.balance);
                }
                else
                    printf("\n\t\tInsufficient Balance!!\n");
                break;

            default:
                printf("\n\t\tInvalid Choice !!\n");
                break;
            }
        }
        else
        {
            printf("\n\t\tThe account does not exist!!");
            printf("\n\t\tplease try again with another account number");
        }
    }

transaction_invalid:
    printf("\t-----------------------------------------------------------------------------------------------------------\n");
    printf("\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d", &main_exit);
    system("cls");
    if (main_exit == 1)
        menu();
    else if (main_exit == 0)
    {
        system("cls");
        exit1();
    }
    else
    {
        printf("\n\t\tInvalid!\a");
        goto transaction_invalid;
    }
}

void menu()
{
    int choice;
    system("color E4");
    printf("\t-----------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Welcome to PDEU BANK  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\t-----------------------------------------------------------------------------------------------------------\n");

    printf("\n\n\t\t\tSelect One of the choices below:\n");
    printf("\n\n\t\t1.Create Account\n");
    printf("\t\t2.Update Account\n");
    printf("\t\t3.Transaction\n");
    printf("\t\t4.View customer's list\n");
    printf("\t\t5.Exit\n\n");
    printf("\t\tEnter your choice: ");
    scanf("%d", &choice);
    system("cls");

    switch (choice)
    {
    case 1:
        createUser();
        break;
    case 2:
        // updateUser();
        break;
    case 3:
        transactMenu();
        break;
    case 4:
        displayUser();
        break;
    case 5:
        exit1();
        break;
    }
}

int main()
{

    menu();
}
