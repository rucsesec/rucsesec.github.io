#include<stdio.h>
int main(){
    int num1,num2,num3,num4,num5,num6;
    num1=0;num2=0;num3=0;num4=0;num5=0;num6=0;
    int n,i,j,sum,mark,final;
    sum=0;
    scanf("%d",&n);
    int str[n][6],score[13];
    score[0]=0;score[1]=1;score[2]=2;score[3]=4;score[4]=8;score[5]=16;score[6]=32;
    score[7]=64;score[8]=128;score[9]=256;score[10]=512;score[11]=1024;score[12]=2048;
    for (j=0;j<=n; j++){scanf("%d",str[j]);}
    for (j=0;j<=n;j++)
        {for (i=0;i<=5;i++)
                { switch (str[j][i])
                      {case 1:num1=num1+1;break;
                       case 2:num2=num2+1;break;
                       case 3:num3=num3+1;break;
                       case 4:num4=num4+1;break;
                       case 5:num5=num5+1;break;
                       case 6:num6=num6+1;break;
                       }
        if (num4==6) mark=score[11];
        else if (num4==5) mark=score[8];
        else if (num4==4) mark=score[6];
        else if (num4==3) mark=score[6];
        else if (num4==2){if(num2!=4) mark=score[2];else mark=score[3];}
        else if (num4==1)
                {if(num2!=5) 
                   {if(num2!=1) mark=score[2];
                      else if(num3==1&&num1==1&&num5==1&&num6==1) mark=score[5];}
                else mark=score[8];}
        else if (num4==0)
                {if(num2==6)mark=score[9];
                   else if(num2==5)mark=score[8];
                         else if(num2==4)
                                 {if(num1==2)mark=score[12];
                                     else mark=score[3];}
                                     }
             else mark=score[0];
             sum=sum+mark;
             if(mark==0) final=1;break;}
        if(final==1)break;}
    printf("%x",sum);
    return 0;    
}
