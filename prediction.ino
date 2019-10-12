int DTree(int pitch, int roll ){
  int flag = 0;
  if( pitch >= 35 || pitch <= -35){
    flag =1;
 }

 if( roll >= 35 || roll <= -35){
  flag = 1;
 }

 return flag;
}

int LRegression( int pitch, int roll){
  int flag =0;

  int output = 1 / (1 + exp (-1*(-9.28 + 0.65*pitch -0.16*roll) ) );

   if( output >= 0.5){
    flag = 1;
   }
   else{
    flag = 0;
   }
   return flag;
}

int Ensemble(int DT, int LR){
  return (DT+LR)/2;
}
