ulong _ZN21ruff_python_formatter5other10parameters18has_trailing_comma17h3335469b76c6a0abE
                (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  ulong uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 *local_88;
  code *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (param_2 == 0x5e) {
    return 0;
  }
  local_58 = param_2;
  local_50 = param_3;
  if ((((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x28) != 0)) ||
      (*(long *)(param_1 + 0x50) != 0)) || (*(long *)(param_1 + 0x40) != 0)) {
    (*(code *)
      PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
    )(&local_58);
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer9starts_at17h166ec428bdd164b3E_006bdc78)
              (&local_b8,extraout_EDX,param_4,param_5);
    local_28 = local_98;
    local_38 = local_a8;
    uStack_30 = uStack_a0;
    local_48 = (undefined4)local_b8;
    uStack_44 = local_b8._4_4_;
    uStack_40 = (undefined4)uStack_b0;
    uStack_3c = uStack_b0._4_4_;
LAB_004150e4:
    _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(&local_b8,&local_48);
    if ((char)uStack_b0 != 'Z') {
      return (ulong)((char)uStack_b0 == '\v');
    }
    (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_006bd3c8)
              ("There must be a token after the argument list",0x2d,
               &PTR_s_crates_ruff_python_formatter_src_0067e5c0);
LAB_004151cd:
    local_70 = CONCAT31(local_70._1_3_,0x5a);
LAB_004151d2:
    local_88 = &local_78;
    local_80 = 
    _ZN66__LT_core__option__Option_LT_T_GT__u20_as_u20_core__fmt__Debug_GT_3fmt17h0243a89b269b2430E;
    local_b8 = &PTR_s_The_last_positional_only_argumen_0067e550;
    uStack_b0 = 2;
    local_98 = 0;
    local_a8 = &local_88;
    uStack_a0 = 1;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_006bd350)
              (&local_b8,&PTR_s_crates_ruff_python_formatter_src_0067e5a8);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x58);
    (*(code *)
      PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
    )(&local_58);
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer9starts_at17h166ec428bdd164b3E_006bdc78)
              (&local_b8,extraout_EDX_00,param_4,param_5);
    local_48 = (undefined4)local_b8;
    uStack_44 = local_b8._4_4_;
    uStack_40 = (undefined4)uStack_b0;
    uStack_3c = uStack_b0._4_4_;
    local_28 = local_98;
    local_38 = local_a8;
    uStack_30 = uStack_a0;
    if (lVar1 != 0) goto LAB_004150e4;
    _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(&local_b8,&local_48);
    cVar3 = (char)uStack_b0;
    if ((char)uStack_b0 == 'Z') goto LAB_004151cd;
    local_78 = local_b8;
    local_70 = (undefined4)uStack_b0;
    if (cVar3 != '\v') goto LAB_004151d2;
    _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(&local_b8,&local_48);
    cVar3 = (char)uStack_b0;
    if ((char)uStack_b0 != 'Z') {
      local_68 = local_b8;
      local_60 = (undefined4)uStack_b0;
      if (cVar3 != '\x0e') goto LAB_0041522d;
      goto LAB_004150e4;
    }
  }
  local_60 = CONCAT31(local_60._1_3_,0x5a);
LAB_0041522d:
  local_88 = &local_68;
  local_80 = 
  _ZN66__LT_core__option__Option_LT_T_GT__u20_as_u20_core__fmt__Debug_GT_3fmt17h0243a89b269b2430E;
  local_b8 = &PTR_s_The_positional_argument_separato_0067e570;
  uStack_b0 = 2;
  local_98 = 0;
  local_a8 = &local_88;
  uStack_a0 = 1;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_006bd350)
            (&local_b8,&PTR_s_crates_ruff_python_formatter_src_0067e590);
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}