void _ZN4just8analyzer8Analyzer14analyze_recipe17h80a21d1680871f82E
               (undefined4 *param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  int *piVar8;
  long lVar9;
  bool bVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined auStack_90 [16];
  undefined auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined local_40 [16];
  
  puVar1 = PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10;
  local_b0 = 0;
  local_a0 = 0;
  if (*(long *)(param_2 + 0x58) != 0) {
    lVar6 = *(long *)(param_2 + 0x58) * 0xd0;
    lVar9 = *(long *)(param_2 + 0x50) + 0x80;
    bVar7 = 0;
    do {
                    /* try { // try from 00355ae7 to 00355b1e has its CatchHandler @ 00355e72 */
      auVar11 = (*(code *)puVar1)(lVar9);
      lVar3 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h28347c9f7522952fE
                        (local_b0,local_a8,auVar11._0_8_,auVar11._8_8_);
      if (lVar3 != 0) {
        auVar11 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)
                            (param_2 + 0x90);
        auStack_80 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(lVar9);
        local_98 = 0x800000000000001c;
        auStack_90 = auVar11;
        _ZN4just5token5Token5error17h986494da066a4455E(&local_100,lVar9,&local_98);
        goto LAB_00355e1f;
      }
      uVar4 = (*(code *)puVar1)(lVar9);
      _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h229911f973c84f56E
                (&local_b0,uVar4);
      bVar10 = *(int *)(lVar9 + -0x80) != 0x12;
      if ((bool)(~bVar7 & 1) || bVar10) {
        bVar7 = bVar7 | bVar10;
      }
      else if (*(char *)(lVar9 + 0x49) != '\x02') {
                    /* try { // try from 00355b39 to 00355b7c has its CatchHandler @ 00355e6c */
        auStack_90 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(lVar9);
        local_98 = 0x8000000000000031;
        _ZN4just5token5Token5error17h986494da066a4455E(&local_100,lVar9,&local_98);
        goto LAB_00355e1f;
      }
      lVar9 = lVar9 + 0xd0;
      lVar6 = lVar6 + -0xd0;
    } while (lVar6 != 0);
  }
  lVar6 = *(long *)(param_2 + 8);
  lVar9 = *(long *)(param_2 + 0x10) * 0x20;
  bVar7 = *(byte *)(param_2 + 0xfe);
  if ((bVar7 & 1) == 0) {
    lVar9 = lVar9 + lVar6;
    uVar5 = 0;
    for (; bVar10 = lVar6 != lVar9, bVar10; lVar6 = (ulong)bVar10 * 0x20 + lVar6) {
      if ((((uVar5 & 1) == 0) && (*(long *)(lVar6 + 0x10) != 0)) && (**(int **)(lVar6 + 8) == 0x12))
      {
        piVar8 = *(int **)(lVar6 + 8) + 2;
        auVar11 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(piVar8);
        local_98 = local_98 & 0xffffffff00000000;
        auVar12 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x20,&local_98);
        cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h8590487e544a86f3E
                          (auVar11._0_8_,auVar11._8_8_,auVar12._0_8_,auVar12._8_8_);
        if (cVar2 == '\0') {
          local_98 = local_98 & 0xffffffff00000000;
          auVar12 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(9,&local_98);
          cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h8590487e544a86f3E
                            (auVar11._0_8_,auVar11._8_8_,auVar12._0_8_,auVar12._8_8_);
          if (cVar2 == '\0') goto LAB_00355be0;
        }
        local_98 = 0x8000000000000023;
                    /* try { // try from 00355cb7 to 00355e1e has its CatchHandler @ 00355e6c */
        _ZN4just5token5Token5error17h986494da066a4455E(&local_100,piVar8,&local_98);
        goto LAB_00355e1f;
      }
LAB_00355be0:
                    /* try { // try from 00355bf2 to 00355c98 has its CatchHandler @ 00355e70 */
      uVar5 = _ZN4just4line4Line15is_continuation17h5ed80636f0322bb6E
                        (*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
    }
  }
  else {
    for (; lVar9 != 0; lVar9 = lVar9 + -0x20) {
                    /* try { // try from 00355bc9 to 00355bcd has its CatchHandler @ 00355e6e */
      _ZN4just4line4Line15is_continuation17h5ed80636f0322bb6E
                (*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
      lVar6 = lVar6 + 0x20;
    }
  }
  if (((bVar7 & 1) == 0) &&
     (lVar6 = _ZN4just13attribute_set12AttributeSet3get17h29ad4fd4e40977f3E(param_2 + 0xd8,4),
     lVar6 != 0)) {
    auVar11 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)();
    _ZN65__LT_just__attribute__Attribute_u20_as_u20_core__clone__Clone_GT_5clone17hf7be862012ab759cE
              (&local_100,lVar6);
    local_50 = &DAT_0016e4d2;
    local_48 = 6;
    local_98 = CONCAT44(uStack_fc,local_100);
    auStack_90._4_4_ = uStack_f4;
    auStack_90._0_4_ = uStack_f8;
    auStack_90._12_4_ = uStack_ec;
    auStack_90._8_4_ = local_f0;
    auStack_80._4_4_ = uStack_e4;
    auStack_80._0_4_ = uStack_e8;
    auStack_80._12_4_ = uStack_dc;
    auStack_80._8_4_ = local_e0;
    uStack_70 = uStack_d8;
    uStack_6c = uStack_d4;
    local_68 = local_d0;
    uStack_64 = uStack_cc;
    uStack_60 = uStack_c8;
    uStack_5c = uStack_c4;
    local_58 = local_c0;
    local_40 = auVar11;
    _ZN4just5token5Token5error17h986494da066a4455E(&local_100,param_2 + 0x90,&local_98);
LAB_00355e1f:
    *(undefined8 *)(param_1 + 0x10) = local_c0;
    *(undefined8 *)(param_1 + 0x12) = uStack_b8;
    *(ulong *)(param_1 + 0xc) = CONCAT44(uStack_cc,local_d0);
    *(ulong *)(param_1 + 0xe) = CONCAT44(uStack_c4,uStack_c8);
    *(ulong *)(param_1 + 8) = CONCAT44(uStack_dc,local_e0);
    *(ulong *)(param_1 + 10) = CONCAT44(uStack_d4,uStack_d8);
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_ec,local_f0);
    *(ulong *)(param_1 + 6) = CONCAT44(uStack_e4,uStack_e8);
    *param_1 = local_100;
    param_1[1] = uStack_fc;
    param_1[2] = uStack_f8;
    param_1[3] = uStack_f4;
  }
  else {
    *(undefined *)(param_1 + 0x12) = 0x25;
  }
  _ZN4core3ptr76drop_in_place_LT_alloc__collections__btree__set__BTreeSet_LT__RF_str_GT__GT_17h72207aaaf59d4549E
            (&local_b0);
  return;
}