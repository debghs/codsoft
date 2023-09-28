#include<iostream>
#include<string>
using namespace std;

class TICTACTOE
{
	
	public:
		
	char board[3][3];
    int row,col,digit;
    char choice;
    string player1;
	string player2;
    bool tie;
	
	public:
	
	TICTACTOE()
	{			
		choice = 'X';
		tie=false;
	    char value='1';
		for(int i=0;i<3;i++)
		{
			for (int j=0; j< 3 ; j++){ board[i][j]=value++; }
		}	
	}
		
		
	void setPlayers(string p1,string p2)
	{
		player1=p1;
		player2=p2;
		cout<<"Welcome "<<player1<<" & "<<player2<<" in the  Game\n"<<endl;
		cout<<player1<<" is Player 1 so He/She will play first (x)"<<endl;
		cout<<player2<<" is Player 2 so  He/She will play second (0)"<<endl;
	}

    void showBoard()
	{
		system("cls");

		cout<<"\n\n";
		cout<<"     |      |"<<endl;
		cout<<"  "<<board[0][0]<<"  |   "<<board[0][1]<<"  |  "<<board[0][2]<<endl;
		cout<<"-----|------|-----"<<endl;
		cout<<"     |      |"<<endl;
		cout<<"  "<<board[1][0]<<"  |   "<<board[1][1]<<"  |  "<<board[1][2]<<endl;
		cout<<"-----|------|-----"<<endl;
		cout<<"     |      |"<<endl;
		cout<<"  "<<board[2][0]<<"  |   "<<board[2][1]<<"  |  "<<board[2][2]<<endl;
		cout<<"     |      |"<<endl;
    }


    void playersInput()
	{
	
		if (choice == 'X')
	 	{
            cout << player1 << " Enter your desired place (Digit) :" << endl;
            cin >> digit;
     	}
		else if (choice == 'O')
		{
            cout << player2 << " Enter your desired place (Digit) :" << endl;
            cin >> digit;
    	}

	if(digit==1)
	{
		row=0;
		col=0;
	}
	else if(digit==2)
	{
		row=0;
		col=1;	
	}
	else if(digit==3)
	{
		row=0;
		col=2;	
	}
	else if(digit==4)
	{
		row=1;
		col=0;	
	}
	else if(digit==5)
	{
		row=1;
		col=1;	
	}
	else if(digit==6)
	{
		row=1;
		col=2;	
	}
	else if(digit==7)
	{
		row=2;
		col=0;	
	}
	else if(digit==8)
	{
		row=2;
		col=1;	
	}
	else if(digit==9)
	{
		row=2;
		col=2;	
	}
	else
	{
		 cout << "Invalid digit! Please enter a digit between 1 and 9." << endl;
            cin.clear();
            cin.ignore(1000,'\n');        
            return;
	}
	
	if(choice=='X' && board[row][col]!='X' && board[row][col]!='O')
	{
		board[row][col]='X';
		choice='O';	
	}
	else if(choice=='O' && board[row][col]!='X' && board[row][col]!='O')
	{
		board[row][col]='O';
		choice='X';	
	}
	else{cout<<"There is not empty space !!"<<endl;}
    }

    bool calculateResults()
	{

    for (int i = 0; i < 3; i++)
	{
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i]){return true;}
    }
    
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] || board[0][2] == board[1][1] && board[1][1] == board[2][0]){return true;}
    
    // Check for a draw
    bool draw = true;

    for (int i = 0; i < 3; i++)
	{
        for (int j = 0; j < 3; j++)
		{
            if (board[i][j] != 'X' && board[i][j] != 'O')
			{
                draw = false;
                break;
            }
        }
        if (!draw) {break;}
    }
    
    if (draw)
	{
        tie = true;
        return true;
    }
    
    return false;
    }

    void playGame()
    {
        while (!calculateResults())
        {
            showBoard();
            playersInput();
            calculateResults();
        }	
    }

    void checkWinner()
    {
    	if(choice =='X'  &&  tie == false){ cout<<player2<<"  Wins !!"<<endl; }
        else if(choice =='O'  &&  tie == false){ cout<<player1<<"  Wins !!"<<endl; }
        else{ cout<<"Its A DRAW !"<<endl; }
	}
};



int main(){
	
	cout<<"\t\t\tTIC-TAC-TOE GAME\n"<<endl;

	char playAgain='y';
	
	while(playAgain=='y'){
		
	TICTACTOE game;

	string p1, p2;

    cout << "Enter Player 1 name : " << endl;
    getline(cin >> ws, p1); // Using getline with ws to read the whole line, including spaces
   
    cout << "Enter Player 2 name : " << endl;
    getline(cin >> ws, p2); // Using getline with ws to read the whole line, including spaces

    game.setPlayers(p1, p2);
    game.playGame();
    game.showBoard();
    game.checkWinner();

    cout << "Want to Play Again ? Enter y to Yes OR n to NO :" << endl;
    cin >> playAgain;
    cin.ignore(1000, '\n'); 
    system("cls");


	}
    cout<<"\n\tTHANK YOU For playing this game. \n\n\tHope you Enjoyed !!!"<<endl;
}