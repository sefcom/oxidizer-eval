undefined8 *
_ZN7uu_comm9open_file17h7884d427373f2014E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined param_4)

{
  char cVar1;
  undefined8 uVar2;
  int local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  uint local_98;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h5723b3bfa7d363aaE
                    (param_2,param_3,"-",1);
  if (cVar1 == '\0') {
    _ZN3std2fs8metadata17h0373c3893bc9c36eE(&local_d0,param_2,param_3);
    if (local_d0 != 2) {
      if ((local_98 & 0xf000) == 0x4000) {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h397e91f739d192dbE
                  (&local_d0,"Is a directory",0xe);
        uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h79f3710bfd0c8f7eE(&local_d0);
        local_c8 = (*(code *)PTR__ZN3std2io5error5Error4_new17hbf6e5d7f23cac6f9E_001e7458)
                             (0x28,uVar2,
                              &
                              PTR__ZN4core3ptr238drop_in_place_LT_alloc__boxed__convert___LT_impl_u20_core__convert__From_LT_alloc__string__String_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Send_u2b_core__marker__Sync_GT__GT___from__StringError_GT_17h9651d67ce12f1b41E_001e0de8
                             );
      }
      else {
        _ZN3std2fs4File4open17h4d8fb62fce9f1fe2E(&local_d0,param_2,param_3);
        if (local_d0 != 1) {
          _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h1ec4c3de20b2cd65E
                    (param_1,local_cc);
          goto LAB_001583c4;
        }
      }
    }
    *param_1 = local_c8;
    *(undefined *)(param_1 + 6) = 0xb;
  }
  else {
    uVar2 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001e7450)();
    *param_1 = 0;
    param_1[1] = uVar2;
LAB_001583c4:
    *(undefined *)(param_1 + 6) = param_4;
  }
  return param_1;
}