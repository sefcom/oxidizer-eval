void _ZN7uu_stat6Stater23handle_escape_sequences17h968fffb30d055b36E
               (undefined8 *param_1,long param_2,ulong param_3,ulong *param_4,ulong param_5,
               undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  char extraout_DL;
  long extraout_RDX;
  ulong extraout_RDX_00;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  undefined auVar9 [16];
  undefined **local_98;
  undefined8 local_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined local_68 [16];
  undefined8 *local_58;
  code *local_50;
  uint local_44;
  ulong local_40;
  undefined8 *local_38;
  
  uVar4 = *param_4;
  uVar7 = uVar4 + 1;
  *param_4 = uVar7;
  if (uVar7 < param_5) {
    if (param_3 <= uVar7) {
LAB_00175c1b:
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_002220e8)
                (uVar7,param_3,&PTR_s_src_uu_stat_src_stat_rs_00219ea8);
LAB_00175c31:
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_002220e8)
                (uVar7,local_40,&PTR_s_src_uu_stat_src_stat_rs_00219ed8);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_44 = *(uint *)(param_2 + 4 + uVar4 * 4);
    switch(local_44) {
    case 0x22:
      *(undefined *)(param_1 + 1) = 0x22;
      *param_1 = 4;
      break;
    default:
      if ((local_44 & 0xfffffff8) == 0x30) {
        cVar5 = '\0';
        uVar6 = 0;
        local_40 = param_3;
        local_38 = param_1;
        while( true ) {
          if (local_40 <= uVar7) goto LAB_00175c31;
          uVar4 = _ZN4core4char7methods22__LT_impl_u20_char_GT_8to_digit17hcc2263739e531becE
                            (*(undefined4 *)(param_2 + uVar7 * 4),8);
          if ((uVar4 & 1) == 0) break;
          cVar5 = extraout_DL + cVar5 * '\b';
          uVar7 = uVar7 + 1;
          *param_4 = uVar7;
          if ((param_5 <= uVar7) || (bVar8 = 1 < uVar6, uVar6 = uVar6 + 1, bVar8)) break;
        }
        *param_4 = uVar7 - 1;
        *(char *)(local_38 + 1) = cVar5;
        *local_38 = 4;
      }
      else {
        local_68 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00222020)();
        puVar2 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00222028;
        local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h917f70ba7096f615E;
        local_98 = (undefined **)&DAT_00219e38;
        local_90 = 2;
        uStack_78 = 0;
        local_88 = &local_58;
        local_80 = 1;
        local_58 = (undefined8 *)local_68;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00222028)(&local_98);
        local_68._0_8_ = &local_44;
        local_68._8_8_ =
             PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00222288;
        local_98 = &PTR_s_unrecognized_escape_____00219e88;
        local_90 = 2;
        uStack_78 = 0;
        local_80 = 1;
        local_88 = (undefined8 **)local_68;
        (*(code *)puVar2)(&local_98);
        *(undefined *)(param_1 + 1) = (undefined)local_44;
        *param_1 = 4;
      }
      break;
    case 0x27:
      *(undefined *)(param_1 + 1) = 0x27;
      *param_1 = 4;
      break;
    case 0x5c:
      *(undefined *)(param_1 + 1) = 0x5c;
      *param_1 = 4;
      break;
    case 0x61:
      *(undefined *)(param_1 + 1) = 7;
      *param_1 = 4;
      break;
    case 0x62:
      *(undefined *)(param_1 + 1) = 8;
      *param_1 = 4;
      break;
    case 0x66:
      *(undefined *)(param_1 + 1) = 0xc;
      *param_1 = 4;
      break;
    case 0x6e:
      *(undefined *)(param_1 + 1) = 10;
      *param_1 = 4;
      break;
    case 0x72:
      *(undefined *)(param_1 + 1) = 0xd;
      *param_1 = 4;
      break;
    case 0x74:
      *(undefined *)(param_1 + 1) = 9;
      *param_1 = 4;
      break;
    case 0x78:
      uVar4 = uVar4 + 2;
      if (uVar4 < param_5) {
        auVar9 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                           (uVar4,param_6,param_7);
        if (auVar9._0_8_ == 0) {
          (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00222268)
                    (param_6,param_7,uVar4,param_7,&PTR_s_src_uu_stat_src_stat_rs_00219ec0);
          param_3 = extraout_RDX_00;
          goto LAB_00175c1b;
        }
        iVar3 = (*(code *)
                  PTR__ZN41__LT_str_u20_as_u20_uu_stat__ScanUtil_GT_9scan_char17hcad4fc309192c5feE_002220d0
                )(auVar9._0_8_,auVar9._8_8_,0x10);
        if (iVar3 == 0x110000) {
          local_68 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00222020)();
          puVar2 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00222028;
          local_58 = (undefined8 *)local_68;
          local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h917f70ba7096f615E;
          local_98 = (undefined **)&DAT_00219e38;
          local_90 = 2;
          uStack_78 = 0;
          local_88 = &local_58;
          local_80 = 1;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00222028)(&local_98);
          local_98 = &PTR_s_unrecognized_escape___x__00219e68;
          local_90 = 1;
          local_88 = (undefined8 **)0x8;
          local_80 = 0;
          uStack_78 = 0;
          (*(code *)puVar2)(&local_98);
          *(undefined *)(param_1 + 1) = 0x78;
          *param_1 = 4;
        }
        else {
          *param_4 = extraout_RDX + uVar7;
          *(char *)(param_1 + 1) = (char)iVar3;
          *param_1 = 4;
        }
      }
      else {
        local_68 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00222020)();
        puVar2 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00222028;
        local_58 = (undefined8 *)local_68;
        local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h917f70ba7096f615E;
        local_98 = (undefined **)&DAT_00219e38;
        local_90 = 2;
        uStack_78 = 0;
        local_88 = &local_58;
        local_80 = 1;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00222028)(&local_98);
        local_98 = &PTR_s_incomplete_hex_escape___x__00219e78;
        local_90 = 1;
        local_88 = (undefined8 **)0x8;
        local_80 = 0;
        uStack_78 = 0;
        (*(code *)puVar2)(&local_98);
        *(undefined *)(param_1 + 1) = 0x78;
        *param_1 = 4;
      }
    }
  }
  else {
    local_68 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00222020)();
    puVar2 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00222028;
    local_58 = (undefined8 *)local_68;
    local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h917f70ba7096f615E;
    local_98 = (undefined **)&DAT_00219e38;
    local_90 = 2;
    uStack_78 = 0;
    local_88 = &local_58;
    local_80 = 1;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00222028)(&local_98);
    local_98 = &PTR_s_backslash_at_end_of_format_00219e58;
    local_90 = 1;
    local_88 = (undefined8 **)0x8;
    local_80 = 0;
    uStack_78 = 0;
    (*(code *)puVar2)(&local_98);
    *(undefined4 *)(param_1 + 1) = 0x5c;
    *param_1 = 3;
  }
  return;
}