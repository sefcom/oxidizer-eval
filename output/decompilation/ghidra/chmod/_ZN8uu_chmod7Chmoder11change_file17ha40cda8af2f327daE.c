undefined8
_ZN8uu_chmod7Chmoder11change_file17ha40cda8af2f327daE
          (long param_1,ulong param_2,int param_3,code *param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  int local_108;
  int local_104;
  undefined8 *local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined local_e8;
  undefined local_e0 [8];
  undefined *local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 **local_b0;
  undefined *local_a8;
  undefined8 **local_a0;
  undefined *local_98;
  undefined *local_90;
  code *local_88;
  int *local_80;
  undefined *local_78;
  undefined *local_70;
  code *local_68;
  undefined *local_60;
  undefined local_58 [24];
  undefined local_40 [24];
  
  local_108 = (int)param_2;
  local_104 = param_3;
  if (local_108 == param_3) {
    uVar2 = 0;
    if ((*(char *)(param_1 + 0x22) != '\0') && (*(char *)(param_1 + 0x20) == '\0')) {
      local_100 = (undefined8 *)0x1;
      local_e8 = 1;
      uVar2 = 0;
      local_f8 = param_4;
      local_f0 = param_5;
      (*(code *)PTR__ZN6uucore8features2fs24display_permissions_unix17hf65510d5c6517b79E_001f2700)
                (local_58,param_2,0);
      local_b0 = &local_100;
      local_a8 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f25c0
      ;
      local_98 = 
      PTR__ZN4core3fmt3num50__LT_impl_u20_core__fmt__Octal_u20_for_u20_i32_GT_3fmt17h84d633f3d5886597E_001f2708
      ;
      local_88 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_e0 = (undefined  [8])&PTR_s_mode_of_001ebc10;
      local_d8 = (undefined *)0x4;
      local_c0 = &DAT_0011a2f0;
      local_b8 = 3;
      local_d0 = &local_b0;
      local_c8 = 3;
                    /* try { // try from 0015f179 to 0015f183 has its CatchHandler @ 0015f4e2 */
      local_a0 = (undefined8 **)&local_108;
      local_90 = local_58;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001f26a0)(local_e0);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3560958025c3e8c7E(local_58);
    }
  }
  else {
    local_60 = (undefined *)_ZN3std2fs15set_permissions17hb2684a192581866fE(param_4,param_5);
    if (local_60 == (undefined *)0x0) {
      uVar2 = 0;
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h22bbb88f7e5010dbE
                (0);
      puVar1 = PTR__ZN6uucore8features2fs24display_permissions_unix17hf65510d5c6517b79E_001f2700;
      if ((*(char *)(param_1 + 0x22) != '\0') || (*(char *)(param_1 + 0x20) == '\x01')) {
        local_100 = (undefined8 *)0x1;
        local_e8 = 1;
        local_f8 = param_4;
        local_f0 = param_5;
        (*(code *)PTR__ZN6uucore8features2fs24display_permissions_unix17hf65510d5c6517b79E_001f2700)
                  (local_40,param_2 & 0xffffffff,0);
                    /* try { // try from 0015f3ef to 0015f3fe has its CatchHandler @ 0015f4f6 */
        (*(code *)puVar1)(local_58,local_104,0);
        local_b0 = &local_100;
        local_a8 = 
        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f25c0
        ;
        local_98 = 
        PTR__ZN4core3fmt3num50__LT_impl_u20_core__fmt__Octal_u20_for_u20_i32_GT_3fmt17h84d633f3d5886597E_001f2708
        ;
        local_90 = local_40;
        local_88 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_80 = &local_104;
        local_78 = 
        PTR__ZN4core3fmt3num50__LT_impl_u20_core__fmt__Octal_u20_for_u20_i32_GT_3fmt17h84d633f3d5886597E_001f2708
        ;
        local_68 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_e0 = (undefined  [8])&PTR_s_mode_of_001ebbb0;
        local_d8 = (undefined *)0x6;
        local_c0 = &DAT_0011a1e0;
        local_b8 = 5;
        local_d0 = &local_b0;
        local_c8 = 5;
                    /* try { // try from 0015f4a7 to 0015f4b1 has its CatchHandler @ 0015f4e4 */
        local_a0 = (undefined8 **)&local_108;
        local_70 = local_58;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001f26a0)(local_e0);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3560958025c3e8c7E(local_58);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3560958025c3e8c7E(local_40);
        uVar2 = 0;
      }
    }
    else {
      if (*(char *)(param_1 + 0x21) == '\0') {
                    /* try { // try from 0015f1bf to 0015f2a9 has its CatchHandler @ 0015f52d */
        _local_e0 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f2588)();
        local_f8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9aa873f8513a6c9bE;
        local_b0 = (undefined8 **)&DAT_001ebab0;
        local_a8 = (undefined *)0x2;
        local_90 = (undefined *)0x0;
        local_a0 = &local_100;
        local_98 = (undefined *)0x1;
        local_100 = (undefined8 *)local_e0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f2590)(&local_b0);
        local_e0 = (undefined  [8])&local_60;
        local_d8 = 
        PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_001f25c8
        ;
        local_b0 = (undefined8 **)&DAT_001ebb30;
        local_a8 = (undefined *)0x2;
        local_90 = (undefined *)0x0;
        local_98 = &DAT_00000001;
        local_a0 = (undefined8 **)local_e0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f2590)(&local_b0);
      }
      if (*(char *)(param_1 + 0x22) != '\0') {
        local_100 = (undefined8 *)&DAT_00000001;
        local_e8 = 1;
        local_f8 = param_4;
        local_f0 = param_5;
        (*(code *)PTR__ZN6uucore8features2fs24display_permissions_unix17hf65510d5c6517b79E_001f2700)
                  (local_40,local_108,0);
                    /* try { // try from 0015f2ae to 0015f2c0 has its CatchHandler @ 0015f51b */
        (*(code *)PTR__ZN6uucore8features2fs24display_permissions_unix17hf65510d5c6517b79E_001f2700)
                  (local_58,local_104,0);
        local_b0 = &local_100;
        local_a8 = 
        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f25c0
        ;
        local_98 = 
        PTR__ZN4core3fmt3num50__LT_impl_u20_core__fmt__Octal_u20_for_u20_i32_GT_3fmt17h84d633f3d5886597E_001f2708
        ;
        local_88 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_80 = &local_104;
        local_78 = 
        PTR__ZN4core3fmt3num50__LT_impl_u20_core__fmt__Octal_u20_for_u20_i32_GT_3fmt17h84d633f3d5886597E_001f2708
        ;
        local_68 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_e0 = (undefined  [8])&PTR_s_failed_to_change_mode_of_file_fr_001ebb50;
        local_d8 = (undefined *)0x6;
        local_c0 = &DAT_0011a1e0;
        local_b8 = 5;
        local_d0 = &local_b0;
        local_c8 = 5;
                    /* try { // try from 0015f361 to 0015f36b has its CatchHandler @ 0015f509 */
        local_a0 = (undefined8 **)&local_108;
        local_90 = local_40;
        local_70 = local_58;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001f26a0)(local_e0);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3560958025c3e8c7E(local_58);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3560958025c3e8c7E(local_40);
      }
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17he4a0a2b91febee14E(local_60);
      uVar2 = 1;
    }
  }
  return uVar2;
}