void _ZN5uu_ls5dired30calculate_and_update_positions17h95a9ea6d492d96ccE
               (long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -0x10 + *(long *)(param_1 + 0x10) * 0x10;
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  lVar1 = _ZN4core6option15Option_LT_T_GT_6map_or17h9541ece648ea5431E(lVar1);
  _ZN5uu_ls5dired16update_positions17hea3b08d96622b01cE
            (param_1,param_2 + lVar1 + 2,param_3 + 2 + param_2 + lVar1);
  return;
}