 #include<stdio.h>
 void main()
 {
     int arr [5]={1,2,3,4,5},i;
FILE *fp=NULL;
fp= fopen("outputssss.csv","w");
for(i=0;i<5;i++){
    fprintf(fp,"%d\n",arr[i]);
}
fclose(fp);
fp=0;
system("pause");




 }


 