#include "libreriaPasoAPaso"
#include "MKL2574"

#define A0 0
#define A1 0
#define B0 0
#define B1 0

int e = 0;
int f[] = {0,0,0,0};
void pasoCompleto(int num){
    int rot = 0;
    while(num != 0)
    {
        if((rot == 0) && (num != 0)){
            PTA -> PSOR|=(0u<<B1);
            PTA -> PSOR|=(1u<<A0);
            PTA -> PSOR|=(0u<<B0);
            PTA -> PSOR|=(0u<<A1);
            rot++;
            num--;
        }
        else if((rot == 1) && (num != 0)){
            PTA -> PSOR|=(0u<<A0);
            PTA -> PSOR|=(1u<<A1);
            rot++;
            num--;
        }
        else if((rot == 2) && (num != 0)){
            PTA -> PSOR|=(0u<<A1);
            PTA -> PSOR|=(1u<<B0);
            rot++;
            num--;
        }
        else if((rot == 3) && (num != 0)){
            PTA -> PSOR|=(0u<<B0);
            PTA -> PSOR|=(1u<<B1);
            rot++;
            num--;
        }
        else if((rot == 4) && (num != 0)){
            rot = 0;
        }
    }
        
}
void pasoNormal(int num){
    int rot = 0;
    while(num != 0)
    {
        if((rot == 0) && (num != 0)){
            PTA -> PSOR|=(0u<<B1);
            PTA -> PSOR|=(1u<<A0);
            PTA -> PSOR|=(0u<<B0);
            PTA -> PSOR|=(1u<<A1);
            rot++;
            num--;
        }
        else if((rot == 1) && (num != 0)){
            PTA -> PSOR|=(0u<<A0);
            PTA -> PSOR|=(1u<<A1);
            PTA -> PSOR|=(1u<<B0);
            rot++;
            num--;
        }
        else if((rot == 2) && (num != 0)){
            PTA -> PSOR|=(0u<<A1);
            PTA -> PSOR|=(1u<<B0);
            PTA -> PSOR|=(1u<<B1);
            rot++;
            num--;
        }
        else if((rot == 3) && (num != 0)){
            PTA -> PSOR|=(0u<<B0);
            PTA -> PSOR|=(1u<<B1);
            PTA -> PSOR|=(1u<<A0);

            rot++;
            num--;
        }
        else if((rot == 4) && (num != 0)){
            rot = 0;
        }
    }
           
}
void pasoMedio(int num){
    int rot = 0;
    while(num != 0)
    {
        if((rot == 0) && (num != 0)){
            PTA -> PSOR|=(0u<<B1);
            PTA -> PSOR|=(1u<<A0);
            PTA -> PSOR|=(0u<<B0);
            PTA -> PSOR|=(0u<<A1);
            rot++;
            num--;
        }
        else if((rot == 1) && (num != 0)){
            PTA -> PSOR|=(1u<<A0);
            PTA -> PSOR|=(1u<<A1);
            rot++;
            num--;
        }
        else if((rot == 2) && (num != 0)){
            PTA -> PSOR|=(0u<<A0);
            PTA -> PSOR|=(1u<<A1);
            rot++;
            num--;
        }
        else if((rot == 3) && (num != 0)){
            PTA -> PSOR|=(1u<<A1);
            PTA -> PSOR|=(1u<<B0);
            rot++;
            num--;
        }
        else if((rot == 4) && (num != 0)){
            PTA -> PSOR|=(0u<<A1);
            PTA -> PSOR|=(1u<<B0);
            rot++;
            num--;
        }
        else if((rot == 5) && (num != 0)){
            PTA -> PSOR|=(1u<<B1);
            PTA -> PSOR|=(1u<<B0);
            rot++;
            num--;
        }
        else if((rot == 6) && (num != 0)){
            PTA -> PSOR|=(0u<<B0);
            PTA -> PSOR|=(1u<<B1);
            rot++;
            num--;
        }
        else if((rot == 7) && (num != 0)){
            PTA -> PSOR|=(1u<<B1);
            PTA -> PSOR|=(1u<<A0);
            rot++;
            num--;
        }
        else if((rot == 8) && (num != 0)){
            rot = 0;
        }
    }
        
}
