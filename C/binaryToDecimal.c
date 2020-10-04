#include<stdio.h>

int square(int d);
int main(){
   
   char binary[20], revs[20];
   int i, j=0, m, leng, result = 0, c;
   int Convert_To_Integer[20],a=0;
   
   printf("Input Binary : ");gets(binary);
       m = strlen(binary);
       leng = m-1;  
             
             for(i=0; i<=leng; i++){
                revs[j] = binary[leng-i];j++;
             }
             
                   for(j = 0; j<=leng; j++){
                           
                         if(revs[j]=='0'|| revs[j]=='1'){  
                                            
                               
                               if(revs[j]== '0'){
                                  Convert_To_Integer[a] = 0;
                               }
                               
                               else if(revs[j] == '1'){
                                  Convert_To_Integer[a] = 1;
                               }
                                
      
                                c = square(j);
                                result = result + (Convert_To_Integer[a]*c);
                                                                      a++;
                         }
                   
                         else{
                                printf("Invalid input!\n");
                                break;
                            }    
                   }
                   char character = result;
                   printf("\nDecimal mode : %d\n",result);
                   printf("Character code ASCII %d: %c\n",result,character);
   getch();
}

int square(int d){
   int loop, result = 1;
   
   for(loop=1; loop<=d; loop++){
     result = result * 2;
   }
   return result; 
}
