#include <stdio.h>

#include <stdlib.h>
int main() {
  int t;
    printf("Entrez la temperature: ");
    scanf("%d",&t);
    
if (t >= 100){
    printf("c'est un gaz %d", t);
    
}else if(t <=0){
    printf("c'est un liquid %d",t);
}else{
    printf("solid %d", t);
}
   
return 0;
}