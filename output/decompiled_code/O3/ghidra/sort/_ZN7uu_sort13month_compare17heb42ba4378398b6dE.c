int __rustcall
uu_sort::month_compare(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  bVar1 = month_parse();
  bVar2 = month_parse(param_3,param_4);
  iVar3 = 1;
  if (bVar1 <= bVar2) {
    iVar3 = -(uint)(bVar1 < bVar2);
  }
  return iVar3;
}