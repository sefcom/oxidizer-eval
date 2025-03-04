undefined8 *
_ZN7uu_uniq16open_output_file17h6c5c0ef7c704597cE
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
LAB_001bf0a4:
    local_40[0] = _ZN3std2io5stdio6stdout17h077da66234850927E();
    uVar2 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(local_40);
    local_50 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hde928dde2dc59f44E(uVar2);
    ppuVar3 = &
              PTR__ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17hf4a7cf827905b96cE_002306d0
    ;
  }
  else {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h34f4df7d1e205d5aE
                      (param_2,param_3,"-",1);
    if (cVar1 != '\0') goto LAB_001bf0a4;
    _ZN3std2fs4File6create17hde7652c601917767E(local_40,param_2,param_3);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h09998b69f307355cE
              (&local_50,local_40,param_2,param_3);
    if (local_50 != 0) {
      ppuVar3 = (undefined **)CONCAT44(uStack_44,local_48);
      uVar2 = 1;
      goto LAB_001bf0cb;
    }
    _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h1113dda0f4545092E
              (local_40,0x2000,local_48);
    local_50 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8ba536df269a656bE(local_40);
    ppuVar3 = &
              PTR__ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__fs__File_GT__GT_17heeebd6c80a8ef23dE_00230680
    ;
  }
  uVar2 = 0;
LAB_001bf0cb:
  param_1[1] = local_50;
  param_1[2] = ppuVar3;
  *param_1 = uVar2;
  return param_1;
}