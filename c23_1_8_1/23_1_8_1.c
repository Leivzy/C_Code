#include <stdio.h>

//请根据主程序流程，补全此函数
//冰雹产生并输出函数
//注意：输出每个冰雹数时，请按5位对齐输出
       int t=1;
void hailstone(int n)
{
    int p;
    if(t==1){
    printf("input a number:Hailstone generated by %d:\n",n);
    }

    /**********  Begin **********/
    printf("%5d",n);
    if(t%6==0){
        printf("\n");
    }

      if(n==1){
            printf("\n");
          printf("Number of hailstone generated:%d",t);
          return 0;
      }
     else{
         if(n%2==0){
                t++;
             p=n/2;
             hailstone(p);
         }
        else{
                t++;
              p=3*n+1;
            hailstone(p);
        }
     }


    /**********  End  **********/

}
int main(){
    int n;
    scanf("%d",&n);
    hailstone(n);
    return 0;
}