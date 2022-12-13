#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>
#include<windows.h>

typedef struct tree
{
  /*
    Implementation of binary tree structure in C.
  */
    char data;
    struct tree*left;
    struct tree*right;
}tree;

tree *createNode(char data){
  /*
    Method to create a node using DMA
  */

    tree* tr;
    tr = (tree*)malloc(sizeof(tree));
    tr->data = data;
    tr->left = NULL;
    tr->right = NULL;
    return tr;
}
tree *createNodeLeft(char data, tree* head){
  /*
    Create a node and add it to the left child of the root
  */
    tree* temp = createNode(data);
    head->left= temp;
    return temp;
}
tree *createNodeRight(char data, tree* head){
  /*
    Create a node and add it to the right child of the root
  */
    tree* temp = createNode(data);
    head->right= temp;
    return temp;
}

char * Encode(tree* morse,char str[]){
  /*
    Method to encrypt a string to Morse code and produce audio output.
  */
    char str1[500];
        fflush(stdin);

        int j=0;
        for(int i=0;i<=strlen(str);i++)
        {
                switch(toupper(str[i]))
                {
                  case 'A':
                  str1[j++]='.';
                  str1[j]='-';
                  break;

                  case 'B':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                  break;

                  case 'C':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                  break;

                  case 'D':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='.';
                  break;

                  case 'E':
                  str1[j]='.';
                  break;

                  case 'F':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                  case 'G':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='.';
                  break;

                  case 'H':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                   case 'I':
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case 'J':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case 'K':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case 'L':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='.';
                  break;

                case 'M':
                  str1[j++]='-';
                    str1[j]='-';
                    break;

                case 'N':
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case 'O':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case 'P':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case 'Q':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case 'R':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case 'S':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case 'T':
                  str1[j]='-';
                    break;

                case 'U':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case 'V':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case 'W':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case 'X':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case 'Y':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case 'Z':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case '0':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case '1':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case '2':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case '3':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case '4':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case '5':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case '6':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case '7':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case '8':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case '9':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case '.':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case ',':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='-';
                    break;

                case ':':
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case '?':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j]='.';
                    break;


                case '-':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case ';':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case '"':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case '+':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case '/':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case '&':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='.';
                    break;

                case '$':
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='-';
                    break;


                case '@':
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='-';
                  str1[j]='.';
                    break;

                case '=':
                  str1[j++]='-';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j++]='.';
                  str1[j]='-';
                    break;

                case ' ':
                  str1[j]='/';
                    break;
                
                }
                str1[++j]=' ';
                j++;
        }
        str1[++j]=' ';
        str1[++j]='\0';
        puts(str1);
        saveIntoFile(str1);
        makeSound(str1);
        printf("\n\t\tPress any key to continue");

        getchar();
        menu(morse);
        return str1;
}
void Decode(tree* morse,char data[]){

  /*
    method to convert a input Morse code (in form of a string) to english text output.
  */

  // tree* morse=initializeTree();
  tree* temp=morse;
  char output[500];
    for(int i=0;data[i]!='\0';i++){
      if(data[i]=='.'){
        temp= temp->left;
      }
      else if(data[i]=='-'){
        temp=temp->right;
      }
      else if(data[i]==' '){
        printf("%c",temp->data);
        temp=morse;
      }
      else if(data[i]=='/'){
        printf(" ");
        temp=morse;

      }
    }
      printf("%c",temp->data);
}
void makeSound(char data[]){
  /*
    produce sound and visual simulations for the morse code output of Encode() method.
  */
  system("cls");
  printf("%s",data);
  for(int i=0;data[i]!='\0';i++) {
        if(data[i] == '-'){
        system("color 5F");
        Beep(3000, 300);
        }
        else if(data[i] == '.'){
        system("color 1F");
        Beep(1000, 100);
        }
        else if (data[i]=='/')
        Sleep(700);
        Sleep(100);
    }
}
void saveIntoFile(char data[]){
  /*
    Save morse-code output in .txt file for persistent storage.
  */
    FILE *fptr;
    fptr = fopen("morseOutput.txt","w");
    // if (strlen(data)>0){
        fputs(data,fptr);
        fputs("\n",fptr);
        fclose(fptr);
        return;
    // }
    printf("The data entered is of 0 length.\n");
}
char * loadFromFile(){
  /*
    Input English string from a .txt file
  */
    FILE *fptr;
    char *data= malloc(500);
    fptr = fopen("morseInput.txt","r");
    if (fptr){
        fgets(data,500,fptr);
        fclose(fptr);
        return data;
    }
    printf("File not found.\n");
}

