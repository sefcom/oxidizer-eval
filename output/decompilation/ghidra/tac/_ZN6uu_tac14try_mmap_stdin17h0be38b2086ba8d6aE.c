void _ZN6uu_tac14try_mmap_stdin17h0be38b2086ba8d6aE(undefined8 *param_1)

{
  undefined8 local_48;
  byte local_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28 [2];
  undefined8 local_18;
  undefined local_10;
  undefined2 local_e;
  
  local_48 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_00362100)();
  local_18 = 0;
  local_28[0] = 0;
  local_10 = 0;
  local_e = 0;
  _ZN7memmap211MmapOptions3map17h350451b78dea6693E(local_40,local_28,&local_48);
  if ((local_40[0] & 1) != 0) {
    *param_1 = 0;
    _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_memmap2__Mmap_C_std__io__error__Error_GT__GT_17h6ab4ebf47749bb69E
              (local_40);
    return;
  }
  param_1[1] = local_38;
  param_1[2] = uStack_30;
  *param_1 = 1;
  return;
}