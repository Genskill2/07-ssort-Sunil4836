 #include<string.h>
#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
string ari(string a)
{
float score;
int c=0,w=0,s=0;
for(int i=0;a[i]!='\0';++i)
{
if(isalnum(a[i]))
c++;
if(a[i]==' ')
w++;
if((a[i]=='.')||(a[i]=='!')||(a[i]=='?'))
s++;
}
score=(4.71*(float)c/(float)w)+(0.5*(float)w/(float)s)-21.43;
if((int)(score+0.5)>(int)score)
score=(int)(score+0.5);
else
score=(int)(score)+1;
switch((int)score)
{
case 1:return "Kindergarten";
       break;
case 2:return "First/Second Grade";
       break; 
case 3:return "Third Grade";
       break;
case 4:return "Fourth Grade";
       break;
case 5:return "Fifth Grade";
       break;
case 6:return "Sixth Grade";
       break;
case 7:return "Seventh Grade";
       break;
case 8: return "Eighth Grade";
        break;
case 9:return "Ninth Grade";
       break;
case 10:return "Tenth Grade";
        break;
case 11:return "Eleventh Grade";
        break;
case 12:return "Twelfth grade";
        break;
case 13:return "College student";
        break;
case 14:return "Professor";
        break;
default:break; 
 }
 }
[30/06, 9:01 PM] SRIJITH NITC: void swap_max(int arr[], int l, int n)
{
int t,temp;
int mx=arr[n];
t=n;
for(int i=(n+1);i<l;i++)
{
if(arr[i]>mx)
{
mx=arr[i];
t=i;
}
}
temp=arr[t];
arr[t]=arr[n];
arr[n]=temp;
}
void ssort(int arr[], int l)
{
for(int i=0;i<l;++i)
swap_max(arr,l,i);
}
