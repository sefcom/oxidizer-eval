undefined8 _ZN3bat6config22get_args_from_env_vars17he80b41528665be0bE(undefined (*param_1) [16])

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuStack_60 = &PTR_s___tabs__themeBAT_THEME__theme_da_007c8650;
  ppuStack_58 = &PTR_s_src_bin_bat_directories_rs_007c8730;
  _ZN102__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8f016da35f88a09eE
            (&uStack_38,&ppuStack_60);
  _ZN102__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_9size_hint17ha404a24fb9254aa9E
            (auStack_50,ppuStack_60,ppuStack_58);
  lVar3 = -1;
  if (auStack_50._0_8_ + 1 != 0) {
    lVar3 = auStack_50._0_8_ + 1;
  }
  uVar1 = _ZN4core3cmp3Ord3max17habd212a3f0de9a75E(4,lVar3);
  auStack_50 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17hfacf3aaea40a31bdE
                         (uVar1,8,0x18,&PTR_s__rustc_bf64d66bd58719fac2585eae5_007c7400);
  puVar2 = auStack_50._8_8_;
  *puVar2 = uStack_38;
  puVar2[1] = uStack_30;
  puVar2[2] = uStack_28;
  uStack_40 = 1;
  _ZN97__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_I_GT__GT_11spec_extend17h6b8ffc56bb32c239E
            (auStack_50,ppuStack_60,ppuStack_58);
  *(undefined8 *)param_1[1] = uStack_40;
  *param_1 = auStack_50;
  return uStack_40;
}