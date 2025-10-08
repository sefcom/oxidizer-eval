long _ZN7uu_shuf9shuf_exec17h79873914e861185eE
               (long param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined uVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined local_51;
  undefined local_50 [16];
  undefined4 local_38;
  
  if (*(char *)(param_2 + 0x38) == '\0') {
    local_50 = (*(code *)
                 PTR__ZN88__LT_alloc__vec__Vec_LT__RF_std__ffi__os_str__OsStr_GT__u20_as_u20_uu_shuf__Shufable_GT_15partial_shuffle17h7eaba20f6ed5cf3bE_00200b18
               )(param_1,param_3,*(undefined8 *)(param_2 + 0x30));
    auVar7 = _ZN104__LT_core__iter__adapters__copied__Copied_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3c84c8710fadeccfE
                       (local_50);
    if (auVar7._0_8_ != 0) {
      uVar1 = *(undefined *)(param_2 + 0x39);
      do {
        uVar5 = _ZN54__LT__RF__u5b_u8_u5d__u20_as_u20_uu_shuf__Writable_GT_12write_all_to17hbddde4cc5dd3278eE
                          (auVar7._0_8_,auVar7._8_8_,param_4);
        lVar4 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h4cbb07e8145d0e9fE
                          (uVar5);
        if (lVar4 != 0) {
          return lVar4;
        }
        lVar4 = param_4[2];
        local_51 = uVar1;
        if ((ulong)(*param_4 - lVar4) < 2) {
          uVar5 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17he4940fa9f64cbdddE
                            (param_4,&local_51,1);
          lVar4 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h4cbb07e8145d0e9fE
                            (uVar5);
        }
        else {
          *(undefined *)(param_4[1] + lVar4) = uVar1;
          param_4[2] = lVar4 + 1;
          lVar4 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h4cbb07e8145d0e9fE
                            (0);
        }
        if (lVar4 != 0) {
          return lVar4;
        }
        auVar7 = _ZN104__LT_core__iter__adapters__copied__Copied_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3c84c8710fadeccfE
                           (local_50);
      } while (auVar7._0_8_ != 0);
    }
  }
  else {
    cVar3 = _ZN77__LT_alloc__vec__Vec_LT__RF__u5b_u8_u5d__GT__u20_as_u20_uu_shuf__Shufable_GT_8is_empty17h19d4f659a144dda5E
                      (*(undefined8 *)(param_1 + 0x10));
    puVar2 = 
    PTR__ZN77__LT_alloc__vec__Vec_LT__RF__u5b_u8_u5d__GT__u20_as_u20_uu_shuf__Shufable_GT_6choose17h2eea63978d9ed536E_00200b20
    ;
    if (cVar3 != '\0') {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h07c2de588eccaa05E
                (local_50,&DAT_00119b7e,0x12);
      local_38 = 1;
      lVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h27ff8fca799d73ddE(local_50);
      return lVar4;
    }
    lVar4 = *(long *)(param_2 + 0x30);
    if (lVar4 != 0) {
      uVar1 = *(undefined *)(param_2 + 0x39);
      while( true ) {
        auVar7 = (*(code *)puVar2)(param_1,param_3);
        uVar5 = _ZN54__LT__RF__u5b_u8_u5d__u20_as_u20_uu_shuf__Writable_GT_12write_all_to17hbddde4cc5dd3278eE
                          (auVar7._0_8_,auVar7._8_8_,param_4);
        lVar6 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h4cbb07e8145d0e9fE
                          (uVar5);
        if (lVar6 != 0) {
          return lVar6;
        }
        local_50[0] = uVar1;
        lVar6 = param_4[2];
        if ((ulong)(*param_4 - lVar6) < 2) {
          uVar5 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17he4940fa9f64cbdddE
                            (param_4,local_50,1);
          lVar6 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h4cbb07e8145d0e9fE
                            (uVar5);
        }
        else {
          *(undefined *)(param_4[1] + lVar6) = uVar1;
          param_4[2] = lVar6 + 1;
          lVar6 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h4cbb07e8145d0e9fE
                            (0);
        }
        if (lVar6 != 0) break;
        lVar4 = lVar4 + -1;
        if (lVar4 == 0) {
          return 0;
        }
      }
      return lVar6;
    }
  }
  return 0;
}