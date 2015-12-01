int howmany(void){
  int i
  
  while(1){
  scanf("How many questions would you like to answer? (Your options are 3, 4 or 5) %d", i);
  
  if(i<3 || i>5){
    puts("Dumbass");
    continue;
  }else{
    puts("K.");
    return i;
  }
  }
}
