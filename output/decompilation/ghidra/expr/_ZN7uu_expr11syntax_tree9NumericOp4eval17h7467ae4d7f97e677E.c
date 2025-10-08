*/

undefined **
_ZN7uu_expr11syntax_tree9NumericOp4eval17h7467ae4d7f97e677E
          (char *param_1,ulong param_2,int *param_3,uint *param_4,byte *param_5,int param_6,
          long param_7)

{
  undefined4 uVar1;
  undefined uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  uint uVar14;
  byte bVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined **ppuVar21;
  ulong uVar22;
  undefined7 uVar26;
  undefined *puVar23;
  char *pcVar24;
  byte *pbVar25;
  char cVar28;
  uint *puVar27;
  byte bVar30;
  undefined2 uVar29;
  byte *extraout_RDX;
  char cVar31;
  byte **ppbVar32;
  byte **ppbVar33;
  uint *puVar34;
  int *piVar35;
  int *piVar36;
  ulong unaff_R12;
  ulong uVar37;
  int iVar38;
  byte *unaff_R15;
  long in_GS_OFFSET;
  bool bVar39;
  byte in_AF;
  bool bVar40;
  byte in_TF;
  byte in_IF;
  bool bVar41;
  byte bVar42;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  int iVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  int iVar47;
  uint uVar48;
  int iVar49;
  uint uVar50;
  int iVar51;
  uint uVar52;
  uint uVar53;
  undefined auVar54 [16];
  undefined auVar55 [12];
  long unaff_retaddr;
  long in_stack_00000058;
  byte *pbStack_f0;
  undefined8 local_e8;
  undefined **ppuStack_e0;
  undefined local_d8 [12];
  uint uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined **local_98;
  uint *puStack_90;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  int local_78;
  int iStack_74;
  uint uStack_70;
  uint uStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long lStack_40;
  long local_38;
  undefined **ppuStack_30;
  byte *local_28;
  undefined **ppuStack_20;
  
  bVar42 = 0;
  ppbVar32 = (byte **)&local_e8;
  ppbVar33 = (byte **)&local_e8;
  if (*param_3 == 1) {
    uStack_b8 = param_3[4];
    uStack_b4 = param_3[5];
    iVar38 = param_3[2];
    iVar43 = param_3[3];
    iVar47 = param_3[6];
    iVar49 = param_3[7];
    iVar51 = param_3[8];
    uVar18 = param_3[9];
    ppuVar21 = local_e8;
    uVar3 = local_d8._0_8_;
    ppuVar12 = stack0xffffffffffffff30;
LAB_001a43c4:
    stack0xffffffffffffff30 = ppuVar12;
    local_d8._0_8_ = uVar3;
    local_e8 = ppuVar21;
    *(int *)(param_1 + 0x18) = iVar47;
    *(int *)(param_1 + 0x1c) = iVar49;
    *(int *)(param_1 + 0x20) = iVar51;
    *(uint *)(param_1 + 0x24) = uVar18;
    *(int *)(param_1 + 8) = iVar38;
    *(int *)(param_1 + 0xc) = iVar43;
    *(uint *)(param_1 + 0x10) = uStack_b8;
    *(uint *)(param_1 + 0x14) = uStack_b4;
    param_1[0] = '\x01';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    ppuVar21 = (undefined **)
               _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT_17h0c833a88cc9a87cfE
                         (param_4);
    return ppuVar21;
  }
                    /* try { // try from 001a4395 to 001a439e has its CatchHandler @ 001a46b0 */
  pbStack_f0 = (byte *)0x1a439f;
  _ZN7uu_expr11syntax_tree8NumOrStr14eval_as_bigint17hfc488cc1793399d6E(&local_c8);
  local_e8 = uStack_c0;
  ppuVar21 = local_e8;
  local_d8._0_8_ = uStack_b0;
  uVar3 = local_d8._0_8_;
  stack0xffffffffffffff30 = uStack_a8;
  ppuVar12 = stack0xffffffffffffff30;
  local_e8._0_4_ = (uint)uStack_c0;
  local_e8._4_4_ = (uint)((ulong)uStack_c0 >> 0x20);
  local_d8._0_4_ = SUB84(uStack_b0,0);
  local_d8._4_4_ = (undefined4)((ulong)uStack_b0 >> 0x20);
  local_d8._8_4_ = SUB84(uStack_a8,0);
  uStack_cc = (uint)((ulong)uStack_a8 >> 0x20);
  iVar38 = (uint)local_e8;
  iVar43 = local_e8._4_4_;
  iVar47 = local_d8._0_4_;
  iVar49 = local_d8._4_4_;
  iVar51 = local_d8._8_4_;
  uVar18 = uStack_cc;
  if ((int)local_c8 == 1) goto LAB_001a43c4;
  local_68 = local_d8._0_4_;
  iStack_64 = local_d8._4_4_;
  iStack_60 = local_d8._8_4_;
  iStack_5c = uStack_cc;
  local_78 = (uint)local_e8;
  iStack_74 = local_e8._4_4_;
  uStack_70 = uStack_b8;
  uStack_6c = uStack_b4;
  puVar34 = param_4 + 2;
  if ((*(byte *)param_4 & 1) != 0) {
    uStack_b8 = param_4[4];
    uStack_b4 = param_4[5];
    uVar18 = *puVar34;
    uVar44 = param_4[3];
    uVar45 = param_4[6];
    uVar46 = param_4[7];
    uVar48 = param_4[8];
    uVar50 = param_4[9];
LAB_001a443e:
    stack0xffffffffffffff30 = ppuVar12;
    local_d8._0_8_ = uVar3;
    local_e8 = ppuVar21;
    *(uint *)(param_1 + 0x18) = uVar45;
    *(uint *)(param_1 + 0x1c) = uVar46;
    *(uint *)(param_1 + 0x20) = uVar48;
    *(uint *)(param_1 + 0x24) = uVar50;
    *(uint *)(param_1 + 8) = uVar18;
    *(uint *)(param_1 + 0xc) = uVar44;
    *(uint *)(param_1 + 0x10) = uStack_b8;
    *(uint *)(param_1 + 0x14) = uStack_b4;
    param_1[0] = '\x01';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    goto LAB_001a444d;
  }
                    /* try { // try from 001a440f to 001a4418 has its CatchHandler @ 001a4696 */
  piVar35 = (int *)&local_c8;
  pbStack_f0 = (byte *)0x1a4419;
  local_e8 = ppuVar21;
  local_d8._0_8_ = uVar3;
  unique0x100031e5 = ppuVar12;
  _ZN7uu_expr11syntax_tree8NumOrStr14eval_as_bigint17hfc488cc1793399d6E();
  ppuVar11 = (undefined **)CONCAT44(uStack_b4,uStack_b8);
  local_e8 = uStack_c0;
  ppuVar21 = local_e8;
  local_d8._0_8_ = uStack_b0;
  uVar3 = local_d8._0_8_;
  stack0xffffffffffffff30 = uStack_a8;
  ppuVar12 = stack0xffffffffffffff30;
  local_e8._0_4_ = (uint)uStack_c0;
  local_e8._4_4_ = (uint)((ulong)uStack_c0 >> 0x20);
  local_d8._0_4_ = SUB84(uStack_b0,0);
  local_d8._4_4_ = (undefined4)((ulong)uStack_b0 >> 0x20);
  local_d8._8_4_ = SUB84(uStack_a8,0);
  uStack_cc = (uint)((ulong)uStack_a8 >> 0x20);
  uVar18 = (uint)local_e8;
  uVar44 = local_e8._4_4_;
  uVar45 = local_d8._0_4_;
  uVar46 = local_d8._4_4_;
  uVar48 = local_d8._8_4_;
  uVar50 = uStack_cc;
  if ((int)local_c8 == 1) goto LAB_001a443e;
  ppuVar13 = uStack_b0;
  local_88 = uStack_b0;
  uStack_80 = local_d8._8_4_;
  uVar14 = uStack_80;
  uStack_7c = uStack_cc;
  local_98 = uStack_c0;
  puStack_90 = (uint *)CONCAT44(uStack_b4,uStack_b8);
  puVar27 = &switchD_001a448d::caseD_1b;
  uVar22 = (ulong)(int)(&switchD_001a448d::caseD_1b)[param_2 & 0xff];
  bVar39 = 0xffffffffffee35f7 < uVar22;
  ppuStack_e0 = (undefined **)((long)&switchD_001a448d::caseD_1b + uVar22);
  iVar38 = (int)piVar35;
  bVar15 = (byte)ppuStack_e0;
  uVar17 = (uint)ppuStack_e0;
  uVar26 = (undefined7)((ulong)ppuStack_e0 >> 8);
  cVar16 = (char)((ulong)extraout_RDX >> 8);
  local_88._1_7_ = (undefined7)((ulong)uStack_b0 >> 8);
  uStack_80._0_1_ = (char)uStack_a8;
  uVar45 = uStack_b8;
  uVar46 = uStack_b4;
  uVar48 = local_d8._0_4_;
  uVar50 = local_d8._4_4_;
  uVar52 = local_d8._8_4_;
  uVar53 = uStack_cc;
  local_e8 = ppuVar21;
  local_d8._0_8_ = uVar3;
  unique0x1000350d = ppuVar12;
  local_88 = ppuVar13;
  uStack_80 = uVar14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2 & 0xff) {
  case 0:
    local_e8 = (undefined **)CONCAT44(iStack_74,local_78);
    ppuStack_e0 = (undefined **)CONCAT44(uStack_6c,uStack_70);
    unique0x100021af = (undefined **)CONCAT44(iStack_5c,iStack_60);
    uStack_b8 = local_d8._0_4_;
    uStack_b4 = local_d8._4_4_;
    pbStack_f0 = (byte *)0x1a44ce;
    local_d8._0_8_ = CONCAT44(iStack_64,local_68);
    ppuVar21 = (undefined **)
               _ZN10num_bigint6bigint8addition78__LT_impl_u20_core__ops__arith__Add_u20_for_u20_num_bigint__bigint__BigInt_GT_3add17h1a73340263ff5867E
                         (&local_58,&local_e8,&local_c8);
    goto LAB_001a45b4;
  case 1:
    local_e8 = (undefined **)CONCAT44(iStack_74,local_78);
    ppuStack_e0 = (undefined **)CONCAT44(uStack_6c,uStack_70);
    unique0x100021bf = (undefined **)CONCAT44(iStack_5c,iStack_60);
    uStack_b8 = local_d8._0_4_;
    uStack_b4 = local_d8._4_4_;
    pbStack_f0 = (byte *)0x1a45b4;
    local_d8._0_8_ = CONCAT44(iStack_64,local_68);
    ppuVar21 = (undefined **)
               _ZN10num_bigint6bigint11subtraction78__LT_impl_u20_core__ops__arith__Sub_u20_for_u20_num_bigint__bigint__BigInt_GT_3sub17h9f5015f3ea5aa6f7E
                         (&local_58,&local_e8,&local_c8);
    goto LAB_001a45b4;
  case 2:
    local_e8 = (undefined **)CONCAT44(iStack_74,local_78);
    ppuStack_e0 = (undefined **)CONCAT44(uStack_6c,uStack_70);
    unique0x100021b7 = (undefined **)CONCAT44(iStack_5c,iStack_60);
    uStack_b8 = local_d8._0_4_;
    uStack_b4 = local_d8._4_4_;
    pbStack_f0 = (byte *)0x1a4554;
    local_d8._0_8_ = CONCAT44(iStack_64,local_68);
    ppuVar21 = (undefined **)
               _ZN10num_bigint6bigint14multiplication78__LT_impl_u20_core__ops__arith__Mul_u20_for_u20_num_bigint__bigint__BigInt_GT_3mul17h0db45ed69ea0883eE
                         (&local_58,&local_e8,&local_c8);
LAB_001a45b4:
    *(undefined8 *)(param_1 + 0x18) = local_48;
    *(long *)(param_1 + 0x20) = lStack_40;
    *(undefined8 *)(param_1 + 8) = local_58;
    *(undefined8 *)(param_1 + 0x10) = uStack_50;
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    return ppuVar21;
  case 3:
    bVar39 = (char)uStack_80 == '\x01';
    if (bVar39) goto LAB_001a4561;
                    /* try { // try from 001a45e8 to 001a45fb has its CatchHandler @ 001a4682 */
    pbStack_f0 = (byte *)0x1a45fc;
    _ZN10num_bigint6bigint8division82__LT_impl_u20_core__ops__arith__Div_u20_for_u20__RF_num_bigint__bigint__BigInt_GT_3div17hc712775fe696b254E
              (&local_c8,&local_78,&local_98);
    ppuStack_20 = uStack_b0;
    *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_b4,uStack_b8);
    *(undefined ***)(param_1 + 0x20) = uStack_b0;
    *(int *)(param_1 + 8) = (int)local_c8;
    *(undefined4 *)(param_1 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_c0;
    *(undefined4 *)(param_1 + 0x14) = uStack_c0._4_4_;
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    goto LAB_001a4625;
  case 4:
    bVar39 = (char)uStack_80 != '\x01';
    if (bVar39) {
                    /* try { // try from 001a44e4 to 001a44f7 has its CatchHandler @ 001a4682 */
      pbStack_f0 = (byte *)0x1a44f8;
      _ZN10num_bigint6bigint8division82__LT_impl_u20_core__ops__arith__Div_u20_for_u20__RF_num_bigint__bigint__BigInt_GT_3div17hc712775fe696b254E
                (&local_c8,&local_78,&local_98);
      if (local_c8 != -0x8000000000000000) {
        pbStack_f0 = (byte *)0x1a463e;
        _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h35788999f3179b91E
                  (local_c8,uStack_c0);
        local_e8 = (undefined **)CONCAT44(iStack_74,local_78);
        ppuStack_e0 = (undefined **)CONCAT44(uStack_6c,uStack_70);
        local_d8._0_8_ = CONCAT44(iStack_64,local_68);
        unique0x100021c7 = (undefined **)CONCAT44(iStack_5c,iStack_60);
        uStack_b8 = (uint)local_88;
        uStack_b4 = local_88._4_4_;
        uStack_b0 = (undefined **)CONCAT44(uStack_7c,uStack_80);
        pbStack_f0 = (byte *)0x1a467d;
        ppuVar21 = (undefined **)
                   _ZN10num_bigint6bigint8division78__LT_impl_u20_core__ops__arith__Rem_u20_for_u20_num_bigint__bigint__BigInt_GT_3rem17hb3841d50c8e3d31eE
                             (&local_58,&local_e8,&local_c8);
        goto LAB_001a45b4;
      }
    }
    pbStack_f0 = (byte *)0x1a4513;
    _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h35788999f3179b91E
              (0x8000000000000000);
LAB_001a4561:
    param_1[8] = '\x04';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0] = '\x01';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
