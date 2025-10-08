void _ZN21ruff_python_formatter6string9docstring18CodeExampleDoctest3new17ha37bb5f7affe40a9E
               (undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long unaff_R14;
  long lVar12;
  undefined auVar13 [16];
  
  lVar12 = *param_2;
  uVar1 = param_2[1];
  auVar13 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17hd401112d4c765288E
                      (lVar12,uVar1);
  uVar11 = auVar13._8_8_;
  auVar13 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                      (">>> VS78VS20VS21",4,auVar13._0_8_,uVar11);
  if (auVar13._0_8_ == 0) {
    *param_1 = 0x8000000000000000;
    return;
  }
  if (uVar1 < uVar11) {
    (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_006bd3c8)
              ("suffix is <= original",0x15,&PTR_s_crates_ruff_python_formatter_src_0067f258);
  }
  else {
    puVar10 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x38);
    unaff_R14 = auVar13._0_8_;
    if (puVar10 != (undefined4 *)0x0) {
      *(long *)(puVar10 + 8) = param_2[4];
      uVar3 = *(undefined4 *)param_2;
      uVar4 = *(undefined4 *)((long)param_2 + 4);
      uVar5 = *(undefined4 *)(param_2 + 1);
      uVar6 = *(undefined4 *)((long)param_2 + 0xc);
      uVar7 = *(undefined4 *)((long)param_2 + 0x14);
      uVar8 = *(undefined4 *)(param_2 + 3);
      uVar9 = *(undefined4 *)((long)param_2 + 0x1c);
      puVar10[4] = *(undefined4 *)(param_2 + 2);
      puVar10[5] = uVar7;
      puVar10[6] = uVar8;
      puVar10[7] = uVar9;
      *puVar10 = uVar3;
      puVar10[1] = uVar4;
      puVar10[2] = uVar5;
      puVar10[3] = uVar6;
      *(undefined (*) [16])(puVar10 + 10) = auVar13;
      auVar13 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                          (uVar1 - uVar11,lVar12,uVar1);
      if (auVar13._0_8_ != 0) {
        *param_1 = 1;
        param_1[1] = puVar10;
        param_1[2] = 1;
        *(undefined (*) [16])(param_1 + 3) = auVar13;
        return;
      }
      goto LAB_00424ea1;
    }
  }
  lVar12 = unaff_R14;
  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_006bd488)(8,0x38);
LAB_00424ea1:
                    /* try { // try from 00424ea1 to 00424eb8 has its CatchHandler @ 00424ebb */
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
            (lVar12,uVar1,0,uVar1 - uVar11,&PTR_s_crates_ruff_python_formatter_src_0067f240);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}