void menu(tree* morse)
{
  /*
    User choice menu
  */
    int choice;
    system("color 3F");
    printf("\t-----------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Welcome to PDEU Morse Encoder and Decoder  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\t-----------------------------------------------------------------------------------------------------------\n");

    printf("\n\n\t\t\tSelect One of the choices below:\n");
    printf("\n\n\t\t1.Encode\n");
    printf("\t\t2.Decode\n");
    printf("\t\t3.Encode from File\n");
    printf("\t\t4.Instructions\n");
    printf("\t\t5.Exit\n");
    printf("\t\tEnter your choice: ");
    scanf("%d", &choice);
    system("cls");
    char str[100];

    switch (choice)
    {
    case 1:
    getchar();
      printf("Enter any String to Convert into Morse Code :: ");
        scanf("%[^\n]%*c",&str);
        Encode(morse,str);
        break;
    case 2:
        printf("Enter Morse code to Decode :: ");
        getchar();
        // scanf("%[^\n]%*c", str);
        gets(str);
        // printf("%s",str);
        Decode(morse,str);
        getchar();
        menu(morse);
        break;
    case 3:
    char *fileData= loadFromFile();
        printf("%s",fileData);
        Encode(morse,fileData);
        free(fileData);
        getchar();
        menu(morse);
        break;
    case 4:
        printf("Instructions");
        Instructions(morse);
        getchar();
        getchar();
        
        menu(morse);
        break;
        case 5:
        printf("Exit Successfull... Press any key to close window");
        getchar();
        getchar();
        break;
        //exit
        default:
        printf("Enter Valid choice.... 1 to 5");
    }
}
void Instructions(tree* morse)
{
  int inst;
  printf("\t-----------------------------------------------------------------------------------------------------------\n");
  printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Welcome to PDEU Morse Encoder and Decoder  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
  printf("\t-----------------------------------------------------------------------------------------------------------\n");
  printf("\n\n\t\tMorse code is a type of code that is used to send telegraphic information using rhythm. \n\t\tMorse code uses dots and dashes to show the alphabet letters, numbers, punctuation and special characters of a given message. \n\t\tWhen messages are sent by Morse code, dots are short beeps or clicks or flashes, and dashes are longer ones.\n\t\tMorse code is a method used in telecommunication to encode text characters as standardized sequences of two different signal durations, called dots and dashes, or dits and dahs.");
  printf("\n\n\t\t1.How this translator works?\n\t\t2.Howshould i enter words?\n\t\t3.How should i enter Morse Code?\n\t\t9.Go Back\n");
  do
  {
    printf("\n\n\t\t\tEnter your choice:: ");
    scanf("%d", &inst);
    switch (inst)
    {
    case 1:
    { system("cls");
      printf("\n\t\t\t----------How this translator works?----------\n\n\t\tMorse code translator works on two ways. It can translate regular text to Morse code and vice versa.\n\t\tFor Text to Morse code conversion you cna enter 1(Encode) and for Morse code to text conversion you can enter 2(Decode) in main menu.\n\t\tIt can translate Alphabets (A to Z), Numbers (0 to 9), and Symbols (. , : ? - ; + / & $ @). \n\n\t\t1. How this translator works?\n\t\t2. How should I enter words?\n\t\t3. How should I enter Morse code?\n\t\t9. Go back");
    }
    break;
    case 2:
    {system("cls");
      printf("\n\t\t\t----------How should I enter words?----------\n\n\t\tYou can enter any words written in latin alphabet. It can convert from both smallcase and uppercase. \n\n\t\t1. How this translator works?\n\t\t2. How should I enter words?\n\t\t3. How should I enter Morse code?\n\t\t9. Go back");
    }
    break;
    case 3:
    {system("cls");
      printf("\n\t\t\t----------How shoud I enter Morse code?----------\n\n\t\tYou can enter Morse code putting one space between letters and two space characters between words. '.' is used for short character and '-' for long character of Morse cipher.\n\n\t\t1. How this translator works?\n\t\t2. How should I enter words?\n\t\t3. How should I enter Morse code?\n\t\t9. Go back");
    }
    break;
    case 9:
    {system("cls");
      menu(morse);
    }
    break;
    default:
    {
      printf("\n\n\t\tWrong Input");
      printf("\n\n\t\t1.How this translator works?\n\t\t2.Howshould i enter words?\n\t\t3.How should i enter Morse Code?\n\t\t9.Go Back\n");
    }
    }
  } while (inst != 9);
}
int main(){
  /*
    Driver code
  */

 // Generating morse code tree
  tree* start = createNode(' ');
    tree* e = createNodeLeft('E',start);
    tree* t = createNodeRight('T',start);
    tree* a = createNodeRight('A',e);
    tree* r = createNodeLeft('R',a);
    tree* w = createNodeRight('W',a);
    tree* p = createNodeLeft('P',w);
    tree* j = createNodeRight('J',w);
    tree* l = createNodeLeft('L',r);
    tree* i = createNodeLeft('I',e);
    tree* s = createNodeLeft('S',i);
    tree* u = createNodeRight('U',i);
    tree* h = createNodeLeft('H',s);
    tree* v = createNodeRight('V',s);
    tree* f = createNodeLeft('F',u);
    tree* m = createNodeRight('M',t);
    tree* g = createNodeLeft('G',m);
    tree* o = createNodeRight('O',m);
    tree* z = createNodeLeft('Z',g);
    tree* q = createNodeRight('Q',g);
    tree* n = createNodeLeft('N',t);
    tree* d = createNodeLeft('D',n);
    tree* k = createNodeRight('K',n);
    tree* b = createNodeLeft('B',d);
    tree* x = createNodeRight('X',d);
    tree* c = createNodeLeft('C',k);
    tree* y = createNodeRight('Y',k);
   
    menu(start);

}