LAB_001a4625:
    pbStack_f0 = (byte *)0x1a4634;
    _ZN4core3ptr47drop_in_place_LT_num_bigint__bigint__BigInt_GT_17hd240cd584614de3eE
              (local_98,puStack_90);
LAB_001a444d:
    pbStack_f0 = (byte *)0x1a445c;
    ppuVar21 = (undefined **)
               _ZN4core3ptr47drop_in_place_LT_num_bigint__bigint__BigInt_GT_17hd240cd584614de3eE
                         (CONCAT44(iStack_74,local_78),CONCAT44(uStack_6c,uStack_70));
    return ppuVar21;
  case 5:
    puVar27 = &UINT_0011ca1c;
    uVar22 = (ulong)(int)(&UINT_0011ca1c)[(ulong)puVar34 & 0xff];
    bVar39 = 0xffffffffffee35e3 < uVar22;
    ppuStack_e0 = (undefined **)((long)&UINT_0011ca1c + uVar22);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((ulong)puVar34 & 0xff) {
    case 0:
      if ((*extraout_RDX & 1) == 0) {
        pbStack_f0 = (byte *)0x1a471b;
        ppuStack_e0 = ppuVar11;
        (*(code *)PTR__ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h12de1e9c78140f1fE_00251920
        )(&iStack_60,param_4);
        if ((*unaff_R15 & 1) == 0) {
          pbStack_f0 = (byte *)0x1a48d1;
          (*(code *)
            PTR__ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h12de1e9c78140f1fE_00251920)
                    (&local_48);
          lVar5 = lStack_40;
          pbStack_f0 = (byte *)0x1a48f1;
          _ZN7uu_expr11syntax_tree24check_posix_regex_errors17h83c506dd31e4b1f6E
                    (&uStack_b8,lStack_40,local_38);
          if ((undefined *)CONCAT44(uStack_b4,uStack_b8) == (undefined *)0xd) {
            pbStack_f0 = (byte *)0x1a491a;
            _local_d8 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h1bcad2531ed7b92aE
                                  (local_38 + 1,1,1,&PTR_DAT_0024a858);
            local_c8 = 0;
            pbStack_f0 = (byte *)0x1a493c;
            _ZN5alloc6string6String4push17h0ede46164189e411E(local_d8,0x5e);
            pbStack_f0 = (byte *)0x1a495c;
            auVar54 = _ZN4core3str11validations15next_code_point17h84659763701eb288E
                                (&stack0xffffffffffffffe8);
            uVar22 = 0x110000;
            if ((auVar54 & (undefined  [16])0x1) != (undefined  [16])0x0) {
              uVar22 = auVar54._8_8_ & 0xffffffff;
            }
            iVar38 = (int)uVar22;
            if (iVar38 == 0x2a) {
              pbStack_f0 = (byte *)0x1a4beb;
              _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17he36b228b683b60fdE
                        (local_d8,"\\*","\\^");
LAB_001a4bfa:
              uStack_b8 = (uint)lVar5;
              uStack_b4 = (uint)((ulong)lVar5 >> 0x20);
              bVar42 = 0;
              uStack_b0 = (undefined **)(local_38 + lVar5);
              do {
                pbStack_f0 = (byte *)0x1a4c4f;
                auVar54 = _ZN4core3str11validations15next_code_point17h84659763701eb288E(&uStack_b8)
                ;
                uVar37 = auVar54._8_8_ & 0xffffffff;
                if ((auVar54 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                  uVar37 = 0x110000;
                }
                if ((int)uVar37 == 0x5e) {
                  if (!(bool)((int)uVar22 - 0x5dU < 0xfffffffe | bVar42)) goto LAB_001a4c81;
                  pbStack_f0 = (byte *)0x1a4c36;
                  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17he36b228b683b60fdE
                            (local_d8,"\\^","0");
                }
                else {
                  if ((int)uVar37 == 0x110000) goto LAB_001a4c8e;
LAB_001a4c81:
                  pbStack_f0 = (byte *)0x1a4c8c;
                  _ZN5alloc6string6String4push17h0ede46164189e411E(local_d8,uVar37);
                }
                bVar42 = (bVar42 ^ 1) & (int)uVar22 == 0x5c;
                uVar22 = uVar37;
              } while( true );
            }
            if (iVar38 == 0x5e) goto LAB_001a4bfa;
            if (iVar38 != 0x110000) {
              pbStack_f0 = (byte *)0x1a4bfa;
              _ZN5alloc6string6String4push17h0ede46164189e411E(local_d8,uVar22);
              goto LAB_001a4bfa;
            }
            pbStack_f0 = (byte *)0x1a4996;
            (*(code *)
              PTR__ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17h7f74ddc3053bca16E_00251a50
            )(&uStack_b8,0);
            ppuStack_e0[3] = (undefined *)uStack_a8;
            ppuStack_e0[4] = (undefined *)CONCAT44(local_a0._4_4_,(undefined4)local_a0);
            *(uint *)(ppuStack_e0 + 1) = uStack_b8;
            *(uint *)((long)ppuStack_e0 + 0xc) = uStack_b4;
            *(undefined4 *)(ppuStack_e0 + 2) = (undefined4)uStack_b0;
            *(undefined4 *)((long)ppuStack_e0 + 0x14) = uStack_b0._4_4_;
            *ppuStack_e0 = (undefined *)0x0;
            goto LAB_001a4e59;
          }
          ppuStack_e0[4] = (undefined *)CONCAT44(local_a0._4_4_,(undefined4)local_a0);
          *(undefined4 *)(ppuStack_e0 + 2) = (undefined4)uStack_b0;
          *(undefined4 *)((long)ppuStack_e0 + 0x14) = uStack_b0._4_4_;
          *(undefined4 *)(ppuStack_e0 + 3) = (undefined4)uStack_a8;
          *(undefined4 *)((long)ppuStack_e0 + 0x1c) = uStack_a8._4_4_;
          ppuStack_e0[1] = (undefined *)CONCAT44(uStack_b4,uStack_b8);
          *ppuStack_e0 = (undefined *)0x1;
          goto LAB_001a4e63;
        }
        uVar18 = *(uint *)(unaff_R15 + 8);
        uVar44 = *(uint *)(unaff_R15 + 0xc);
        uVar45 = *(uint *)(unaff_R15 + 0x10);
        uVar46 = *(uint *)(unaff_R15 + 0x14);
        uVar48 = *(uint *)(unaff_R15 + 0x18);
        uVar50 = *(uint *)(unaff_R15 + 0x1c);
        uVar52 = *(uint *)(unaff_R15 + 0x20);
        uVar53 = *(uint *)(unaff_R15 + 0x24);
        ppuVar21 = local_e8;
        uVar3 = local_d8._0_8_;
        ppuVar12 = stack0xffffffffffffff30;
        uVar14 = uStack_80;
        goto switchD_001a448d_caseD_7;
      }
      break;
    case 1:
      if ((*extraout_RDX & 1) == 0) {
        pbStack_f0 = &UNK_001a4816;
        ppuStack_e0 = ppuVar11;
        (*(code *)PTR__ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h12de1e9c78140f1fE_00251920
        )(local_d8,param_4);
        if ((*unaff_R15 & 1) == 0) {
          pbStack_f0 = (byte *)0x1a49c4;
          (*(code *)
            PTR__ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h12de1e9c78140f1fE_00251920)
                    (&local_78);
          local_28 = (byte *)(local_c8 + (long)stack0xffffffffffffff30);
          ppuStack_30 = stack0xffffffffffffff30;
          ppuStack_20 = (undefined **)0x0;
          pbStack_f0 = (byte *)0x1a49fa;
          auVar54 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2cd4ce92fdece041E
                              (&ppuStack_30);
          puVar23 = 
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00251a58
          ;
          if (auVar54._8_4_ != 0x110000) {
            do {
              pbStack_f0 = (byte *)0x1a4a91;
              (*(code *)puVar23)(&stack0xfffffffffffffff8,&local_78);
              lStack_40 = param_7 + unaff_retaddr;
              while( true ) {
                pbStack_f0 = (byte *)0x1a4ac8;
                auVar55 = _ZN4core3str11validations15next_code_point17h84659763701eb288E(&local_48);
                if (((auVar55 & (undefined  [12])0x1) == (undefined  [12])0x0) ||
                   (auVar55._8_4_ == 0x110000)) break;
                if (auVar55._8_4_ == auVar54._8_4_) {
                  pbStack_f0 = (byte *)0x1a4b39;
                  (*(code *)
                    PTR__ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17h7f74ddc3053bca16E_00251a50
                  )(&uStack_b8,auVar54._0_8_ + 1);
                  *(undefined4 *)(ppuStack_e0 + 3) = (undefined4)uStack_a8;
                  *(undefined4 *)((long)ppuStack_e0 + 0x1c) = uStack_a8._4_4_;
                  *(undefined4 *)(ppuStack_e0 + 4) = (undefined4)local_a0;
                  *(undefined4 *)((long)ppuStack_e0 + 0x24) = local_a0._4_4_;
                  *(uint *)(ppuStack_e0 + 1) = uStack_b8;
                  *(uint *)((long)ppuStack_e0 + 0xc) = uStack_b4;
                  *(undefined4 *)(ppuStack_e0 + 2) = (undefined4)uStack_b0;
                  *(undefined4 *)((long)ppuStack_e0 + 0x14) = uStack_b0._4_4_;
                  *ppuStack_e0 = (undefined *)0x0;
                  pbStack_f0 = &LAB_001a4b64;
                  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E
                            (&stack0xfffffffffffffff8);
                  goto LAB_001a4b64;
                }
              }
              pbStack_f0 = (byte *)0x1a4ae2;
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E
                        (&stack0xfffffffffffffff8);
              pbStack_f0 = (byte *)0x1a4aef;
              auVar54 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2cd4ce92fdece041E
                                  (&ppuStack_30);
            } while (auVar54._8_4_ != 0x110000);
          }
          pbStack_f0 = (byte *)0x1a4a0f;
          (*(code *)
            PTR__ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17h7f74ddc3053bca16E_00251a50
          )(&uStack_b8,0);
          ppuStack_e0[3] = (undefined *)uStack_a8;
          ppuStack_e0[4] = (undefined *)CONCAT44(local_a0._4_4_,(undefined4)local_a0);
          *(uint *)(ppuStack_e0 + 1) = uStack_b8;
          *(uint *)((long)ppuStack_e0 + 0xc) = uStack_b4;
          *(undefined4 *)(ppuStack_e0 + 2) = (undefined4)uStack_b0;
          *(undefined4 *)((long)ppuStack_e0 + 0x14) = uStack_b0._4_4_;
          *ppuStack_e0 = (undefined *)0x0;
LAB_001a4b64:
          pbStack_f0 = (byte *)0x1a4b6e;
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E(&local_78);
          piVar35 = (int *)local_d8;
        }
        else {
          uVar1 = *(undefined4 *)(unaff_R15 + 8);
          uVar7 = *(undefined4 *)(unaff_R15 + 0xc);
          uVar8 = *(undefined4 *)(unaff_R15 + 0x10);
          uVar9 = *(undefined4 *)(unaff_R15 + 0x14);
          puVar23 = *(undefined **)(unaff_R15 + 0x20);
          ppuStack_e0[3] = *(undefined **)(unaff_R15 + 0x18);
          ppuStack_e0[4] = puVar23;
          *(undefined4 *)(ppuStack_e0 + 1) = uVar1;
          *(undefined4 *)((long)ppuStack_e0 + 0xc) = uVar7;
          *(undefined4 *)(ppuStack_e0 + 2) = uVar8;
          *(undefined4 *)((long)ppuStack_e0 + 0x14) = uVar9;
          *ppuStack_e0 = (undefined *)0x1;
          piVar35 = (int *)local_d8;
        }
        goto LAB_001a4e78;
      }
      break;
    case 2:
      if ((*extraout_RDX & 1) == 0) {
        pbStack_f0 = (byte *)0x1a475b;
        ppuStack_e0 = ppuVar11;
        cVar16 = (*(code *)PTR__ZN7uu_expr11syntax_tree9is_truthy17hefcaac958900f87aE_00251928)
                           (param_4);
        if (cVar16 == '\0') {
          pbStack_f0 = (byte *)0x1a4856;
          (*(code *)
            PTR__ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17h7f74ddc3053bca16E_00251a50
          )(&uStack_b8,0);
          *(undefined4 *)(ppuStack_e0 + 3) = (undefined4)uStack_a8;
          *(undefined4 *)((long)ppuStack_e0 + 0x1c) = uStack_a8._4_4_;
          *(undefined4 *)(ppuStack_e0 + 4) = (undefined4)local_a0;
          *(undefined4 *)((long)ppuStack_e0 + 0x24) = local_a0._4_4_;
          *(uint *)(ppuStack_e0 + 1) = uStack_b8;
          *(uint *)((long)ppuStack_e0 + 0xc) = uStack_b4;
          *(undefined4 *)(ppuStack_e0 + 2) = (undefined4)uStack_b0;
          *(undefined4 *)((long)ppuStack_e0 + 0x14) = uStack_b0._4_4_;
          *ppuStack_e0 = (undefined *)0x0;
          pbStack_f0 = (byte *)0x1a487c;
          _ZN4core3ptr51drop_in_place_LT_uu_expr__syntax_tree__NumOrStr_GT_17hed5f1ee52967d14eE
                    (param_4);
          goto LAB_001a47ef;
        }
        puVar34 = (uint *)(unaff_R15 + 8);
        if ((*unaff_R15 & 1) == 0) {
          pbStack_f0 = (byte *)0x1a4a3b;
          cVar16 = (*(code *)PTR__ZN7uu_expr11syntax_tree9is_truthy17hefcaac958900f87aE_00251928)
                             (puVar34);
          if (cVar16 != '\0') {
            uVar18 = *param_4;
            uVar44 = param_4[1];
            uVar45 = param_4[2];
            uVar46 = param_4[3];
            puVar23 = *(undefined **)(param_4 + 6);
            ppuStack_e0[3] = *(undefined **)(param_4 + 4);
            ppuStack_e0[4] = puVar23;
            *(uint *)(ppuStack_e0 + 1) = uVar18;
            *(uint *)((long)ppuStack_e0 + 0xc) = uVar44;
            *(uint *)(ppuStack_e0 + 2) = uVar45;
            *(uint *)((long)ppuStack_e0 + 0x14) = uVar46;
            *ppuStack_e0 = (undefined *)0x0;
            param_4 = puVar34;
            goto LAB_001a4bbd;
          }
          pbStack_f0 = (byte *)0x1a4b85;
          (*(code *)
            PTR__ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17h7f74ddc3053bca16E_00251a50
          )(&uStack_b8,0);
LAB_001a4b94:
          *(undefined4 *)(ppuStack_e0 + 3) = (undefined4)uStack_a8;
          *(undefined4 *)((long)ppuStack_e0 + 0x1c) = uStack_a8._4_4_;
          *(undefined4 *)(ppuStack_e0 + 4) = (undefined4)local_a0;
          *(undefined4 *)((long)ppuStack_e0 + 0x24) = local_a0._4_4_;
          *(uint *)(ppuStack_e0 + 1) = uStack_b8;
          *(uint *)((long)ppuStack_e0 + 0xc) = uStack_b4;
          *(undefined4 *)(ppuStack_e0 + 2) = (undefined4)uStack_b0;
          *(undefined4 *)((long)ppuStack_e0 + 0x14) = uStack_b0._4_4_;
          *ppuStack_e0 = (undefined *)0x0;
          pbStack_f0 = (byte *)0x1a4bba;
          _ZN4core3ptr51drop_in_place_LT_uu_expr__syntax_tree__NumOrStr_GT_17hed5f1ee52967d14eE
                    (unaff_R15 + 8);
          goto LAB_001a4bbd;
        }
        uVar18 = *puVar34;
        uVar44 = *(uint *)(unaff_R15 + 0xc);
        uStack_b8 = *(uint *)(unaff_R15 + 0x10);
        uStack_b4 = *(uint *)(unaff_R15 + 0x14);
        uVar48 = *(uint *)(unaff_R15 + 0x18);
        uVar50 = *(uint *)(unaff_R15 + 0x1c);
        uVar52 = *(uint *)(unaff_R15 + 0x20);
        uVar53 = *(uint *)(unaff_R15 + 0x24);
        ppuVar21 = local_e8;
        uVar3 = local_d8._0_8_;
        ppuVar12 = stack0xffffffffffffff30;
        uVar14 = uStack_80;
        goto switchD_001a448d_caseD_8;
      }
      break;
    case 3:
      puVar23 = (undefined *)0x1;
      ppuStack_e0 = ppuVar11;
      if ((*extraout_RDX & 1) == 0) {
        pbStack_f0 = (byte *)0x1a47a8;
        cVar16 = (*(code *)PTR__ZN7uu_expr11syntax_tree9is_truthy17hefcaac958900f87aE_00251928)
                           (param_4);
        if (cVar16 == '\0') {
          puVar23 = (undefined *)0x1;
          if ((*unaff_R15 & 1) == 0) {
            pbStack_f0 = (byte *)0x1a4899;
            cVar16 = (*(code *)PTR__ZN7uu_expr11syntax_tree9is_truthy17hefcaac958900f87aE_00251928)
                               (unaff_R15 + 8);
            if (cVar16 == '\0') {
              pbStack_f0 = (byte *)0x1a4b94;
              (*(code *)
                PTR__ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17h7f74ddc3053bca16E_00251a50
              )(&uStack_b8,0);
              goto LAB_001a4b94;
            }
            puVar23 = (undefined *)0x0;
          }
          uVar1 = *(undefined4 *)(unaff_R15 + 8);
          uVar7 = *(undefined4 *)(unaff_R15 + 0xc);
          uVar8 = *(undefined4 *)(unaff_R15 + 0x10);
          uVar9 = *(undefined4 *)(unaff_R15 + 0x14);
          puVar10 = *(undefined **)(unaff_R15 + 0x20);
          ppuStack_e0[3] = *(undefined **)(unaff_R15 + 0x18);
          ppuStack_e0[4] = puVar10;
          *(undefined4 *)(ppuStack_e0 + 1) = uVar1;
          *(undefined4 *)((long)ppuStack_e0 + 0xc) = uVar7;
          *(undefined4 *)(ppuStack_e0 + 2) = uVar8;
          *(undefined4 *)((long)ppuStack_e0 + 0x14) = uVar9;
          *ppuStack_e0 = puVar23;
          goto LAB_001a4bbd;
        }
        puVar23 = (undefined *)0x0;
      }
      uVar18 = *param_4;
      uVar44 = param_4[1];
      uStack_b8 = param_4[2];
      uStack_b4 = param_4[3];
      uVar45 = param_4[4];
      uVar46 = param_4[5];
      uVar48 = param_4[6];
      uVar50 = param_4[7];
      goto code_r0x001a47c0;
    case 4:
      goto code_r0x001a57c4;
    case 5:
      bVar39 = false;
      ppuStack_e0 = (undefined **)((ulong)ppuStack_e0 & 0xffffffffffffff48);
      goto switchD_001a448d_caseD_a;
    case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 7:
      goto switchD_001a448d_caseD_c;
    case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 9:
      pcVar6 = (code *)swi(3);
      ppuVar21 = (undefined **)(*pcVar6)();
      return ppuVar21;
    case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb:
      puVar34 = (uint *)((ulong)ppuStack_e0 & 0xffffffff);
      goto code_r0x001a65c3;
    case 0xc:
      if (-1 < (long)ppuStack_e0) {
        *(int *)ppuStack_e0 = *(int *)ppuStack_e0 + (int)ppuStack_e0;
        (&UNK_0011c9a9)[uVar22] = (&UNK_0011c9a9)[uVar22] + '\x1c';
        ppuVar21 = (undefined **)
                   (*(code *)
                     PTR__ZN57__LT_core__fmt__Formatter_u20_as_u20_core__fmt__Write_GT_9write_str17h7dbec3f69c4ad810E_00251878
                   )(puVar34,(int)ppuStack_e0 + -0x8862c,0x11);
        return ppuVar21;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd:
      goto code_r0x001a65a1;
    case 0xe:
      goto code_r0x001a668e;
    case 0xf:
      uStack_b0 = &PTR_s_syntax_error__missing_argument_a_0024a9d0;
      goto code_r0x001a6698;
    case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x11:
      pbVar25 = (byte *)((ulong)ppuStack_e0 & 0xffffffffffffff18);
      *pbVar25 = *pbVar25 | (byte)pbVar25;
      *pbVar25 = *pbVar25 + (byte)pbVar25;
      goto LAB_001a673e;
    case 0x12:
      ppuStack_e0 = (undefined **)
                    ((long)((long)uStack_c0 << 0x20 | (ulong)ppuStack_e0 & 0xffffffff) /
                     (long)iVar38 & 0xffffffff);
code_r0x001a65c3:
      *(byte *)ppuStack_e0 = *(byte *)ppuStack_e0 + (char)ppuStack_e0;
      ppuVar21 = (undefined **)
                 (*(code *)
                   PTR__ZN57__LT_core__fmt__Formatter_u20_as_u20_core__fmt__Write_GT_9write_str17h7dbec3f69c4ad810E_00251878
                 )(puVar34,&DAT_0011c030,0x10);
      return ppuVar21;
    case 0x13:
      ppuVar21 = (undefined **)((ulong)ppuStack_e0 & 0xffffffffffffff10);
      *(int *)ppuVar21 = *(int *)ppuVar21 + (int)ppuVar21;
      *(byte *)ppuVar21 = *(byte *)ppuVar21 + (char)ppuVar21;
      goto switchD_001a40b6_caseD_22;
    case 0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x15:
      ppuStack_e0 = (undefined **)
                    CONCAT71((int7)((ulong)ppuStack_e0 >> 8),(byte)ppuStack_e0 | *param_5);
      goto switchD_001a448d_caseD_17;
    case 0x16:
      uVar18 = in(0x7c);
      pbVar25 = (byte *)(ulong)uVar18;
      *pbVar25 = *pbVar25 | (byte)uVar18;
      puVar27 = (uint *)0x11ca7d;
      *pbVar25 = *pbVar25 | (byte)uVar18;
      bVar40 = SBORROW4(uVar18,0x7900087d);
      pbVar25 = (byte *)(ulong)(uVar18 + 0x86fff783);
      bVar39 = (int)(uVar18 + 0x86fff783) < 0;
code_r0x0011ca29:
      if (bVar40 == bVar39) {
        pbVar19 = (byte *)CONCAT62((int6)((ulong)extraout_RDX >> 0x10),
                                   CONCAT11(cVar16 + (char)param_1,(char)extraout_RDX));
code_r0x0011ca35:
        pbVar19 = (byte *)((ulong)pbVar19 & 0xffffffff);
        pbVar20 = pbVar25;
        goto code_r0x0011ca27;
      }
      pbVar25[-0x76fff773] = pbVar25[-0x76fff773] + (char)((ulong)puVar27 >> 8);
      pbVar19 = (byte *)((ulong)extraout_RDX & 0xffffffff);
      *pbVar19 = *pbVar19 | (byte)pbVar19;
      goto code_r0x0011ca3a;
    }
    uVar18 = *param_4;
    uVar44 = param_4[1];
    uVar45 = param_4[2];
    uVar46 = param_4[3];
    puVar23 = *(undefined **)(param_4 + 6);
    ppuVar11[3] = *(undefined **)(param_4 + 4);
    ppuVar11[4] = puVar23;
    *(uint *)(ppuVar11 + 1) = uVar18;
    *(uint *)((long)ppuVar11 + 0xc) = uVar44;
    *(uint *)(ppuVar11 + 2) = uVar45;
    *(uint *)((long)ppuVar11 + 0x14) = uVar46;
    *ppuVar11 = (undefined *)0x1;
LAB_001a47ef:
    ppuVar21 = (undefined **)
               _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT_17h0c833a88cc9a87cfE
                         ();
    return ppuVar21;
  case 6:
    (&DAT_0011c993)[uVar22] = (&DAT_0011c993)[uVar22] + (char)param_6 + bVar39;
    puVar23 = (undefined *)((ulong)ppuStack_e0 & 0xffffffffffffff08);
    ppuStack_e0 = (undefined **)puVar27;
    uVar18 = (uint)local_e8;
    uVar44 = local_e8._4_4_;
    uVar45 = local_d8._0_4_;
    uVar46 = local_d8._4_4_;
    uVar48 = local_d8._8_4_;
    uVar50 = uStack_cc;
code_r0x001a47c0:
    *(uint *)(ppuStack_e0 + 3) = uVar45;
    *(uint *)((long)ppuStack_e0 + 0x1c) = uVar46;
    *(uint *)(ppuStack_e0 + 4) = uVar48;
    *(uint *)((long)ppuStack_e0 + 0x24) = uVar50;
    *(uint *)(ppuStack_e0 + 1) = uVar18;
    *(uint *)((long)ppuStack_e0 + 0xc) = uVar44;
    *(uint *)(ppuStack_e0 + 2) = uStack_b8;
    *(uint *)((long)ppuStack_e0 + 0x14) = uStack_b4;
    *ppuStack_e0 = puVar23;
    goto LAB_001a47ef;
  case 7:
switchD_001a448d_caseD_7:
    uStack_80 = uVar14;
    stack0xffffffffffffff30 = ppuVar12;
    local_d8._0_8_ = uVar3;
    local_e8 = ppuVar21;
    *(uint *)(ppuStack_e0 + 3) = uVar48;
    *(uint *)((long)ppuStack_e0 + 0x1c) = uVar50;
    *(uint *)(ppuStack_e0 + 4) = uVar52;
    *(uint *)((long)ppuStack_e0 + 0x24) = uVar53;
    *(uint *)(ppuStack_e0 + 1) = uVar18;
    *(uint *)((long)ppuStack_e0 + 0xc) = uVar44;
    *(uint *)(ppuStack_e0 + 2) = uVar45;
    *(uint *)((long)ppuStack_e0 + 0x14) = uVar46;
    *ppuStack_e0 = (undefined *)0x1;
    goto LAB_001a4e70;
  case 8:
switchD_001a448d_caseD_8:
    uStack_80 = uVar14;
    stack0xffffffffffffff30 = ppuVar12;
    local_d8._0_8_ = uVar3;
    local_e8 = ppuVar21;
    *(uint *)(ppuStack_e0 + 3) = uVar48;
    *(uint *)((long)ppuStack_e0 + 0x1c) = uVar50;
    *(uint *)(ppuStack_e0 + 4) = uVar52;
    *(uint *)((long)ppuStack_e0 + 0x24) = uVar53;
    *(uint *)(ppuStack_e0 + 1) = uVar18;
    *(uint *)((long)ppuStack_e0 + 0xc) = uVar44;
    *(uint *)(ppuStack_e0 + 2) = uStack_b8;
    *(uint *)((long)ppuStack_e0 + 0x14) = uStack_b4;
    *ppuStack_e0 = (undefined *)0x1;
LAB_001a4bbd:
    ppuVar21 = (undefined **)
               _ZN4core3ptr51drop_in_place_LT_uu_expr__syntax_tree__NumOrStr_GT_17hed5f1ee52967d14eE
                         (param_4);
    return ppuVar21;
  case 9:
    uStack_a8 = (undefined **)CONCAT71(uVar26,bVar15 + 0x48);
    goto code_r0x001a5791;
  case 10:
switchD_001a448d_caseD_a:
    pbVar25 = (byte *)((long)puVar27 + 0xf);
    bVar42 = *pbVar25;
    bVar15 = *pbVar25 + (byte)ppuStack_e0;
    *pbVar25 = bVar15 + bVar39;
    *piVar35 = *piVar35 + (int)ppuStack_e0 +
               (uint)(CARRY1(bVar42,(byte)ppuStack_e0) || CARRY1(bVar15,bVar39));
    local_88 = (undefined **)0x0;
    pbStack_f0 = (byte *)0x1a5cb3;
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd3e63ca5919932edE
              (&local_e8,&local_a0,param_2 & 0xffffffff,&local_88);
    goto LAB_001a5cfd;
  case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc:
switchD_001a448d_caseD_c:
    *(uint *)(param_5 + -0x39) = (*(int *)(param_5 + -0x39) - param_6) - (uint)bVar39;
    pcVar24 = (char *)((ulong)ppuStack_e0 & 0xffffffffffffff60);
    *pcVar24 = *pcVar24 + (char)pcVar24;
    *pcVar24 = *pcVar24 + (char)pcVar24;
    pbStack_f0 = (byte *)0x1a5891;
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd3e63ca5919932edE
              (&local_e8,&local_a0,param_2 & 0xffffffff,&local_88);
LAB_001a5cfd:
    pbStack_f0 = (byte *)0x1a5d05;
    _ZN4core3ptr128drop_in_place_LT_core__option__Option_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT__GT_17h00a86d471ef57dacE
              (&local_e8);
LAB_001a5783:
    if (uStack_a8 == (undefined **)0x0) {
      pbStack_f0 = (byte *)0x1a5edf;
      _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6remove17h99c8b623889323eaE
                (&local_88,&local_a0,*(undefined4 *)(in_stack_00000058 + 0x20));
      if ((uint)local_88 == 2) {
        pbStack_f0 = (byte *)0x1a607a;
        (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00251a10)
                  (&PTR_s_src_uu_expr_src_syntax_tree_rs_0024a978);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uStack_c0[4] = (undefined *)CONCAT44(iStack_64,local_68);
      *(int *)(uStack_c0 + 2) = local_78;
      *(int *)((long)uStack_c0 + 0x14) = iStack_74;
      *(uint *)(uStack_c0 + 3) = uStack_70;
      *(uint *)((long)uStack_c0 + 0x1c) = uStack_6c;
      *(uint *)uStack_c0 = (uint)local_88;
      *(int *)((long)uStack_c0 + 4) = local_88._4_4_;
      *(uint *)(uStack_c0 + 1) = uStack_80;
      *(uint *)((long)uStack_c0 + 0xc) = uStack_7c;
      pbStack_f0 = (byte *)0x1a5f16;
      _ZN4core3ptr154drop_in_place_LT_alloc__collections__btree__map__BTreeMap_LT_u32_C_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT__GT_17h5aab3143cda1a591E
                (&local_a0);
      pbStack_f0 = (byte *)0x1a6056;
      _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_u64_GT__GT_17h8b6941f1ad84c071E
                (CONCAT44(uStack_b4,uStack_b8),uStack_b0);
      return uStack_c0;
    }
code_r0x001a5791:
    ppuVar21 = (undefined **)((long)uStack_a8 + -1);
    pbVar25 = (byte *)((long)uStack_a8 + -1);
    puVar34 = (uint *)0x0;
    uStack_a8 = ppuVar21;
    ppuVar13 = local_88;
    if ((unaff_R12 + *(ulong *)uStack_b0[(long)pbVar25]) - 1 < 4) {
      puVar34 = (uint *)(*(ulong *)uStack_b0[(long)pbVar25] ^ unaff_R12);
    }
code_r0x001a57c4:
    local_88 = ppuVar13;
                    /* WARNING: Could not recover jumptable at 0x001a57d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar21 = (undefined **)
               (*(code *)((long)&switchD_001a5771::switchdataD_0011ca2c +
                         (long)(int)(&switchD_001a5771::switchdataD_0011ca2c)[(long)puVar34]))();
    return ppuVar21;
  case 0xd:
    pbStack_f0 = (byte *)0x1a5bb5;
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd3e63ca5919932edE();
    pbStack_f0 = (byte *)0x1a5bbd;
    _ZN4core3ptr128drop_in_place_LT_core__option__Option_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT__GT_17h00a86d471ef57dacE
              (&local_e8);
    pbStack_f0 = (byte *)0x1a5bca;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E
              (&stack0xfffffffffffffff8);
    goto LAB_001a5783;
  case 0xe:
    return ppuStack_e0;
  case 0xf:
    local_98 = (undefined **)((ulong)ppuStack_e0 & 0xffffffffffffff48);
    *(char *)local_98 = *(char *)local_98 + (char)local_98;
    *(char *)local_98 = *(char *)local_98 + (char)local_98;
    puStack_90 = &switchD_001a448d::caseD_1b;
    local_88 = (undefined **)CONCAT71(local_88._1_7_,1);
    uStack_b0 = (undefined **)&local_a0;
    uStack_a8 = (undefined **)
                PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00251ab0
    ;
    ppuVar21 = &PTR_s_syntax_error__expecting_____inst_0024a9f0;
    break;
  case 0x10:
    if (-1 < (long)ppuStack_e0) {
      (&UNK_0011c995)[uVar22] = (&UNK_0011c995)[uVar22] + '\b';
      ppuStack_e0 = (undefined **)(ulong)(uVar17 - 0x8a59c);
    }
    goto code_r0x001a65c3;
  case 0x11:
    pcVar24 = (char *)(((ulong)piVar35 & 0xffffffff) - 0x73);
    *pcVar24 = *pcVar24 + '\b';
    pbVar25 = (byte *)(ulong)(iVar38 + 0xa43a8);
    ppbVar33 = (byte **)&local_e8;
    goto LAB_001a673e;
  case 0x12:
    goto switchD_001a448d_caseD_12;
  case 0x13:
    pcVar24 = (char *)((long)&UINT_0011c9cc + uVar22 + 3);
    *pcVar24 = (*pcVar24 + -8) - bVar39;
    local_98 = (undefined **)((ulong)ppuStack_e0 & 0xffffffffffffff48);
    *(char *)local_98 = *(char *)local_98 + (char)local_98;
    *(char *)local_98 = *(char *)local_98 + (char)local_98;
    puStack_90 = &switchD_001a448d::caseD_1b;
code_r0x001a668e:
    local_88 = (undefined **)CONCAT71(local_88._1_7_,1);
    uStack_b0 = (undefined **)&local_a0;
    goto code_r0x001a6698;
  case 0x14:
    uStack_b0 = (undefined **)((ulong)ppuStack_e0 & 0xffffffffffffff48);
code_r0x001a6698:
    uStack_a8 = (undefined **)
                PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00251ab0
    ;
    ppuVar21 = &PTR_s_syntax_error__missing_argument_a_0024a9d0;
    break;
  case 0x15:
    ppuVar21 = (undefined **)
               (*(code *)
                 PTR__ZN57__LT_core__fmt__Formatter_u20_as_u20_core__fmt__Write_GT_9write_str17h7dbec3f69c4ad810E_00251878
               )(puVar34,
                 "non-integer argumentmissing operandInvalid regex expressionUnmatched ( or \\(Unmatched ) or \\), "
                 ,0x14);
    return ppuVar21;
  case 0x16:
    pbVar25 = (byte *)CONCAT71(uVar26,bVar15 | *(byte *)ppuStack_e0);
    ppbVar33 = (byte **)&local_e8;
    goto LAB_001a673e;
  case 0x17:
switchD_001a448d_caseD_17:
    *(int *)ppuStack_e0 = *(int *)ppuStack_e0 + (int)ppuStack_e0;
    *(byte *)((long)ppuStack_e0 + -0x73) = *(byte *)((long)ppuStack_e0 + -0x73) + (char)puVar27;
    pbVar25 = (byte *)(ulong)((int)ppuStack_e0 + 0xa43e0);
    ppbVar33 = &pbStack_f0;
    pbStack_f0 = extraout_RDX;
LAB_001a673e:
    ppuStack_e0 = ppuVar11;
    *(byte **)((long)ppbVar33 + 8) = pbVar25;
    *(undefined8 *)((long)ppbVar33 + 0x10) = 1;
    *(undefined8 *)((long)ppbVar33 + 0x18) = 8;
    *(undefined8 *)((long)ppbVar33 + 0x20) = 0;
    *(undefined8 *)((long)ppbVar33 + 0x28) = 0;
    goto LAB_001a675d;
  case 0x18:
    ppuVar21 = &PTR_s_syntax_error__expecting_____afte_0024a9e0;
    uStack_a8 = ppuStack_e0;
    break;
  case 0x19:
    local_98 = (undefined **)((ulong)ppuStack_e0 & 0xffffffffffffff48);
    *(char *)local_98 = *(char *)local_98 + (char)local_98;
    *(char *)local_98 = *(char *)local_98 + (char)local_98;
    goto switchD_001a448d_caseD_12;
  case 0x1a:
    uStack_a8 = (undefined **)CONCAT44(uStack_cc,uVar17);
    goto switchD_001a40b6_caseD_1d;
  case 0x1b:
    LOCK();
    uVar1 = *(undefined4 *)(extraout_RDX + 8);
    *(int *)(extraout_RDX + 8) = iVar38;
    piVar35 = (int *)CONCAT44((int)((ulong)piVar35 >> 0x20),uVar1);
    UNLOCK();
    pcVar24 = (char *)((param_2 & 0xffffffff) + 0x7b);
    *pcVar24 = *pcVar24 + -0x36;
    *(byte *)ppuStack_e0 = *(byte *)ppuStack_e0 | bVar15;
    uVar17 = uVar17 | 0x4e00087b;
    pbVar25 = (byte *)(ulong)uVar17;
    pbVar19 = pbVar25;
    if ((POPCOUNT(uVar17 & 0xff) & 1U) == 0) {
      cVar31 = (char)param_1 + '\b';
      param_1 = (char *)CONCAT71((int7)((ulong)param_1 >> 8),cVar31);
      if ((POPCOUNT(cVar31) & 1U) == 0) {
        bVar40 = SCARRY1(cRam000000007911d2a6,-0x36);
        cRam000000007911d2a6 = cRam000000007911d2a6 + -0x36;
        bVar39 = cRam000000007911d2a6 < '\0';
        goto code_r0x0011ca29;
      }
      cVar31 = (char)(uVar17 >> 8);
      cVar28 = cVar31 + -0x36;
      puVar27 = (uint *)CONCAT62(0x11,CONCAT11(cVar28,8));
      pbVar20 = extraout_RDX;
      if (SCARRY1(cVar31,-0x36) == cVar28 < '\0') goto code_r0x0011ca1f;
    }
    else {
code_r0x0011ca1f:
      pcVar24 = (char *)((long)puVar27 + 0x2d00087d);
      cVar31 = *pcVar24;
      *pcVar24 = *pcVar24 + cVar16;
      pbVar20 = extraout_RDX;
      if (SCARRY1(cVar31,cVar16) == *pcVar24 < '\0') {
        *(char *)((long)puVar27 + -0x21fff76e) =
             *(char *)((long)puVar27 + -0x21fff76e) + (char)puVar27;
        pbVar19 = extraout_RDX;
        goto code_r0x0011ca35;
      }
    }
code_r0x0011ca27:
    pbVar25 = pbVar20;
    *(char *)((long)puVar27 + 0x7d) = *(char *)((long)puVar27 + 0x7d) + (char)((ulong)param_1 >> 8);
    bVar15 = (byte)pbVar19;
    *pbVar19 = *pbVar19 | bVar15;
    *pbVar19 = *pbVar19 | bVar15;
    *(int *)(pbVar25 + -0x6d21fff8) = (int)pbVar25;
    *pbVar19 = *pbVar19 | bVar15;
    ppbVar32 = &pbStack_f0;
    pbStack_f0 = (byte *)0xffffffffffffff8e;
code_r0x0011ca3a:
    bVar15 = (byte)pbVar19;
    *pbVar19 = *pbVar19 | bVar15;
    uRam3300089b37000891 = SUB84(pbVar19,0);
    *(ulong *)((long)ppbVar32 + -8) =
         (ulong)(in_NT & 1) * 0x4000 | (ulong)(bVar42 & 1) * 0x400 | (ulong)(in_IF & 1) * 0x200 |
         (ulong)(in_TF & 1) * 0x100 | (ulong)((char)*pbVar19 < '\0') * 0x80 |
         (ulong)(*pbVar19 == 0) * 0x40 | (ulong)(in_AF & 1) * 0x10 |
         (ulong)((POPCOUNT(*pbVar19) & 1U) == 0) * 4 | (ulong)(in_ID & 1) * 0x200000 |
         (ulong)(in_VIP & 1) * 0x100000 | (ulong)(in_VIF & 1) * 0x80000 |
         (ulong)(in_AC & 1) * 0x40000;
    *pbVar19 = *pbVar19 | bVar15;
    *pbVar19 = *pbVar19 | bVar15;
    *pbVar19 = *pbVar19 | bVar15;
    bVar30 = (byte)((ulong)pbVar25 >> 8);
    *param_1 = *param_1 + bVar30;
    bVar41 = (*(ulong *)((long)ppbVar32 + -8) & 0x400) != 0;
    *pbVar19 = *pbVar19 | bVar15;
    puVar27 = puVar34 + (ulong)bVar41 * -2 + 1;
    uVar18 = *puVar34;
    pbVar20 = (byte *)(ulong)uVar18;
    bVar42 = (byte)uVar18;
    *pbVar20 = *pbVar20 | bVar42;
    *(int *)(pbVar20 + 0xdd9b819b) = -*(int *)(pbVar20 + 0xdd9b819b);
    bVar15 = (byte)(uVar18 >> 8);
    cRam00000000d5001136 = cRam00000000d5001136 + bVar15;
    *pbVar20 = *pbVar20 + bVar42;
    pbVar19 = pbVar20 + 0x72;
    *pbVar19 = *pbVar19 + (char)pbVar25;
    bVar40 = *pbVar19 == 0;
    bVar39 = (long)(int)((long)(int)puVar27[0x1d] * 0x6c656820) !=
             (long)(int)puVar27[0x1d] * 0x6c656820;
    uVar29 = SUB82(pbVar25,0);
    if (bVar39) {
      out(*puVar27,uVar29);
      if (!bVar39) goto code_r0x0011cb1a;
      if ((bVar39) || (!bVar39 && !bVar40)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (!bVar39 && !bVar40) {
        piVar36 = piVar35 + (ulong)bVar41 * -2 + 1;
        iVar38 = in(uVar29);
        *piVar35 = iVar38;
        out(puVar27[(ulong)bVar41 * -2 + 1],uVar29);
        if (bVar39) {
          *pbVar20 = *pbVar20 + bVar42;
          *pbVar20 = *pbVar20 + bVar42;
          cRam00000000d500089b = cRam00000000d500089b + bVar42;
          *pbVar20 = *pbVar20 + bVar42;
          *pbVar20 = *pbVar20 + bVar42;
        }
        else if (bVar40) {
          *(byte *)((long)piVar36 + 0x66) = *(byte *)((long)piVar36 + 0x66) & 8;
          pbVar25 = pbVar25 + 0x6f;
          *pbVar25 = *pbVar25 & bVar15;
          if (*pbVar25 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          goto code_r0x0011cb37;
        }
        *pbVar20 = *pbVar20 + bVar42;
code_r0x0011cb37:
        bVar39 = CARRY1(uRam00000000d500090d._1_1_,bVar15);
        cVar16 = uRam00000000d500090d._1_1_ + bVar15;
        uRam00000000d500090d = CONCAT11(cVar16,(undefined)uRam00000000d500090d);
        if (!bVar39) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (!bVar39) {
          uVar2 = in(uVar29);
          *(undefined *)piVar36 = uVar2;
          *(byte **)((ulong)(uint)(*(int *)(pbVar20 +
                                           ((long)piVar36 + (ulong)bVar41 * -2 + 1) * 2 + 0x20) *
                                  0x4143203c) - 8) = pbVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (!bVar39) {
          out(*(undefined4 *)((int)(puVar27 + (ulong)bVar41 * -2 + 1) + 4 + (uint)bVar41 * -8),
              uVar29);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar39) {
          lVar5 = (long)*(int *)(in_GS_OFFSET + ((int)param_1 + 0x74)) * 0x732f7972;
          if ((int)lVar5 != lVar5) {
            *(undefined8 *)((long)ppbVar32 + -8) = 0x2f656d6f;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      out(*(undefined2 *)puVar27,uVar29);
      if (!bVar39) {
        if (bVar40) {
          uVar18 = uVar18 + 0x505;
          *(char *)(ulong)uVar18 = *(char *)(ulong)uVar18 + (char)uVar18;
          uVar2 = in(uVar29);
          *(undefined *)piVar35 = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[in_GS_OFFSET + 0x75] = param_1[in_GS_OFFSET + 0x75] & bVar30;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (!bVar39) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar38 = in(uVar29);
      *piVar35 = iVar38;
      iVar38 = in(uVar29);
      piVar35[(ulong)bVar41 * -2 + 1] = iVar38;
    }
    if (bVar39) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar20 = *pbVar20 + bVar42;
code_r0x0011cb1a:
    *pbVar20 = *pbVar20 + bVar42;
    *pbVar20 = *pbVar20 + bVar42;
    *pbVar20 = *pbVar20 + bVar42;
    *pbVar20 = *pbVar20 | bVar42;
    *pbVar20 = *pbVar20 + bVar42;
    *pbVar20 = *pbVar20 + bVar42;
    *pbVar20 = *pbVar20 + bVar42;
    *pbVar20 = *pbVar20 + bVar42;
    *pbVar20 = *pbVar20 + bVar42;
    *pbVar20 = *pbVar20 + bVar42;
    *pbVar20 = *pbVar20 + bVar42;
    *(uint *)pbVar20 = *(int *)pbVar20 + uVar18;
    *pbVar20 = *pbVar20 + bVar42;
    *pbVar20 = *pbVar20 + bVar42;
    *pbVar20 = *pbVar20 + bVar42;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
switchD_001a40b6_caseD_22:
  local_d8._0_8_ = &DAT_00000001;
  uStack_c0 = (undefined **)0x0;
  unique0x00004b00 = (undefined **)&uStack_b0;
  local_c8 = 1;
  ppbVar33 = (byte **)&local_e8;
  ppuStack_e0 = ppuVar21;
LAB_001a675d:
  uVar3 = *(undefined8 *)puVar34;
  uVar4 = *(undefined8 *)(puVar34 + 2);
  *(undefined8 *)((long)ppbVar33 + -8) = 0x1a676e;
  ppuVar21 = (undefined **)
             _ZN4core3fmt9Formatter9write_fmt17h80c932efe9b76eb7E
                       (uVar3,uVar4,(undefined *)((long)ppbVar33 + 8));
  return ppuVar21;
switchD_001a448d_caseD_12:
  puStack_90 = &switchD_001a448d::caseD_1b;
  local_88 = (undefined **)CONCAT71(local_88._1_7_,1);
  uStack_b0 = (undefined **)&local_a0;
  ppuVar13 = local_88;
code_r0x001a65a1:
  local_88 = ppuVar13;
  uStack_a8 = (undefined **)
              PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00251ab0
  ;
switchD_001a40b6_caseD_1d:
  ppuVar21 = &PTR_s_syntax_error__unexpected_argumen_0024a9c0;
  goto switchD_001a40b6_caseD_22;
LAB_001a4c8e:
  pbStack_f0 = (byte *)0x1a4cb2;
  (*(code *)PTR__ZN4onig5Regex12with_options17h89d1b975e89c8f9fE_00251a68)
            (&stack0x00000030,stack0xffffffffffffff30,local_c8,8,PTR_OnigSyntaxGrep_00251a60);
  pbStack_f0 = (byte *)0x1a4d65;
  _ZN4core3ptr32drop_in_place_LT_onig__Error_GT_17hf7fa5a0a586a9cf4E(&stack0x00000030);
  ppuStack_e0[1] = (undefined *)0x5;
  *ppuStack_e0 = (undefined *)0x1;
LAB_001a4e59:
  pbStack_f0 = (byte *)0x1a4e63;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E(local_d8);
LAB_001a4e63:
  pbStack_f0 = (byte *)0x1a4e70;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E(&local_48);
LAB_001a4e70:
  piVar35 = &iStack_60;
LAB_001a4e78:
  pbStack_f0 = (byte *)0x1a4e7d;
  ppuVar21 = (undefined **)
             _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E(piVar35);
  return ppuVar21;
}