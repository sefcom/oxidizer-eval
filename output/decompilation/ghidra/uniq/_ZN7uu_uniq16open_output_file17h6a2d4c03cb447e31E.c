undefined8 *
_ZN7uu_uniq16open_output_file17h6a2d4c03cb447e31E
          (undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40 [4];
  
  if (param_2 == 0) {
LAB_00168884:
    local_40[0] = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001fc3d0)();
    uVar2 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_001fc570)(local_40);
    local_50 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9d32404ba33e3096E(uVar2);
    ppuVar3 = &
              PTR__ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h321d5f2585ce129aE_001f5ad8
    ;
  }
  else {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h679c5716f854e642E
                      (param_2,param_3,&DAT_0011b6a4,1);
    if (cVar1 != '\0') goto LAB_00168884;
    _ZN3std2fs4File6create17h5f141230072c7c86E(local_40,param_2,param_3);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hc64994a9983278f5E
              (&local_50,local_40,param_2,param_3);
    if (local_50 != 0) {
      ppuVar3 = (undefined **)CONCAT44(uStack_44,local_48);
      uVar2 = 1;
      goto LAB_001688ab;
    }
    _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17hda9b44c021880ad4E
              (local_40,local_48);
    local_50 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6a1ac761650a84adE(local_40);
    ppuVar3 = &
              PTR__ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__fs__File_GT__GT_17h62c5e328c877674cE_001f5a88
    ;
  }
  uVar2 = 0;
LAB_001688ab:
  param_1[1] = local_50;
  param_1[2] = ppuVar3;
  *param_1 = uVar2;
  return param_1;
}