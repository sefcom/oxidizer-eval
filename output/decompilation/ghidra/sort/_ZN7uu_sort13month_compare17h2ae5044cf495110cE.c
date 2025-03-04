int _ZN7uu_sort13month_compare17h2ae5044cf495110cE
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  bVar1 = _ZN7uu_sort11month_parse17h15c772d462e6ea25E();
  bVar2 = _ZN7uu_sort11month_parse17h15c772d462e6ea25E(param_3,param_4);
  iVar3 = 1;
  if (bVar1 <= bVar2) {
    iVar3 = -(uint)(bVar1 < bVar2);
  }
  return iVar3;
}