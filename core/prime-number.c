int num,i, count = 0;
printf("Enter any positive number: ");
scanf("%d", &num);
for (i=2;i<=num/2; i=i+1){
if (num%i == 0){
 count++;
break;
 }
}
if (count == 0){
printf("%d is a prime number.\n", num);
 } else {
 printf("%d is not a prime number.\n", num);
}
}
