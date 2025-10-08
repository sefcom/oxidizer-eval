undefined4 _ZN10uu_pathchk13check_default17hab06eef46e470948E(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_140;
  undefined8 local_138;
  ulong local_130;
  undefined *local_128;
  ulong local_120 [3];
  ulong local_108;
  undefined local_100;
  undefined **local_f8;
  undefined8 local_f0;
  undefined ***local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_c8;
  undefined **local_c0;
  undefined *local_b8;
  ulong *local_b0;
  undefined *local_a8;
  ulong *puStack_a0;
  undefined *local_98;
  
  _ZN5alloc3str17join_generic_copy17h3bd5640a2d2f1574E(&local_140,param_1,param_2);
  local_c8 = local_130;
  if (local_130 < 0x1001) {
    uVar3 = local_130;
    if (local_130 == 0) {
      _ZN3std2fs16symlink_metadata17h514eccbfabb43f9eE(&local_c0,&local_140);
      if (local_c0 == (undefined **)0x2) {
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h59adaa044fe599ecE
                  (2,local_b8);
        local_f8 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001e50e0;
        local_c0 = &PTR_s_pathchk______No_such_file_or_dir_001dead8;
        local_b8 = &DAT_00000001;
        local_b0 = (ulong *)&DAT_00000008;
        local_a8 = (undefined *)0x0;
        puStack_a0 = (ulong *)0x0;
        uVar2 = (*(code *)
                  PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17hebff3e936d8559e8E_001e50f0
                )(&local_f8,&local_c0);
        _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h7a4400e9f2ab9568E
                  (uVar2);
        goto LAB_00156582;
      }
      uVar3 = _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h59adaa044fe599ecE
                        (local_c0,local_b8);
    }
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        uVar3 = *(ulong *)(param_1 + 0x10 + lVar4);
        if (0x1000 < uVar3) {
          local_128 = PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001e50e0;
          local_120[2] = *(undefined8 *)(param_1 + 8 + lVar4);
          local_120[1] = 0;
          local_100 = 1;
          local_c0 = (undefined **)&DAT_0011703c;
          local_b8 = 
          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_001e5100
          ;
          local_b0 = local_120;
          local_a8 = 
          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_001e50e8
          ;
          puStack_a0 = local_120 + 1;
          local_98 = 
          PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001e50f8
          ;
          local_f8 = &PTR_s_limit_exceeded_by_length_of_file_001dea78;
          local_f0 = 4;
          local_d8 = 0;
          local_e8 = &local_c0;
          local_e0 = 3;
          local_120[0] = uVar3;
          local_108 = uVar3;
          uVar2 = (*(code *)
                    PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17hebff3e936d8559e8E_001e50f0
                  )(&local_128,&local_f8);
          _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h7a4400e9f2ab9568E
                    (uVar2);
          goto LAB_00156582;
        }
        lVar4 = lVar4 + 0x18;
      } while (param_2 * 0x18 != lVar4);
    }
    local_120[0] = uVar3;
    uVar1 = _ZN10uu_pathchk16check_searchable17h0902f70b6adfdabeE(local_138,local_130);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h6647f07fb02b5c78E
              (local_140,local_138);
  }
  else {
    local_128 = PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001e50e0;
    local_120[1] = 0;
    local_120[2] = local_138;
    local_108 = local_130;
    local_100 = 1;
    local_c0 = (undefined **)&DAT_0011703c;
    local_b8 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h6f30f0a695ff7937E_001e4fd0
    ;
    local_b0 = &local_c8;
    local_a8 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_001e50e8
    ;
    puStack_a0 = local_120 + 1;
    local_98 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001e50f8
    ;
    local_f8 = &PTR_s_limit_exceeded_by_length_of_file_001dea28;
    local_f0 = 4;
    local_d8 = 0;
    local_e8 = &local_c0;
    local_e0 = 3;
                    /* try { // try from 0015639f to 00156581 has its CatchHandler @ 001565a0 */
    uVar2 = (*(code *)
              PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17hebff3e936d8559e8E_001e50f0
            )(&local_128,&local_f8);
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h7a4400e9f2ab9568E
              (uVar2);
LAB_00156582:
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h6647f07fb02b5c78E
              (local_140,local_138);
    uVar1 = 0;
  }
  return uVar1;
}