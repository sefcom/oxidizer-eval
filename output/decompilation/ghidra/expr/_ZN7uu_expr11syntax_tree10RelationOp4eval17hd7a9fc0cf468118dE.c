/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0022f173) overlaps instruction at (ram,0x0022f172)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0022f7dd) */

byte * _ZN7uu_expr11syntax_tree10RelationOp4eval17hd7a9fc0cf468118dE
                 (byte *param_1,uint param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined7 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar18;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined ***pppuVar19;
  undefined ***pppuVar20;
  undefined ***pppuVar21;
  undefined ***pppuVar22;
  undefined ***pppuVar23;
  undefined ***pppuVar24;
  undefined ***pppuVar25;
  undefined ***pppuVar26;
  undefined ***pppuVar27;
  undefined ***pppuVar28;
  undefined8 unaff_RBP;
  undefined ***pppuVar29;
  undefined *puVar30;
  int *piVar31;
  undefined8 unaff_R15;
  byte bVar32;
  undefined **ppuVar33;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined auVar40 [16];
  int in_stack_00000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  long in_stack_000000a8;
  byte *pbStack_110;
  undefined **local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  int local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  int local_d0;
  undefined4 uStack_cc;
  undefined *in_stack_ffffffffffffff38;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **appuStack_78 [2];
  int local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  char *pcVar17;
  
  pppuVar29 = &local_108;
  pppuVar19 = &local_108;
  pppuVar20 = &local_108;
  pppuVar21 = &local_108;
  pppuVar25 = &local_108;
  pppuVar26 = &local_108;
  pppuVar27 = &local_108;
  pppuVar28 = &local_108;
  pppuVar22 = &local_108;
  pppuVar24 = &local_108;
  pppuVar23 = &local_108;
  pbStack_110 = (byte *)0x22e742;
  pbVar14 = (byte *)_ZN7uu_expr11syntax_tree7AstNode4eval17h0e7cef87b1c8bd3fE(&local_98,param_3);
  uStack_100 = (code *)uStack_88;
  local_f8 = uStack_80;
  ppuVar33 = local_f8;
  uStack_f0 = appuStack_78[0];
  ppuVar9 = uStack_f0;
  if (CONCAT44(uStack_94,local_98) != 0) {
    *(undefined ***)(param_1 + 0x18) = uStack_80;
    *(undefined ***)(param_1 + 0x20) = appuStack_78[0];
    *(ulong *)(param_1 + 8) = CONCAT44(uStack_8c,iStack_90);
    *(undefined ***)(param_1 + 0x10) = uStack_88;
    param_1[0] = 1;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    return pbVar14;
  }
  local_f8._0_4_ = SUB84(uStack_80,0);
  local_f8._4_4_ = (undefined4)((ulong)uStack_80 >> 0x20);
  uStack_f0._0_4_ = SUB84(appuStack_78[0],0);
  uStack_f0._4_4_ = (undefined4)((ulong)appuStack_78[0] >> 0x20);
  local_58 = (undefined4)local_f8;
  uStack_54 = local_f8._4_4_;
  uStack_50 = (undefined4)uStack_f0;
  uStack_4c = uStack_f0._4_4_;
  local_68 = iStack_90;
  uStack_64 = uStack_8c;
  uStack_60 = (code *)uStack_88;
                    /* try { // try from 0022e796 to 0022e7a2 has its CatchHandler @ 0022ec10 */
  pbStack_110 = (byte *)0x22e7a3;
  local_f8 = ppuVar33;
  uStack_f0 = ppuVar9;
  _ZN7uu_expr11syntax_tree7AstNode4eval17h0e7cef87b1c8bd3fE(&local_98,param_4);
  local_108 = (undefined **)CONCAT44(uStack_8c,iStack_90);
  uStack_100 = (code *)uStack_88;
  ppuVar33 = (undefined **)uStack_100;
  local_f8 = uStack_80;
  ppuVar9 = local_f8;
  uStack_f0 = appuStack_78[0];
  ppuVar10 = uStack_f0;
  uStack_100._0_4_ = (int)uStack_88;
  uStack_100._4_4_ = (undefined4)((ulong)uStack_88 >> 0x20);
  uStack_100 = (code *)ppuVar33;
  if (CONCAT44(uStack_94,local_98) != 0) {
    *(undefined ***)(param_1 + 0x18) = uStack_80;
    *(undefined ***)(param_1 + 0x20) = appuStack_78[0];
    *(int *)(param_1 + 8) = iStack_90;
    *(undefined4 *)(param_1 + 0xc) = uStack_8c;
    *(int *)(param_1 + 0x10) = (int)uStack_100;
    *(undefined4 *)(param_1 + 0x14) = uStack_100._4_4_;
    param_1[0] = 1;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    goto LAB_0022eb43;
  }
  local_f8._0_4_ = SUB84(uStack_80,0);
  local_f8._4_4_ = (undefined4)((ulong)uStack_80 >> 0x20);
  uStack_f0._0_4_ = SUB84(appuStack_78[0],0);
  uStack_f0._4_4_ = (undefined4)((ulong)appuStack_78[0] >> 0x20);
  local_38 = (undefined4)local_f8;
  uStack_34 = local_f8._4_4_;
  uStack_30 = (undefined4)uStack_f0;
  uStack_2c = uStack_f0._4_4_;
  local_48 = iStack_90;
  uStack_44 = uStack_8c;
  iStack_40 = (int)uStack_100;
  uStack_3c = uStack_100._4_4_;
  uVar3 = (undefined7)((ulong)param_4 >> 8);
                    /* try { // try from 0022e7fa to 0022e80b has its CatchHandler @ 0022ebf1 */
  pbStack_110 = (byte *)0x22e80c;
  uVar35 = (undefined4)local_f8;
  uVar37 = local_f8._4_4_;
  uVar38 = (undefined4)uStack_f0;
  uVar39 = uStack_f0._4_4_;
  local_f8 = ppuVar9;
  uStack_f0 = ppuVar10;
  _ZN7uu_expr11syntax_tree8NumOrStr9to_bigint17h057de6875f85a4e9E(&local_e8,&local_68);
                    /* try { // try from 0022e80f to 0022e81e has its CatchHandler @ 0022ebdf */
  pbStack_110 = (byte *)0x22e81f;
  ppuVar33 = (undefined **)
             _ZN7uu_expr11syntax_tree8NumOrStr9to_bigint17h057de6875f85a4e9E(&local_108);
  if ((local_e8 == -0x8000000000000000) || (local_108 == (undefined **)0x8000000000000000)) {
LAB_0022e864:
    uStack_88 = (undefined **)CONCAT44(uStack_54,local_58);
    uStack_80 = (undefined **)CONCAT44(uStack_4c,uStack_50);
    local_98 = local_68;
    uStack_94 = uStack_64;
    iStack_90 = (int)uStack_60;
    uStack_8c = uStack_60._4_4_;
    pbStack_110 = (byte *)0x22e896;
    _ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h2669c68487e16a4dE
              (&stack0xffffffffffffff38,&local_98);
    uStack_88 = (undefined **)CONCAT44(uStack_34,local_38);
    uStack_80 = (undefined **)CONCAT44(uStack_2c,uStack_30);
    local_98 = local_48;
    uStack_94 = uStack_44;
    iStack_90 = iStack_40;
    uStack_8c = uStack_3c;
                    /* try { // try from 0022e8b3 to 0022e8c1 has its CatchHandler @ 0022ebbd */
    pppuVar29 = (undefined ***)&local_b0;
    pbStack_110 = (byte *)0x22e8c2;
    uVar35 = local_38;
    uVar37 = uStack_34;
    uVar38 = uStack_30;
    uVar39 = uStack_2c;
    ppuVar33 = (undefined **)_ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h2669c68487e16a4dE()
    ;
    uVar16 = (ulong)(int)(&switchD_0022e8d4::caseD_13)[param_2 & 0xff];
    pbVar14 = (byte *)((long)&switchD_0022e8d4::caseD_13 + uVar16);
    cVar11 = (char)pbVar14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_2 & 0xff) {
    case 0:
                    /* try { // try from 0022e8ea to 0022e8ee has its CatchHandler @ 0022ebae */
      pbStack_110 = (byte *)0x22e8ef;
      cVar11 = _ZN108__LT_alloc__vec__Vec_LT_T_C_A1_GT__u20_as_u20_core__cmp__PartialOrd_LT_alloc__vec__Vec_LT_T_C_A2_GT__GT__GT_11partial_cmp17h1cebb42fe5dd0e5fE
                         (local_c0,local_b8,CONCAT44(uStack_a4,local_a8),
                          CONCAT44(uStack_9c,local_a0));
      bVar32 = cVar11 == -1;
      break;
    case 1:
code_r0x0022ea42:
      *(undefined8 *)((long)pppuVar21 + -8) = 0x22ea51;
      cVar11 = _ZN108__LT_alloc__vec__Vec_LT_T_C_A1_GT__u20_as_u20_core__cmp__PartialOrd_LT_alloc__vec__Vec_LT_T_C_A2_GT__GT__GT_11partial_cmp17h1cebb42fe5dd0e5fE
                         ();
      bVar32 = (byte)(cVar11 - 3U) < 0xfe;
      pppuVar22 = pppuVar21;
      break;
    case 2:
switchD_0022e848_caseD_9:
      pbStack_110 = (byte *)0x22ea13;
      bVar32 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17he097164911c4a276E
                         ();
      pppuVar22 = &local_108;
      break;
    case 3:
code_r0x0022ea21:
      *(undefined8 *)((long)pppuVar20 + -8) = 0x22ea30;
      bVar32 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17he097164911c4a276E
                         ();
      bVar32 = bVar32 ^ 1;
      pppuVar22 = pppuVar20;
      break;
    case 4:
code_r0x0022e9e3:
                    /* try { // try from 0022e9ed to 0022ea6f has its CatchHandler @ 0022ebae */
      *(undefined8 *)((long)pppuVar19 + -8) = 0x22e9f2;
      cVar11 = _ZN108__LT_alloc__vec__Vec_LT_T_C_A1_GT__u20_as_u20_core__cmp__PartialOrd_LT_alloc__vec__Vec_LT_T_C_A2_GT__GT__GT_11partial_cmp17h1cebb42fe5dd0e5fE
                         ();
      bVar32 = cVar11 == '\x01';
      pppuVar22 = pppuVar19;
      break;
    case 5:
      pbStack_110 = (byte *)0x22ea70;
      bVar32 = _ZN108__LT_alloc__vec__Vec_LT_T_C_A1_GT__u20_as_u20_core__cmp__PartialOrd_LT_alloc__vec__Vec_LT_T_C_A2_GT__GT__GT_11partial_cmp17h1cebb42fe5dd0e5fE
                         (local_c0,local_b8,CONCAT44(uStack_a4,local_a8),
                          CONCAT44(uStack_9c,local_a0));
      bVar32 = bVar32 < 2;
      pppuVar22 = &local_108;
      break;
    case 6:
      *pbVar14 = *pbVar14;
      pcVar17 = (char *)((long)&UINT_0015f060 + uVar16 + 3);
      *pcVar17 = *pcVar17 + cVar11;
                    /* WARNING: Could not emulate address calculation at 0x0022edaa */
                    /* WARNING: Treating indirect jump as call */
      pbVar14 = (byte *)(*(code *)((long)&switchD_0022edb1::caseD_d +
                                  (long)(int)(&switchD_0022edb1::caseD_d)[(long)pbVar14]))();
      return pbVar14;
    case 7:
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      uVar34 = extraout_XMM0_Dc_00;
      uVar36 = extraout_XMM0_Dd_00;
LAB_0022ed74:
      local_48 = local_48 - (int)pbVar14;
      *(undefined4 *)(param_1 + 0x18) = uVar35;
      *(undefined4 *)(param_1 + 0x1c) = uVar37;
      *(undefined4 *)(param_1 + 0x20) = uVar38;
      *(undefined4 *)(param_1 + 0x24) = uVar39;
      *(undefined ***)(param_1 + 8) = ppuVar33;
      *(undefined4 *)(param_1 + 0x10) = uVar34;
      *(undefined4 *)(param_1 + 0x14) = uVar36;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      pbStack_110 = (byte *)0x22eec9;
      local_38 = uVar35;
      uStack_34 = uVar37;
      uStack_30 = uVar38;
      uStack_2c = uVar39;
      _ZN4core3ptr47drop_in_place_LT_num_bigint__bigint__BigInt_GT_17h4ffd1c0c3ebf756bE(&uStack_88);
      pbStack_110 = (byte *)0x22ed81;
      pbVar14 = (byte *)_ZN4core3ptr47drop_in_place_LT_num_bigint__bigint__BigInt_GT_17h4ffd1c0c3ebf756bE
                                  (&local_68);
      return pbVar14;
    case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 9:
      pppuVar26 = (undefined ***)&pbStack_110;
      pbStack_110 = pbVar14;
      uVar34 = extraout_XMM0_Dc_00;
      uVar36 = extraout_XMM0_Dd_00;
switchD_0022e848_caseD_f:
      *(char *)((long)pppuVar26 + 0x80) = *(char *)((long)pppuVar26 + 0x80) - (char)pbVar14;
      *(undefined4 *)((long)pppuVar26 + 0x60) = *(undefined4 *)((long)pppuVar26 + 0x90);
      *(undefined4 *)((long)pppuVar26 + 100) = *(undefined4 *)((long)pppuVar26 + 0x94);
      *(undefined4 *)((long)pppuVar26 + 0x68) = *(undefined4 *)((long)pppuVar26 + 0x98);
      *(undefined4 *)((long)pppuVar26 + 0x6c) = *(undefined4 *)((long)pppuVar26 + 0x9c);
      *(undefined ***)((long)pppuVar26 + 0x50) = ppuVar33;
      *(undefined4 *)((long)pppuVar26 + 0x58) = uVar34;
      *(undefined4 *)((long)pppuVar26 + 0x5c) = uVar36;
      *(undefined8 *)((long)pppuVar26 + -8) = 0x22ee66;
      pbVar14 = (byte *)_ZN10num_bigint6bigint14multiplication78__LT_impl_u20_core__ops__arith__Mul_u20_for_u20_num_bigint__bigint__BigInt_GT_3mul17hd8f08eeb5e568796E
                                  (pppuVar26,(undefined *)((long)pppuVar26 + 0x20),
                                   (undefined *)((long)pppuVar26 + 0x50));
      goto LAB_0022ef14;
    case 10:
      pppuVar25 = (undefined ***)&pbStack_110;
      pbStack_110 = pbVar14;
      uVar34 = extraout_XMM0_Dc_00;
      uVar36 = extraout_XMM0_Dd_00;
      goto switchD_0022e848_caseD_10;
    case 0xb:
      pcVar1 = (code *)swi(3);
      pbVar14 = (byte *)(*pcVar1)();
      return pbVar14;
    case 0xc:
switchD_0022e8d4_caseD_c:
      ((long *)pppuVar28)[-1] = 0x22f199;
      pbVar14 = (byte *)_ZN7uu_expr11syntax_tree7AstNode4eval17h0e7cef87b1c8bd3fE();
      ((long *)pppuVar28)[8] = ((long *)pppuVar28)[1];
      ((long *)pppuVar28)[9] = ((long *)pppuVar28)[2];
      ((long *)pppuVar28)[10] = ((long *)pppuVar28)[3];
      ((long *)pppuVar28)[0xb] = ((long *)pppuVar28)[4];
      if (*pppuVar28 != (undefined **)0x0) {
        uStack_100._0_4_ = *(int *)((long *)pppuVar28 + 8);
        uStack_100._4_4_ = *(undefined4 *)((long)pppuVar28 + 0x44);
        local_f8._0_4_ = *(undefined4 *)((long *)pppuVar28 + 9);
        local_f8._4_4_ = *(undefined4 *)((long)pppuVar28 + 0x4c);
        uStack_f0._0_4_ = *(undefined4 *)((long *)pppuVar28 + 10);
        uStack_f0._4_4_ = *(undefined4 *)((long)pppuVar28 + 0x54);
        local_e8._0_4_ = *(int *)((long *)pppuVar28 + 0xb);
        local_e8._4_4_ = *(undefined4 *)((long)pppuVar28 + 0x5c);
LAB_0022f200:
        *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_f0;
        *(undefined4 *)(param_1 + 0x1c) = uStack_f0._4_4_;
        *(int *)(param_1 + 0x20) = (int)local_e8;
        *(undefined4 *)(param_1 + 0x24) = local_e8._4_4_;
        *(int *)(param_1 + 8) = (int)uStack_100;
        *(undefined4 *)(param_1 + 0xc) = uStack_100._4_4_;
        *(undefined4 *)(param_1 + 0x10) = (undefined4)local_f8;
        *(undefined4 *)(param_1 + 0x14) = local_f8._4_4_;
        param_1[0] = 1;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        return pbVar14;
      }
      *(undefined4 *)((long *)pppuVar28 + 0x12) = *(undefined4 *)((long *)pppuVar28 + 10);
      *(undefined4 *)((long)pppuVar28 + 0x94) = *(undefined4 *)((long)pppuVar28 + 0x54);
      *(undefined4 *)((long *)pppuVar28 + 0x13) = *(undefined4 *)((long *)pppuVar28 + 0xb);
      *(undefined4 *)((long)pppuVar28 + 0x9c) = *(undefined4 *)((long)pppuVar28 + 0x5c);
      *(undefined4 *)((long *)pppuVar28 + 0x10) = *(undefined4 *)((long *)pppuVar28 + 8);
      *(undefined4 *)((long)pppuVar28 + 0x84) = *(undefined4 *)((long)pppuVar28 + 0x44);
      *(undefined4 *)((long *)pppuVar28 + 0x11) = *(undefined4 *)((long *)pppuVar28 + 9);
      *(undefined4 *)((long)pppuVar28 + 0x8c) = *(undefined4 *)((long)pppuVar28 + 0x4c);
      ((long *)pppuVar28)[-1] = 0x22f248;
      pbVar14 = (byte *)_ZN7uu_expr11syntax_tree9is_truthy17hbc2e5d0622d8ecb0E
                                  ((long *)pppuVar28 + 0x10);
      if ((char)pbVar14 != '\0') {
        lVar15 = ((long *)pppuVar28)[0x10];
        lVar7 = ((long *)pppuVar28)[0x11];
        lVar8 = ((long *)pppuVar28)[0x13];
        *(long *)(param_1 + 0x18) = ((long *)pppuVar28)[0x12];
        *(long *)(param_1 + 0x20) = lVar8;
        *(long *)(param_1 + 8) = lVar15;
        *(long *)(param_1 + 0x10) = lVar7;
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        return pbVar14;
      }
      ((long *)pppuVar28)[-1] = 0x22f372;
      _ZN7uu_expr11syntax_tree7AstNode4eval17h0e7cef87b1c8bd3fE(pppuVar28,CONCAT71(uVar3,1));
      ((long *)pppuVar28)[8] = ((long *)pppuVar28)[1];
      ((long *)pppuVar28)[9] = ((long *)pppuVar28)[2];
      ((long *)pppuVar28)[10] = ((long *)pppuVar28)[3];
      ((long *)pppuVar28)[0xb] = ((long *)pppuVar28)[4];
      if (*pppuVar28 == (undefined **)0x0) {
        *(undefined4 *)((long *)pppuVar28 + 0x18) = *(undefined4 *)((long *)pppuVar28 + 10);
        *(undefined4 *)((long)pppuVar28 + 0xc4) = *(undefined4 *)((long)pppuVar28 + 0x54);
        *(undefined4 *)((long *)pppuVar28 + 0x19) = *(undefined4 *)((long *)pppuVar28 + 0xb);
        *(undefined4 *)((long)pppuVar28 + 0xcc) = *(undefined4 *)((long)pppuVar28 + 0x5c);
        *(undefined4 *)((long *)pppuVar28 + 0x16) = *(undefined4 *)((long *)pppuVar28 + 8);
        *(undefined4 *)((long)pppuVar28 + 0xb4) = *(undefined4 *)((long)pppuVar28 + 0x44);
        *(undefined4 *)((long *)pppuVar28 + 0x17) = *(undefined4 *)((long *)pppuVar28 + 9);
        *(undefined4 *)((long)pppuVar28 + 0xbc) = *(undefined4 *)((long)pppuVar28 + 0x4c);
        ((long *)pppuVar28)[-1] = 0x22f5b9;
        cVar11 = _ZN7uu_expr11syntax_tree9is_truthy17hbc2e5d0622d8ecb0E((long *)pppuVar28 + 0x16);
        if (cVar11 == '\0') {
          ((long *)pppuVar28)[-1] = 0x22f74a;
          _ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17hb616907385e333f7E
                    (pppuVar28,0);
          uVar35 = *(undefined4 *)pppuVar28;
          uVar37 = *(undefined4 *)((long)pppuVar28 + 4);
          uVar38 = *(undefined4 *)((long *)pppuVar28 + 1);
          uVar39 = *(undefined4 *)((long)pppuVar28 + 0xc);
          uVar34 = *(undefined4 *)((long)pppuVar28 + 0x14);
          uVar36 = *(undefined4 *)((long *)pppuVar28 + 3);
          uVar4 = *(undefined4 *)((long)pppuVar28 + 0x1c);
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((long *)pppuVar28 + 2);
          *(undefined4 *)(param_1 + 0x1c) = uVar34;
          *(undefined4 *)(param_1 + 0x20) = uVar36;
          *(undefined4 *)(param_1 + 0x24) = uVar4;
          *(undefined4 *)(param_1 + 8) = uVar35;
          *(undefined4 *)(param_1 + 0xc) = uVar37;
          *(undefined4 *)(param_1 + 0x10) = uVar38;
          *(undefined4 *)(param_1 + 0x14) = uVar39;
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          ((long *)pppuVar28)[-1] = 0x22f76f;
          _ZN4core3ptr51drop_in_place_LT_uu_expr__syntax_tree__NumOrStr_GT_17h033ac62706effd52E
                    ((long *)pppuVar28 + 0x16);
        }
        else {
          uVar35 = *(undefined4 *)((long *)pppuVar28 + 0x16);
          uVar37 = *(undefined4 *)((long)pppuVar28 + 0xb4);
          uVar38 = *(undefined4 *)((long *)pppuVar28 + 0x17);
          uVar39 = *(undefined4 *)((long)pppuVar28 + 0xbc);
          lVar15 = ((long *)pppuVar28)[0x19];
          *(long *)(param_1 + 0x18) = ((long *)pppuVar28)[0x18];
          *(long *)(param_1 + 0x20) = lVar15;
          *(undefined4 *)(param_1 + 8) = uVar35;
          *(undefined4 *)(param_1 + 0xc) = uVar37;
          *(undefined4 *)(param_1 + 0x10) = uVar38;
          *(undefined4 *)(param_1 + 0x14) = uVar39;
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
        }
      }
      else {
        uVar35 = *(undefined4 *)((long *)pppuVar28 + 8);
        uVar37 = *(undefined4 *)((long)pppuVar28 + 0x44);
        uVar38 = *(undefined4 *)((long *)pppuVar28 + 9);
        uVar39 = *(undefined4 *)((long)pppuVar28 + 0x4c);
        lVar15 = ((long *)pppuVar28)[0xb];
        *(long *)(param_1 + 0x18) = ((long *)pppuVar28)[10];
        *(long *)(param_1 + 0x20) = lVar15;
        *(undefined4 *)(param_1 + 8) = uVar35;
        *(undefined4 *)(param_1 + 0xc) = uVar37;
        *(undefined4 *)(param_1 + 0x10) = uVar38;
        *(undefined4 *)(param_1 + 0x14) = uVar39;
        param_1[0] = 1;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
      }
LAB_0022f3aa:
      puVar30 = (undefined *)((long)pppuVar28 + 0x80);
LAB_0022f3b2:
      *(undefined8 *)((long)pppuVar28 + -8) = 0x22f3b7;
      pbVar14 = (byte *)_ZN4core3ptr51drop_in_place_LT_uu_expr__syntax_tree__NumOrStr_GT_17h033ac62706effd52E
                                  (puVar30);
      return pbVar14;
    case 0xd:
      *(byte *)pppuVar29 = (*(byte *)pppuVar29 + 0xac) - (0xffffffffffea0fab < uVar16);
      in_stack_00000018 = in_stack_00000018 - (int)pbVar14;
      uVar18 = extraout_RDX_00;
switchD_0022e848_caseD_13:
      pbStack_110 = (byte *)0x22f076;
      pbVar14 = (byte *)_ZN7uu_expr11syntax_tree7AstNode4eval17h0e7cef87b1c8bd3fE
                                  ((ulong)&local_108 & 0xffffffff,uVar18);
      in_stack_00000018 = (int)uStack_100;
      uStack000000000000001c = uStack_100._4_4_;
      in_stack_00000020 = (undefined4)local_f8;
      uStack0000000000000024 = local_f8._4_4_;
      in_stack_00000028 = (undefined4)uStack_f0;
      uStack000000000000002c = uStack_f0._4_4_;
      in_stack_00000030 = (int)local_e8;
      uStack0000000000000034 = local_e8._4_4_;
      if (local_108 == (undefined **)0x0) {
        pbStack_110 = &LAB_0022f286;
        _ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h2669c68487e16a4dE
                  (&stack0xffffffffffffffe8,&stack0x00000018);
        pbStack_110 = &LAB_0022f291;
        _ZN7uu_expr11syntax_tree7AstNode4eval17h0e7cef87b1c8bd3fE(&local_108,CONCAT71(uVar3,1));
        in_stack_00000038 = (int)uStack_100;
        uStack000000000000003c = uStack_100._4_4_;
        in_stack_00000040 = (undefined4)local_f8;
        uStack0000000000000044 = local_f8._4_4_;
        in_stack_00000048 = (undefined4)uStack_f0;
        uStack000000000000004c = uStack_f0._4_4_;
        in_stack_00000050 = (int)local_e8;
        uStack0000000000000054 = local_e8._4_4_;
        if (local_108 == (undefined **)0x0) {
          pbStack_110 = (byte *)0x22f3d4;
          _ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h2669c68487e16a4dE
                    (&stack0x00000000,&stack0x00000038);
          local_108 = &PTR_s___002a30a8;
          uStack_100 = (code *)&DAT_00000001;
          local_e8 = 0;
          local_f8 = (undefined **)&stack0xffffffffffffff38;
          uStack_f0 = (undefined **)&DAT_00000001;
          pbStack_110 = (byte *)0x22f425;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h082c899fe6c94410E
                    (&stack0x00000098,&local_108);
          local_38 = uStack0000000000000098;
          uStack_34 = uStack000000000000009c;
          uStack_30 = uStack00000000000000a0;
          uStack_2c = uStack00000000000000a4;
          lStack_28 = in_stack_000000a8;
          pbStack_110 = (byte *)0x22f461;
          _ZN4onig5Regex12with_options17h1d1b8e0979b80cdaE
                    (&stack0xffffffffffffff38,
                     CONCAT44(uStack00000000000000a4,uStack00000000000000a0),in_stack_000000a8,0,
                     OnigSyntaxGrep);
          if (&stack0x00000000 == (undefined *)0x8000000000000000) {
            uStack_60 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
            ;
            pbStack_110 = (byte *)0x22f491;
            lVar15 = _ZN4onig5Regex12captures_len17h72100434800fcce4E(0x7fffffffffffffa0);
            if (lVar15 == 0) {
              pbStack_110 = (byte *)0x22f79a;
              _ZN4onig5Regex4find17h4ab7093dbf371f0fE
                        (0x7fffffffffffffa8,0x7fffffffffffffa0,unaff_R15,unaff_RBP);
              pbStack_110 = (byte *)0x22f7ae;
              _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hd7cff6a23e23a786E
                        (&local_108,"0",1);
              local_b8 = local_f8;
              pbStack_110 = (byte *)0x22f7db;
              _ZN4core6option15Option_LT_T_GT_6map_or17h5217cb8d6b2f0b0fE
                        (0x7fffffffffffff78,0x7fffffffffffffa8,0x7fffffffffffff38);
            }
            else {
              pbStack_110 = (byte *)0x22f4bd;
              _ZN4onig4find29__LT_impl_u20_onig__Regex_GT_8captures17hf41029da913b76ccE
                        (0x7fffffffffffff38,0x7fffffffffffffa0,unaff_R15,unaff_RBP);
              local_d8 = CONCAT44(uStack_94,local_98);
              local_e8 = CONCAT44(uStack_a4,local_a8);
              local_e0 = local_a0;
              uStack_dc = uStack_9c;
              local_f8 = local_b8;
              uStack_f0 = (undefined **)CONCAT44(uStack_ac,local_b0);
              uStack_100 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
              ;
              pbStack_110 = (byte *)0x22f4f8;
              local_108 = (undefined **)register0x00000020;
              auVar40 = _ZN7uu_expr11syntax_tree8StringOp4eval28__u7b__u7b_closure_u7d__u7d_17h42abeb28d39ade43E
                                  (&local_108);
              if (auVar40._0_8_ == 0) {
                auVar40 = ZEXT816(1);
              }
              pbStack_110 = (byte *)0x22f7f7;
              _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hd7cff6a23e23a786E
                        (&local_108,auVar40._0_8_,auVar40._8_8_);
              appuStack_78[0] = local_f8;
              uStack_88 = local_108;
              uStack_80 = (undefined **)uStack_100;
            }
            *(undefined ***)(param_1 + 0x20) = appuStack_78[0];
            *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_88;
            *(undefined4 *)(param_1 + 0x14) = uStack_88._4_4_;
            *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_80;
            *(undefined4 *)(param_1 + 0x1c) = uStack_80._4_4_;
            param_1[8] = 0;
            param_1[9] = 0;
            param_1[10] = 0;
            param_1[0xb] = 0;
            param_1[0xc] = 0;
            param_1[0xd] = 0;
            param_1[0xe] = 0;
            param_1[0xf] = 0x80;
            param_1[0] = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            param_1[3] = 0;
            param_1[4] = 0;
            param_1[5] = 0;
            param_1[6] = 0;
            param_1[7] = 0;
            pbStack_110 = &LAB_0022f840;
            _ZN4core3ptr32drop_in_place_LT_onig__Regex_GT_17h86f48e8d3b727657E(0x7fffffffffffffa0);
            pbStack_110 = &LAB_0022f84d;
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2134d78e0f3082f1E
                      (0x7fffffffffffffc8);
            pbStack_110 = &LAB_0022f85a;
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2134d78e0f3082f1E
                      (0x8000000000000000);
          }
          else {
            local_f8 = local_b8;
            uStack_f0 = (undefined **)CONCAT44(uStack_ac,local_b0);
            uStack_100 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
            ;
            pbStack_110 = (byte *)0x22f68a;
            local_108 = (undefined **)register0x00000020;
            _ZN4core3ptr32drop_in_place_LT_onig__Error_GT_17h2d398d0896f7bfd6E(&local_108);
            param_1[8] = 5;
            param_1[9] = 0;
            param_1[10] = 0;
            param_1[0xb] = 0;
            param_1[0xc] = 0;
            param_1[0xd] = 0;
            param_1[0xe] = 0;
            param_1[0xf] = 0;
            param_1[0] = 1;
            param_1[1] = 0;
            param_1[2] = 0;
            param_1[3] = 0;
            param_1[4] = 0;
            param_1[5] = 0;
            param_1[6] = 0;
            param_1[7] = 0;
            pbStack_110 = &LAB_0022f6a6;
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2134d78e0f3082f1E(&local_38);
            pbStack_110 = (byte *)0x22f6b3;
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2134d78e0f3082f1E
                      (&stack0x00000000);
          }
        }
        else {
          *(undefined ***)(param_1 + 0x18) = uStack_f0;
          *(long *)(param_1 + 0x20) = local_e8;
          *(int *)(param_1 + 8) = (int)uStack_100;
          *(undefined4 *)(param_1 + 0xc) = uStack_100._4_4_;
          *(undefined4 *)(param_1 + 0x10) = (undefined4)local_f8;
          *(undefined4 *)(param_1 + 0x14) = local_f8._4_4_;
          param_1[0] = 1;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
        }
        pbStack_110 = (byte *)0x22f867;
        pbVar14 = (byte *)_ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2134d78e0f3082f1E
                                    (&stack0xffffffffffffffe8);
        return pbVar14;
      }
      goto LAB_0022f200;
    case 0xe:
switchD_0022e8d4_caseD_e:
      uVar35 = *(undefined4 *)((long)pppuVar27 + 0x80);
      uVar37 = *(undefined4 *)((long)pppuVar27 + 0x84);
      uVar38 = *(undefined4 *)((long)pppuVar27 + 0x88);
      uVar39 = *(undefined4 *)((long)pppuVar27 + 0x8c);
      uVar18 = *(undefined8 *)((long)pppuVar27 + 0x98);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)((long)pppuVar27 + 0x90);
      *(undefined8 *)(param_1 + 0x20) = uVar18;
      *(undefined4 *)(param_1 + 8) = uVar35;
      *(undefined4 *)(param_1 + 0xc) = uVar37;
      *(undefined4 *)(param_1 + 0x10) = uVar38;
      *(undefined4 *)(param_1 + 0x14) = uVar39;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      puVar30 = (undefined *)((long)pppuVar27 + 0xb0);
      pppuVar28 = pppuVar27;
      goto LAB_0022f3b2;
    case 0xf:
      *pbVar14 = *pbVar14 + cVar11;
switchD_0022e848_caseD_15:
      pbVar14 = (byte *)pppuVar29;
      pbStack_110 = (byte *)0x0;
      _ZN7uu_expr11syntax_tree6Parser5parse17hc48780c0aeff53f9E();
switchD_0022e848_caseD_17:
      return pbVar14;
    case 0x10:
switchD_0022e848_caseD_16:
      pbStack_110 = (byte *)0x22fc54;
      _ZN7uu_expr11syntax_tree7AstNode4eval17h0e7cef87b1c8bd3fE(&uStack_100);
      uVar35 = SUB84(uStack_f0,0);
      uVar37 = uStack_f0._4_4_;
      ppuVar33 = local_f8;
      if ((undefined **)uStack_100 != (undefined **)0x0) {
LAB_0022fc8a:
        *(int *)(param_1 + 0x18) = (int)local_e8;
        *(undefined4 *)(param_1 + 0x1c) = local_e8._4_4_;
        *(int *)(param_1 + 0x20) = local_e0;
        *(undefined4 *)(param_1 + 0x24) = uStack_dc;
        *(undefined ***)(param_1 + 8) = ppuVar33;
        *(undefined4 *)(param_1 + 0x10) = uVar35;
        *(undefined4 *)(param_1 + 0x14) = uVar37;
        param_1[0] = 1;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        return param_1;
      }
      pbStack_110 = (byte *)0x22fd26;
      _ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h2669c68487e16a4dE
                (&local_d8,&stack0xffffffffffffffe8);
      pbStack_110 = (byte *)0x22fd38;
      uVar18 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17hc7941fd67a47c62aE
                         (CONCAT44(uStack_cc,local_d0),
                          in_stack_ffffffffffffff38 + CONCAT44(uStack_cc,local_d0));
      pbStack_110 = (byte *)0x22fd45;
      _ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17hb616907385e333f7E
                (&local_b8,uVar18);
      *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_a4,local_a8);
      *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_9c,local_a0);
      *(undefined4 *)(param_1 + 8) = (undefined4)local_b8;
      *(undefined4 *)(param_1 + 0xc) = local_b8._4_4_;
      *(undefined4 *)(param_1 + 0x10) = local_b0;
      *(undefined4 *)(param_1 + 0x14) = uStack_ac;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      piVar31 = (int *)&local_d8;
      goto LAB_0022fe3a;
    case 0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x12:
      bVar32 = *(byte *)pppuVar29;
      DAT_8247c8348ffffff = cVar11;
      *(byte *)pppuVar29 = *(byte *)pppuVar29 + 0x54;
      cVar11 = (char)local_f8 + cVar11 + (0xab < bVar32);
      local_f8 = (undefined **)CONCAT71(local_f8._1_7_,cVar11);
      local_68 = (int)local_e8;
      uStack_64 = local_e8._4_4_;
      uVar35 = extraout_XMM0_Dc_00;
      uVar37 = extraout_XMM0_Dd_00;
      if (cVar11 != '\0') goto LAB_0022fc8a;
      pbStack_110 = (byte *)0x22fccf;
      appuStack_78[0] = ppuVar33;
      _ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h2669c68487e16a4dE(&iStack_90,appuStack_78)
      ;
      pbStack_110 = (byte *)0x22fcdd;
      _ZN7uu_expr11syntax_tree7AstNode4eval17h0e7cef87b1c8bd3fE
                (&uStack_100,*(undefined8 *)(CONCAT71(uVar3,1) + 0x10));
      local_58 = (undefined4)local_f8;
      uStack_54 = local_f8._4_4_;
      uStack_50 = (undefined4)uStack_f0;
      uStack_4c = uStack_f0._4_4_;
      local_48 = (int)local_e8;
      uStack_44 = local_e8._4_4_;
      iStack_40 = local_e0;
      uStack_3c = uStack_dc;
      if ((undefined **)uStack_100 == (undefined **)0x0) {
        pbStack_110 = (byte *)0x22fd7a;
        _ZN7uu_expr11syntax_tree8NumOrStr14eval_as_bigint17hba12e6d71c8187fcE(&local_b8,&local_58);
        if (local_b8 == (undefined **)0x0) {
          local_d0 = local_a0;
          uStack_cc = uStack_9c;
          if ((undefined **)CONCAT44(uStack_ac,local_b0) == (undefined **)0x8000000000000000)
          goto LAB_0022fde3;
          local_f8 = (undefined **)CONCAT44(uStack_a4,local_a8);
          uStack_f0 = (undefined **)CONCAT44(uStack_9c,local_a0);
          pbStack_110 = (byte *)0x22fdd9;
          uStack_100 = (code *)CONCAT44(uStack_ac,local_b0);
          local_e8 = CONCAT44(uStack_94,local_98);
          auVar40 = _ZN7uu_expr11syntax_tree7AstNode4eval28__u7b__u7b_closure_u7d__u7d_17he3a282c97ff7c67eE
                              (&uStack_100);
          lVar15 = auVar40._8_8_;
          if (auVar40._0_8_ == 0) goto LAB_0022fde3;
        }
        else {
          pbStack_110 = (byte *)0x22fd8c;
          _ZN4core3ptr96drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_uu_expr__ExprError_GT__GT_17hec85356ab7c1c7abE
                    (&local_b8);
LAB_0022fde3:
          lVar15 = 0;
        }
        pbStack_110 = (byte *)0x22fdf4;
        _ZN7uu_expr11syntax_tree7AstNode4eval17h0e7cef87b1c8bd3fE
                  (&uStack_100,*(undefined8 *)(CONCAT71(uVar3,1) + 0x18));
        local_38 = (undefined4)local_f8;
        uStack_34 = local_f8._4_4_;
        uStack_30 = (undefined4)uStack_f0;
        uStack_2c = uStack_f0._4_4_;
        lStack_28 = local_e8;
        if ((undefined **)uStack_100 != (undefined **)0x0) goto LAB_0022fe26;
        pbStack_110 = (byte *)0x22fe61;
        _ZN7uu_expr11syntax_tree8NumOrStr14eval_as_bigint17hba12e6d71c8187fcE(&local_b8,&local_38);
        if (local_b8 == (undefined **)0x0) {
          local_d0 = local_a0;
          uStack_cc = uStack_9c;
          if ((undefined **)CONCAT44(uStack_ac,local_b0) == (undefined **)0x8000000000000000)
          goto LAB_0022ff27;
          local_f8 = (undefined **)CONCAT44(uStack_a4,local_a8);
          uStack_f0 = (undefined **)CONCAT44(uStack_9c,local_a0);
          pbStack_110 = (byte *)0x22fec7;
          uStack_100 = (code *)CONCAT44(uStack_ac,local_b0);
          local_e8 = CONCAT44(uStack_94,local_98);
          auVar40 = _ZN7uu_expr11syntax_tree7AstNode4eval28__u7b__u7b_closure_u7d__u7d_17hb7c52e679da22dbeE
                              (&uStack_100);
          if (((auVar40._0_8_ == 0) || (lVar15 == 0)) || (auVar40._8_8_ == 0)) goto LAB_0022ff27;
          uStack_f0 = (undefined **)(lVar15 + -1);
          local_f8 = (undefined **)((long)uStack_80 + (long)uStack_88);
          uStack_100 = (code *)uStack_88;
          pbStack_110 = (byte *)0x22ff0f;
          local_e8 = auVar40._8_8_;
          _ZN95__LT_alloc__string__String_u20_as_u20_core__iter__traits__collect__FromIterator_LT_char_GT__GT_9from_iter17h47d68c55ae7506b8E
                    (&local_b8,&uStack_100);
          *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_a4,local_a8);
          *(undefined4 *)(param_1 + 0x10) = (undefined4)local_b8;
          *(undefined4 *)(param_1 + 0x14) = local_b8._4_4_;
          *(undefined4 *)(param_1 + 0x18) = local_b0;
          *(undefined4 *)(param_1 + 0x1c) = uStack_ac;
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[0xc] = 0;
          param_1[0xd] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0x80;
        }
        else {
          pbStack_110 = (byte *)0x22fe7d;
          _ZN4core3ptr96drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_uu_expr__ExprError_GT__GT_17hec85356ab7c1c7abE
                    (&local_b8);
LAB_0022ff27:
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[0xc] = 0;
          param_1[0xd] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0x80;
          param_1[0x10] = 0;
          param_1[0x11] = 0;
          param_1[0x12] = 0;
          param_1[0x13] = 0;
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          param_1[0x18] = 1;
          param_1[0x19] = 0;
          param_1[0x1a] = 0;
          param_1[0x1b] = 0;
          param_1[0x1c] = 0;
          param_1[0x1d] = 0;
          param_1[0x1e] = 0;
          param_1[0x1f] = 0;
          param_1[0x20] = 0;
          param_1[0x21] = 0;
          param_1[0x22] = 0;
          param_1[0x23] = 0;
          param_1[0x24] = 0;
          param_1[0x25] = 0;
          param_1[0x26] = 0;
          param_1[0x27] = 0;
        }
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
      }
      else {
LAB_0022fe26:
        *(int *)(param_1 + 0x18) = (int)local_e8;
        *(undefined4 *)(param_1 + 0x1c) = local_e8._4_4_;
        *(int *)(param_1 + 0x20) = local_e0;
        *(undefined4 *)(param_1 + 0x24) = uStack_dc;
        *(undefined4 *)(param_1 + 8) = (undefined4)local_f8;
        *(undefined4 *)(param_1 + 0xc) = local_f8._4_4_;
        *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_f0;
        *(undefined4 *)(param_1 + 0x14) = uStack_f0._4_4_;
        param_1[0] = 1;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
      }
      piVar31 = &iStack_90;
