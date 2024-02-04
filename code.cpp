#include <iostream>

using namespace std;


char XO[3][3]={{' ',' ',' '},
              {' ',' ',' '},
              {' ',' ',' '}};
int row,col;
int c=0;//chance
int x;//check_win
void chance();
void check_win();
void _map();


void chance(){

    while(c <9 ){

                if (x==1){
                cout<<"finish"<<endl;

    }
    else if(x==0){
            if(c%2==0 ){
                cout<<"p1 enter the row and col"<<endl;
                cin>>row>>col;
                XO[row][col]='X';
                c++;
                break;



            }

          if(!c%2==0){
              cout<<"p2 enter the row and col"<<endl;
              cin>>row>>col;
              XO[row][col]='O';
              c++;
              break;

        }

}
}
}


void check_win(){
    if(XO[0][0]==XO[0][1]==XO[0][2] //check_rows
    || XO[1][0]==XO[1][1]==XO[1][2]
    || XO[2][0]==XO[2][1]==XO[2][2]

    || XO[0][0]==XO[1][0]==XO[2][0] //check_col
    || XO[0][1]==XO[1][1]==XO[2][1]
    || XO[0][2]==XO[1][2]==XO[2][2]

    || XO[0][0]==XO[1][1]==XO[2][2] //check_diagonal
    || XO[0][2]==XO[1][1]==XO[2][0])

    { x=1;}

    else{
         x=0;
    }





}

void _map(){
    int zz=0;
    while(zz <9){

            check_win();
             chance();

        printf("\t|\t|\n");
        cout<<"   "<<XO[0][0]<<"\t|  "<<XO[0][1]<<"    |  "<<XO[0][2]<<endl;
        printf("________|_______|_______\n");
        printf("\t|\t|\n");
        cout<<"   "<<XO[1][0]<<"\t|  "<<XO[1][1]<<"    |  "<<XO[1][2]<<endl;
        printf("________|_______|_______\n");
        printf("\t|\t|\n");
        cout<<"   "<<XO[2][0]<<"\t|  "<<XO[2][1]<<"    |  "<<XO[2][2]<<endl;
        printf("\t|\t|\n\n");


        zz++;
    }


}










int main()
{
    cout<<"################     tic tac toe     ################"<<endl;
    cout<<"1. start "<<endl;
    cout<<"2. exit "<<endl;





    int play;
    cout<<"enter your choice"<<endl;
    cin>>play;
    int zz;
    char p1='X';char p2='O';
    printf("\n\n");
    if(play==1){
            cout<<"\tthe game begins\n\n\n"<<endl;

            printf("player1 is playes as X \nplayer2 is playes as O\n\n\n");
            _map();

    }








    return 0;
}









