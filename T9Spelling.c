#include<stdio.h>

void FindKeyNum(char LatinChar);

int Flag =0;


int main(){
    
    FILE *f1;
    int total_case=0,count=0;
    char ch;
    
    f1 = fopen("C-large-practice.in","r");
    
    fscanf(f1,"%d",&total_case);
    
    while(!feof(f1)){
                     
                     ch=fgetc(f1);
                     
                     if(ch != '\n'){
                           FindKeyNum(ch);
                     }
                     else{
                          count++;
                          if(count<total_case){
                                    printf("\nCase #%d: ",count);
                          }
                          else{
                               break;
                          }
                     
                     }
                          
    }
    
    getch();
    return 0;
}


void FindKeyNum(char LatinChar){
    
    
    if( LatinChar == 'a' || LatinChar == 'b' || LatinChar == 'c'){
        
        if(Flag == 1){
                printf(" ");
        }
        if( LatinChar == 'a'){
            printf("2");
        }
        if( LatinChar == 'b'){
            printf("22");
        }
        if( LatinChar == 'c'){
            printf("222");
        }
        Flag=1;
    }
    
    if( LatinChar == 'd' || LatinChar == 'e' || LatinChar == 'f'){
        
        if(Flag ==2){
                printf(" ");
        }
        if( LatinChar == 'd'){
            printf("3");
        }
        if( LatinChar == 'e'){
            printf("33");
        }
        if( LatinChar == 'f'){
            printf("333");
        }
        Flag=2;
    }
    
    if( LatinChar == 'g' || LatinChar == 'h' || LatinChar == 'i'){
        
        if(Flag ==3){
                printf(" ");
        }
        
        if( LatinChar == 'g'){
            printf("4");
        }
        if( LatinChar == 'h'){
            printf("44");
        }
        if( LatinChar == 'i'){
            printf("444");
        }
        
        Flag=3;
    }
    
    if( LatinChar == 'j' || LatinChar == 'k' || LatinChar == 'l'){
        
        if(Flag ==4){
                printf(" ");
        }
        if( LatinChar == 'j'){
            printf("5");
        }
        if( LatinChar == 'k'){
            printf("55");
        }
        if( LatinChar == 'l'){
            printf("555");
        }
        Flag=4;
    }
    
    if( LatinChar == 'm' || LatinChar == 'n' || LatinChar == 'o'){
        
        if(Flag ==5){
                printf(" ");
        }
        if( LatinChar == 'm'){
            printf("6");
        }
        if( LatinChar == 'n'){
            printf("66");
        }
        if( LatinChar == 'o'){
            printf("666");
        }
        Flag=5;
    }

    if( LatinChar == 'p' || LatinChar == 'q' || LatinChar == 'r' || LatinChar == 's'){
        
        if(Flag ==6){
                printf(" ");
        }
        if( LatinChar == 'p'){
            printf("7");
        }
        if( LatinChar == 'q'){
            printf("77");
        }
        if( LatinChar == 'r'){
            printf("777");
        }
        if( LatinChar == 's'){
            printf("7777");
        }
        Flag=6;
    }
    
    if( LatinChar == 't' || LatinChar == 'u' || LatinChar == 'v'){
        
        if(Flag ==7){
                printf(" ");
        }
        if( LatinChar == 't'){
            printf("8");
        }
        if( LatinChar == 'u'){
            printf("88");
        }
        if( LatinChar == 'v'){
            printf("888");
        }
        Flag=7;
    }
    
    if( LatinChar == 'w' || LatinChar == 'x' || LatinChar == 'y' || LatinChar == 'z'){
        
        if(Flag ==8){
                printf(" ");
        }
        if( LatinChar == 'w'){
            printf("9");
        }
        if( LatinChar == 'x'){
            printf("99");
        }
        if( LatinChar == 'y'){
            printf("999");
        }
        if( LatinChar == 'z'){
            printf("9999");
        }
        Flag=8;
    }
    
    if( LatinChar == ' '){
        
        if(Flag ==9){
                printf(" ");
        }
        if( LatinChar == ' '){
            printf("0");
        }
        Flag=9;
    }
}

