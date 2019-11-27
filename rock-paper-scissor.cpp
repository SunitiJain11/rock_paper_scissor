#include <iostream>
#include<ctime>

using namespace std;

int myrandom()
{
    srand(time(0));
    long long int ac3= rand();


    return ac3%3;

}

int main() {

    int cl=3,ul=3;


    cout<<" \n\n                       Rock paper scissor                            \n\n\n";
    cout<<"You and coomputer have 3 lives, if you lose, you lose a life and if computer loses, he loses one life ";
    cout<<"\nthe one who's life is zero first loses\nenter \t r for Rock,\t s for scissor,\t p for paper \t e to exit\n\n";



    cout<<"your lives : "<<ul<<"\t\t\t\t computer's lives : "<<cl<<"\nGAME STARTS\n";
    //string s;
    int u,l;char c,ch;
    while(cl>0&&ul>0)
    {
        l=myrandom();
        cout<<"\nchoose : ";
        e:
        cin>>c;
        switch(c)
        {
        case 'S': case 's' : u=2; break;
        case 'P': case 'p' :u=1;break;
        case 'R': case 'r' : u=0;break;
        case 'E':case 'e': ul=0;break;
        default :cout<<" choose again : "; goto e;break;

        }

        if(ul==0) break;//user quits
        cout<<"computer choose ";
        switch(l)
        {
            case 2:  cout<<"scissor\n";break;
            case 1: cout<<"paper\n";break;
            case 0: cout<<"rock\n";break;

        }

        if(u!=0&&l!=0)
        {
            if(u>l)
            {
                cout<<"you win\n";
                cl--;
            }
            else if(u==l)
            {
                cout<<"it's a draw\n";

            }
            else
            {
                cout<<"you lose\n";
                ul--;
            }

        }
        else
        {
            if(u==0&&l==0)
            {
                cout<<"it's a draw\n";
            }
            else if(u==0&&l==2)
            {
                cout<<"you win\n";
                cl--;
            }
             else if(u==0&&l==1)
            {
                cout<<"you lose\n";
                ul--;
            }
             else     if(u==2&&l==0)
            {
                cout<<"you lose\n";
                ul--;
            }
             else if(u==1&&l==0)
            {
                cout<<"you win\n";
                cl--;
            }
        }

    cout<<"your lives : "<<ul<<"\t\t\t\t computer's lives : "<<cl;
    }


    if(ul==0)
    {
        cout<<"\n            YOU LOST COMPUTER WINS!!!!!!!!!         \n";
    }
    else
    {
        cout<<"\n            YOU WON COMPUTER LOST!!!!!!!!!         \n";
    }
    return 0;
}