#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include <unistd.h>
static int x,y,res,bomb,neshanx=0,neshany=0;
static char esm[50];
static long long int nama=0,flag,sasi=0,start,end,qp=0;
char *read_file(char * filename){
    FILE *file;
    file= fopen(filename,"r");
    if(file==NULL)return NULL;
    fseek(file,0,SEEK_END);
    int length=ftell(file);
    fseek(file,0,SEEK_SET);
    char *string= malloc(sizeof (char)*(length+1));
    char c;
    int i=0;
    while((c= fgetc(file))!=EOF){
        string[i]=c;
        i++;
    }
    string[i]='\0';
    fclose(file);
    return string;
}
void color(int c){
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, c);
}
int main();
void ww(char question[x][y],char answer[x][y]);
int home(char question[],char answer[]);
void ll(char question[x][y],char answer[x][y]);
void wtf(char arr1[100],int culom,int poin);
void update(char question[x][y],char answer[x][y]);
void game(int z);
void exito(char question[],char answer[]);
void moo(char question[],char answer[]);
//void exito(char question[],char answer[]);
void updateo(char question[x][y],char answer[x][y]){
    //flag=bomb;

    // res=0;
    char arr1[100];
    int q1=0,q2=0,q3;
    goto chap;
    chap:{
    system("cls");
    color(15);
    printf("flag: %d\tbomb: %d\n",flag,bomb);
    //q1=0,q2=0;
    for(int i=0;i<y;i++){
        if(q1==i){q3=q2;}
        else{q3=101;}
        for(int j=0;j<x;j++){
            arr1[j]=answer[j][i];
        }
        wtf(arr1,x,q3);
    }
}
    color(0);
}
void ll(char question[x][y],char answer[x][y]){
    int q1=0,q2=0;
    char ch=NULL;
    upl:{
    system("cls");
    color(15);
    updateo(question,answer);
    color(15);
    printf("You lost!                 \nDo you want to play again?\n");
    color(192);
    printf("Yes\n");
    color(15);
    printf("No ");
    color(15);
    printf(" \n");
    q1=1;
}
    goto porsesh2;
    downl:{
    system("cls");
    color(15);
    updateo(question,answer);
    color(15);
    printf("You lost!                 \nDo you want to play again?\n");
    color(15);
    printf("Yes\n");
    color(192);
    printf("No ");
    color(15);
    printf(" \n");
    q1=0;
}
    porsesh2:{
    ch=NULL;
    if (_kbhit())ch = _getch();
    if(ch==NULL){goto porsesh2;}
    if((ch=='w'|| ch=='W')&&q1==0){q1++;}
    else if((ch=='s'|| ch=='S') && q1==1){q1--;}
    else if(ch=='1'&&q1==1){
        color(15);
        moo(question, answer);
    }
    else if(ch=='1' && q1==0){
        color(15);
        //change this
        home(question, answer);
    }
    else{goto porsesh2;}
    if(q1==1){goto upl;}
    if(q1==0){goto downl;}
}
}
void ww(char question[x][y],char answer[x][y]){
    long long int t=end-start;
    int q1=0,q2=0;
    char ch=NULL;
    long int fp=(x*y*5)-t;
    FILE *hi;
    hi=fopen("poo.txt","a");
    time_t now= time(NULL);
    char *p= ctime(&now);
    fseek(hi,0,SEEK_SET);
    fprintf(hi,"%s(%d*%d)\t%ld\t%s",esm,x,x,fp,p);
    fclose(hi);
    upw:{
    system("cls");
    color(15);
    updateo(question,answer);
    color(15);
    if(t<60)
        printf("You won!                  \nyour time is %ld second and your score is %ld\n",t,fp);
    else
        printf("You won!                  \nyour time is %ld minute and %ld second and your score is %ld\n",(t/60),(t % 60),fp);
    printf("Do you want to play again?\n");
    color(192);
    printf("Yes\n");
    color(15);
    printf("No \n");
    color(15);
    q1=1;
}
    goto porsesh3;
    downw:{
    system("cls");
    color(15);
    updateo(question,answer);
    color(15);
    if(t<60)
        printf("You won!                  \nyour time is %ld second and your score is %ld\n",t,fp);
    else
        printf("You won!                  \nyour time is %ld minute and %ld second and your score is %ld\n",(t/60),(t % 60),fp);
    printf("Do you want to play again?\n");
    color(15);
    printf("Yes\n");
    color(192);
    printf("No \n");
    color(15);
    q1=0;
}
    porsesh3:{
    ch=NULL;
    if (_kbhit())ch = _getch();
    if(ch==NULL){goto porsesh3;}
    if((ch=='w'|| ch=='W')&&q1==0){q1++;}
    else if((ch=='s'|| ch=='S') && q1==1){q1--;}
    else if(ch==49 &&q1==1){
        color(15);
        moo(question, answer);
    }
    else if(ch==49 && q1==0){
        color(15);
        home(question,answer);
        //game(1);
    }
    else{goto porsesh3;}
    if(q1==1){goto upw;}
    if(q1==0){goto downw;}
}

}
void wtf(char arr1[100],int culom,int poin){
    //system("cls");
    int i;
    color(0);
    printf("  ");
    int n=175;
    for(i=0;i<culom;i++){
        if(arr1[i]!=32){
            if(arr1[i]=='%'){n=240;}
            else {n=111;}
        }
        else{n=175;}
        if(i==poin){n=79;}
        color(n);
        printf("%c%c%c%c%c",218,196,196,196,191);
        n=175;
        color(n);
        if(i+1<culom){printf("  ");}
    }
    color(0);
    printf(" \n  ");
    for(i=0;i<culom;i++){
        if(arr1[i]!=32){
            if(arr1[i]=='%'){n=240;}
            else {n=111;}
        }
        else{n=175;}
        if(i==poin){n=79;}
        color(n);
        if(arr1[i]==37)
            printf("%c%c%c%c%c",179,32,124,16,179);
        else if(arr1[i]==42) {
            printf("%c%c", 179, 32);
            color(0);
            printf("%c",-2);
            color(n);
            printf("%c%c", 32, 179);
        }
        else
            printf("%c%c%c%c%c",179,32,arr1[i],32,179);
        n=175;
        color(n);
        if(i+1<culom){printf("  ");}
    }
    color(0);
    printf(" \n  ");
    for(i=0;i<culom;i++){
        if(arr1[i]!=32){
            if(arr1[i]=='%'){n=240;}
            else {n=111;}
        }
        else{n=175;}
        if(i==poin){n=79;}
        color(n);
        printf("%c%c%c%c%c", 192,196,196,196,217);
        n=175;
        color(n);
        if(i+1<culom){printf("  ");}
    }
    color(0);
    printf("\n  ");
    int g=culom*7-2;
    color(170);
    while(g>0){
        printf(" ");
        g--;
    }
    printf("\n");
    return;
}
void update(char question[x][y],char answer[x][y]){
    flag=bomb;
    start = time(NULL);
    //res=0;
    char arr1[100];
    int q1=0,q2=0,q3;
    goto chap;
    chap:{
    system("cls");
    color(15);
    printf("flag: %d\tbomb: %d\n",flag,bomb);
    //q1=0,q2=0;
    for(int i=0;i<y;i++){
        if(q1==i){q3=q2;}
        else{q3=101;}
        for(int j=0;j<x;j++){
            arr1[j]=question[j][i];
        }
        wtf(arr1,x,q3);
    }
}
    color(0);
    //while(1){}
    char ch;
    if(res>0)
        goto porsesh;
    else
        goto win;
    porsesh:{}
    ch = NULL;
    if (_kbhit())ch = _getch();
    if(ch==NULL){goto porsesh;}
    if((ch=='w'|| ch=='W')&&q1!=0){q1--;}
    else if(ch=='q'||ch=='Q'){exito(question,answer);}
    else if((ch=='s'|| ch=='S') && q1!=(y-1)){q1++;}
    else if((ch=='d' || ch=='D') && q2!=(x-1)){q2++;}
    else if((ch=='a' || ch=='A')&& q2!=0){q2--;}
    else if(ch=='1'){
        if(question[q2][q1]==32 && flag>0){
            question[q2][q1]='%';
            flag--;
        }
        else if(question[q2][q1]=='%'){
            question[q2][q1]=32;
            flag++;
        }
        else
            goto porsesh;
    }
    else if(ch=='2' && question[q2][q1]!='%'){
        if(answer[q2][q1]!='*'&& question[q2][q1]!=answer[q2][q1]){
            if(answer[q2][q1]==48) {
                question[q2][q1]=answer[q2][q1];
                res--;
                for(int lk=0;lk<20;lk++) {
                    for (int i = 0; i < x; i++) {
                        for (int j = 0; j < y; j++) {
                            if (question[i][j] == '0') {
                                if (i > 0 && j > 0 && question[i - 1][j - 1] != answer[i - 1][j - 1]) {
                                    if(question[i-1][j-1]==37 && question[i-1][j-1]!=answer[i-1][j-1])
                                        flag++;
                                    question[i - 1][j - 1] = answer[i - 1][j - 1];
                                    res--;

                                }
                                if (j > 0 && question[i][j - 1] != answer[i][j - 1]) {
                                    if(question[i][j-1]==37 && question[i][j-1]!=answer[i][j-1])
                                        flag++;
                                    question[i][j - 1] = answer[i][j - 1];
                                    res--;
                                }
                                if (i < x - 1 && j > 0 && question[i + 1][j - 1] != answer[i + 1][j - 1]) {
                                    if(question[i+1][j-1]==37 && question[i+1][j-1]!=answer[i+1][j-1])
                                        flag++;
                                    question[i + 1][j - 1] = answer[i + 1][j - 1];
                                    res--;
                                }
                                if (i < x - 1 && question[i + 1][j] != answer[i + 1][j]) {
                                    if(question[i+1][j]==37 && question[i+1][j]!=answer[i+1][j])
                                        flag++;
                                    question[i + 1][j] = answer[i + 1][j];
                                    res--;
                                }
                                if (i < x - 1 && j < y - 1 && question[i + 1][j + 1] != answer[i + 1][j + 1]) {
                                    if(question[i+1][j+1]==37 && question[i+1][j+1]!=answer[i+1][j+1])
                                        flag++;
                                    question[i + 1][j + 1] = answer[i + 1][j + 1];
                                    res--;
                                }
                                if (j < y - 1 && question[i][j + 1] != answer[i][j + 1]) {
                                    if(question[i][j+1]==37 && question[i][j+1]!=answer[i][j+1])
                                        flag++;
                                    question[i][j + 1] = answer[i][j + 1];
                                    res--;
                                }
                                if (i > 0 && j < y - 1 && question[i - 1][j + 1] != answer[i - 1][j + 1]) {
                                    if(question[i-1][j+1]==37 && question[i-1][j+1]!=answer[i-1][j+1])
                                        flag++;
                                    question[i - 1][j + 1] = answer[i - 1][j + 1];
                                    res--;
                                }
                                if (i > 0 && question[i - 1][j] != answer[i - 1][j]) {
                                    if(question[i-1][j]==37 && question[i-1][j]!=answer[i-1][j])
                                        flag++;
                                    question[i - 1][j] = answer[i - 1][j];
                                    res--;
                                }
                            }
                        }
                    }
                }
                goto chap;
            }
            else {
                question[q2][q1] = answer[q2][q1];
                res--;
            }
        }
        else if(question[q2][q1]==answer[q2][q1]){goto porsesh;}
        else goto lost;
    }
    else goto porsesh;
    goto chap;
    lost:{
    ll(question,answer);
}
    win:{
    end= time(NULL);
    ww(question,answer);
}
}
void game(int z){
    char question[x][y];
    char answer[x][y];
    time_t rawtime;
    time(&rawtime);
    srand(rawtime);
    int chanc_x[bomb];
    int chanc_y[bomb];
    int temp1=0,temp2=0;
    while(temp1<y){
        while(temp2<x){
            question[temp1][temp2]=32;
            temp2++;
        }
        temp2=0;
        temp1++;
    }

    temp1=0,temp2=0;
    while(temp1<bomb){
        chanc_x[temp1]=(rand()%x);
        chanc_y[temp1]=(rand()%y);
        if(answer[chanc_x[temp1]][chanc_y[temp1]]!='*'){
            answer[chanc_x[temp1]][chanc_y[temp1]]='*';
            temp1++;
        }
        else{
            chanc_x[temp1]=0;
            chanc_y[temp1]=0;
        }
    }
    char m1,m2,m3,m4,m5,m6,m7,m8;
    int x2=0,y2=0,n=0;

    while(x2<x){
        while(y2<y){
            if(answer[x2][y2]=='*'){
                y2++;
                continue;
            }
            else{
                n=0;
                m1=answer[x2-1][y2-1];
                m2=answer[x2][y2-1];
                m3=answer[x2+1][y2-1];
                m4=answer[x2+1][y2];
                m5=answer[x2+1][y2+1];
                m6=answer[x2][y2+1];
                m7=answer[x2-1][y2+1];
                m8=answer[x2-1][y2];
                if (x2>0 && y2>0 && m1=='*')
                    n++;
                if (y2>0 && m2=='*')
                    n++;
                if (x2<x-1 && y2>0 && m3=='*')
                    n++;
                if (x2<x-1 && m4=='*')
                    n++;
                if (x2<x-1 && y2<y-1 && m5=='*')
                    n++;
                if (y2<y-1 && m6=='*')
                    n++;
                if (x2>0 && y2<y-1 && m7=='*')
                    n++;
                if (x2>0 && m8=='*')
                    n++;
                answer[x2][y2]=n+48;
                y2++;
            }
        }
        y2=0;
        x2++;
    }
    //this is for printing the answer
/*  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      printf("%c",answer[i][j]);
    }
    printf("\n");
  }
  while(1){}*/
    if(z==1)
        update(question,answer);
    //if(z==2)
     //   robot(question,answer);
    return ;
}
void exito(char question[],char answer[]){
    int q1=0,q2=0;
    char ch=NULL;
    upl:{
    system("cls");
    color(15);
    //updateo(question,answer);
    color(15);
    printf("Do you want to return home?\n");
    color(192);
    printf("Yes\n");
    color(15);
    printf("No ");
    color(15);
    printf(" \n");
    q1=1;
}
    goto porsesh2;
    downl:{
    system("cls");
    color(15);
    //updateo(question,answer);
    color(15);
    printf("Do you want to return home?\n");
    color(15);
    printf("Yes\n");
    color(192);
    printf("No ");
    color(15);
    printf(" \n");
    q1=0;
}
    porsesh2:{
    ch=NULL;
    if (_kbhit())ch = _getch();
    if(ch==NULL){goto porsesh2;}
    if((ch=='w'|| ch=='W')&&q1==0){q1++;}
    else if((ch=='s'|| ch=='S') && q1==1){q1--;}
    else if(ch==49 && q1==1){
        color(15);
        home(question,answer);
    }
    else if(ch==49 && q1==0){
        color(15);
        moo(question,answer);
    }
    else{goto porsesh2;}
    if(q1==1){goto upl;}
    if(q1==0){goto downl;}
}
}
void quit(char question[],char answer[]){
    int q1=0,q2=0;
    char ch=NULL;
    upl:{
    system("cls");
    color(15);
    //updateo(question,answer);
    color(15);
    printf("Do you want to exit?\n");
    color(192);
    printf("Yes\n");
    color(15);
    printf("No ");
    color(15);
    printf(" \n");
    q1=1;
}
    goto porsesh2;
    downl:{
    system("cls");
    color(15);
    //updateo(question,answer);
    color(15);
    printf("Do you want to exit?\n");
    color(15);
    printf("Yes\n");
    color(192);
    printf("No ");
    color(15);
    printf(" \n");
    q1=0;
}
    porsesh2:{
    ch=NULL;
    if (_kbhit())ch = _getch();
    if(ch==NULL){goto porsesh2;}
    if((ch=='w'|| ch=='W')&&q1==0){q1++;}
    else if((ch=='s'|| ch=='S') && q1==1){q1--;}
    else if(ch==49 && q1==1){
        exit(0);
        qp=2;
        main(2);

    }
    else if(ch==49 && q1==0){
        home(question,answer);
    }
    else{goto porsesh2;}
    if(q1==1){goto upl;}
    if(q1==0){goto downl;}
}
}
void custom(int z){
    int n=8;
    char ch=NULL;
    chap:
    system("cls");
    color(15);
    //printf("%c",30);
    printf("choos the Square side size:\n%c\n%d\n%c\n",30,n,31);
    ch=NULL;
    porsesh:
    if (_kbhit())ch = _getch();
    if(ch==NULL){goto porsesh;}
    if((ch=='s'|| ch=='S') && n!=4){n--;}
    else if((ch=='w'|| ch=='W') && n!=12){n++;}
    else if(ch=='1'){goto one;}
    goto chap;
    one:{
    x=n;
    y=n;
    bomb=n*n/10;
    if(n==12)bomb=20;
    res = (x*y)-bomb;
    if(z==1)
        game(1);
    //if(z==2)
      //  game(1);
}
}
void moo(char question[],char answer[]){
    int q1=0;
    char ch;
    a:{
    system("cls");
    color(15);
    printf("User name: %s\n please choose a map:\n ",esm);
    color(192);
    printf("Small ground (9*9)  ");
    color(0);
    printf(" \n ");
    color(15);
    printf("Medium ground(12*12)");
    color(0);
    printf(" \n ");
    color(15);
    printf("custom              ");
    printf(" \n ");
    color(15);
    printf("Home                ");
    color(0);
    printf(" \n");
    goto porsesh;
}
    b:{
    system("cls");
    color(15);
    printf("User name: %s\n please choose a map:\n ",esm);
    color(15);
    printf("Small ground (9*9)  ");
    color(0);
    printf(" \n ");
    color(192);
    printf("Medium ground(12*12)");
    color(0);
    printf(" \n ");
    color(15);
    printf("custom              ");
    printf(" \n ");
    color(15);
    printf("Home                ");
    color(0);
    printf(" \n");
    goto porsesh;
}
    c:{
    system("cls");
    color(15);
    printf("User name: %s\n please choose a map:\n ",esm);
    color(15);
    printf("Small ground (9*9)  ");
    color(0);
    printf(" \n ");
    color(15);
    printf("Medium ground(12*12)");
    color(0);
    printf(" \n ");
    color(192);
    printf("custom              ");
    color(0);
    printf(" \n ");
    color(15);
    printf("Home                ");
    color(0);
    printf(" \n");
    goto porsesh;
}
    d:{
    system("cls");
    color(15);
    printf("User name: %s\n please choose a map:\n ",esm);
    color(15);
    printf("Small ground (9*9)  ");
    color(0);
    printf(" \n ");
    color(15);
    printf("Medium ground(12*12)");
    color(0);
    printf(" \n ");
    color(15);
    printf("custom              ");
    printf(" \n ");
    color(192);
    printf("Home                ");
    color(0);
    printf(" \n");
    goto porsesh;
}
    porsesh:{
    ch=NULL;
    if (_kbhit())ch = _getch();
    if(ch==NULL){goto porsesh;}
    if((ch=='w'|| ch=='W') && q1!=0){q1--;}
    else if((ch=='s'|| ch=='S') && q1!=3){q1++;}
    else if(ch=='1'&&q1==0){goto one;}
    else if(ch=='1'&&q1==1){goto two;}
    else if(ch=='1' && q1==2){goto three;}
    else if(ch=='1' && q1==3){goto four;}
    else{goto porsesh;}
    if(q1==0){goto a;}
    else if(q1==1){goto b;}
    else if(q1==2){goto c;}
    else if(q1==3){goto d;}

}
    one:{
    x=9,y=9;
    bomb=10;
    res = (x*y)-bomb;
    game(1);
}
    two:{
    x=12,y=12;
    bomb=20;
    res = (x*y)-bomb;
    game(1);
}
    three:{
    custom(1);
}
    four:{
    exito(question,answer);
}
}
int home(char question[],char answer[]){
    int k=0;
    char ch;
    int q1=0;
    a:
    {
        system("cls");

        color(15);
        printf("user : %s\n", esm);
        color(192);
        printf("play       ");
        color(15);
        printf("\nhistory   \nchange name\nExit     ");
        q1=0;
        goto porsesh;
    }
    b:
    {
        system("cls");

        color(15);
        printf("user : %s\n", esm);
        color(15);
        printf("play      ");
        color(192);
        printf("\nhistory    ");
        color(15);
        printf("\nchange name\nExit     \n");
        q1=1;
        goto porsesh;
    }
    c:
    {
        system("cls");

        color(15);
        printf("user : %s\n", esm);
        color(15);
        printf("play      \nhistory   \n");
        color(192);
        printf("change name");
        color(15);
        printf("\nExit     \n");
        q1=2;
        goto porsesh;
    }
    d:
    {
        system("cls");

        color(15);
        printf("user : %s\n", esm);
        color(15);
        printf("play      ");
        color(15);
        printf("\nhistory   \nchange name\n");
        color(192);
        printf("Exit       ");
        color(15);
        printf("\n");
        q1=3;
        goto porsesh;
    }
    porsesh:{}
    ch=NULL;
    if (_kbhit())ch = _getch();
    if(ch==NULL){goto porsesh;}
    if((ch=='w'|| ch=='W') && q1!=0){q1--;}
    else if((ch=='s'|| ch=='S') && q1!=3){q1++;}
    else if(ch=='1'&&q1==0){goto one;}
    else if(ch=='1'&&q1==1){
        if(k==0)goto two;
    if(k==2){
        k=0;
        goto b;
    }
    }
    else if(ch=='1' && q1==2){goto three;}
    else if(ch=='1' && q1==3){goto four;}
    else{goto porsesh;}
    if(q1==0){goto a;}
    else if(q1==1){goto b;}
    else if(q1==2){goto c;}
    else if(q1==3){goto d;}
    one:{
moo(question,answer);
    }
    two:{
        char arrq[10]="poo.txt";
        char *file_content= read_file(arrq);
        printf("\n%s",file_content);
        k=2;
        goto porsesh;
    };
    three:{
        system("cls");
printf("pleas enter your name:");
gets(esm);
system("cls");
goto c;
//goto porsesh;
    };
    four:{
quit(question,answer);
    };
}
int main(int z){
    if(z==2){
        return 0;
    }
    printf("Welcome to minesweeper\npleas enter your name:");
    //char esm[50];
    gets(esm);

    char question[100],answer[100];
    home(question,answer);
    return 0;
}
