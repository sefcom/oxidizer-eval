void _ZN6uu_tac14try_mmap_stdin17hfe59da374b4e6932E(undefined8 *param_1)

{
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28 [2];
  undefined8 local_18;
  undefined local_10;
  undefined2 local_e;
  
  local_48 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
  local_18 = 0;
  local_28[0] = 0;
  local_10 = 0;
  local_e = 0;
  _ZN7memmap211MmapOptions3map17h3d047a9fe9b50b2bE(&local_40,local_28,&local_48);
  if (local_40 == 0) {
    param_1[1] = local_38;
    param_1[2] = uStack_30;
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
    _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_memmap2__Mmap_C_std__io__error__Error_GT__GT_17h33f78c51d3eed1e5E
              (&local_40);
  }
  return;
}