LAB_0022fe3a:
      pbStack_110 = (byte *)0x22fe3f;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2134d78e0f3082f1E(piVar31);
      return param_1;
    default:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x15:
      return pbVar14;
    }
                    /* try { // try from 0022ea76 to 0022ea7f has its CatchHandler @ 0022ebbd */
    *(undefined8 *)((long)pppuVar22 + -8) = 0x22ea80;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2134d78e0f3082f1E
              ((undefined *)((long)pppuVar22 + 0x58));
                    /* try { // try from 0022ea83 to 0022ea8f has its CatchHandler @ 0022ebd2 */
    *(undefined8 *)((long)pppuVar22 + -8) = 0x22ea90;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2134d78e0f3082f1E
              ((undefined *)((long)pppuVar22 + 0x40));
    bVar2 = false;
    pppuVar23 = pppuVar22;
    goto LAB_0022ea93;
  }
  lVar15 = (long)(int)(&switchD_0022e848::caseD_19)[param_2 & 0xff];
  pbVar14 = (byte *)((long)&switchD_0022e848::caseD_19 + lVar15);
  bVar32 = (byte)pbVar14;
  iVar12 = (int)pbVar14;
  uVar18 = extraout_RDX;
  pppuVar25 = &local_108;
  uVar34 = extraout_XMM0_Dc;
  uVar36 = extraout_XMM0_Dd;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2 & 0xff) {
  case 0:
                    /* try { // try from 0022e84d to 0022e895 has its CatchHandler @ 0022ebd2 */
    pbStack_110 = (byte *)0x22e85d;
    cVar11 = _ZN61__LT_num_bigint__bigint__BigInt_u20_as_u20_core__cmp__Ord_GT_3cmp17h7a6fa568a6525531E
                       (&local_e8,&local_108);
    bVar32 = cVar11 == -1;
    goto LAB_0022e90f;
  case 1:
                    /* try { // try from 0022e96c to 0022e97b has its CatchHandler @ 0022ebd2 */
    pbStack_110 = (byte *)0x22e97c;
    cVar11 = _ZN61__LT_num_bigint__bigint__BigInt_u20_as_u20_core__cmp__Ord_GT_3cmp17h7a6fa568a6525531E
                       (&local_e8,&local_108);
    if (cVar11 == '\x01') {
                    /* try { // try from 0022e987 to 0022e98e has its CatchHandler @ 0022ebdf */
      pbStack_110 = (byte *)0x22e98f;
      _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h6f8abaf0145a9576E
                (&local_108);
                    /* try { // try from 0022e992 to 0022e99b has its CatchHandler @ 0022ebf1 */
      pbStack_110 = (byte *)0x22e99c;
      _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h6f8abaf0145a9576E
                (&local_e8);
      goto LAB_0022eb06;
    }
                    /* try { // try from 0022eac8 to 0022eacf has its CatchHandler @ 0022ebdf */
    pbStack_110 = (byte *)0x22ead0;
    _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h6f8abaf0145a9576E
              (&local_108);
                    /* try { // try from 0022ead3 to 0022eaee has its CatchHandler @ 0022ebf1 */
    pbStack_110 = (byte *)0x22eadd;
    _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h6f8abaf0145a9576E
              (&local_e8);
LAB_0022eadd:
    bVar2 = true;
    goto LAB_0022eae0;
  case 2:
    if ((char)local_d0 != (char)uStack_f0) {
                    /* try { // try from 0022eaac to 0022eab3 has its CatchHandler @ 0022ebdf */
      pbStack_110 = (byte *)0x22eab4;
      _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h6f8abaf0145a9576E
                (&local_108);
                    /* try { // try from 0022eab7 to 0022eac0 has its CatchHandler @ 0022ebf1 */
      pbStack_110 = (byte *)0x22eac1;
      _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h6f8abaf0145a9576E
                (&local_e8);
      goto LAB_0022eb06;
    }
    if ((char)local_d0 == '\x01') {
                    /* try { // try from 0022e92e to 0022e935 has its CatchHandler @ 0022ebdf */
      pbStack_110 = (byte *)0x22e936;
      _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h6f8abaf0145a9576E
                (&local_108);
                    /* try { // try from 0022e939 to 0022e942 has its CatchHandler @ 0022ebf1 */
      pbStack_110 = (byte *)0x22e943;
      _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h6f8abaf0145a9576E
                (&local_e8);
      goto LAB_0022eadd;
    }
    bVar2 = true;
                    /* try { // try from 0022eb75 to 0022eba2 has its CatchHandler @ 0022ebd2 */
    pbStack_110 = (byte *)0x22eb7d;
    bVar32 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17hc86a8171fbe67109E
                       (CONCAT44(uStack_dc,local_e0),local_d8,uStack_100,local_f8);
    break;
  case 3:
    bVar2 = true;
    if ((char)local_d0 == (char)uStack_f0) {
      if ((char)local_d0 != '\x01') {
        pbStack_110 = (byte *)0x22eba3;
        bVar32 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17hc86a8171fbe67109E
                           (CONCAT44(uStack_dc,local_e0),local_d8,uStack_100,local_f8);
        bVar32 = bVar32 ^ 1;
        goto LAB_0022e90f;
      }
      bVar32 = 0;
      pppuVar23 = &local_108;
    }
    else {
      bVar32 = 1;
      pppuVar23 = &local_108;
    }
    break;
  case 4:
                    /* try { // try from 0022e8f9 to 0022e908 has its CatchHandler @ 0022ebd2 */
    pbStack_110 = (byte *)0x22e909;
    cVar11 = _ZN61__LT_num_bigint__bigint__BigInt_u20_as_u20_core__cmp__Ord_GT_3cmp17h7a6fa568a6525531E
                       (&local_e8,&local_108);
    bVar32 = cVar11 == '\x01';
LAB_0022e90f:
    bVar2 = true;
    pppuVar23 = &local_108;
    break;
  case 5:
                    /* try { // try from 0022e9a4 to 0022e9b3 has its CatchHandler @ 0022ebd2 */
    pbStack_110 = (byte *)0x22e9b4;
    bVar32 = _ZN61__LT_num_bigint__bigint__BigInt_u20_as_u20_core__cmp__Ord_GT_3cmp17h7a6fa568a6525531E
                       (&local_e8,&local_108);
    if (bVar32 < 2) {
      pbStack_110 = (byte *)0x22e9c7;
      _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h6f8abaf0145a9576E
                (&local_108);
                    /* try { // try from 0022e9ca to 0022e9d3 has its CatchHandler @ 0022ebf1 */
      pbStack_110 = (byte *)0x22e9d4;
      _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h6f8abaf0145a9576E
                (&local_e8);
      goto LAB_0022eadd;
    }
                    /* try { // try from 0022eaf1 to 0022eaf8 has its CatchHandler @ 0022ebdf */
    pbStack_110 = (byte *)0x22eaf9;
    _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h6f8abaf0145a9576E
              (&local_108);
                    /* try { // try from 0022eafc to 0022eb14 has its CatchHandler @ 0022ebf1 */
    pbStack_110 = (byte *)0x22eb06;
    _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h6f8abaf0145a9576E
              (&local_e8);
LAB_0022eb06:
    bVar2 = true;
    pppuVar23 = &local_108;
    goto LAB_0022eb09;
  case 6:
    pcVar17 = (char *)((long)&UINT_0015f048 + lVar15 + 3);
    *pcVar17 = *pcVar17 + bVar32;
    goto LAB_0022e864;
  case 7:
    pppuVar20 = (undefined ***)&pbStack_110;
    pbStack_110 = pbVar14;
    goto code_r0x0022ea21;
  case 8:
    pppuVar19 = (undefined ***)&pbStack_110;
    pbStack_110 = pbVar14;
    goto code_r0x0022e9e3;
  case 9:
    goto switchD_0022e848_caseD_9;
  case 10:
    out(0xe8,iVar12);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
    if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pppuVar21 = (undefined ***)&pbStack_110;
    pbStack_110 = pbVar14;
    goto code_r0x0022ea42;
  case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd:
    goto LAB_0022ed74;
  case 0xe:
    pppuVar25 = &local_108;
  case 0x10:
switchD_0022e848_caseD_10:
    *(char *)((long)pppuVar25 + 0x80) = *(char *)((long)pppuVar25 + 0x80) - (char)pbVar14;
    *(undefined4 *)((long)pppuVar25 + 0x60) = *(undefined4 *)((long)pppuVar25 + 0x90);
    *(undefined4 *)((long)pppuVar25 + 100) = *(undefined4 *)((long)pppuVar25 + 0x94);
    *(undefined4 *)((long)pppuVar25 + 0x68) = *(undefined4 *)((long)pppuVar25 + 0x98);
    *(undefined4 *)((long)pppuVar25 + 0x6c) = *(undefined4 *)((long)pppuVar25 + 0x9c);
    *(undefined ***)((long)pppuVar25 + 0x50) = ppuVar33;
    *(undefined4 *)((long)pppuVar25 + 0x58) = uVar34;
    *(undefined4 *)((long)pppuVar25 + 0x5c) = uVar36;
    *(undefined8 *)((long)pppuVar25 + -8) = 0x22edf9;
    pbVar14 = (byte *)_ZN10num_bigint6bigint8addition78__LT_impl_u20_core__ops__arith__Add_u20_for_u20_num_bigint__bigint__BigInt_GT_3add17h7db2fe26837a9166E
                                (pppuVar25,(undefined *)((long)pppuVar25 + 0x20),
                                 (undefined *)((long)pppuVar25 + 0x50));
    pppuVar26 = pppuVar25;
LAB_0022ef14:
    uVar18 = *pppuVar26;
    uVar5 = pppuVar26[1];
    uVar6 = pppuVar26[3];
    pppuVar26[0x1a] = pppuVar26[2];
    pppuVar26[0x1b] = (undefined **)uVar6;
    pppuVar26[0x18] = (undefined **)uVar18;
    pppuVar26[0x19] = (undefined **)uVar5;
    *(undefined ***)(param_1 + 0x18) = pppuVar26[2];
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    *(undefined8 *)(param_1 + 8) = uVar18;
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    return pbVar14;
  case 0xf:
    goto switchD_0022e848_caseD_f;
  case 0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x12:
    uVar13 = iVar12 + *(int *)pbVar14;
    pcVar17 = (char *)(ulong)uVar13;
    *pcVar17 = *pcVar17 + (char)uVar13;
    pcVar17[-0x73] = pcVar17[-0x73] + '<';
    pppuVar28 = (undefined ***)0xb024;
    pcVar17 = (char *)((ulong)uVar13 & 0xffffffffffffff02);
    *pcVar17 = *pcVar17 + (char)pcVar17;
    goto switchD_0022e8d4_caseD_c;
  case 0x13:
    goto switchD_0022e848_caseD_13;
  case 0x14:
    *pbVar14 = *pbVar14 + bVar32;
    _ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE[lVar15 + 0xce] =
         _ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h6efde125bedcf35fE
         [lVar15 + 0xce] + '<';
    pppuVar27 = (undefined ***)0xb024;
    cVar11 = bVar32 - 0x10;
    pcVar17 = (char *)CONCAT71((int7)((ulong)pbVar14 >> 8),cVar11);
    if (0xf < bVar32 || cVar11 == '\0') {
      *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x15f03c + (uint)(0xf < bVar32);
      goto switchD_0022e8d4_caseD_e;
    }
    *pcVar17 = *pcVar17 + cVar11;
    if (cVar11 != '\0') goto switchD_0022e8d4_caseD_e;
    uRam000000000000b01c = 0x22f716;
    _ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17hb616907385e333f7E
              (0xb024,0);
    uVar4 = uRam000000000000b040;
    uVar36 = uRam000000000000b03c;
    uVar34 = uRam000000000000b038;
    uVar39 = uRam000000000000b030;
    uVar38 = uRam000000000000b02c;
    uVar37 = uRam000000000000b028;
    uVar35 = uRam000000000000b024;
    pppuVar28 = (undefined ***)0xb024;
    *(undefined4 *)(param_1 + 0x18) = uRam000000000000b034;
    *(undefined4 *)(param_1 + 0x1c) = uVar34;
    *(undefined4 *)(param_1 + 0x20) = uVar36;
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    *(undefined4 *)(param_1 + 8) = uVar35;
    *(undefined4 *)(param_1 + 0xc) = uVar37;
    *(undefined4 *)(param_1 + 0x10) = uVar38;
    *(undefined4 *)(param_1 + 0x14) = uVar39;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    uRam000000000000b01c = 0x22f73b;
    _ZN4core3ptr51drop_in_place_LT_uu_expr__syntax_tree__NumOrStr_GT_17h033ac62706effd52E(0xb0d4);
    goto LAB_0022f3aa;
  case 0x15:
    goto switchD_0022e848_caseD_15;
  case 0x16:
    goto switchD_0022e848_caseD_16;
  case 0x17:
    goto switchD_0022e848_caseD_17;
  case 0x18:
    *(byte *)(param_5 + -0x39) = *(byte *)(param_5 + -0x39) | 0x3c;
    uVar13 = iVar12 + *(int *)pbVar14;
    *(char *)(ulong)uVar13 = *(char *)(ulong)uVar13 + (char)uVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_0022ea93:
                    /* try { // try from 0022ea93 to 0022ea9a has its CatchHandler @ 0022ebdf */
  *(undefined8 *)((long)pppuVar23 + -8) = 0x22ea9b;
  _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h6f8abaf0145a9576E
            (pppuVar23);
                    /* try { // try from 0022ea9b to 0022eaa4 has its CatchHandler @ 0022ebf1 */
  *(undefined8 *)((long)pppuVar23 + -8) = 0x22eaa5;
  _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h6f8abaf0145a9576E
            ((undefined *)((long)pppuVar23 + 0x20));
  pppuVar24 = pppuVar23;
  if (bVar32 == 0) {
LAB_0022eb09:
    *(undefined8 *)((long)pppuVar23 + -8) = 0x22eb15;
    pbVar14 = (byte *)_ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17hb616907385e333f7E
                                ((undefined *)((long)pppuVar23 + 0x70),0);
    pppuVar25 = pppuVar23;
  }
  else {
LAB_0022eae0:
    *(undefined8 *)((long)pppuVar24 + -8) = 0x22eaef;
    pbVar14 = (byte *)_ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17hb616907385e333f7E
                                ((undefined *)((long)pppuVar24 + 0x70),1);
    pppuVar25 = pppuVar24;
  }
  uVar35 = *(undefined4 *)((long)pppuVar25 + 0x70);
  uVar37 = *(undefined4 *)((long)pppuVar25 + 0x74);
  uVar38 = *(undefined4 *)((long)pppuVar25 + 0x78);
  uVar39 = *(undefined4 *)((long)pppuVar25 + 0x7c);
  uVar34 = *(undefined4 *)((long)pppuVar25 + 0x84);
  uVar36 = *(undefined4 *)((long)pppuVar25 + 0x88);
  uVar4 = *(undefined4 *)((long)pppuVar25 + 0x8c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((long)pppuVar25 + 0x80);
  *(undefined4 *)(param_1 + 0x1c) = uVar34;
  *(undefined4 *)(param_1 + 0x20) = uVar36;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 8) = uVar35;
  *(undefined4 *)(param_1 + 0xc) = uVar37;
  *(undefined4 *)(param_1 + 0x10) = uVar38;
  *(undefined4 *)(param_1 + 0x14) = uVar39;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (bVar2) {
                    /* try { // try from 0022eb36 to 0022eb42 has its CatchHandler @ 0022ec10 */
    *(undefined8 *)((long)pppuVar25 + -8) = 0x22eb43;
    _ZN4core3ptr51drop_in_place_LT_uu_expr__syntax_tree__NumOrStr_GT_17h033ac62706effd52E
              ((undefined *)((long)pppuVar25 + 0xc0));
LAB_0022eb43:
    *(undefined8 *)((long)pppuVar25 + -8) = 0x22eb50;
    pbVar14 = (byte *)_ZN4core3ptr51drop_in_place_LT_uu_expr__syntax_tree__NumOrStr_GT_17h033ac62706effd52E
                                ((undefined *)((long)pppuVar25 + 0xa0));
  }
  return pbVar14;
}