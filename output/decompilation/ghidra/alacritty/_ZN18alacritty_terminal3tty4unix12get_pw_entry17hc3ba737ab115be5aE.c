void _ZN18alacritty_terminal3tty4unix12get_pw_entry17hc3ba737ab115be5aE
               (undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar8;
  char *pcVar9;
  int local_dc;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [6];
  
  local_d8 = 0;
  iVar6 = (*(code *)PTR_getuid_009e1470)();
  local_dc = iVar6;
  iVar7 = (*(code *)PTR_getpwuid_r_009e1478)(iVar6,&local_c0,param_2,0x400,&local_d8);
  local_7c = local_ac;
  local_74 = local_a4;
  local_90 = local_c0;
  local_88 = local_b8;
  local_80 = local_b0;
  local_70 = local_a0;
  local_68 = local_98;
  if (iVar7 < 0) {
    pcVar9 = "getpwuid_r failed";
    uVar8 = 0x11;
  }
  else {
    if (local_d8 != 0) {
      if (local_b0 == iVar6) {
        lVar2 = (*(code *)PTR_strlen_009df220)(local_c0);
        puVar5 = PTR__ZN4core3ffi5c_str4CStr6to_str17h7208c416e44d9521E_009e0068;
        (*(code *)PTR__ZN4core3ffi5c_str4CStr6to_str17h7208c416e44d9521E_009e0068)
                  (local_60,local_c0,lVar2 + 1);
        local_c8 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hdfe23b01b334229bE
                             (local_60,&PTR_s_alacritty_terminal_src_tty_unix__00997298);
        puVar4 = PTR_strlen_009df220;
        local_d0 = extraout_RDX;
        lVar2 = (*(code *)PTR_strlen_009df220)(local_a0);
        (*(code *)puVar5)(local_60,local_a0,lVar2 + 1);
        uVar8 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hdfe23b01b334229bE
                          (local_60,&PTR_s_alacritty_terminal_src_tty_unix__009972b0);
        lVar2 = (*(code *)puVar4)(local_98);
        (*(code *)PTR__ZN4core3ffi5c_str4CStr6to_str17h7208c416e44d9521E_009e0068)
                  (local_60,local_98,lVar2 + 1);
        uVar3 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hdfe23b01b334229bE
                          (local_60,&PTR_s_alacritty_terminal_src_tty_unix__009972c8);
        *param_1 = local_c8;
        param_1[1] = local_d0;
        param_1[2] = uVar8;
        param_1[3] = extraout_RDX_00;
        param_1[4] = uVar3;
        param_1[5] = extraout_RDX_01;
        return;
      }
      local_60[0] = 0;
      (*(code *)PTR__ZN4core9panicking13assert_failed17h51c03e22510caea5E_009e1480)
                (0,&local_80,&local_dc,local_60,&PTR_s_alacritty_terminal_src_tty_unix__00997280);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar9 = "pw not found";
    uVar8 = 0xc;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h53b11fd4ed117188E
            (local_60,pcVar9,uVar8);
  uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hde3c6ec7f3b27af2E(local_60);
  uVar8 = (*(code *)PTR__ZN3std2io5error5Error4_new17hbf6e5d7f23cac6f9E_009dff38)
                    (0x28,uVar8,
                     &
                     PTR__ZN4core3ptr238drop_in_place_LT_alloc__boxed__convert___LT_impl_u20_core__convert__From_LT_alloc__string__String_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Send_u2b_core__marker__Sync_GT__GT___from__StringError_GT_17hf905007c818f81b6E_00996cf0
                    );
  param_1[1] = uVar8;
  *param_1 = 0;
  return;
}