#include <stdio.h> 

#include<string.h> 

int main(void) { 

    int i,b,a,n,t,j;

    char s[1001]; 

    scanf("%d",&t);

    while(t--) { 

        scanf("%s",s); 

        a=strlen(s); 

        if(a%2==0) {

            n=a/2;

            } 

            else { 

                n=a/2+1;

                } 

                b=0; 

                i=0; 

                while(i<a/2) 

                { 

                    j=n;

                    while(j<a) 

                    {

                        if(s[i]==s[j]) 

                        { 

                            b++; 

                            s[j]=0; 

                            break;

                            } 

                            j++; 

                        

                    } 

                    i++; 

                    

                } 

                if(b==a/2) 

                printf("YES\n");

                else 

                printf("NO\n"); 

      

        } 

    return 0; 

}
