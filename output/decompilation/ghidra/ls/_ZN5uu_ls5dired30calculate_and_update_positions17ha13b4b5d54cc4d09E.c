void _ZN5uu_ls5dired30calculate_and_update_positions17ha13b4b5d54cc4d09E
               (long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = (*(long *)(param_1 + 0x10) + -1) * 0x10 + *(long *)(param_1 + 8);
  }
  lVar1 = _ZN4core6option15Option_LT_T_GT_6map_or17h6db8c3714c85d15cE(lVar1);
  _ZN5uu_ls5dired16update_positions17h1dc8b030d29268c5E
            (param_1,param_2 + lVar1 + 2,param_3 + 2 + param_2 + lVar1);
  return;
}