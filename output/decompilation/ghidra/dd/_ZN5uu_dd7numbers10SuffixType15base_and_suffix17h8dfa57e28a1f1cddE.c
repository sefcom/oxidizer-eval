ulong _ZN5uu_dd7numbers10SuffixType15base_and_suffix17h8dfa57e28a1f1cddE
                (ulong *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  long local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0 [18];
  
  if ((param_2 & 1) == 0) {
    (*(code *)PTR_memcpy_00246760)(local_c0,&PTR_s_BKiBMiBGiBTiBPiBEiBZiBYiBkBMBGBT_0023d7a0,0x90);
    local_d8 = 0x4000000;
    local_d0 = 0x10000;
    local_c8 = 0x40;
    uVar13 = 0x1000000000000000;
    uVar14 = 0x4000000000000;
    uVar16 = 0x10000000000;
    uVar9 = 0x40000000;
    uVar10 = 0x100000;
    uVar6 = 0x400;
    uVar15 = 0;
    uVar11 = 0;
    uVar7 = 0;
  }
  else {
    (*(code *)PTR_memcpy_00246760)(local_c0,&PTR_s_BKiBMiBGiBTiBPiBEiBZiBYiBkBMBGBT_0023d830,0x90);
    local_d8 = 0x33b2e3c;
    uVar7 = 0x9fd0803ce8000000;
    local_d0 = 0xd3c2;
    uVar11 = 0x1bcecceda1000000;
    local_c8 = 0x36;
    uVar15 = 0x35c9adc5dea00000;
    uVar13 = 1000000000000000000;
    uVar14 = 1000000000000000;
    uVar16 = 1000000000000;
    uVar9 = 1000000000;
    uVar10 = 1000000;
    uVar6 = 1000;
  }
  uVar12 = 0;
  uVar4 = (ulong)(uVar6 != 0) - 1;
  uVar1 = (ulong)(uVar6 - 1 < param_3);
  uVar2 = uVar4 - param_4;
  uVar5 = uVar2 - uVar1;
  if (uVar4 < param_4 || uVar2 < uVar1) {
    uVar5 = uVar10 - uVar6;
    if (-(ulong)(uVar10 < uVar6) < param_4 ||
        -(ulong)(uVar10 < uVar6) - param_4 < (ulong)(uVar5 < param_3)) {
      uVar5 = uVar9 - uVar10;
      if (-(ulong)(uVar9 < uVar10) < param_4 ||
          -(ulong)(uVar9 < uVar10) - param_4 < (ulong)(uVar5 < param_3)) {
        uVar5 = uVar16 - uVar9;
        if (-(ulong)(uVar16 < uVar9) < param_4 ||
            -(ulong)(uVar16 < uVar9) - param_4 < (ulong)(uVar5 < param_3)) {
          uVar5 = uVar14 - uVar16;
          if (-(ulong)(uVar14 < uVar16) < param_4 ||
              -(ulong)(uVar14 < uVar16) - param_4 < (ulong)(uVar5 < param_3)) {
            uVar5 = uVar13 - uVar14;
            if (-(ulong)(uVar13 < uVar14) < param_4 ||
                -(ulong)(uVar13 < uVar14) - param_4 < (ulong)(uVar5 < param_3)) {
              uVar5 = uVar15 - uVar13;
              uVar6 = local_c8 - (uVar15 < uVar13);
              if (uVar6 < param_4 || uVar6 - param_4 < (ulong)(uVar5 < param_3)) {
                uVar5 = uVar11 - uVar15;
                uVar9 = (local_d0 - local_c8) - (ulong)(uVar11 < uVar15);
                bVar17 = uVar5 < param_3;
                uVar6 = uVar9 - param_4;
                if (uVar9 < param_4 || uVar6 < bVar17) {
                  uVar10 = (local_d8 - local_d0) - (ulong)(uVar7 < uVar11);
                  uVar7 = (ulong)(uVar7 - uVar11 < param_3);
                  uVar9 = uVar10 - param_4;
                  uVar5 = uVar9 - uVar7;
                  if (uVar10 < param_4 || uVar9 < uVar7) {
                    (*(code *)
                      PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_002466a8)
                              (10,10,&PTR_s_src_uu_dd_src_numbers_rs_0023d8c0,uVar6 - bVar17);
                    pcVar3 = (code *)swi(3);
                    uVar6 = (*pcVar3)();
                    return uVar6;
                  }
                  puVar8 = local_c0 + 0x10;
                  uVar6 = uVar11;
                  uVar12 = local_d0;
                }
                else {
                  puVar8 = local_c0 + 0xe;
                  uVar6 = uVar15;
                  uVar12 = local_c8;
                }
              }
              else {
                puVar8 = local_c0 + 0xc;
                uVar6 = uVar13;
              }
            }
            else {
              puVar8 = local_c0 + 10;
              uVar6 = uVar14;
            }
          }
          else {
            puVar8 = local_c0 + 8;
            uVar6 = uVar16;
          }
        }
        else {
          puVar8 = local_c0 + 6;
          uVar6 = uVar9;
        }
      }
      else {
        puVar8 = local_c0 + 4;
        uVar6 = uVar10;
      }
    }
    else {
      puVar8 = local_c0 + 2;
    }
  }
  else {
    uVar6 = 1;
    puVar8 = local_c0;
    uVar12 = 0;
  }
  uVar7 = *puVar8;
  uVar9 = puVar8[1];
  param_1[1] = uVar12;
  *param_1 = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar9;
  return uVar5;
}