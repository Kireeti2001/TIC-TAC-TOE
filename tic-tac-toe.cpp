//tic tac toe game
#include<iostream>
#include<string>
using namespace std;

char mark1 = 'X';
char mark2 = 'O';
char board[10] = { '1','2','3','4','5','6','7','8','9'};
int flag = 0;
string player1,player2;

void turn1();
void turn2();
void displayboard();
void checker();
void draw();

int main()
{
    cout << "\t\t\tTIC - TAC - TOE\n" << endl;
    cout << "\t\t\tMADE BY KIREETI\n" << endl;
    cout<<"\t\t\tENTER PLAYER NAMES"<<endl;
    cout<<"\t\t\tPLAYER 1 :";
    cin>>player1;
    cout<<"\t\t\tPLAYER 2 :";
    cin>>player2;
    displayboard();
    for (int c=0;c<5;c++)
    {
        turn1();
        checker();
        if (flag == 1)
        {
            system("pause");
            break;
        }
        while(c==4)
        {
          cout<<"\t\t\tDRAW MATCH"<<endl;
          flag=1;
          break;
        }
        if (flag == 1)
        {
            system("pause");
            break;
        }
        turn2();
        checker();
        if (flag == 1)
        {
            system("pause");
            break;
        }
    }
 	return 0;
};
void displayboard()
{
    cout<<"\n "<<endl;
    cout << "\t\t\t     |     |     \n";
    cout << "\t\t\t  " << board[0] << "  | " << board[1] << "   |  " << board[2] << " \n";
    cout << "\t\t\t_____|_____|_____\n";
    cout << "\t\t\t     |     |     \n";
    cout << "\t\t\t  " << board[3] << "  | " << board[4] << "   |  " << board[5] << " \n";
    cout << "\t\t\t_____|_____|_____\n";
    cout << "\t\t\t     |     |     \n";
    cout << "\t\t\t  " << board[6] << "  | " << board[7] << "   |  " << board[8] << " \n";
    cout << "\t\t\t     |     |     \n";
}
void turn1()
{
                                                                    //cout << "turn is working" << endl;
    int p1;

    cout << "\t\t\t"<<player1<<" TURN \n \t\t\tENTER A NUMBER : ";
    cin >> p1;
        switch (p1)
        {
        case 1: board[0] = mark1; break;
        case 2: board[1] = mark1; break;
        case 3: board[2] = mark1; break;
        case 4: board[3] = mark1; break;
        case 5: board[4] = mark1; break;
        case 6: board[5] = mark1; break;
        case 7: board[6] = mark1; break;
        case 8: board[7] = mark1; break;
        case 9: board[8] = mark1; break;
        default:
            cout << "\t\t\tInvalid Move";

        }
        displayboard();

}
void turn2()
{
    int p2;
    cout << "\t\t\t"<<player2<<" TURN \n \t\t\tENTER A NUMBER : ";
    cin >> p2;
    switch (p2)
    {
    case 1: board[0] = mark2; break;
    case 2: board[1] = mark2; break;
    case 3: board[2] = mark2; break;
    case 4: board[3] = mark2; break;
    case 5: board[4] = mark2; break;
    case 6: board[5] = mark2; break;
    case 7: board[6] = mark2; break;
    case 8: board[7] = mark2; break;
    case 9: board[8] = mark2; break;
    default:
        cout << "\t\t\tInvalid Move";

    }
    displayboard();
}
void checker()
{

    // cout << "checker is working" << endl;
    if (  ((board[0] == board[4]) && (board[0] == board[8])) || ((board[2] == board[4]) && (board[2] == board[6]) )) //diagonal 1
    {
        //cout << "diagonal working" << endl;
        if (   ((board[0] == mark1) && (board[8]== mark1) ) || ((board[2]== mark1) && (board[6]==mark1) )  )
        {
            cout << "\t\t "<<player1<<"  WINS " << endl;
            flag = 1;

        }
        else if (  ((board[0] == mark2) && (board[8]== mark2) )  || ((board[2]== mark2) && (board[6]==mark2) ) )
        {
            cout << "\t\t"<<player2<<"WINS " << endl;
            flag = 1;
        }

    }

    for (int i = 0; i < 3; i++)                                                          //horizontal
        {
            // cout << "checker loop is working" << endl;

            if ((board[3 * i] == mark1) && (board[(3 * i) + 1] == mark1) && (board[(3 * i) + 2] == mark1))
            {
                cout << "\t\t"<<player1<<" WINS" << endl;
                flag = 1;
                break;
            }
            else if ((board[3 * i] == mark2) && (board[(3 * i) + 1] == mark2) && (board[(3 * i) + 2] == mark2))
            {
              cout << "\t\t"<<player2<<" WINS" << endl;
                flag = 1;
                break;
            }
        }
    for (int i = 0; i<3 ; i++)                                                                   //vertical
    {
        if ((board[i] == mark1) && (board[i +3] == mark1) &&  (board[i + 6] == mark1))
        {
            cout << "\t\t"<<player1<<"  WINS" << endl;
            flag =1;
            break;
        }
        else if ((board[i] == mark2) &&  (board[i + 3] == mark2) &&  (board[i + 6] == mark2))
        {
            cout << "\t\t"<<player2<<" WINS" << endl;
            flag = 1;
            break;
        }
    }
}
/*void draw()
{
  for(int i=0;i<3;i++)
  {
    if ((board[3 * i] != mark1) && (board[(3 * i) + 1] != mark1) && (board[(3 * i) + 2] != mark1)){}
    else if ((board[3 * i] != mark2) && (board[(3 * i) + 1] != mark2) && (board[(3 * i) + 2]!= mark2)){}
    else if ((board[i]!= mark1) && (board[i +3] != mark1) &&  (board[i + 6] != mark1)){}
    else if ((board[i] != mark2) &&  (board[i + 3] != mark2) &&  (board[i + 6] != mark2)){}
    else
    {
      cout<<"MATCH IS DRAW"<<endl;
      system("pause");
      flag=1;
    }
  }
}
*/
