#include<stdio.h>
int main()
{
    // int num,new=1;
    // scanf("%d",&num);
    //pattern1
    // for(int i=1;i<=num;i++){
    //     for(int j=1;j<=num;j++){
    //         printf("%d ",i);
    //     }
    //     printf("\n");
    // }

    //pattern2
    // for(int i=1;i<=num;i++){
    //     for(int j=1;j<=i;j++){
    //         printf("%d ",i);
    //     }
    //     printf("\n");
    // }

    // //pattern3
    // for(int i=1;i<=num;i++){
    //     for(int j=1;j<=num;j++){
    //         printf("%d ",new++);
    //     }
    //     printf("\n");
    // }

    // //pattern4
    // for(int i=1;i<=num;i++){
    //     for(int j=1;j<=i;j++){
    //         printf("%02d ",new++);
    //     }
    //     printf("\n");
    // }
    // return 0;

    //pattern5
    //alternating odd even digits
    // int ct=1;
    // for(int i=1;i<=num;i++){
    //     for(int j=1;j<=i;j++){
    //         if(i%2==0){
    //             printf("%d ",i*2);
    //         }
    //         else{
    //             printf("%d ");
    //             ct++;
    //         }
    //     }
    //     printf("\n");
    // }

    // int num,val=1,new=1;
    // scanf("%d",&num);
    // for(int i=1;i<=num;i++){
    //     val = (i&1) ?1 :2;
    //     for(int j=1; j<=i; j++, val+=2){
    //         printf("%d ",val);
    //     }
    //     printf("\n");
    // }
    // return 0;


    //pattern6 snake
    // for(int i=1;i<=num;i++){
    //     for(int j=num;j>=1;j--){
    //         printf("%d ",new++);
    //     }
    //     printf("\n");
    // }

    // for(int i=1;i<=num;i++){
    //     if(i%2!=0){
    //     for(int j=num;j>=1;j--){
    //         printf("%d ",new++);
    //     }
    //     }
    //     else{
    //         for(int j=num;j>=1;j--){
    //         printf("%d ",4+(new--));
    //     }
    //     }
    //     printf("\n");
    // }

    // for(int i=1;i<=num;i++){
    //     if(i&1){
    //         for(int j=1;j<=num;j++){
    //             printf("%d ",val++);
    //         }
    //     }
    //     else{
    //         for(int j=1;j<=num;j++){
    //             printf("%d ",--val);
    //         }
    //     }
    //     printf("\n");
    //     val+=num;
    // }

    // //pattern7 vertical numbers
    // for(int i=1;i<=num;i++){
    //     val= i;
    //     for(int j=1;j<=num; j++){
    //         printf("%d ",val);
    //         val+=num;
    //     }
    //     printf("\n");
    // }

    //pattern8 vertical snake
    

    // for(int i=1;i<=num;i++){
    //     if(i&1){
    //         for(int j=1;j<=num;j++){
    //             printf("%d ",val++);
    //         }
    //     }
    //     else{
    //         for(int j=1;j<=num;j++){
    //             printf("%d ",--val);
    //         }
    //     }
    //     printf("\n");
    //     val+=num;
    // }

    
    // int val1,val2=1;
    // val1 = 2*num-1;
    // for(int i=1;i<=num;i++,val1-=2,val2+=2){
    //     val = i;
    //     for(int j=1;j<=num;j++){
    //         printf("%d ",val);
    //         if(j&1){
    //             val+=val1;
    //         }
    //         else{
    //             val+=val2;
    //         }
    //     }
    //     printf("\n");
    // }  


    int num,val=1,new=1;
    scanf("%d",&num);
    // for(int i=1;i<=num;i++){
    //     for(int j=1;j<=num;j++){
    //         if(i==j){
    //             printf("%d ",i);
    //         }
    //         else if(i==(num/2)+1){
    //             printf("%d ",j);
    //         }
    //         else if(j==(num/2)+1){
    //             printf("%d ",i);
    //         }
    //         else if(i+j==num+1){
    //             printf("%d ",i);
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    int mid = (num/2)+1;
    for(int i=1;i<=num;i++){
        
    }
    return 0;
}