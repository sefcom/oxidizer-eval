undefined4 _ZN10uu_pathchk11check_basic17h0fc1234dee308fd2E(long param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **local_d0;
  undefined *local_c8;
  ulong *local_c0;
  undefined *local_b8;
  undefined **ppuStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined ***local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulong local_58;
  ulong local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  ulong local_30;
  undefined local_28;
  
  _ZN5alloc3str17join_generic_copy17h3bd5640a2d2f1574E(&local_a0,param_1,param_2);
  local_58 = local_90;
  if (local_90 < 0x101) {
    if (local_90 == 0) {
      local_88 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001e50e0;
      local_d0 = &PTR_DAT_001dea68;
      local_c8 = &DAT_00000001;
      local_c0 = (ulong *)&DAT_00000008;
      local_b8 = (undefined *)0x0;
      ppuStack_b0 = (undefined **)0x0;
                    /* try { // try from 00155fea to 001560f0 has its CatchHandler @ 00156113 */
      uVar3 = (*(code *)
                PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17hebff3e936d8559e8E_001e50f0
              )(&local_88,&local_d0);
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h7a4400e9f2ab9568E
                (uVar3);
    }
    else {
      lVar4 = param_1;
      do {
        if (lVar4 == param_1 + param_2 * 0x18) {
          uVar2 = _ZN10uu_pathchk16check_searchable17h0902f70b6adfdabeE(local_98,local_90);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h6647f07fb02b5c78E
                    (local_a0,local_98);
          return uVar2;
        }
        local_50 = *(ulong *)(lVar4 + 0x10);
        if (0xe < local_50) {
          local_48 = PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001e50e0;
          local_38 = *(undefined8 *)(lVar4 + 8);
          local_40 = (undefined *)0x0;
          local_28 = 1;
          local_d0 = (undefined **)&DAT_001177d0;
          local_c8 = 
          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_001e50e8
          ;
          local_c0 = &local_50;
          local_b8 = 
          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_001e50e8
          ;
          ppuStack_b0 = &local_40;
          local_a8 = (code *)
                     PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001e50f8
          ;
          local_88 = &PTR_s_limit_exceeded_by_length_of_file_001dea78;
          local_80 = 4;
          local_68 = 0;
          local_78 = &local_d0;
          local_70 = 3;
          local_30 = local_50;
          uVar3 = (*(code *)
                    PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17hebff3e936d8559e8E_001e50f0
                  )(&local_48,&local_88);
          _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h7a4400e9f2ab9568E
                    (uVar3);
          break;
        }
                    /* try { // try from 00155fa7 to 00155fab has its CatchHandler @ 00156115 */
        cVar1 = _ZN10uu_pathchk20check_portable_chars17h39a248ee7ea009b7E
                          (*(undefined8 *)(lVar4 + 8));
        lVar4 = lVar4 + 0x18;
      } while (cVar1 != '\0');
    }
  }
  else {
    local_40 = PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001e50e0;
    local_d0 = (undefined **)0x117718;
    local_c8 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_001e50e8
    ;
    local_c0 = &local_58;
    local_b8 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_001e50e8
    ;
    local_a8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_88 = &PTR_s_limit_exceeded_by_length_of_file_001dea28;
    local_80 = 4;
    local_68 = 0;
    local_78 = &local_d0;
    local_70 = 3;
                    /* try { // try from 00155f4c to 00155f66 has its CatchHandler @ 00156113 */
    ppuStack_b0 = &local_a0;
    uVar3 = (*(code *)
              PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17hebff3e936d8559e8E_001e50f0
            )(&local_40,&local_88);
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h7a4400e9f2ab9568E
              (uVar3);
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h6647f07fb02b5c78E(local_a0,local_98);
  return 0;
}