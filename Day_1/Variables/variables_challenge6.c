int main(){

float x ;
float result = 1 ;


printf("Entrer la valeur de X :");
scanf("%f"  ,&x);

//((((3x+2)                                                                                                                                                                                                                                                                                                                                                                                                                 x–5)x–1)x+7)x–6
result = ((((3*x+2) * x) * x-1) *x+7) * x-6;
printf("result est : %.2f " ,  result);
    return 0 ;
}