void _ZN6uu_seq11numberparse18compute_num_digits17h50b73e0ed5b48e8cE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  char cVar12;
  byte bVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  bool bVar20;
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auStack_138 [8];
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40;
  
                    /* try { // try from 001713a7 to 001713af has its CatchHandler @ 0017169e */
  (*(code *)PTR__ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17hb778be1bb3f3f772E_00223b58)
            (auStack_138);
  auVar21 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17h8a6ec40866845ea1E
                      (local_130,local_128);
  local_b8 = 0;
  auVar22 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2b,&local_b8);
                    /* try { // try from 001713e2 to 00171432 has its CatchHandler @ 001716c1 */
  auVar22 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                      (auVar22._0_8_,auVar22._8_8_,auVar21._0_8_,auVar21._8_8_);
  if (auVar22._0_8_ != 0) {
    auVar21 = auVar22;
  }
  uVar15 = auVar21._8_8_;
  uVar18 = auVar21._0_8_;
  cVar12 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h10ba65abb895d1afE
                     (uVar18,uVar15,"0x");
  if ((cVar12 == '\0') &&
     (cVar12 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h10ba65abb895d1afE
                         (uVar18,uVar15,"-0x"), cVar12 == '\0')) {
                    /* try { // try from 001714a5 to 0017154d has its CatchHandler @ 001716c1 */
    (*(code *)PTR__ZN4core3str7pattern11StrSearcher3new17h3b91c04870bd602fE_00223b20)
              (&local_120,uVar18,uVar15,"e",1);
    local_58 = local_c0;
    local_68 = local_d0;
    uStack_60 = uStack_c8;
    local_78 = local_e0;
    uStack_70 = uStack_d8;
    local_88 = local_f0;
    uStack_84 = uStack_ec;
    uStack_80 = uStack_e8;
    uStack_7c = uStack_e4;
    local_98 = local_100;
    uStack_94 = uStack_fc;
    uStack_90 = uStack_f8;
    uStack_8c = uStack_f4;
    local_a8 = local_110;
    uStack_a4 = uStack_10c;
    uStack_a0 = uStack_108;
    uStack_9c = uStack_104;
    local_b8 = local_120;
    uStack_b4 = uStack_11c;
    uStack_b0 = uStack_118;
    uStack_ac = uStack_114;
    local_50 = 0;
    local_40 = 1;
    local_48 = uVar15;
    _ZN4core4iter6traits8iterator8Iterator7collect17h4624adafb9c421eeE(&local_120,&local_b8);
    if (CONCAT44(uStack_10c,local_110) == 0) {
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00223840)
                (0,0,&PTR_s_src_uu_seq_src_numberparse_rs_0021b2b8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    puVar11 = (undefined8 *)CONCAT44(uStack_114,uStack_118);
                    /* try { // try from 00171568 to 00171687 has its CatchHandler @ 0017168a */
    auVar21 = _ZN4core3str21__LT_impl_u20_str_GT_4find17h3640c54bee04bee2E(*puVar11,puVar11[1]);
    uVar19 = auVar21._8_8_;
    if ((auVar21 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      uVar17 = puVar11[1];
      uVar19 = 0;
    }
    else {
      if (uVar19 == 0) {
        uVar17 = 1;
      }
      else {
        uVar17 = uVar19;
        if (uVar19 == 1) {
          bVar13 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h10ba65abb895d1afE
                             (*puVar11,puVar11[1],"-",1);
          uVar17 = (ulong)bVar13 + 1;
        }
      }
      uVar19 = ~uVar19 + puVar11[1];
    }
    if (CONCAT44(uStack_10c,local_110) == 2) {
      _ZN4core3num21__LT_impl_u20_i64_GT_16from_ascii_radix17h7589f30fc8392b2aE
                (&local_b8,puVar11[2],puVar11[3]);
      uVar16 = 0;
      if ((char)local_b8 == '\0') {
        uVar16 = CONCAT44(uStack_ac,uStack_b0);
      }
      uVar14 = 0;
      if (0 < (long)uVar16) {
        uVar14 = uVar16;
      }
      uVar17 = uVar14 + uVar17;
      if ((long)uVar16 < (long)uVar19) {
        bVar20 = uVar19 < uVar16;
        uVar19 = uVar19 - uVar16;
        if (-((long)uVar16 >> 0x3f) != (ulong)bVar20) {
          uVar19 = 0;
        }
      }
      else {
        uVar19 = 0;
      }
    }
    param_1[6] = param_4[4];
    uVar4 = *(undefined4 *)param_4;
    uVar5 = *(undefined4 *)((long)param_4 + 4);
    uVar6 = *(undefined4 *)(param_4 + 1);
    uVar7 = *(undefined4 *)((long)param_4 + 0xc);
    uVar8 = *(undefined4 *)((long)param_4 + 0x14);
    uVar9 = *(undefined4 *)(param_4 + 3);
    uVar10 = *(undefined4 *)((long)param_4 + 0x1c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 2);
    *(undefined4 *)((long)param_1 + 0x24) = uVar8;
    *(undefined4 *)(param_1 + 5) = uVar9;
    *(undefined4 *)((long)param_1 + 0x2c) = uVar10;
    *(undefined4 *)(param_1 + 2) = uVar4;
    *(undefined4 *)((long)param_1 + 0x14) = uVar5;
    *(undefined4 *)(param_1 + 3) = uVar6;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
    param_1[7] = uVar17;
    *param_1 = 1;
    param_1[1] = uVar19;
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h0f7f791ab19cf63dE
              (CONCAT44(uStack_11c,local_120),puVar11);
    goto LAB_0017165d;
  }
  uVar1 = *param_4;
  uVar2 = param_4[1];
                    /* try { // try from 0017143e to 00171465 has its CatchHandler @ 001716a3 */
  cVar12 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17hff4183d19d767429E
                     (".",uVar18,uVar15);
  if (cVar12 == '\0') {
    cVar12 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17hff4183d19d767429E
                       ("p",uVar18,uVar15);
    uVar15 = 1;
    if (cVar12 != '\0') goto LAB_0017146f;
  }
  else {
LAB_0017146f:
    uVar15 = 0;
  }
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar4 = *(undefined4 *)((long)param_4 + 0x14);
  uVar5 = *(undefined4 *)(param_4 + 3);
  uVar6 = *(undefined4 *)((long)param_4 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 2);
  *(undefined4 *)((long)param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 5) = uVar5;
  *(undefined4 *)((long)param_1 + 0x2c) = uVar6;
  param_1[6] = param_4[4];
  param_1[7] = 0;
  *param_1 = uVar15;
  param_1[1] = 0;
LAB_0017165d:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb5d0045c8189f1b2E(auStack_138);
  return;
}