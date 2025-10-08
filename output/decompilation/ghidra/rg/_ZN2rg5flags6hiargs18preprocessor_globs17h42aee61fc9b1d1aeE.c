void _ZN2rg5flags6hiargs18preprocessor_globs17h42aee61fc9b1d1aeE
               (long *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_188;
  long lStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  long local_168;
  long lStack_160;
  long local_158;
  long local_148;
  long lStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long lStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined local_90;
  undefined local_8f;
  undefined4 local_8e;
  undefined2 local_8a;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined local_38;
  undefined local_37;
  undefined4 local_36;
  undefined2 local_32;
  
  if (param_4 == 0) {
    (*(code *)PTR__ZN6ignore9overrides8Override5empty17hb1018ec183410eefE_005271e0)();
    return;
  }
  _ZN6ignore9gitignore16GitignoreBuilder3new17hd2f9e2c1dacad7bbE(&local_80);
  puVar1 = PTR__ZN6ignore9overrides15OverrideBuilder3add17h525e80db7d282644E_005271d0;
  local_37 = 0;
  local_d8 = local_80;
  uStack_d4 = uStack_7c;
  uStack_d0 = uStack_78;
  uStack_cc = uStack_74;
  local_c8 = local_70;
  uStack_c0 = uStack_68;
  local_b8 = local_60;
  uStack_b0 = uStack_58;
  local_a8 = local_50;
  uStack_a0 = uStack_48;
  local_98 = local_40;
  local_90 = local_38;
  local_8f = 0;
  local_8e = local_36;
  local_8a = local_32;
  lVar2 = 0;
  do {
                    /* try { // try from 0035248a to 00352491 has its CatchHandler @ 00352623 */
    (*(code *)puVar1)(&local_188,&local_d8,*(undefined8 *)(param_3 + 8 + lVar2),
                      *(undefined8 *)(param_3 + 0x10 + lVar2));
    if (local_188 != 9) {
      lStack_118 = local_158;
      lStack_128 = local_168;
      local_120 = lStack_160;
      uStack_138 = local_178;
      uStack_134 = uStack_174;
      uStack_130 = (undefined4)uStack_170;
      uStack_12c = uStack_170._4_4_;
      local_148 = local_188;
      lStack_140 = lStack_180;
                    /* try { // try from 00352590 to 00352599 has its CatchHandler @ 00352621 */
      lVar2 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h249d96cb538d88b0E
                        (&local_148);
      param_1[1] = lVar2;
      *param_1 = -0x8000000000000000;
      goto LAB_00352602;
    }
    lVar2 = lVar2 + 0x18;
  } while (param_4 * 0x18 != lVar2);
                    /* try { // try from 003524aa to 0035252d has its CatchHandler @ 00352621 */
  (*(code *)PTR__ZN6ignore9overrides15OverrideBuilder5build17h625d1f6598f4f579E_005271d8)
            (&local_148,&local_d8);
  local_188 = lStack_140;
  lVar2 = local_188;
  uStack_170 = lStack_128;
  local_168 = local_120;
  lStack_160 = lStack_118;
  local_158 = local_110;
  param_1[0xc] = local_e8;
  param_1[10] = local_f8;
  param_1[0xb] = lStack_f0;
  param_1[8] = local_108;
  param_1[9] = lStack_100;
  param_1[7] = local_110;
  local_188._0_4_ = (undefined4)lStack_140;
  local_188._4_4_ = (undefined4)((ulong)lStack_140 >> 0x20);
  param_1[5] = local_120;
  param_1[6] = lStack_118;
  param_1[3] = CONCAT44(uStack_12c,uStack_130);
  param_1[4] = lStack_128;
  *(undefined4 *)(param_1 + 1) = (undefined4)local_188;
  *(undefined4 *)((long)param_1 + 0xc) = local_188._4_4_;
  *(undefined4 *)(param_1 + 2) = uStack_138;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_134;
  *param_1 = local_148;
  local_188 = lVar2;
LAB_00352602:
  _ZN4core3ptr55drop_in_place_LT_ignore__overrides__OverrideBuilder_GT_17h91af0f4315c846a9E
            (&local_d8);
  return;
}