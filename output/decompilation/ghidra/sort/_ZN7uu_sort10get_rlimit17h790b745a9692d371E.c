undefined8 * _ZN7uu_sort10get_rlimit17h790b745a9692d371E(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined **local_48;
  undefined8 uStack_40;
  undefined local_30 [24];
  undefined4 local_18;
  
  local_48 = (undefined **)0x0;
  uStack_40 = 0;
  iVar1 = (*(code *)PTR_getrlimit_00306f40)(7,&local_48);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h1d4334c76f34ab0eE
              (local_30,"Failed to fetch rlimit",0x16);
    local_18 = 2;
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hab49dd9f0ca1dd34E(local_30);
    local_48 = &
               PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h69cd5d56d5644af7E_002ffc90
    ;
  }
  param_1[1] = local_48;
  *param_1 = uVar2;
  return param_1;
}