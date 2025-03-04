undefined  [16]
_ZN7uu_more4more17h8763b7f12892fd6bE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,long param_5,
          undefined8 param_6,long param_7,undefined8 param_8,long *param_9)

{
  char cVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint extraout_EDX;
  uint uVar6;
  int iVar7;
  undefined auVar8 [16];
  ulong local_e0;
  char local_d8;
  undefined2 local_d6;
  int local_d4;
  char local_d0;
  char local_ce;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  short local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_48 [24];
  
  local_ac = param_4;
  local_60 = param_5;
  local_58 = param_6;
  local_50 = param_2;
  _ZN9crossterm8terminal4size17hbe662dd82ba50d02E(local_a8);
  uVar2 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h27978026947b7af9E(local_a8);
  uVar6 = extraout_EDX;
  if (*(short *)(param_9 + 4) != 0) {
    uVar6 = (uint)*(ushort *)((long)param_9 + 0x22);
  }
  _ZN7uu_more10break_buff17he6395443a668b94eE(local_48,param_1,local_50,uVar2);
  _ZN7uu_more5Pager3new17h6098d4be37f01f19E(local_a8,uVar6,local_48,param_7,param_8,param_9);
  cVar1 = (char)local_ac;
  uVar5 = local_90;
  if (*param_9 != -0x8000000000000000) {
                    /* try { // try from 001dcd50 to 001dcdc2 has its CatchHandler @ 001dd194 */
    auVar8 = _ZN7uu_more22search_pattern_in_file17hc37280eeed50663dE(local_a0,local_98,param_9);
    uVar5 = auVar8._8_8_;
    if (auVar8._0_8_ == 0) {
      lVar3 = _ZN9crossterm7command18write_command_ansi17h0432cd0c76b6eef8E(param_3,4);
      if (((lVar3 != 0) ||
          (lVar3 = _ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17h392d0be644ab70e9E
                             (param_3), lVar3 != 0)) ||
         (lVar3 = _ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17he47e3670e90f933eE
                            (param_3,&DAT_00118db9,0x13), lVar3 != 0)) {
        auVar8 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                           (lVar3);
        uVar5 = auVar8._8_8_;
        lVar3 = auVar8._0_8_;
        goto LAB_001dd13b;
      }
      local_68 = local_68 + -1;
      uVar5 = local_90;
    }
  }
  local_90 = uVar5;
  if (cVar1 != '\0') {
    lVar3 = _ZN9crossterm7command18write_command_ansi17h0432cd0c76b6eef8E(param_3,4);
    if (lVar3 == 0) {
      lVar3 = _ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17h392d0be644ab70e9E
                        (param_3);
    }
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h830102b0065460c6E(lVar3,&PTR_DAT_002629a8);
    uVar5 = local_58;
    lVar3 = local_60;
    if (local_60 == 0) {
      uVar5 = 0;
      lVar3 = 1;
    }
    _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hc54af5b05edfde16E(&local_c8,lVar3,uVar5);
                    /* try { // try from 001dcdcd to 001dcde3 has its CatchHandler @ 001dd183 */
    lVar3 = _ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17he47e3670e90f933eE
                      (param_3,local_c0,local_b8);
    if (lVar3 != 0) {
      auVar8 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                         (lVar3);
      lVar3 = auVar8._0_8_;
                    /* try { // try from 001dcde4 to 001dce6f has its CatchHandler @ 001dd194 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1f03875085d5f083E(&local_c8);
      uVar5 = auVar8._8_8_;
      goto LAB_001dd13b;
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1f03875085d5f083E(&local_c8);
    local_68 = local_68 + -3;
  }
  _ZN7uu_more5Pager4draw17h2b73bb7b8a9d56c7E(local_a8,param_3,&UINT_00110000);
  if (cVar1 != '\0') {
    param_9[3] = 0;
    local_68 = local_68 + 3;
  }
  cVar1 = _ZN7uu_more5Pager12should_close17hd0c7831e1905e098E(local_a8);
  if ((param_7 == 0) && (cVar1 != '\0')) {
    lVar3 = 0;
    uVar5 = param_1;
LAB_001dd13b:
    _ZN4core3ptr35drop_in_place_LT_uu_more__Pager_GT_17h5e4cf1885d08b4d9E(local_a8);
    auVar8._8_8_ = uVar5;
    auVar8._0_8_ = lVar3;
    return auVar8;
  }
LAB_001dceba:
  do {
    _ZN9crossterm5event4poll17hefe8b0d9d35d10b0E(&local_c8,0,10000000);
    cVar1 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17ha4f5b3edb49286c5E(&local_c8);
  } while (cVar1 == '\0');
  _ZN9crossterm5event4read17h36d19ea956bf477bE(&local_c8);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h70ef865c885e52afE(&local_e0);
  uVar4 = 4;
  if ((local_e0 ^ 0x8000000000000000) < 6) {
    uVar4 = local_e0 ^ 0x8000000000000000;
  }
  if (uVar4 != 2) {
    if (uVar4 == 5) {
      _ZN7uu_more5Pager11page_resize17ha0e74b43be507582E
                (local_a8,local_d6,*(undefined4 *)(param_9 + 4));
      goto LAB_001dcf2c;
    }
    goto switchD_001dd073_caseD_6;
  }
  iVar7 = local_d4;
  if (local_ce == '\0') {
    if (local_d8 != '\x0f') goto code_r0x001dd065;
    if (local_d0 != '\x02') {
      if (local_d0 != '\0') goto LAB_001dd0b1;
      if (local_d4 == 0x71) goto LAB_001dd173;
      goto LAB_001dd0bd;
    }
    if (local_d4 == 99) {
LAB_001dd173:
                    /* try { // try from 001dd173 to 001dd182 has its CatchHandler @ 001dd196 */
      _ZN7uu_more10reset_term17h414dda587ba155f3E(param_3);
      uVar5 = _ZN3std7process4exit17hf8c1b9d00a2a86fdE(0);
                    /* catch() { ... } // from try @ 001dcdcd with catch @ 001dd183 */
                    /* try { // try from 001dd186 to 001dd1b1 has its CatchHandler @ 001dd1ba */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1f03875085d5f083E(&local_c8);
      _ZN4core3ptr35drop_in_place_LT_uu_more__Pager_GT_17h5e4cf1885d08b4d9E(local_a8);
      auVar8 = _Unwind_Resume(uVar5);
      return auVar8;
    }
    goto LAB_001dcf31;
  }
  if (local_ce == '\x02') goto switchD_001dd073_caseD_6;
code_r0x001dd065:
  switch(local_d8) {
  case '\x04':
  case '\b':
    if (local_d0 != '\0') goto switchD_001dd073_caseD_6;
    _ZN7uu_more5Pager7page_up17hcd3674266d22c74eE(local_a8);
                    /* try { // try from 001dd08e to 001dd095 has its CatchHandler @ 001dd192 */
    auVar8 = _ZN7uu_more23paging_add_back_message17hbb2e4f2ab157e08eE
                       (*(undefined4 *)(param_9 + 4),param_3);
    uVar5 = auVar8._8_8_;
    lVar3 = auVar8._0_8_;
    iVar7 = 0x110000;
    if (lVar3 != 0) goto LAB_001dd131;
    break;
  case '\x05':
  case '\t':
    if (local_d0 != '\0') goto switchD_001dd073_caseD_6;
LAB_001dd0ed:
    cVar1 = _ZN7uu_more5Pager12should_close17hd0c7831e1905e098E(local_a8);
    if (cVar1 != '\0') {
LAB_001dd129:
      lVar3 = 0;
      uVar5 = param_1;
LAB_001dd131:
                    /* try { // try from 001dd131 to 001dd13a has its CatchHandler @ 001dd194 */
      _ZN4core3ptr44drop_in_place_LT_crossterm__event__Event_GT_17hc3bd588850a4ac79E(&local_e0);
      goto LAB_001dd13b;
    }
    _ZN7uu_more5Pager9page_down17h61b22add167296daE(local_a8);
LAB_001dcf2c:
    iVar7 = 0x110000;
    break;
  default:
    goto switchD_001dd073_caseD_6;
  case '\x0f':
LAB_001dd0b1:
    if (local_d0 == '\0') {
LAB_001dd0bd:
      if (local_d4 == 0x20) goto LAB_001dd0ed;
      if (local_d4 == 0x6b) {
        _ZN7uu_more5Pager9prev_line17h2dc79d29e0a18308E(local_a8);
      }
      else {
        if (local_d4 != 0x6a) break;
        cVar1 = _ZN7uu_more5Pager12should_close17hd0c7831e1905e098E(local_a8);
        if (cVar1 != '\0') goto LAB_001dd129;
        _ZN7uu_more5Pager9next_line17h22612d87ae029aa4E(local_a8);
      }
      goto LAB_001dcf2c;
    }
  }
LAB_001dcf31:
  _ZN4core3ptr44drop_in_place_LT_crossterm__event__Event_GT_17hc3bd588850a4ac79E(&local_e0);
  if (*(char *)((long)param_9 + 0x25) == '\0') {
    if (*(char *)((long)param_9 + 0x24) != '\0') {
      local_e0 = _ZN3std2io5stdio6stdout17h077da66234850927E();
      lVar3 = _ZN9crossterm7command18write_command_ansi17h0432cd0c76b6eef8E(&local_e0,0);
      if ((lVar3 == 0) &&
         (lVar3 = _ZN9crossterm7command18write_command_ansi17h52fb7152bdef87dfE(&local_e0,0,0),
         lVar3 == 0)) {
        local_c8 = _ZN3std2io5stdio6stdout17h077da66234850927E();
        lVar3 = _ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17h392d0be644ab70e9E
                          (&local_c8);
      }
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h830102b0065460c6E(lVar3,&PTR_DAT_002629f0);
    }
  }
  else {
    local_e0 = _ZN3std2io5stdio6stdout17h077da66234850927E();
    lVar3 = _ZN9crossterm7command18write_command_ansi17h52fb7152bdef87dfE(&local_e0,0,0);
    if ((lVar3 == 0) &&
       (lVar3 = _ZN9crossterm7command18write_command_ansi17h0432cd0c76b6eef8E(&local_e0,2),
       lVar3 == 0)) {
      local_c8 = _ZN3std2io5stdio6stdout17h077da66234850927E();
      lVar3 = _ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17h392d0be644ab70e9E
                        (&local_c8);
    }
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h830102b0065460c6E(lVar3,&PTR_DAT_00262a08);
  }
  _ZN7uu_more5Pager4draw17h2b73bb7b8a9d56c7E(local_a8,param_3,iVar7);
  goto LAB_001dceba;
switchD_001dd073_caseD_6:
                    /* try { // try from 001dceb0 to 001dd024 has its CatchHandler @ 001dd1a5 */
  _ZN4core3ptr44drop_in_place_LT_crossterm__event__Event_GT_17hc3bd588850a4ac79E(&local_e0);
  goto LAB_001dceba;
}