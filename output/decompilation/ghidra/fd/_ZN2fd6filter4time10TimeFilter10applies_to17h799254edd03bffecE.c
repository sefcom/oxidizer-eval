bool _ZN2fd6filter4time10TimeFilter10applies_to17h799254edd03bffecE
               (int *param_1,long param_2,uint param_3)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (*param_1 == 1) {
    bVar2 = lVar1 < param_2;
    if (param_2 == lVar1) {
      bVar2 = (uint)param_1[4] < param_3;
    }
    return bVar2;
  }
  bVar2 = param_2 < lVar1;
  if (param_2 == lVar1) {
    bVar2 = param_3 < (uint)param_1[4];
  }
  return bVar2;
}