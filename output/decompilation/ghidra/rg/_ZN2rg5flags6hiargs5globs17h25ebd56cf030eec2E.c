void _ZN2rg5flags6hiargs5globs17h25ebd56cf030eec2E
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_188;
  undefined4 *puStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long local_150;
  undefined4 *local_148;
  undefined4 *puStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined local_90;
  undefined local_8f;
  undefined4 local_8e;
  undefined2 local_8a;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined local_38;
  undefined local_37;
  undefined4 local_36;
  undefined2 local_32;
  
  lVar1 = *(long *)(param_3 + 0x138);
  if ((lVar1 == 0) && (*(long *)(param_3 + 0x170) == 0)) {
    (*(code *)PTR__ZN6ignore9overrides8Override5empty17hb1018ec183410eefE_005271e0)();
    return;
  }
  _ZN6ignore9gitignore16GitignoreBuilder3new17hd2f9e2c1dacad7bbE(&local_80);
  local_37 = 0;
  local_a8 = local_50;
  uStack_a4 = uStack_4c;
  uStack_a0 = uStack_48;
  uStack_9c = uStack_44;
  local_b8 = local_60;
  uStack_b4 = uStack_5c;
  uStack_b0 = uStack_58;
  uStack_ac = uStack_54;
  local_c8 = local_70;
  uStack_c4 = uStack_6c;
  uStack_c0 = uStack_68;
  uStack_bc = uStack_64;
  local_d8 = local_80;
  uStack_d4 = uStack_7c;
  uStack_d0 = uStack_78;
  uStack_cc = uStack_74;
  local_98 = local_40;
  local_90 = local_38;
  local_8f = 0;
  local_8e = local_36;
  local_8a = local_32;
  if (*(char *)(param_3 + 0x232) != '\0') {
    local_90 = 1;
    puStack_140 = &local_d8;
    local_148 = (undefined4 *)0x9;
                    /* try { // try from 0035209b to 003520ab has its CatchHandler @ 00352360 */
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd509385785697347E
              (&local_148,&PTR_s_crates_core_flags_hiargs_rs_004eb1c0);
  }
  puVar3 = PTR__ZN6ignore9overrides15OverrideBuilder3add17h525e80db7d282644E_005271d0;
  local_150 = param_3;
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_3 + 0x130);
    lVar6 = 0;
    do {
                    /* try { // try from 003520ea to 003520f2 has its CatchHandler @ 00352364 */
      (*(code *)puVar3)(&local_188,&local_d8,*(undefined8 *)(lVar2 + 8 + lVar6),
                        *(undefined8 *)(lVar2 + 0x10 + lVar6));
      if (local_188 != (undefined4 *)&DAT_00000009) {
        uStack_118 = local_158;
        uStack_128 = local_168;
        local_120 = uStack_160;
        uStack_138 = local_178;
        uStack_134 = uStack_174;
        uStack_130 = (undefined4)uStack_170;
        uStack_12c = uStack_170._4_4_;
        local_148 = local_188;
        puStack_140 = puStack_180;
        uVar5 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h249d96cb538d88b0E
                          (&local_148);
        goto LAB_00352314;
      }
      lVar6 = lVar6 + 0x18;
    } while (lVar1 * 0x18 != lVar6);
  }
  local_90 = 1;
  puStack_140 = &local_d8;
  local_148 = (undefined4 *)&DAT_00000009;
                    /* try { // try from 00352129 to 00352139 has its CatchHandler @ 00352360 */
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd509385785697347E
            (&local_148,&PTR_s_crates_core_flags_hiargs_rs_004eb1d8);
  puVar3 = PTR__ZN6ignore9overrides15OverrideBuilder3add17h525e80db7d282644E_005271d0;
  lVar1 = *(long *)(local_150 + 0x170);
  if (lVar1 != 0) {
    lVar2 = *(long *)(local_150 + 0x168);
    lVar6 = 0;
    do {
                    /* try { // try from 0035218a to 00352191 has its CatchHandler @ 00352362 */
      (*(code *)puVar3)(&local_188,&local_d8,*(undefined8 *)(lVar2 + 8 + lVar6),
                        *(undefined8 *)(lVar2 + 0x10 + lVar6));
      if (local_188 != (undefined4 *)&DAT_00000009) {
        uStack_118 = local_158;
        uStack_128 = local_168;
        local_120 = uStack_160;
        uStack_138 = local_178;
        uStack_134 = uStack_174;
        uStack_130 = (undefined4)uStack_170;
        uStack_12c = uStack_170._4_4_;
        local_148 = local_188;
        puStack_140 = puStack_180;
        uVar5 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h249d96cb538d88b0E
                          (&local_148);
LAB_00352314:
        param_1[1] = uVar5;
        *param_1 = 0x8000000000000000;
        goto LAB_0035232a;
      }
      lVar6 = lVar6 + 0x18;
    } while (lVar1 * 0x18 != lVar6);
  }
                    /* try { // try from 003521aa to 00352313 has its CatchHandler @ 00352360 */
  (*(code *)PTR__ZN6ignore9overrides15OverrideBuilder5build17h625d1f6598f4f579E_005271d8)
            (&local_148,&local_d8);
  local_188 = puStack_140;
  puVar4 = local_188;
  uStack_170 = uStack_128;
  local_168 = local_120;
  uStack_160 = uStack_118;
  local_158 = local_110;
  param_1[0xc] = local_e8;
  param_1[10] = local_f8;
  param_1[0xb] = uStack_f0;
  param_1[8] = local_108;
  param_1[9] = uStack_100;
  param_1[7] = local_110;
  local_188._0_4_ = SUB84(puStack_140,0);
  local_188._4_4_ = (undefined4)((ulong)puStack_140 >> 0x20);
  param_1[5] = local_120;
  param_1[6] = uStack_118;
  param_1[3] = CONCAT44(uStack_12c,uStack_130);
  param_1[4] = uStack_128;
  *(undefined4 *)(param_1 + 1) = (undefined4)local_188;
  *(undefined4 *)((long)param_1 + 0xc) = local_188._4_4_;
  *(undefined4 *)(param_1 + 2) = uStack_138;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_134;
  *param_1 = local_148;
  local_188 = puVar4;
LAB_0035232a:
  _ZN4core3ptr55drop_in_place_LT_ignore__overrides__OverrideBuilder_GT_17h91af0f4315c846a9E
            (&local_d8);
  return;
}