char _ZN7uu_sort13month_compare17hf05b083267e3ccf7E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = _ZN7uu_sort11month_parse17he61b5b2aea1498acE();
  bVar2 = _ZN7uu_sort11month_parse17he61b5b2aea1498acE(param_3,param_4);
  return (bVar2 < bVar1) - (bVar1 < bVar2);
}