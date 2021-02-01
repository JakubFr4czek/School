#include <iostream>
#include <utility>

bool create_tab_and_fill_with_zeros(); //przynajmniej wiadomo o co chodzi O_o
void wypisz();
bool head();
bool wykonaj_ruch(int);
bool sprawdzenie();

int **tab;
const std::pair<int, int> skoczek_ruchy[8] = {{-2,-1},{-2,1},{1,-2},{1,-2},{-1,2},{1,2},{2,-1},{2,1}}; //pierwsza liczba to Y, druga liczba to X
int Y,X;
int sY, sX;
int ruchy=0;


int main()
{

    std::cout<<"Cos tam liczy, np dla planszy 5x5 i skoczka na (1,1)"<<std::endl;

    std::cout<<"Podaj liczbe rozmiar szachownicy (X Y): ";
    std::cin>>X>>Y;


    if(!create_tab_and_fill_with_zeros()){
        std::cerr<<"Blad tworzenia tablicy!"<<std::endl;
        return 0;
    }

    std::cout<<"Podaj pozycje skoczka (X Y): ";
    std::cin>>sX>>sY;

    sY--;
    sX--;
    tab[sY][sX]=++ruchy;
        wypisz();

    head();
    std::cout<<"Dla tej pozycji jest to nie mozliwe!"<<std::endl;

    return 0;
}


bool head(){

    //wypisz();

     if(sprawdzenie()){
        std::cout<<"Mamy to!!!!!!!"<<std::endl;
        wypisz();
        exit(0);
        }

    int tabT[Y][X];

     for(int i=0; i<Y; i++){
        for(int j=0; j<X; j++){
            tabT[i][j] = tab[i][j];
        }
     }

    int lSY=sY;
    int lSX=sX;
    int lRuchy=ruchy;


    for(int i=0; i<8; i++){

        if(wykonaj_ruch(i)){
            //wypisz();
            if(!head()){

                for(int i=0; i<Y; i++){
                    for(int j=0; j<X; j++){
                        tab[i][j] = tabT[i][j];
                    }
                }

                sY=lSY;
                sX=lSX;
                ruchy=lRuchy;

            }
        }
            /*else{
                tab[sY][sX]=0;

            }*/

        }
    //wypisz();
    //tab=tabT;
    //std::cout<<"Po zmianie: "<<std::endl;
    //wypisz();

    return false;


}

bool wykonaj_ruch(int a)
{
   //std::cout<<" a: "<<a<<std::endl;

    if(sY+skoczek_ruchy[a].first>=0&&sY+skoczek_ruchy[a].first<Y){

        //std::cout<<" ->: "<<sY+skoczek_ruchy[a].first<<std::endl;

        if(sX+skoczek_ruchy[a].second>=0&&sX+skoczek_ruchy[a].second<X){

            //std::cout<<" ->: "<<sX+(skoczek_ruchy[a].second)<<std::endl;

            if(tab[sY+skoczek_ruchy[a].first][sX+skoczek_ruchy[a].second]==0){

            tab[sY+skoczek_ruchy[a].first][sX+skoczek_ruchy[a].second]=++ruchy;
            sY+=skoczek_ruchy[a].first;
            sX+=skoczek_ruchy[a].second;
            }
            else
                return false;

        }
        else
            return false;
        return true;
    }
    else
        return false;

}


void wypisz(){

    for(int i=0; i<Y; i++){
        for(int j=0; j<X; j++){
            std::cout.width(2);
            std::cout<<std::left<<tab[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;

}

bool create_tab_and_fill_with_zeros(){

    tab = new int *[Y];
    for(int i=0; i<Y; i++){

        tab[i]=new int[X];

        for(int j=0; j<X; j++){
            tab[i][j]=0;
        }
    }
    return true;

}

bool sprawdzenie(){

    for(int i=0; i<Y; i++){

        for(int j=0; j<X; j++){

            if(tab[i][j]==0){

                return false;
            }
        }
    }
    return true;

}
