#include<stdio.h>

void main()
{
    int np,nr,max[50][10],allo[50][10],nir[50],available[10],need[50][10],ssq[50],i,j,sum[50],flag[50],eq,d=0,f=0,uu=0,n,qq[50],h=0,z=0;

    printf("Enter total number of process: ");
    scanf("%d",&np);
    printf("Enter total type of resources to be used: ");
    scanf("%d",&nr);
    printf("Enter MAX matrix: ");
    for(i=0;i<np;i++)
    {
        printf("For process P%d: \t",i);
        for(j=0;j<nr;j++){

            scanf("%d",&max[i][j]);
        }
    }


printf("Enter the ALLOCATION matrix: ");
for(i=0;i<np;i++)
    {
        printf("For process P%d: \t",i);
        for(j=0;j<nr;j++)
        {

            scanf("%d",&allo[i][j]);
        }
    }

    printf("Enter total Instances of each resource: ");
    for(i=0;i<nr;i++)
    {
        printf("For Ressource R%d: \t",i);
        scanf("%d",&nir[i]);
    }


  for(i=0;i<nr;i++)
  {
      sum[f]=0;
      for(j=0;j<np;j++)
      {
         sum[f]=allo[j][i]+sum[f];
      }
      f++;
  }

  for(i=0;i<nr;i++)
  {
      available[i]=nir[i]-sum[i];
  }

    for(i=0;i<np;i++)
    {
        for(j=0;j<nr;j++)
        {
            need[i][j]=max[i][j]-allo[i][j];
        }
    }

    printf("\n\n\t\t\t\tThe NEED Matrix is: \n");
    for(i=0;i<np;i++)
    {
        printf("For process P%d :",i);
        for(j=0;j<nr;j++)
        {
          printf("\t\t%d\t",need[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<np;i++)
    {
        flag[i]=0;
    }
    i=0;

    while (d==0)
    {
        n=i;

        if(flag[i]==0)
        {
            for(j=0;j<nr;j++)
            {
                if(available[j]>=need[i][j])
                {
                    eq=1;
                }
                else{
                    eq=0;

                    break;
                }
            }
            if(eq==1)
            {
                ssq[uu]=i;
                uu++;
                for(j=0;j<nr;j++)
                {
                    available[j]=available[j]+allo[i][j];
                }
                flag[i]=1;
                i++;
            }
        }
        else{
           i++;
        }
if(n!=i+1)
{
    qq[h]=i;
    i++;
    h++;
}


        if(i>=np)
            {
                if(z<=h)
                {
                    i=qq[z];
                z++;
                }
            }
       d=1;

            for(j=0;j<np;j++)
    {
        if(flag[j]==0)
        d=0;

    }


    }

    printf("Safe Sequence is :");
    for(i=0;i<np;i++)
    {
        printf("Process P%d: ",ssq[i]);
    }



}
