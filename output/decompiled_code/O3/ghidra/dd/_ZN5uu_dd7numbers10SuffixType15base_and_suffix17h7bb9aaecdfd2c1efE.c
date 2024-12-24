undefined  [16] __rustcall
uu_dd::numbers::SuffixType::base_and_suffix(ulong *param_1,char param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined auVar15 [16];
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c0 [18];
  
  if (param_2 == '\0') {
    (*(code *)PTR_memcpy_00266e08)(local_c0,&PTR_s_BKiBMiBGiBTiBPiBEiBZiBYiBkBMBGBT_002622c8,0x90);
    uVar5 = 0x4000000;
    local_e0 = 0x10000;
    local_d8 = 0x40;
    uVar10 = 0x1000000000000000;
    uVar12 = 0x4000000000000;
    uVar14 = 0x10000000000;
    uVar6 = 0x40000000;
    uVar3 = 0x100000;
    uVar13 = 0x400;
    uVar11 = 0;
    uVar9 = 0;
    local_d0 = 0;
  }
  else {
    (*(code *)PTR_memcpy_00266e08)(local_c0,&PTR_s_BKiBMiBGiBTiBPiBEiBZiBYiBkBMBGBT_00262358,0x90);
    uVar5 = 0x33b2e3c;
    local_d0 = 0x9fd0803ce8000000;
    local_e0 = 0xd3c2;
    uVar9 = 0x1bcecceda1000000;
    local_d8 = 0x36;
    uVar11 = 0x35c9adc5dea00000;
    uVar10 = 1000000000000000000;
    uVar12 = 1000000000000000;
    uVar14 = 1000000000000;
    uVar6 = 1000000000;
    uVar3 = 1000000;
    uVar13 = 1000;
  }
  uVar8 = 0;
  uVar7 = (ulong)(uVar13 != 0) - 1;
  if (uVar7 < param_4 || uVar7 - param_4 < (ulong)(uVar13 - 1 < param_3)) {
    iVar4 = 1;
    uVar1 = (ulong)(uVar3 - uVar13 < param_3);
    uVar2 = -(ulong)(uVar3 < uVar13) - param_4;
    uVar7 = uVar2 - uVar1;
    if (-(ulong)(uVar3 < uVar13) < param_4 || uVar2 < uVar1) {
      iVar4 = 2;
      uVar7 = uVar6 - uVar3;
      uVar13 = uVar3;
      if (-(ulong)(uVar6 < uVar3) < param_4 ||
          -(ulong)(uVar6 < uVar3) - param_4 < (ulong)(uVar6 - uVar3 < param_3)) {
        uVar3 = uVar14 - uVar6;
        iVar4 = 3;
        uVar1 = -(ulong)(uVar14 < uVar6) - param_4;
        uVar7 = uVar1 - (uVar3 < param_3);
        uVar13 = uVar6;
        if (-(ulong)(uVar14 < uVar6) < param_4 || uVar1 < (uVar3 < param_3)) {
          uVar3 = uVar12 - uVar14;
          iVar4 = 4;
          uVar6 = -(ulong)(uVar12 < uVar14) - param_4;
          uVar7 = uVar6 - (uVar3 < param_3);
          uVar13 = uVar14;
          if (-(ulong)(uVar12 < uVar14) < param_4 || uVar6 < (uVar3 < param_3)) {
            uVar3 = uVar10 - uVar12;
            iVar4 = 5;
            uVar6 = -(ulong)(uVar10 < uVar12) - param_4;
            uVar7 = uVar6 - (uVar3 < param_3);
            uVar13 = uVar12;
            if (-(ulong)(uVar10 < uVar12) < param_4 || uVar6 < (uVar3 < param_3)) {
              uVar3 = uVar11 - uVar10;
              uVar12 = local_d8 - (uVar11 < uVar10);
              iVar4 = 6;
              uVar6 = uVar12 - param_4;
              uVar7 = uVar6 - (uVar3 < param_3);
              uVar13 = uVar10;
              if (uVar12 < param_4 || uVar6 < (uVar3 < param_3)) {
                uVar3 = uVar9 - uVar11;
                uVar10 = (local_e0 - local_d8) - (ulong)(uVar9 < uVar11);
                iVar4 = 7;
                uVar6 = uVar10 - param_4;
                uVar7 = uVar6 - (uVar3 < param_3);
                uVar8 = local_d8;
                uVar13 = uVar11;
                if (uVar10 < param_4 || uVar6 < (uVar3 < param_3)) {
                  uVar10 = (uVar5 - local_e0) - (ulong)(local_d0 < uVar9);
                  iVar4 = 8;
                  uVar5 = (ulong)(local_d0 - uVar9 < param_3);
                  uVar6 = uVar10 - param_4;
                  uVar3 = uVar6 - uVar5;
                  uVar7 = local_d0 - uVar9;
                  uVar8 = local_e0;
                  uVar13 = uVar9;
                  if (uVar10 < param_4 || uVar6 < uVar5) {
                    /* WARNING: Subroutine does not return */
                    core::panicking::panic_bounds_check
                              (10,10,&PTR_s_src_uu_dd_src_numbers_rs_002623e8);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar13 = 1;
    uVar8 = 0;
    iVar4 = 0;
    uVar7 = uVar5;
  }
  uVar5 = *(ulong *)((long)local_c0 + (ulong)(uint)(iVar4 << 4));
  uVar6 = *(ulong *)((long)local_c0 + (ulong)(uint)(iVar4 << 4) + 8);
  param_1[1] = uVar8;
  *param_1 = uVar13;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  auVar15._8_8_ = uVar7;
  auVar15._0_8_ = uVar3;
  return auVar15;
}