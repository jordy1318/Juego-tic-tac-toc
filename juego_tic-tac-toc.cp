#include <iostream>
#include <stdio.h>
using namespace std;


char a[]={'0','1','2','3','4','5','6','7','8'};

void display(){
    cout<<"\t\t\t"<<a[0]<<"\t| "<<a[1]<<"  |"<<" "<<a[2]<<"\n";
    cout<<"\t\t\t"<<"____|____|____"<<endl;
    cout<<"\t\t\t "<<a[3]<<"\t| "<<a[4]<<"  |"<<" "<<a[5]<<"\n";
    cout<<"\t\t\t"<<"____|____|____"<<endl;
    cout<<"\t\t\t"<<a[6]<<"\t| "<<a[7]<<"  |"<<" "<<a[8]<<"\n";
    cout<<"\t\t\t\t"<<"|    |"<<"\n";

}

void colocar(int s,char turno){
    if(a[s]!= 'x' && a[s]!= 'o'){
        a[s]=turno;
        display();
    }else{
        cout<<"\n\n espacio ocupado,pierdes un turno \n\n ";
        
    }
}

bool chewin(){
    if(a[0]==a[1] && a[1]==a[2]){
        return true;
    }else if(a[3]==a[4] && a[4]==a[5]){
        return true;
    }else if(a[6]==a[7] && a[7]==a[8]){
        return true;
    }else if(a[0]==a[3] && a[3]==a[6]){
        return true;
    }else if(a[1]==a[4] && a[4]==a[7]){
        return true;
    }else if(a[2]==a[5] && a[5]==a[8]){
        return true;
    }else if(a[0]==a[4] && a[4]==a[8]){
        return true;
    }else if(a[2]==a[4] && a[4]==a[6]){
        return true;
    }else{
        return false;
    }
    
}

char turno(char anterior){
    return (anterior == 'x') ? 'o':'x';
}

int main(){

    display();
    cout<<"\n\n\n";
    cout<<" player 1 (X) \t\t\t\t player 2 (O) "<<"\n";
    
  
    int s;
    char anterior='o';
    bool win=false;
    
    while (win==false){
        char actual=turno(anterior);
        cout<<"\n\n\n"<<actual<<" selecciona un numero disponible: "<<"\n";
        cin>>s;
        colocar(s,actual);
        win=chewin();
        anterior=actual;
    }
    cout<<"felicidades: "<<anterior<<"!!!!!! \n\n\n";

    
    return 0;
}

