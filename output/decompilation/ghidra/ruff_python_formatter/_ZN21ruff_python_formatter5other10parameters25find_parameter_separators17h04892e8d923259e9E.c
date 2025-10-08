void _ZN21ruff_python_formatter5other10parameters25find_parameter_separators17h04892e8d923259e9E
               (uint *param_1,uint *param_2,ulong param_3,ulong param_4,undefined8 param_5,
               uint param_6)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  uint unaff_EBP;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_R12D;
  uint uVar10;
  uint *unaff_R15;
  uint local_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint *local_68;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  lVar4 = *(long *)(param_4 + 0x10);
  bVar3 = true;
  if ((lVar4 == 0) || (lVar4 = lVar4 * 0x58 + *(long *)(param_4 + 8), lVar4 == 0x58)) {
    uStack_5c = (uint)lVar4;
    lVar4 = *(long *)(param_4 + 0x50);
    uVar5 = param_4;
joined_r0x00414d35:
    uVar10 = (uint)unaff_R15;
    if ((lVar4 != 0) || (*(long *)(param_4 + 0x40) == 0)) {
      uVar8 = 0;
      lVar4 = *(long *)(param_4 + 0x28);
      puVar7 = param_2;
      uStack_94 = (uint)uVar5;
      local_98 = uStack_5c;
      goto joined_r0x00414d76;
    }
    local_68 = *(uint **)(param_4 + 0x38);
    if ((*(long *)(param_4 + 0x28) != 0) &&
       (lVar4 = *(long *)(param_4 + 0x28) * 0x58 + *(long *)(param_4 + 0x20), lVar4 != 0x58)) {
      uVar10 = *(uint *)(lVar4 + -0x54);
LAB_00414deb:
      if (*(uint *)(param_4 + 0x4c) < uVar10) goto LAB_00414f77;
      (*(code *)
        PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
                (&local_60,param_2,param_3,uVar10);
      _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(&local_98,&local_60);
      if ((char)uStack_90 == 'Z') goto LAB_00414f90;
      puVar7 = &local_60;
      _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(&local_98);
      if (((char)uStack_90 != 'Z') && ((char)uStack_90 != 'Z')) goto LAB_00414e8b;
      goto LAB_00414fa9;
    }
    uVar10 = unaff_R12D;
    if (!bVar3) goto LAB_00414deb;
    puVar7 = &local_60;
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
              (puVar7,param_2,param_3,*(undefined4 *)(param_4 + 0x48),
               *(undefined4 *)(param_4 + 0x4c));
    _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(&local_98);
    if ((uStack_90 & 0xff) == 5) {
      puVar7 = &local_60;
      _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(&local_98);
      if (((char)uStack_90 == 'Z') || ((char)uStack_90 == 'Z')) goto LAB_00414fdb;
LAB_00414e87:
      uVar10 = *(uint *)(param_4 + 0x48);
LAB_00414e8b:
      param_3 = (ulong)*local_68;
      uVar8 = 1;
      lVar4 = *(long *)(param_4 + 0x28);
joined_r0x00414d76:
      if (lVar4 == 0) {
        puVar1 = *(uint **)(param_4 + 0x50);
      }
      else {
        puVar7 = *(uint **)(param_4 + 0x20);
        param_6 = *puVar7;
        puVar1 = *(uint **)(param_4 + 0x50);
      }
      uVar6 = (uint)puVar7;
      if (puVar1 != (uint *)0x0) {
        uVar6 = *puVar1;
      }
      if (puVar1 == (uint *)0x0) {
        uVar6 = local_98;
      }
      if (lVar4 != 0) {
        uVar6 = param_6;
      }
      uVar9 = uVar6;
      if (*(uint **)(param_4 + 0x58) == (uint *)0x0) {
        if ((lVar4 == 0 && puVar1 == (uint *)0x0) && (char)uVar8 == '\0') {
          uVar9 = *(uint *)(param_4 + 0x4c);
        }
      }
      else {
        if ((char)uVar8 == '\0') {
          uVar9 = **(uint **)(param_4 + 0x58);
        }
        if (lVar4 != 0 || puVar1 != (uint *)0x0) {
          uVar9 = uVar6;
        }
      }
      *param_1 = (uint)(bVar3 ^ 1);
      param_1[1] = local_9c;
      param_1[2] = unaff_R12D;
      param_1[3] = unaff_EBP;
      param_1[4] = uVar9;
      param_1[5] = uVar8;
      param_1[6] = local_98;
      param_1[7] = uStack_94;
      param_1[8] = uVar10;
      param_1[9] = (uint)param_3;
      return;
    }
    if ((uStack_90 & 0xff) != 0x5a) goto LAB_00414e87;
  }
  else {
    unaff_EBP = *(uint *)(lVar4 + -0x54);
    if (*(uint *)(param_4 + 0x4c) < unaff_EBP) {
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                ("assertion failed: start.raw <= end.raw",0x26,
                 &PTR_s_crates_ruff_python_formatter_src_0067e490);
LAB_00414f45:
      (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_006bd3c8)
                ("The function definition can\'t end here",0x26,
                 &PTR_s_crates_ruff_python_formatter_src_0067e4a8);
    }
    else {
      uVar5 = (ulong)unaff_EBP;
      (*(code *)
        PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
                (&local_60);
      local_78 = local_40;
      uStack_74 = uStack_3c;
      uStack_70 = uStack_38;
      uStack_6c = uStack_34;
      local_88 = local_50;
      uStack_84 = uStack_4c;
      uStack_80 = uStack_48;
      uStack_7c = uStack_44;
      local_98 = local_60;
      uStack_94 = uStack_5c;
      uStack_90 = uStack_58;
      uStack_8c = uStack_54;
      _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(&local_60,&local_98);
      if ((char)uStack_58 == 'Z') goto LAB_00414f45;
      _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(&local_60,&local_98);
      if (((char)uStack_58 != 'Z') && ((char)uStack_58 != 'Z')) {
        bVar3 = false;
        lVar4 = *(long *)(param_4 + 0x50);
        unaff_R15 = param_2;
        local_9c = local_60;
        unaff_R12D = uStack_5c;
        goto joined_r0x00414d35;
      }
    }
    (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_006bd3c8)
              ("The function definition can\'t end here",0x26,
               &PTR_s_crates_ruff_python_formatter_src_0067e4c0);
LAB_00414f77:
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
              ("assertion failed: start.raw <= end.raw",0x26,
               &PTR_s_crates_ruff_python_formatter_src_0067e4d8);
LAB_00414f90:
    (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_006bd3c8)
              ("The function definition can\'t end here",0x26,
               &PTR_s_crates_ruff_python_formatter_src_0067e4f0);
LAB_00414fa9:
    (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_006bd3c8)
              ("The function definition can\'t end here",0x26,
               &PTR_s_crates_ruff_python_formatter_src_0067e508);
  }
  (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_006bd3c8)
            ("The function definition can\'t end here",0x26,
             &PTR_s_crates_ruff_python_formatter_src_0067e520);
LAB_00414fdb:
  (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_006bd3c8)
            ("The function definition can\'t end here",0x26,
             &PTR_s_crates_ruff_python_formatter_src_0067e538);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}