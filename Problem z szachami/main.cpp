#include <iostream>

int kolumny, wiersze;
int posX, posY;
bool **tab;

int ilosc_ruchow=0;

const struct MOZLIWE_RUCHY { int x; int y;} G1={-1,-2}, G2={1,-2}, L1={-2,1}, L2={-2,1}, P1={2,-1}, P2={2,1}, D1={-1,2}, D2={1,2};
bool sprawdz_czy_mozna_ruszyc(int,int); //argumenty pozycja gracza X, pozycja graccza Y
bool czy_mozna(int,int);

void stworz();
void wypelnij_zerami();
void wypisz();

void zmien_pozycje(int,int);

void zapisz_ruch();






int main()
{


    std::cout<<"Podaj mi liczbe wierszy: ";
    std::cin>>wiersze;

    std::cout<<"A teraz liczbe kolumn: ";
    std::cin>>kolumny;

    stworz();
    wypelnij_zerami();

    kolumny--;
    wiersze--;

    std::cout<<"Podaj pozycje startowa X: ";
    std::cin>>posX;
    std::cout<<"Podaj pozycje startowa Y: ";
    std::cin>>posY;

    zmien_pozycje(posX,posY);
    wypisz();


    while(true){

        if(sprawdz_czy_mozna_ruszyc(posX, posY)){
            wypisz();
        }
        else{
            wypisz();
            std::cout<<ilosc_ruchow<<std::endl;
            break;
        }
        }

    return 0;
}

void stworz(){
    tab = new bool *[wiersze];
    for(int i=0; i<wiersze; i++){
        for(int j=0; j<kolumny; j++)
            tab[i]=new bool[kolumny];
    }

}

void wypelnij_zerami(){
  for(int i=0; i<wiersze; i++){
        for(int j=0; j<kolumny; j++)
            tab[i][j]=0;
    }
}

void wypisz(){
    for(int i=0; i<wiersze; i++){
        for(int j=0; j<kolumny; j++)
            std::cout<<tab[i][j]<<" ";
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

bool czy_mozna(int X, int Y){

    if((X>=0&&X<=kolumny)&&(Y>=0&&Y<=wiersze)){
        if(tab[Y][X]==0)
            return 1;
        else
            return 0;
    }
    else
        return 0;

}

bool sprawdz_czy_mozna_ruszyc(int gX, int gY){

    if(czy_mozna(gX+G1.x,gY+G1.y)){
        zmien_pozycje(gX+G1.x,gY+G1.y);
        std::cout<<"Z: "<<gX<<", "<<gY<<" na: "<<gX+G1.x<<", "<<gY+G1.y<<"\n\n";
        return true;
    }
    else if (czy_mozna(gX+G2.x,gY+G2.y)){
        zmien_pozycje(gX+G2.x,gY+G2.y);
        std::cout<<"Z: "<<gX<<", "<<gY<<" na: "<<gX+G2.x<<", "<<gY+G2.y<<"\n\n";
        return true;
    }
    else if (czy_mozna(gX+P1.x,gY+P1.y)){
        zmien_pozycje(gX+P1.x,gY+P1.y);
        std::cout<<"Z: "<<gX<<", "<<gY<<" na: "<<gX+P1.x<<", "<<gY+P1.y<<"\n\n";
        return true;
    }
    else if (czy_mozna(gX+P2.x,gY+P2.y)){
        zmien_pozycje(gX+P2.x,gY+P2.y);
        std::cout<<"Z: "<<gX<<", "<<gY<<" na: "<<gX+P2.x<<", "<<gY+P2.y<<"\n\n";
        return true;
    }
    else if (czy_mozna(gX+L1.x,gY+L1.y)){
        zmien_pozycje(gX+L1.x,gY+L1.y);
        std::cout<<"Z: "<<gX<<", "<<gY<<" na: "<<gX+L1.x<<", "<<gY+L1.y<<"\n\n";
        return true;
    }
    else if (czy_mozna(gX+L2.x,gY+L2.y)){
        zmien_pozycje(gX+L2.x,gY+L2.y);
        std::cout<<"Z: "<<gX<<", "<<gY<<" na: "<<gX+L2.x<<", "<<gY+L2.y<<"\n\n";
        return true;
    }
    else if (czy_mozna(gX+D1.x,gY+D1.y)){
        zmien_pozycje(gX+D1.x,gY+D1.y);
        std::cout<<"Z: "<<gX<<", "<<gY<<" na: "<<gX+D1.x<<", "<<gY+D1.y<<"\n\n";
        return true;
    }
    else if (czy_mozna(gX+D2.x,gY+D2.y)){
        zmien_pozycje(gX+D2.x,gY+D2.y);
        std::cout<<"Z: "<<gX<<", "<<gY<<" na: "<<gX+D2.x<<", "<<gY+D2.y<<"\n\n";
        return true;
    }
    else
        return false;


}

void zmien_pozycje(int X, int Y){
    tab[Y][X]=true;
    posX=X;
    posY=Y;
    zapisz_ruch();
}

void zapisz_ruch(){

    ilosc_ruchow++;

}


