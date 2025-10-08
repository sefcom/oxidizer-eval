void _ZN21ruff_python_formatter9statement6clause12ClauseHeader19first_keyword_range17h4514c6d97d3066b6E
               (undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined8 uVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined local_30 [16];
  
  switch(param_2) {
  case 3:
    if (*(long *)(param_3 + 0x10) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(param_3 + 8) + *(long *)(param_3 + 0x10) * 0x60 + -0x60;
    }
    uVar3 = _ZN4core6option15Option_LT_T_GT_11map_or_else17hcc3bd99a00a996a7E(lVar5,param_3);
    uVar4 = 0x3a;
    break;
  case 4:
    if (*(long *)(param_3 + 0x10) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(param_3 + 8) + *(long *)(param_3 + 0x10) * 0x60 + -0x60;
    }
    uVar3 = _ZN4core6option15Option_LT_T_GT_11map_or_else17hb5eba6f535daaed7E(lVar5,param_3);
    if (*(char *)(param_3 + 0x7c) == '\0') {
      uVar4 = 0x3c;
    }
    else {
      uVar4 = 0x37;
    }
    break;
  case 5:
    uVar3 = *(undefined4 *)(param_3 + 0x38);
    uVar4 = 0x45;
    break;
  case 6:
    uVar3 = *(undefined4 *)(param_3 + 0x68);
    if (*(int *)(param_3 + 0x18) == 0x21) {
      uVar4 = 0x3f;
    }
    else {
      uVar4 = 0x3e;
    }
    break;
  case 7:
    uVar3 = *(undefined4 *)(param_3 + 0x60);
    uVar4 = 0x50;
    break;
  case 8:
    uVar3 = *(undefined4 *)(param_3 + 0x40);
    uVar4 = 0x40;
    break;
  case 9:
    lVar5 = *(long *)(param_3 + 0x40);
    auVar6._8_8_ = lVar5;
    auVar6._0_8_ = 0x5e;
    if (lVar5 != 0) {
      lVar5 = lVar5 * 0x80 + *(long *)(param_3 + 0x38) + -0x80;
      auVar6._8_8_ = lVar5;
      auVar6._0_8_ = 0x5e;
      if (lVar5 != 0) {
        auVar6 = _ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Stmt_GT__GT_4from17h095e0f7c3429d85dE
                           (lVar5);
      }
    }
    auVar6 = _ZN4core6option15Option_LT_T_GT_7or_else17h0df08007ad1612a3E(auVar6._0_8_,auVar6._8_8_)
    ;
    local_30 = _ZN4core6option15Option_LT_T_GT_7or_else17hb8dee52d58e0f51fE
                         (auVar6._0_8_,auVar6._8_8_,param_3);
    if (local_30._0_8_ != 0x5e) {
      (*(code *)
        PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
      )(local_30);
      uVar4 = 0x41;
      uVar3 = extraout_EDX_00;
LAB_00418725:
      _ZN21ruff_python_formatter9statement6clause12find_keyword17h191773aebb391b5bE
                (param_1,uVar3,uVar4,param_4,param_5);
      return;
    }
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_006bd868)
              (&PTR_s_crates_ruff_python_formatter_src_0067e7c8);
    goto LAB_00418749;
  case 10:
    uVar3 = *(undefined4 *)(param_3 + 0x20);
    uVar4 = 0x52;
    break;
  case 0xb:
    uVar3 = *(undefined4 *)(param_3 + 0x80);
    uVar4 = 0x54;
    break;
  case 0xc:
    uVar3 = *(undefined4 *)(param_3 + 0x40);
    cVar1 = *(char *)(param_3 + 0x4c);
    uVar4 = 0x42;
    goto LAB_00418563;
  case 0xd:
    uVar3 = *(undefined4 *)(param_3 + 0x38);
    uVar4 = 0x51;
    break;
  case 0xe:
    uVar3 = *(undefined4 *)(param_3 + 0x30);
    cVar1 = *(char *)(param_3 + 0x3c);
    uVar4 = 0x55;
LAB_00418563:
    if (cVar1 != '\0') {
      uVar4 = 0x37;
    }
    break;
  default:
    if (param_2 != 0) {
      if ((*(long *)(param_3 + 0x10) != 0) &&
         (*(long *)(param_3 + 0x10) * 0x80 + *(long *)(param_3 + 8) != 0x80)) {
        _ZN83__LT_ruff_python_ast__generated__Stmt_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h6da43eeee2e8d007E
                  ();
        uVar4 = 0x3f;
        uVar3 = extraout_EDX;
        break;
      }
      goto LAB_00418756;
    }
    if ((*(long *)(param_3 + 0x28) == 0) ||
       (*(long *)(param_3 + 0x28) * 0x58 + *(long *)(param_3 + 0x20) == 0x58)) {
      uVar4 = 0x5e;
    }
    else {
      uVar4 = 0x3c;
    }
    local_30 = _ZN4core6option15Option_LT_T_GT_7or_else17h3ec7daf219502128E(uVar4);
    if (local_30._0_8_ != 0x5e) {
      (*(code *)
        PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
      )(local_30);
      uVar4 = 0x3f;
      uVar3 = extraout_EDX_01;
      goto LAB_00418725;
    }
LAB_00418749:
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_006bd868)
              (&PTR_s_crates_ruff_python_formatter_src_0067e7e0);
LAB_00418756:
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_006bd868)
              (&PTR_s_crates_ruff_python_formatter_src_0067e7f8);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  _ZN21ruff_python_formatter9statement6clause12find_keyword17h191773aebb391b5bE
            (param_1,uVar3,uVar4,param_4,param_5);
  return;
}