void _ZN9alacritty7display5color4List10fill_named17h85bd9755d3a69e33E
               (undefined2 *param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  uint3 uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined2 *puVar8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint3 *local_78;
  uint3 *local_70;
  uint3 *local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  *(undefined *)(param_1 + 1) = *(undefined *)(param_2 + 0x62);
  *param_1 = *(undefined2 *)(param_2 + 0x60);
  *(undefined *)((long)param_1 + 5) = *(undefined *)(param_2 + 0x65);
  *(undefined2 *)((long)param_1 + 3) = *(undefined2 *)(param_2 + 99);
  *(undefined *)(param_1 + 4) = *(undefined *)(param_2 + 0x68);
  param_1[3] = *(undefined2 *)(param_2 + 0x66);
  *(undefined *)((long)param_1 + 0xb) = *(undefined *)(param_2 + 0x6b);
  *(undefined2 *)((long)param_1 + 9) = *(undefined2 *)(param_2 + 0x69);
  *(undefined *)(param_1 + 7) = *(undefined *)(param_2 + 0x6e);
  param_1[6] = *(undefined2 *)(param_2 + 0x6c);
  *(undefined2 *)((long)param_1 + 0xf) = *(undefined2 *)(param_2 + 0x6f);
  *(undefined *)((long)param_1 + 0x11) = *(undefined *)(param_2 + 0x71);
  param_1[9] = *(undefined2 *)(param_2 + 0x72);
  *(undefined *)(param_1 + 10) = *(undefined *)(param_2 + 0x74);
  *(undefined *)((long)param_1 + 0x17) = *(undefined *)(param_2 + 0x77);
  *(undefined2 *)((long)param_1 + 0x15) = *(undefined2 *)(param_2 + 0x75);
  param_1[0xc] = *(undefined2 *)(param_2 + 0x78);
  *(undefined *)(param_1 + 0xd) = *(undefined *)(param_2 + 0x7a);
  *(undefined2 *)((long)param_1 + 0x1b) = *(undefined2 *)(param_2 + 0x7b);
  *(undefined *)((long)param_1 + 0x1d) = *(undefined *)(param_2 + 0x7d);
  *(undefined *)(param_1 + 0x10) = *(undefined *)(param_2 + 0x80);
  param_1[0xf] = *(undefined2 *)(param_2 + 0x7e);
  *(undefined *)((long)param_1 + 0x23) = *(undefined *)(param_2 + 0x83);
  *(undefined2 *)((long)param_1 + 0x21) = *(undefined2 *)(param_2 + 0x81);
  param_1[0x12] = *(undefined2 *)(param_2 + 0x84);
  *(undefined *)(param_1 + 0x13) = *(undefined *)(param_2 + 0x86);
  *(undefined2 *)((long)param_1 + 0x27) = *(undefined2 *)(param_2 + 0x87);
  *(undefined *)((long)param_1 + 0x29) = *(undefined *)(param_2 + 0x89);
  param_1[0x15] = *(undefined2 *)(param_2 + 0x8a);
  *(undefined *)(param_1 + 0x16) = *(undefined *)(param_2 + 0x8c);
  *(undefined *)((long)param_1 + 0x2f) = *(undefined *)(param_2 + 0x8f);
  puVar8 = (undefined2 *)(param_2 + 0x98);
  if ((*(byte *)(param_2 + 0x90) & 1) != 0) {
    puVar8 = (undefined2 *)(param_2 + 0x91);
  }
  *(undefined2 *)((long)param_1 + 0x2d) = *(undefined2 *)(param_2 + 0x8d);
  uVar3 = *puVar8;
  local_60 = (undefined **)CONCAT62(CONCAT51(local_60._3_5_,*(undefined *)(puVar8 + 1)),uVar3);
  *(undefined *)((long)param_1 + 0x323) = *(undefined *)(puVar8 + 1);
  *(undefined2 *)((long)param_1 + 0x321) = uVar3;
  *(undefined *)(param_1 + 0x181) = *(undefined *)(param_2 + 0x9a);
  param_1[0x180] = *(undefined2 *)(param_2 + 0x98);
  *(undefined2 *)((long)param_1 + 0x303) = *(undefined2 *)(param_2 + 0x9b);
  *(undefined *)((long)param_1 + 0x305) = *(undefined *)(param_2 + 0x9d);
  uVar4 = *(uint3 *)(param_2 + 0x95);
  bVar1 = *(byte *)(param_2 + 0x94);
  uVar5 = _ZN83__LT_alacritty__display__color__Rgb_u20_as_u20_core__ops__arith__Mul_LT_f32_GT__GT_3mul17h74bf5456cb1dd01bE
                    ((ulong)*(uint3 *)(param_2 + 0x98));
  if ((bVar1 & 1) != 0) {
    uVar5 = (uint)uVar4;
  }
  param_1[0x192] = (short)uVar5;
  *(char *)(param_1 + 0x193) = (char)(uVar5 >> 0x10);
  cVar2 = *(char *)(param_2 + 0x9e);
  uVar7 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
  if (cVar2 == '\x01') {
    if (4 < uVar7) {
      local_60 = &PTR_s_Using_config_provided_dim_colors_00981fc0;
      local_58 = 1;
      local_50 = 8;
      local_48 = 0;
      uStack_40 = 0;
      local_80 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_DAT_00981ff8);
      local_a0 = &DAT_00201f96;
      local_98 = 0x19;
      local_90 = &DAT_00201f96;
      local_88 = 0x19;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_60,5,&local_a0);
    }
    *(undefined *)((long)param_1 + 0x30b) = *(undefined *)(param_2 + 0xa1);
    *(undefined2 *)((long)param_1 + 0x309) = *(undefined2 *)(param_2 + 0x9f);
    *(undefined *)(param_1 + 0x187) = *(undefined *)(param_2 + 0xa4);
    param_1[0x186] = *(undefined2 *)(param_2 + 0xa2);
    *(undefined *)((long)param_1 + 0x311) = *(undefined *)(param_2 + 0xa7);
    *(undefined2 *)((long)param_1 + 0x30f) = *(undefined2 *)(param_2 + 0xa5);
    *(undefined *)(param_1 + 0x18a) = *(undefined *)(param_2 + 0xaa);
    param_1[0x189] = *(undefined2 *)(param_2 + 0xa8);
    *(undefined *)((long)param_1 + 0x317) = *(undefined *)(param_2 + 0xad);
    *(undefined2 *)((long)param_1 + 0x315) = *(undefined2 *)(param_2 + 0xab);
    param_1[0x18c] = *(undefined2 *)(param_2 + 0xae);
    *(undefined *)(param_1 + 0x18d) = *(undefined *)(param_2 + 0xb0);
    *(undefined2 *)((long)param_1 + 0x31b) = *(undefined2 *)(param_2 + 0xb1);
    *(undefined *)((long)param_1 + 0x31d) = *(undefined *)(param_2 + 0xb3);
    *(undefined *)(param_1 + 400) = *(undefined *)(param_2 + 0xb6);
    param_1[399] = *(undefined2 *)(param_2 + 0xb4);
  }
  else {
    local_78 = (uint3 *)(param_2 + 0x6c);
    local_70 = (uint3 *)(param_2 + 0x6f);
    local_68 = (uint3 *)(param_2 + 0x72);
    if (4 < uVar7) {
      local_60 = &PTR_DAT_00981fd0;
      local_58 = 1;
      local_50 = 8;
      local_48 = 0;
      uStack_40 = 0;
      local_80 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_DAT_00981fe0);
      local_a0 = &DAT_00201f96;
      local_98 = 0x19;
      local_90 = &DAT_00201f96;
      local_88 = 0x19;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_60,5,&local_a0);
    }
    uVar6 = _ZN83__LT_alacritty__display__color__Rgb_u20_as_u20_core__ops__arith__Mul_LT_f32_GT__GT_3mul17h74bf5456cb1dd01bE
                      ((ulong)*(uint3 *)(param_2 + 0x60));
    *(short *)((long)param_1 + 0x309) = (short)uVar6;
    *(char *)((long)param_1 + 0x30b) = (char)((uint)uVar6 >> 0x10);
    uVar6 = _ZN83__LT_alacritty__display__color__Rgb_u20_as_u20_core__ops__arith__Mul_LT_f32_GT__GT_3mul17h74bf5456cb1dd01bE
                      ((ulong)*(uint3 *)(param_2 + 99));
    param_1[0x186] = (short)uVar6;
    *(char *)(param_1 + 0x187) = (char)((uint)uVar6 >> 0x10);
    uVar6 = _ZN83__LT_alacritty__display__color__Rgb_u20_as_u20_core__ops__arith__Mul_LT_f32_GT__GT_3mul17h74bf5456cb1dd01bE
                      ((ulong)*(uint3 *)(param_2 + 0x66));
    *(short *)((long)param_1 + 0x30f) = (short)uVar6;
    *(char *)((long)param_1 + 0x311) = (char)((uint)uVar6 >> 0x10);
    uVar6 = _ZN83__LT_alacritty__display__color__Rgb_u20_as_u20_core__ops__arith__Mul_LT_f32_GT__GT_3mul17h74bf5456cb1dd01bE
                      ((ulong)*(uint3 *)(param_2 + 0x69));
    param_1[0x189] = (short)uVar6;
    *(char *)(param_1 + 0x18a) = (char)((uint)uVar6 >> 0x10);
    uVar6 = _ZN83__LT_alacritty__display__color__Rgb_u20_as_u20_core__ops__arith__Mul_LT_f32_GT__GT_3mul17h74bf5456cb1dd01bE
                      ((ulong)*local_78);
    *(short *)((long)param_1 + 0x315) = (short)uVar6;
    *(char *)((long)param_1 + 0x317) = (char)((uint)uVar6 >> 0x10);
    uVar6 = _ZN83__LT_alacritty__display__color__Rgb_u20_as_u20_core__ops__arith__Mul_LT_f32_GT__GT_3mul17h74bf5456cb1dd01bE
                      ((ulong)*local_70);
    param_1[0x18c] = (short)uVar6;
    *(char *)(param_1 + 0x18d) = (char)((uint)uVar6 >> 0x10);
    uVar6 = _ZN83__LT_alacritty__display__color__Rgb_u20_as_u20_core__ops__arith__Mul_LT_f32_GT__GT_3mul17h74bf5456cb1dd01bE
                      ((ulong)*local_68);
    *(short *)((long)param_1 + 0x31b) = (short)uVar6;
    *(char *)((long)param_1 + 0x31d) = (char)((uint)uVar6 >> 0x10);
    uVar6 = _ZN83__LT_alacritty__display__color__Rgb_u20_as_u20_core__ops__arith__Mul_LT_f32_GT__GT_3mul17h74bf5456cb1dd01bE
                      ((ulong)*(uint3 *)(param_2 + 0x75));
    param_1[399] = (short)uVar6;
    *(char *)(param_1 + 400) = (char)((uint)uVar6 >> 0x10);
  }
  return;
}