void _ZN7uu_sort11KeyPosition3new17ha77a31f4c9c6cdf9E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  char local_fd;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined local_f0 [16];
  undefined local_e0;
  char local_d8;
  char local_d7;
  long local_d0;
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined8 **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_98;
  undefined *local_90;
  char *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  local_fc = param_5;
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (local_68,0x2e,param_2,param_3);
  local_78 = 0;
  local_38 = 1;
  local_70 = param_3;
  auVar1 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17hcedf3ecbc5351d30E(&local_78);
  if (auVar1._0_8_ == 0) {
    _ZN7uu_sort11KeyPosition3new28__u7b__u7b_closure_u7d__u7d_17h12fd537b664bec41E
              (&local_c8,param_2,param_3);
    param_1[1] = local_c8;
    param_1[2] = uStack_c0;
    param_1[3] = local_b8;
  }
  else {
    auVar2 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17hcedf3ecbc5351d30E(&local_78);
    _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
              (&local_d8,auVar1._0_8_,auVar1._8_8_);
    if (local_d8 == '\0') {
      if (local_d0 == 0) {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1bb0423170e7fa7cE
                  (param_1 + 1,"field index can not be 0",0x18);
        goto LAB_001d2ea5;
      }
    }
    else if (local_d7 != '\x02') {
      local_fd = local_d7;
      local_f8 = 0;
      local_e0 = 1;
      local_98 = &local_f8;
      local_90 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00296f10
      ;
      local_88 = &local_fd;
      local_80 = 
      PTR__ZN70__LT_core__num__error__ParseIntError_u20_as_u20_core__fmt__Display_GT_3fmt17h3e61086f3d7b9af4E_002975d0
      ;
      local_c8 = &PTR_s_failed_to_parse_field_index_0028d018;
      uStack_c0 = 2;
      local_a8 = 0;
      local_b8 = &local_98;
      local_b0 = 2;
      local_f0 = auVar1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h9f6bdb3fe8306f69E(param_1 + 1,&local_c8);
      goto LAB_001d2ea5;
    }
    local_c8 = (undefined **)0x8000000000000000;
    uStack_c0 = param_4;
    _ZN4core6option15Option_LT_T_GT_6map_or17hb3b78d97c76e7c07E
              (&local_f8,auVar2._0_8_,auVar2._8_8_,&local_c8);
    param_1[1] = local_f8;
    param_1[2] = local_f0._0_8_;
    param_1[3] = local_f0._8_8_;
  }
LAB_001d2ea5:
  *param_1 = 1;
  return;
}