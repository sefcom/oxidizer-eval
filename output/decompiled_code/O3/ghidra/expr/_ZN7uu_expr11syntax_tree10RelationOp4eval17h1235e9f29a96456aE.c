/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0022eaa3) overlaps instruction at (ram,0x0022eaa2)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0022f10d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __rustcall
uu_expr::syntax_tree::RelationOp::eval
          (byte *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar15;
  undefined8 uVar16;
  undefined2 uVar18;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar19;
  undefined ***pppuVar20;
  undefined ***pppuVar21;
  undefined ***pppuVar22;
  undefined ***pppuVar23;
  undefined ***pppuVar24;
  undefined ***pppuVar25;
  undefined ***pppuVar26;
  undefined ***pppuVar27;
  undefined ***pppuVar28;
  undefined ***pppuVar29;
  undefined8 unaff_RBP;
  int *piVar30;
  long lVar31;
  undefined ***pppuVar32;
  undefined *puVar33;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  byte bVar34;
  undefined **ppuVar35;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined auVar42 [16];
  int param_9;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack0000000000000024;
  undefined4 param_10;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 param_11;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000044;
  undefined4 param_12;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 param_13;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  long param_14;
  byte *pbStack_110;
  undefined **local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  int local_d0;
  undefined4 uStack_cc;
  undefined *in_stack_ffffffffffffff38;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
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
  long local_28;
  char *pcVar14;
  undefined7 uVar17;
  
  pppuVar32 = &local_108;
  pppuVar20 = &local_108;
  pppuVar21 = &local_108;
  pppuVar22 = &local_108;
  pppuVar26 = &local_108;
  pppuVar27 = &local_108;
  pppuVar28 = &local_108;
  pppuVar29 = &local_108;
  pppuVar23 = &local_108;
  pppuVar25 = &local_108;
  pppuVar24 = &local_108;
  pbStack_110 = (byte *)0x22e052;
  pbVar12 = (byte *)AstNode::eval(&iStack_98,param_3);
  uStack_100 = (code *)uStack_88;
  local_f8 = local_80;
  ppuVar35 = local_f8;
  uStack_f0 = appuStack_78[0];
  ppuVar7 = uStack_f0;
  if (CONCAT44(uStack_94,iStack_98) != 0) {
    *(undefined ***)(param_1 + 0x18) = local_80;
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
    return pbVar12;
  }
  local_f8._0_4_ = SUB84(local_80,0);
  local_f8._4_4_ = (undefined4)((ulong)local_80 >> 0x20);
  uStack_f0._0_4_ = SUB84(appuStack_78[0],0);
  uStack_f0._4_4_ = (undefined4)((ulong)appuStack_78[0] >> 0x20);
  local_58 = (undefined4)local_f8;
  uStack_54 = local_f8._4_4_;
  uStack_50 = (undefined4)uStack_f0;
  uStack_4c = uStack_f0._4_4_;
  local_68 = iStack_90;
  uStack_64 = uStack_8c;
  uStack_60 = (code *)uStack_88;
                    /* try { // try from 0022e0a6 to 0022e0b2 has its CatchHandler @ 0022e542 */
  pbStack_110 = (byte *)0x22e0b3;
  local_f8 = ppuVar35;
  uStack_f0 = ppuVar7;
  AstNode::eval(&iStack_98,param_4);
  local_108 = (undefined **)CONCAT44(uStack_8c,iStack_90);
  uStack_100 = (code *)uStack_88;
  ppuVar35 = (undefined **)uStack_100;
  local_f8 = local_80;
  ppuVar7 = local_f8;
  uStack_f0 = appuStack_78[0];
  ppuVar8 = uStack_f0;
  uStack_100._0_4_ = (int)uStack_88;
  uStack_100._4_4_ = (undefined4)((ulong)uStack_88 >> 0x20);
  uStack_100 = (code *)ppuVar35;
  if (CONCAT44(uStack_94,iStack_98) == 0) {
    local_f8._0_4_ = SUB84(local_80,0);
    local_f8._4_4_ = (undefined4)((ulong)local_80 >> 0x20);
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
                    /* try { // try from 0022e10a to 0022e11b has its CatchHandler @ 0022e523 */
    pbStack_110 = (byte *)0x22e11c;
    uVar37 = (undefined4)local_f8;
    uVar39 = local_f8._4_4_;
    uVar40 = (undefined4)uStack_f0;
    uVar41 = uStack_f0._4_4_;
    local_f8 = ppuVar7;
    uStack_f0 = ppuVar8;
    NumOrStr::to_bigint(&local_e8,&local_68);
    uVar16 = 1;
                    /* try { // try from 0022e11f to 0022e12e has its CatchHandler @ 0022e511 */
    piVar30 = &local_48;
    pbStack_110 = (byte *)0x22e12f;
    ppuVar35 = (undefined **)NumOrStr::to_bigint();
    if ((local_e8 == -0x8000000000000000) || (local_108 == (undefined **)0x8000000000000000)) {
LAB_0022e174:
      uStack_88 = (undefined **)CONCAT44(uStack_54,local_58);
      local_80 = (undefined **)CONCAT44(uStack_4c,uStack_50);
      iStack_98 = local_68;
      uStack_94 = uStack_64;
      iStack_90 = (int)uStack_60;
      uStack_8c = uStack_60._4_4_;
      uVar16 = 0;
      pbStack_110 = (byte *)0x22e1a6;
      NumOrStr::eval_as_string(&stack0xffffffffffffff38,&iStack_98);
      uStack_88 = (undefined **)CONCAT44(uStack_34,local_38);
      local_80 = (undefined **)CONCAT44(uStack_2c,uStack_30);
      iStack_98 = local_48;
      uStack_94 = uStack_44;
      iStack_90 = iStack_40;
      uStack_8c = uStack_3c;
                    /* try { // try from 0022e1c3 to 0022e1d1 has its CatchHandler @ 0022e4ef */
      pppuVar32 = (undefined ***)&uStack_b0;
      pbStack_110 = (byte *)0x22e1d2;
      uVar37 = local_38;
      uVar39 = uStack_34;
      uVar40 = uStack_30;
      uVar41 = uStack_2c;
      ppuVar35 = (undefined **)NumOrStr::eval_as_string();
      uVar13 = (ulong)(int)(&switchD_0022e1e4::caseD_13)[param_2 & 0xff];
      pbVar12 = (byte *)((long)&switchD_0022e1e4::caseD_13 + uVar13);
      bVar34 = (byte)pbVar12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(param_2 & 0xff) {
      case 0:
                    /* try { // try from 0022e1fa to 0022e1fe has its CatchHandler @ 0022e4e0 */
        pbStack_110 = (byte *)0x22e1ff;
        cVar9 = _<alloc::vec::Vec<T,A1>as_core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp
                          (uStack_c0,local_b8,CONCAT44(uStack_a4,local_a8),
                           CONCAT44(uStack_9c,iStack_a0));
        bVar34 = cVar9 == -1;
        break;
      case 1:
code_r0x0022e362:
        *(undefined8 *)((long)pppuVar22 + -8) = 0x22e371;
        cVar9 = _<alloc::vec::Vec<T,A1>as_core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp
                          ();
        bVar34 = (byte)(cVar9 - 3U) < 0xfe;
        pppuVar23 = pppuVar22;
        break;
      case 2:
switchD_0022e158_caseD_9:
        pbStack_110 = (byte *)0x22e333;
        bVar34 = ::alloc::vec::partial_eq::
                 _<impl_core::cmp::PartialEq<alloc::vec::Vec<U,A2>>for_alloc::vec::Vec<T,A1>>::eq();
        pppuVar23 = &local_108;
        break;
      case 3:
code_r0x0022e341:
        *(undefined8 *)((long)pppuVar21 + -8) = 0x22e350;
        bVar34 = ::alloc::vec::partial_eq::
                 _<impl_core::cmp::PartialEq<alloc::vec::Vec<U,A2>>for_alloc::vec::Vec<T,A1>>::eq();
        bVar34 = bVar34 ^ 1;
        pppuVar23 = pppuVar21;
        break;
      case 4:
code_r0x0022e303:
                    /* try { // try from 0022e30d to 0022e38f has its CatchHandler @ 0022e4e0 */
        *(undefined8 *)((long)pppuVar20 + -8) = 0x22e312;
        cVar9 = _<alloc::vec::Vec<T,A1>as_core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp
                          ();
        bVar34 = cVar9 == '\x01';
        pppuVar23 = pppuVar20;
        break;
      case 5:
        pbStack_110 = (byte *)0x22e390;
        bVar34 = _<alloc::vec::Vec<T,A1>as_core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::
                 partial_cmp(uStack_c0,local_b8,CONCAT44(uStack_a4,local_a8),
                             CONCAT44(uStack_9c,iStack_a0));
        bVar34 = bVar34 < 2;
        pppuVar23 = &local_108;
        break;
      case 6:
        *pbVar12 = *pbVar12;
        pcVar14 = (char *)((long)&UINT_00168e40 + uVar13 + 3);
        *pcVar14 = *pcVar14 + bVar34;
                    /* WARNING: Could not emulate address calculation at 0x0022e6da */
                    /* WARNING: Treating indirect jump as call */
        pbVar12 = (byte *)(*(code *)((long)&switchD_0022e6e1::caseD_d +
                                    (long)(int)(&switchD_0022e6e1::caseD_d)[(long)pbVar12]))();
        return pbVar12;
      case 7:
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        uVar36 = extraout_XMM0_Dc_00;
        uVar38 = extraout_XMM0_Dd_00;
LAB_0022e6a4:
        local_48 = local_48 - (int)pbVar12;
        *(undefined4 *)(param_1 + 0x18) = uVar37;
        *(undefined4 *)(param_1 + 0x1c) = uVar39;
        *(undefined4 *)(param_1 + 0x20) = uVar40;
        *(undefined4 *)(param_1 + 0x24) = uVar41;
        *(undefined ***)(param_1 + 8) = ppuVar35;
        *(undefined4 *)(param_1 + 0x10) = uVar36;
        *(undefined4 *)(param_1 + 0x14) = uVar38;
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        pbStack_110 = (byte *)0x22e7f9;
        local_38 = uVar37;
        uStack_34 = uVar39;
        uStack_30 = uVar40;
        uStack_2c = uVar41;
        core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&uStack_88);
        pbStack_110 = (byte *)0x22e6b1;
        pbVar12 = (byte *)core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&local_68);
        return pbVar12;
      case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 9:
        pppuVar27 = (undefined ***)&pbStack_110;
        pbStack_110 = pbVar12;
        uVar36 = extraout_XMM0_Dc_00;
        uVar38 = extraout_XMM0_Dd_00;
switchD_0022e158_caseD_f:
        *(char *)((long)pppuVar27 + 0x80) = *(char *)((long)pppuVar27 + 0x80) - (char)pbVar12;
        *(undefined4 *)((long)pppuVar27 + 0x60) = *(undefined4 *)((long)pppuVar27 + 0x90);
        *(undefined4 *)((long)pppuVar27 + 100) = *(undefined4 *)((long)pppuVar27 + 0x94);
        *(undefined4 *)((long)pppuVar27 + 0x68) = *(undefined4 *)((long)pppuVar27 + 0x98);
        *(undefined4 *)((long)pppuVar27 + 0x6c) = *(undefined4 *)((long)pppuVar27 + 0x9c);
        *(undefined ***)((long)pppuVar27 + 0x50) = ppuVar35;
        *(undefined4 *)((long)pppuVar27 + 0x58) = uVar36;
        *(undefined4 *)((long)pppuVar27 + 0x5c) = uVar38;
        *(undefined8 *)((long)pppuVar27 + -8) = 0x22e796;
        pbVar12 = (byte *)num_bigint::bigint::multiplication::
                          _<impl_core::ops::arith::Mul_for_num_bigint::bigint::BigInt>::mul
                                    (pppuVar27,(undefined *)((long)pppuVar27 + 0x20),
                                     (undefined *)((long)pppuVar27 + 0x50));
        goto LAB_0022e844;
      case 10:
        pppuVar26 = (undefined ***)&pbStack_110;
        pbStack_110 = pbVar12;
        uVar36 = extraout_XMM0_Dc_00;
        uVar38 = extraout_XMM0_Dd_00;
        goto switchD_0022e158_caseD_10;
      case 0xb:
        pcVar2 = (code *)swi(3);
        pbVar12 = (byte *)(*pcVar2)();
        return pbVar12;
      case 0xc:
switchD_0022e1e4_caseD_c:
        ((long *)pppuVar29)[-1] = 0x22eac9;
        pbVar12 = (byte *)AstNode::eval();
        ((long *)pppuVar29)[8] = ((long *)pppuVar29)[1];
        ((long *)pppuVar29)[9] = ((long *)pppuVar29)[2];
        ((long *)pppuVar29)[10] = ((long *)pppuVar29)[3];
        ((long *)pppuVar29)[0xb] = ((long *)pppuVar29)[4];
        if (*pppuVar29 != (undefined **)0x0) {
          uStack_100._0_4_ = *(int *)((long *)pppuVar29 + 8);
          uStack_100._4_4_ = *(undefined4 *)((long)pppuVar29 + 0x44);
          local_f8._0_4_ = *(undefined4 *)((long *)pppuVar29 + 9);
          local_f8._4_4_ = *(undefined4 *)((long)pppuVar29 + 0x4c);
          uStack_f0._0_4_ = *(undefined4 *)((long *)pppuVar29 + 10);
          uStack_f0._4_4_ = *(undefined4 *)((long)pppuVar29 + 0x54);
          local_e8._0_4_ = *(int *)((long *)pppuVar29 + 0xb);
          local_e8._4_4_ = *(undefined4 *)((long)pppuVar29 + 0x5c);
LAB_0022eb30:
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
          return pbVar12;
        }
        *(undefined4 *)((long *)pppuVar29 + 0x12) = *(undefined4 *)((long *)pppuVar29 + 10);
        *(undefined4 *)((long)pppuVar29 + 0x94) = *(undefined4 *)((long)pppuVar29 + 0x54);
        *(undefined4 *)((long *)pppuVar29 + 0x13) = *(undefined4 *)((long *)pppuVar29 + 0xb);
        *(undefined4 *)((long)pppuVar29 + 0x9c) = *(undefined4 *)((long)pppuVar29 + 0x5c);
        *(undefined4 *)((long *)pppuVar29 + 0x10) = *(undefined4 *)((long *)pppuVar29 + 8);
        *(undefined4 *)((long)pppuVar29 + 0x84) = *(undefined4 *)((long)pppuVar29 + 0x44);
        *(undefined4 *)((long *)pppuVar29 + 0x11) = *(undefined4 *)((long *)pppuVar29 + 9);
        *(undefined4 *)((long)pppuVar29 + 0x8c) = *(undefined4 *)((long)pppuVar29 + 0x4c);
        ((long *)pppuVar29)[-1] = 0x22eb78;
        pbVar12 = (byte *)is_truthy((long *)pppuVar29 + 0x10);
        if ((char)pbVar12 != '\0') {
          lVar15 = ((long *)pppuVar29)[0x10];
          lVar31 = ((long *)pppuVar29)[0x11];
          lVar6 = ((long *)pppuVar29)[0x13];
          *(long *)(param_1 + 0x18) = ((long *)pppuVar29)[0x12];
          *(long *)(param_1 + 0x20) = lVar6;
          *(long *)(param_1 + 8) = lVar15;
          *(long *)(param_1 + 0x10) = lVar31;
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          return pbVar12;
        }
        ((long *)pppuVar29)[-1] = 0x22eca2;
        AstNode::eval(pppuVar29,uVar16);
        ((long *)pppuVar29)[8] = ((long *)pppuVar29)[1];
        ((long *)pppuVar29)[9] = ((long *)pppuVar29)[2];
        ((long *)pppuVar29)[10] = ((long *)pppuVar29)[3];
        ((long *)pppuVar29)[0xb] = ((long *)pppuVar29)[4];
        if (*pppuVar29 == (undefined **)0x0) {
          *(undefined4 *)((long *)pppuVar29 + 0x18) = *(undefined4 *)((long *)pppuVar29 + 10);
          *(undefined4 *)((long)pppuVar29 + 0xc4) = *(undefined4 *)((long)pppuVar29 + 0x54);
          *(undefined4 *)((long *)pppuVar29 + 0x19) = *(undefined4 *)((long *)pppuVar29 + 0xb);
          *(undefined4 *)((long)pppuVar29 + 0xcc) = *(undefined4 *)((long)pppuVar29 + 0x5c);
          *(undefined4 *)((long *)pppuVar29 + 0x16) = *(undefined4 *)((long *)pppuVar29 + 8);
          *(undefined4 *)((long)pppuVar29 + 0xb4) = *(undefined4 *)((long)pppuVar29 + 0x44);
          *(undefined4 *)((long *)pppuVar29 + 0x17) = *(undefined4 *)((long *)pppuVar29 + 9);
          *(undefined4 *)((long)pppuVar29 + 0xbc) = *(undefined4 *)((long)pppuVar29 + 0x4c);
          ((long *)pppuVar29)[-1] = 0x22eee9;
          cVar9 = is_truthy((long *)pppuVar29 + 0x16);
          if (cVar9 == '\0') {
            ((long *)pppuVar29)[-1] = 0x22f07a;
            _<uu_expr::syntax_tree::NumOrStr_as_core::convert::From<usize>>::from(pppuVar29,0);
            uVar37 = *(undefined4 *)pppuVar29;
            uVar39 = *(undefined4 *)((long)pppuVar29 + 4);
            uVar40 = *(undefined4 *)((long *)pppuVar29 + 1);
            uVar41 = *(undefined4 *)((long)pppuVar29 + 0xc);
            uVar36 = *(undefined4 *)((long)pppuVar29 + 0x14);
            uVar38 = *(undefined4 *)((long *)pppuVar29 + 3);
            uVar4 = *(undefined4 *)((long)pppuVar29 + 0x1c);
            *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((long *)pppuVar29 + 2);
            *(undefined4 *)(param_1 + 0x1c) = uVar36;
            *(undefined4 *)(param_1 + 0x20) = uVar38;
            *(undefined4 *)(param_1 + 0x24) = uVar4;
            *(undefined4 *)(param_1 + 8) = uVar37;
            *(undefined4 *)(param_1 + 0xc) = uVar39;
            *(undefined4 *)(param_1 + 0x10) = uVar40;
            *(undefined4 *)(param_1 + 0x14) = uVar41;
            param_1[0] = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            param_1[3] = 0;
            param_1[4] = 0;
            param_1[5] = 0;
            param_1[6] = 0;
            param_1[7] = 0;
            ((long *)pppuVar29)[-1] = 0x22f09f;
            core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>((long *)pppuVar29 + 0x16);
          }
          else {
            uVar37 = *(undefined4 *)((long *)pppuVar29 + 0x16);
            uVar39 = *(undefined4 *)((long)pppuVar29 + 0xb4);
            uVar40 = *(undefined4 *)((long *)pppuVar29 + 0x17);
            uVar41 = *(undefined4 *)((long)pppuVar29 + 0xbc);
            lVar15 = ((long *)pppuVar29)[0x19];
            *(long *)(param_1 + 0x18) = ((long *)pppuVar29)[0x18];
            *(long *)(param_1 + 0x20) = lVar15;
            *(undefined4 *)(param_1 + 8) = uVar37;
            *(undefined4 *)(param_1 + 0xc) = uVar39;
            *(undefined4 *)(param_1 + 0x10) = uVar40;
            *(undefined4 *)(param_1 + 0x14) = uVar41;
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
          uVar37 = *(undefined4 *)((long *)pppuVar29 + 8);
          uVar39 = *(undefined4 *)((long)pppuVar29 + 0x44);
          uVar40 = *(undefined4 *)((long *)pppuVar29 + 9);
          uVar41 = *(undefined4 *)((long)pppuVar29 + 0x4c);
          lVar15 = ((long *)pppuVar29)[0xb];
          *(long *)(param_1 + 0x18) = ((long *)pppuVar29)[10];
          *(long *)(param_1 + 0x20) = lVar15;
          *(undefined4 *)(param_1 + 8) = uVar37;
          *(undefined4 *)(param_1 + 0xc) = uVar39;
          *(undefined4 *)(param_1 + 0x10) = uVar40;
          *(undefined4 *)(param_1 + 0x14) = uVar41;
          param_1[0] = 1;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
        }
LAB_0022ecda:
        puVar33 = (undefined *)((long)pppuVar29 + 0x80);
LAB_0022ece2:
        *(undefined8 *)((long)pppuVar29 + -8) = 0x22ece7;
        pbVar12 = (byte *)core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(puVar33);
        return pbVar12;
      case 0xd:
        *(byte *)pppuVar32 = (*(byte *)pppuVar32 - 0x34) - (0xffffffffffe971cb < uVar13);
        param_9 = param_9 - (int)pbVar12;
        uVar19 = extraout_RDX_00;
switchD_0022e158_caseD_13:
        pbStack_110 = (byte *)0x22e9a6;
        pbVar12 = (byte *)AstNode::eval((ulong)&local_108 & 0xffffffff,uVar19);
        param_9 = (int)uStack_100;
        uStack000000000000001c = uStack_100._4_4_;
        in_stack_00000020 = (undefined4)local_f8;
        uStack0000000000000024 = local_f8._4_4_;
        param_10 = (undefined4)uStack_f0;
        uStack000000000000002c = uStack_f0._4_4_;
        in_stack_00000030 = (int)local_e8;
        uStack0000000000000034 = local_e8._4_4_;
        if (local_108 == (undefined **)0x0) {
          pbStack_110 = (byte *)0x22ebb6;
          NumOrStr::eval_as_string(&stack0xffffffffffffffe8,&stack0x00000018);
                    /* try { // try from 0022ebb6 to 0022ebc0 has its CatchHandler @ 0022f22e */
          pbStack_110 = (byte *)0x22ebc1;
          AstNode::eval(&local_108,uVar16);
          param_11 = (int)uStack_100;
          uStack000000000000003c = uStack_100._4_4_;
          in_stack_00000040 = (undefined4)local_f8;
          uStack0000000000000044 = local_f8._4_4_;
          param_12 = (undefined4)uStack_f0;
          uStack000000000000004c = uStack_f0._4_4_;
          in_stack_00000050 = (int)local_e8;
          uStack0000000000000054 = local_e8._4_4_;
          if (local_108 == (undefined **)0x0) {
                    /* try { // try from 0022ecec to 0022ed03 has its CatchHandler @ 0022f22e */
            pbStack_110 = (byte *)0x22ed04;
            NumOrStr::eval_as_string(&stack0x00000000,&stack0x00000038);
            local_108 = &PTR_s___002a3008;
            uStack_100 = (code *)&DAT_00000001;
            local_e8 = 0;
            local_f8 = (undefined **)&stack0xffffffffffffff38;
            uStack_f0 = (undefined **)&DAT_00000001;
                    /* try { // try from 0022ed45 to 0022ed54 has its CatchHandler @ 0022f1f8 */
            pbStack_110 = (byte *)0x22ed55;
            core::option::Option<T>::map_or_else(&stack0x00000098,&local_108);
            local_38 = param_13;
            uStack_34 = uStack000000000000009c;
            uStack_30 = uStack00000000000000a0;
            uStack_2c = uStack00000000000000a4;
            local_28 = param_14;
                    /* try { // try from 0022ed7d to 0022ed90 has its CatchHandler @ 0022f1fd */
            pbStack_110 = (byte *)0x22ed91;
            onig::Regex::with_options
                      (&stack0xffffffffffffff38,
                       CONCAT44(uStack00000000000000a4,uStack00000000000000a0),param_14,0,
                       OnigSyntaxGrep);
            if (&stack0x00000000 == (undefined *)0x8000000000000000) {
              uStack_60 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    /* try { // try from 0022edb3 to 0022ee27 has its CatchHandler @ 0022f1e6 */
              pbStack_110 = (byte *)0x22edc1;
              lVar15 = onig::Regex::captures_len(0x7fffffffffffffa0);
              if (lVar15 == 0) {
                    /* try { // try from 0022f0b4 to 0022f126 has its CatchHandler @ 0022f1e6 */
                pbStack_110 = (byte *)0x22f0ca;
                onig::Regex::find(0x7fffffffffffffa8,0x7fffffffffffffa0,unaff_R15,unaff_RBP);
                pbStack_110 = (byte *)0x22f0de;
                _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_108,"0",1);
                local_b8 = local_f8;
                pbStack_110 = (byte *)0x22f10b;
                core::option::Option<T>::map_or
                          (0x7fffffffffffff78,0x7fffffffffffffa8,0x7fffffffffffff38);
              }
              else {
                pbStack_110 = (byte *)0x22eded;
                onig::find::_<impl_onig::Regex>::captures
                          (0x7fffffffffffff38,0x7fffffffffffffa0,unaff_R15,unaff_RBP);
                local_d8 = CONCAT44(uStack_94,iStack_98);
                local_e8 = CONCAT44(uStack_a4,local_a8);
                iStack_e0 = iStack_a0;
                uStack_dc = uStack_9c;
                local_f8 = local_b8;
                uStack_f0 = (undefined **)CONCAT44(uStack_ac,uStack_b0);
                uStack_100 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                pbStack_110 = (byte *)0x22ee28;
                local_108 = (undefined **)register0x00000020;
                auVar42 = StringOp::eval::___closure__(&local_108);
                uVar16 = auVar42._8_8_;
                lVar15 = auVar42._0_8_;
                if (lVar15 == 0) {
                  uVar16 = 0;
                }
                lVar31 = 1;
                if (lVar15 != 0) {
                  lVar31 = lVar15;
                }
                pbStack_110 = (byte *)0x22f127;
                _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_108,lVar31,uVar16);
                appuStack_78[0] = local_f8;
                uStack_88 = local_108;
                local_80 = (undefined **)uStack_100;
              }
              *(undefined ***)(param_1 + 0x20) = appuStack_78[0];
              *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_88;
              *(undefined4 *)(param_1 + 0x14) = uStack_88._4_4_;
              *(undefined4 *)(param_1 + 0x18) = (undefined4)local_80;
              *(undefined4 *)(param_1 + 0x1c) = local_80._4_4_;
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
                    /* try { // try from 0022f163 to 0022f16f has its CatchHandler @ 0022f1fd */
              pbStack_110 = (byte *)0x22f170;
              core::ptr::drop_in_place<onig::Regex>(0x7fffffffffffffa0);
                    /* try { // try from 0022f170 to 0022f17c has its CatchHandler @ 0022f1f8 */
              pbStack_110 = (byte *)0x22f17d;
              core::ptr::drop_in_place<alloc::string::String>(0x7fffffffffffffc8);
                    /* try { // try from 0022f17d to 0022f189 has its CatchHandler @ 0022f22e */
              pbStack_110 = (byte *)0x22f18a;
              core::ptr::drop_in_place<alloc::string::String>(0x8000000000000000);
            }
            else {
              local_f8 = local_b8;
              uStack_f0 = (undefined **)CONCAT44(uStack_ac,uStack_b0);
              uStack_100 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    /* try { // try from 0022efb2 to 0022efb9 has its CatchHandler @ 0022f1fd */
              pbStack_110 = (byte *)0x22efba;
              local_108 = (undefined **)register0x00000020;
              core::ptr::drop_in_place<onig::Error>(&local_108);
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
                    /* try { // try from 0022efc9 to 0022efd5 has its CatchHandler @ 0022f1f8 */
              pbStack_110 = (byte *)0x22efd6;
              core::ptr::drop_in_place<alloc::string::String>(&local_38);
                    /* try { // try from 0022efd6 to 0022efe2 has its CatchHandler @ 0022f22e */
              pbStack_110 = (byte *)0x22efe3;
              core::ptr::drop_in_place<alloc::string::String>(&stack0x00000000);
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
          pbStack_110 = (byte *)0x22f197;
          pbVar12 = (byte *)core::ptr::drop_in_place<alloc::string::String>
                                      (&stack0xffffffffffffffe8);
          return pbVar12;
        }
        goto LAB_0022eb30;
      case 0xe:
switchD_0022e1e4_caseD_e:
        uVar37 = *(undefined4 *)((long)pppuVar28 + 0x80);
        uVar39 = *(undefined4 *)((long)pppuVar28 + 0x84);
        uVar40 = *(undefined4 *)((long)pppuVar28 + 0x88);
        uVar41 = *(undefined4 *)((long)pppuVar28 + 0x8c);
        uVar16 = *(undefined8 *)((long)pppuVar28 + 0x98);
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)((long)pppuVar28 + 0x90);
        *(undefined8 *)(param_1 + 0x20) = uVar16;
        *(undefined4 *)(param_1 + 8) = uVar37;
        *(undefined4 *)(param_1 + 0xc) = uVar39;
        *(undefined4 *)(param_1 + 0x10) = uVar40;
        *(undefined4 *)(param_1 + 0x14) = uVar41;
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        puVar33 = (undefined *)((long)pppuVar28 + 0xb0);
        pppuVar29 = pppuVar28;
        goto LAB_0022ece2;
      case 0xf:
        *pbVar12 = *pbVar12 + bVar34;
switchD_0022e158_caseD_15:
        pbVar12 = (byte *)pppuVar32;
        pbStack_110 = (byte *)0x0;
        Parser::parse();
switchD_0022e158_caseD_17:
        return pbVar12;
      case 0x10:
switchD_0022e158_caseD_16:
        pbStack_110 = (byte *)0x22f584;
        AstNode::eval(&uStack_100);
        uVar37 = SUB84(uStack_f0,0);
        uVar39 = uStack_f0._4_4_;
        ppuVar35 = local_f8;
        if ((undefined **)uStack_100 != (undefined **)0x0) {
LAB_0022f5ba:
          *(int *)(param_1 + 0x18) = (int)local_e8;
          *(undefined4 *)(param_1 + 0x1c) = local_e8._4_4_;
          *(int *)(param_1 + 0x20) = iStack_e0;
          *(undefined4 *)(param_1 + 0x24) = uStack_dc;
          *(undefined ***)(param_1 + 8) = ppuVar35;
          *(undefined4 *)(param_1 + 0x10) = uVar37;
          *(undefined4 *)(param_1 + 0x14) = uVar39;
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
        pbStack_110 = (byte *)0x22f656;
        NumOrStr::eval_as_string(&local_d8,&stack0xffffffffffffffe8);
                    /* try { // try from 0022f663 to 0022f674 has its CatchHandler @ 0022f87f */
        pbStack_110 = (byte *)0x22f668;
        uVar16 = _<core::str::iter::Chars_as_core::iter::traits::iterator::Iterator>::count
                           (CONCAT44(uStack_cc,local_d0),
                            in_stack_ffffffffffffff38 + CONCAT44(uStack_cc,local_d0));
        pbStack_110 = (byte *)0x22f675;
        _<uu_expr::syntax_tree::NumOrStr_as_core::convert::From<usize>>::from(&local_b8,uVar16);
        *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_a4,local_a8);
        *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_9c,iStack_a0);
        *(undefined4 *)(param_1 + 8) = (undefined4)local_b8;
        *(undefined4 *)(param_1 + 0xc) = local_b8._4_4_;
        *(undefined4 *)(param_1 + 0x10) = uStack_b0;
        *(undefined4 *)(param_1 + 0x14) = uStack_ac;
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        piVar30 = (int *)&local_d8;
        goto LAB_0022f76a;
      case 0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x12:
        bVar1 = *(byte *)pppuVar32;
        DAT_8247c8348ffffff = bVar34;
        *(byte *)pppuVar32 = *(byte *)pppuVar32 + 0x34;
        cVar9 = (char)local_f8 + bVar34 + (0xcb < bVar1);
        local_f8 = (undefined **)CONCAT71(local_f8._1_7_,cVar9);
        local_68 = (int)local_e8;
        uStack_64 = local_e8._4_4_;
        uVar37 = extraout_XMM0_Dc_00;
        uVar39 = extraout_XMM0_Dd_00;
        if (cVar9 != '\0') goto LAB_0022f5ba;
        pbStack_110 = (byte *)0x22f5ff;
        appuStack_78[0] = ppuVar35;
        NumOrStr::eval_as_string(&iStack_90,appuStack_78);
        pbStack_110 = (byte *)0x22f60d;
        AstNode::eval(&uStack_100,_DAT_00000010);
        local_58 = (undefined4)local_f8;
        uStack_54 = local_f8._4_4_;
        uStack_50 = (undefined4)uStack_f0;
        uStack_4c = uStack_f0._4_4_;
        local_48 = (int)local_e8;
        uStack_44 = local_e8._4_4_;
        iStack_40 = iStack_e0;
        uStack_3c = uStack_dc;
        if ((undefined **)uStack_100 == (undefined **)0x0) {
          pbStack_110 = (byte *)0x22f6aa;
          NumOrStr::eval_as_bigint(&local_b8,&local_58);
          if (local_b8 == (undefined **)0x0) {
            local_d0 = iStack_a0;
            uStack_cc = uStack_9c;
            if ((undefined **)CONCAT44(uStack_ac,uStack_b0) == (undefined **)0x8000000000000000)
            goto LAB_0022f713;
            local_f8 = (undefined **)CONCAT44(uStack_a4,local_a8);
            uStack_f0 = (undefined **)CONCAT44(uStack_9c,iStack_a0);
            pbStack_110 = (byte *)0x22f709;
            uStack_100 = (code *)CONCAT44(uStack_ac,uStack_b0);
            local_e8 = CONCAT44(uStack_94,iStack_98);
            auVar42 = AstNode::eval::___closure__(&uStack_100);
            lVar15 = auVar42._8_8_;
            if (auVar42._0_8_ == 0) goto LAB_0022f713;
          }
          else {
            pbStack_110 = (byte *)0x22f6bc;
            core::ptr::
            drop_in_place<core::result::Result<num_bigint::bigint::BigInt,uu_expr::ExprError>>
                      (&local_b8);
LAB_0022f713:
            lVar15 = 0;
          }
          pbStack_110 = (byte *)0x22f724;
          AstNode::eval(&uStack_100,_DAT_00000018);
          local_38 = (undefined4)local_f8;
          uStack_34 = local_f8._4_4_;
          uStack_30 = (undefined4)uStack_f0;
          uStack_2c = uStack_f0._4_4_;
          local_28 = local_e8;
          if ((undefined **)uStack_100 != (undefined **)0x0) goto LAB_0022f756;
          pbStack_110 = (byte *)0x22f791;
          NumOrStr::eval_as_bigint(&local_b8,&local_38);
          if (local_b8 == (undefined **)0x0) {
            local_d0 = iStack_a0;
            uStack_cc = uStack_9c;
            if ((undefined **)CONCAT44(uStack_ac,uStack_b0) == (undefined **)0x8000000000000000)
            goto LAB_0022f857;
            local_f8 = (undefined **)CONCAT44(uStack_a4,local_a8);
            uStack_f0 = (undefined **)CONCAT44(uStack_9c,iStack_a0);
            pbStack_110 = (byte *)0x22f7f7;
            uStack_100 = (code *)CONCAT44(uStack_ac,uStack_b0);
            local_e8 = CONCAT44(uStack_94,iStack_98);
            auVar42 = AstNode::eval::___closure__(&uStack_100);
            if (((auVar42._0_8_ == 0) || (lVar15 == 0)) || (auVar42._8_8_ == 0)) goto LAB_0022f857;
            uStack_f0 = (undefined **)(lVar15 + -1);
            local_f8 = (undefined **)((long)local_80 + (long)uStack_88);
            uStack_100 = (code *)uStack_88;
            pbStack_110 = (byte *)0x22f83f;
            local_e8 = auVar42._8_8_;
            _<alloc::string::String_as_core::iter::traits::collect::FromIterator<char>>::from_iter
                      (&local_b8,&uStack_100);
            *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_a4,local_a8);
            *(undefined4 *)(param_1 + 0x10) = (undefined4)local_b8;
            *(undefined4 *)(param_1 + 0x14) = local_b8._4_4_;
            *(undefined4 *)(param_1 + 0x18) = uStack_b0;
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
            pbStack_110 = (byte *)0x22f7ad;
            core::ptr::
            drop_in_place<core::result::Result<num_bigint::bigint::BigInt,uu_expr::ExprError>>
                      (&local_b8);
LAB_0022f857:
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
LAB_0022f756:
          *(int *)(param_1 + 0x18) = (int)local_e8;
          *(undefined4 *)(param_1 + 0x1c) = local_e8._4_4_;
          *(int *)(param_1 + 0x20) = iStack_e0;
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
        piVar30 = &iStack_90;
LAB_0022f76a:
        pbStack_110 = (byte *)0x22f76f;
        core::ptr::drop_in_place<alloc::string::String>(piVar30);
        return param_1;
      default:
        pbVar12 = (byte *)(ulong)(bVar34 & 0x55);
      case 0x15:
        out(0x54,(char)pbVar12);
        if (CONCAT62(0x16,CONCAT11((char)pbVar12 + -0x72,0x34)) != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pcVar14 = (char *)(CONCAT71((int7)((ulong)unaff_R13 >> 8),(char)unaff_R13 + 'Y') +
                          -0x7ffff3a4);
        *pcVar14 = *pcVar14 + 'Y';
        (*local_f8)[0xc] = (*local_f8)[0xc];
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* try { // try from 0022e396 to 0022e39f has its CatchHandler @ 0022e4ef */
      *(undefined8 *)((long)pppuVar23 + -8) = 0x22e3a0;
      core::ptr::drop_in_place<alloc::string::String>((undefined *)((long)pppuVar23 + 0x58));
                    /* try { // try from 0022e3a3 to 0022e3af has its CatchHandler @ 0022e504 */
      *(undefined8 *)((long)pppuVar23 + -8) = 0x22e3b0;
      core::ptr::drop_in_place<alloc::string::String>((undefined *)((long)pppuVar23 + 0x40));
      bVar3 = false;
      pppuVar24 = pppuVar23;
    }
    else {
      uVar13 = (ulong)(int)(&switchD_0022e158::caseD_19)[param_2 & 0xff];
      pbVar12 = (byte *)((long)&switchD_0022e158::caseD_19 + uVar13);
      uVar18 = (undefined2)extraout_RDX;
      bVar34 = (byte)pbVar12;
      iVar10 = (int)pbVar12;
      uVar17 = (undefined7)((ulong)pbVar12 >> 8);
      uVar19 = extraout_RDX;
      pppuVar26 = &local_108;
      uVar36 = extraout_XMM0_Dc;
      uVar38 = extraout_XMM0_Dd;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(param_2 & 0xff) {
      case 0:
                    /* try { // try from 0022e15d to 0022e1a5 has its CatchHandler @ 0022e504 */
        pbStack_110 = (byte *)0x22e16d;
        cVar9 = _<num_bigint::bigint::BigInt_as_core::cmp::Ord>::cmp(&local_e8,&local_108);
        bVar34 = cVar9 == -1;
        break;
      case 1:
                    /* try { // try from 0022e28c to 0022e29b has its CatchHandler @ 0022e504 */
        pbStack_110 = (byte *)0x22e29c;
        cVar9 = _<num_bigint::bigint::BigInt_as_core::cmp::Ord>::cmp(&local_e8,&local_108);
        if (cVar9 != '\x01') {
                    /* try { // try from 0022e3fa to 0022e401 has its CatchHandler @ 0022e511 */
          pbStack_110 = (byte *)0x22e402;
          core::ptr::
          drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                    (&local_108);
                    /* try { // try from 0022e405 to 0022e420 has its CatchHandler @ 0022e523 */
          pbStack_110 = (byte *)0x22e40f;
          core::ptr::
          drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                    (&local_e8);
          goto LAB_0022e40f;
        }
                    /* try { // try from 0022e2a7 to 0022e2ae has its CatchHandler @ 0022e511 */
        pbStack_110 = (byte *)0x22e2af;
        core::ptr::
        drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                  (&local_108);
                    /* try { // try from 0022e2b2 to 0022e2bb has its CatchHandler @ 0022e523 */
        pbStack_110 = (byte *)0x22e2bc;
        core::ptr::
        drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                  (&local_e8);
LAB_0022e438:
        bVar3 = true;
        pppuVar24 = &local_108;
        goto LAB_0022e43b;
      case 2:
        if ((char)local_d0 != (char)uStack_f0) {
                    /* try { // try from 0022e3cc to 0022e3d3 has its CatchHandler @ 0022e511 */
          pbStack_110 = (byte *)0x22e3d4;
          core::ptr::
          drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                    (&local_108);
                    /* try { // try from 0022e3d7 to 0022e3e0 has its CatchHandler @ 0022e523 */
          pbStack_110 = (byte *)0x22e3e1;
          core::ptr::
          drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                    (&local_e8);
          goto LAB_0022e438;
        }
        if ((char)local_d0 == '\x01') {
                    /* try { // try from 0022e23e to 0022e245 has its CatchHandler @ 0022e511 */
          pbStack_110 = (byte *)0x22e246;
          core::ptr::
          drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                    (&local_108);
                    /* try { // try from 0022e249 to 0022e252 has its CatchHandler @ 0022e523 */
          pbStack_110 = (byte *)0x22e253;
          core::ptr::
          drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                    (&local_e8);
          goto LAB_0022e40f;
        }
        bVar3 = true;
                    /* try { // try from 0022e4a7 to 0022e4d4 has its CatchHandler @ 0022e504 */
        pbStack_110 = (byte *)0x22e4af;
        bVar34 = ::alloc::vec::partial_eq::
                 _<impl_core::cmp::PartialEq<alloc::vec::Vec<U,A2>>for_alloc::vec::Vec<T,A1>>::eq
                           (CONCAT44(uStack_dc,iStack_e0),local_d8,uStack_100,local_f8);
        goto LAB_0022e3b3;
      case 3:
        if ((char)local_d0 != (char)uStack_f0) {
                    /* try { // try from 0022e3e3 to 0022e3ea has its CatchHandler @ 0022e511 */
          pbStack_110 = (byte *)0x22e3eb;
          core::ptr::
          drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                    (&local_108);
                    /* try { // try from 0022e3ee to 0022e3f7 has its CatchHandler @ 0022e523 */
          pbStack_110 = (byte *)0x22e3f8;
          core::ptr::
          drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                    (&local_e8);
          goto LAB_0022e40f;
        }
        if ((char)local_d0 == '\x01') {
                    /* try { // try from 0022e26f to 0022e276 has its CatchHandler @ 0022e511 */
          pbStack_110 = (byte *)0x22e277;
          core::ptr::
          drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                    (&local_108);
                    /* try { // try from 0022e27a to 0022e283 has its CatchHandler @ 0022e523 */
          pbStack_110 = (byte *)0x22e284;
          core::ptr::
          drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                    (&local_e8);
          goto LAB_0022e438;
        }
        pbStack_110 = (byte *)0x22e4d5;
        bVar34 = ::alloc::vec::partial_eq::
                 _<impl_core::cmp::PartialEq<alloc::vec::Vec<U,A2>>for_alloc::vec::Vec<T,A1>>::eq
                           (CONCAT44(uStack_dc,iStack_e0),local_d8,uStack_100,local_f8);
        bVar34 = bVar34 ^ 1;
        break;
      case 4:
                    /* try { // try from 0022e209 to 0022e218 has its CatchHandler @ 0022e504 */
        pbStack_110 = (byte *)0x22e219;
        cVar9 = _<num_bigint::bigint::BigInt_as_core::cmp::Ord>::cmp(&local_e8,&local_108);
        bVar34 = cVar9 == '\x01';
        break;
      case 5:
                    /* try { // try from 0022e2c4 to 0022e2d3 has its CatchHandler @ 0022e504 */
        pbStack_110 = (byte *)0x22e2d4;
        bVar34 = _<num_bigint::bigint::BigInt_as_core::cmp::Ord>::cmp(&local_e8,&local_108);
        if (1 < bVar34) {
                    /* try { // try from 0022e423 to 0022e42a has its CatchHandler @ 0022e511 */
          pbStack_110 = (byte *)0x22e42b;
          core::ptr::
          drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                    (&local_108);
                    /* try { // try from 0022e42e to 0022e446 has its CatchHandler @ 0022e523 */
          pbStack_110 = (byte *)0x22e438;
          core::ptr::
          drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                    (&local_e8);
          goto LAB_0022e438;
        }
        pbStack_110 = (byte *)0x22e2e7;
        core::ptr::
        drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                  (&local_108);
                    /* try { // try from 0022e2ea to 0022e2f3 has its CatchHandler @ 0022e523 */
        pbStack_110 = (byte *)0x22e2f4;
        core::ptr::
        drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                  (&local_e8);
LAB_0022e40f:
        bVar3 = true;
        goto LAB_0022e412;
      case 6:
        out(*(undefined *)piVar30,uVar18);
        cVar9 = bVar34 + *pbVar12 + (0xffffffffffe971e3 < uVar13);
        pcVar14 = (char *)(CONCAT71(uVar17,cVar9) + 0xf);
        *pcVar14 = *pcVar14 + cVar9;
        goto LAB_0022e174;
      case 7:
        pppuVar21 = (undefined ***)&pbStack_110;
        pbStack_110 = pbVar12;
        goto code_r0x0022e341;
      case 8:
        pppuVar20 = (undefined ***)&pbStack_110;
        pbStack_110 = pbVar12;
        goto code_r0x0022e303;
      case 9:
        goto switchD_0022e158_caseD_9;
      case 10:
        out(0xe8,iVar10);
        pcVar2 = (code *)swi(1);
        pbVar12 = (byte *)(*pcVar2)();
        return pbVar12;
      case 0xb:
        if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pppuVar22 = (undefined ***)&pbStack_110;
        pbStack_110 = pbVar12;
        goto code_r0x0022e362;
      case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xd:
        goto LAB_0022e6a4;
      case 0xe:
        pppuVar26 = &local_108;
      case 0x10:
switchD_0022e158_caseD_10:
        *(char *)((long)pppuVar26 + 0x80) = *(char *)((long)pppuVar26 + 0x80) - (char)pbVar12;
        *(undefined4 *)((long)pppuVar26 + 0x60) = *(undefined4 *)((long)pppuVar26 + 0x90);
        *(undefined4 *)((long)pppuVar26 + 100) = *(undefined4 *)((long)pppuVar26 + 0x94);
        *(undefined4 *)((long)pppuVar26 + 0x68) = *(undefined4 *)((long)pppuVar26 + 0x98);
        *(undefined4 *)((long)pppuVar26 + 0x6c) = *(undefined4 *)((long)pppuVar26 + 0x9c);
        *(undefined ***)((long)pppuVar26 + 0x50) = ppuVar35;
        *(undefined4 *)((long)pppuVar26 + 0x58) = uVar36;
        *(undefined4 *)((long)pppuVar26 + 0x5c) = uVar38;
        *(undefined8 *)((long)pppuVar26 + -8) = 0x22e729;
        pbVar12 = (byte *)num_bigint::bigint::addition::
                          _<impl_core::ops::arith::Add_for_num_bigint::bigint::BigInt>::add
                                    (pppuVar26,(undefined *)((long)pppuVar26 + 0x20),
                                     (undefined *)((long)pppuVar26 + 0x50));
        pppuVar27 = pppuVar26;
LAB_0022e844:
        uVar16 = *pppuVar27;
        uVar19 = pppuVar27[1];
        uVar5 = pppuVar27[3];
        pppuVar27[0x1a] = pppuVar27[2];
        pppuVar27[0x1b] = (undefined **)uVar5;
        pppuVar27[0x18] = (undefined **)uVar16;
        pppuVar27[0x19] = (undefined **)uVar19;
        *(undefined ***)(param_1 + 0x18) = pppuVar27[2];
        *(undefined8 *)(param_1 + 0x20) = uVar5;
        *(undefined8 *)(param_1 + 8) = uVar16;
        *(undefined8 *)(param_1 + 0x10) = uVar19;
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        return pbVar12;
      case 0xf:
        goto switchD_0022e158_caseD_f;
      case 0x11:
        in(uVar18);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x12:
        uVar11 = iVar10 + *(int *)pbVar12;
        pcVar14 = (char *)(ulong)uVar11;
        *pcVar14 = *pcVar14 + (char)uVar11;
        pcVar14[-0x73] = pcVar14[-0x73] + '\x1c';
        pppuVar29 = (undefined ***)0xb024;
        pcVar14 = (char *)((ulong)uVar11 & 0xffffffffffffff02);
        *pcVar14 = *pcVar14 + (char)pcVar14;
        goto switchD_0022e1e4_caseD_c;
      case 0x13:
        goto switchD_0022e158_caseD_13;
      case 0x14:
        *pbVar12 = *pbVar12 + bVar34;
        core::unicode::unicode_data::white_space::WHITESPACE_MAP[uVar13 + 0xce] =
             core::unicode::unicode_data::white_space::WHITESPACE_MAP[uVar13 + 0xce] + '\x1c';
                    /* try { // try from 0022ea7d to 0022ea89 has its CatchHandler @ 0022f1bd */
        pppuVar28 = (undefined ***)0xb024;
        cVar9 = bVar34 + 0x8e;
        pcVar14 = (char *)CONCAT71(uVar17,cVar9);
        if (0x71 < bVar34 || cVar9 == '\0') {
          *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x168e1c + (uint)(0x71 < bVar34);
          goto switchD_0022e1e4_caseD_e;
        }
        *pcVar14 = *pcVar14 + cVar9;
        if (cVar9 != '\0') goto switchD_0022e1e4_caseD_e;
                    /* try { // try from 0022f03c to 0022f045 has its CatchHandler @ 0022f1bd */
        uRam000000000000b01c = 0x22f046;
        _<uu_expr::syntax_tree::NumOrStr_as_core::convert::From<usize>>::from(0xb024,0);
        uVar4 = uRam000000000000b040;
        uVar38 = uRam000000000000b03c;
        uVar36 = uRam000000000000b038;
        uVar41 = uRam000000000000b030;
        uVar40 = uRam000000000000b02c;
        uVar39 = uRam000000000000b028;
        uVar37 = uRam000000000000b024;
        pppuVar29 = (undefined ***)0xb024;
        *(undefined4 *)(param_1 + 0x18) = uRam000000000000b034;
        *(undefined4 *)(param_1 + 0x1c) = uVar36;
        *(undefined4 *)(param_1 + 0x20) = uVar38;
        *(undefined4 *)(param_1 + 0x24) = uVar4;
        *(undefined4 *)(param_1 + 8) = uVar37;
        *(undefined4 *)(param_1 + 0xc) = uVar39;
        *(undefined4 *)(param_1 + 0x10) = uVar40;
        *(undefined4 *)(param_1 + 0x14) = uVar41;
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
                    /* try { // try from 0022f05e to 0022f06a has its CatchHandler @ 0022f252 */
        uRam000000000000b01c = 0x22f06b;
        core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(0xb0d4);
        goto LAB_0022ecda;
      case 0x15:
        goto switchD_0022e158_caseD_15;
      case 0x16:
        goto switchD_0022e158_caseD_16;
      case 0x17:
        goto switchD_0022e158_caseD_17;
      case 0x18:
        *(byte *)(param_5 + -0x39) = *(byte *)(param_5 + -0x39) | 0x1c;
        uVar11 = iVar10 + *(int *)pbVar12;
        *(char *)(ulong)uVar11 = *(char *)(ulong)uVar11 + (char)uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        uVar37 = in(uVar18);
        *(undefined4 *)pppuVar32 = uVar37;
      case 0x1b:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar3 = true;
      pppuVar24 = &local_108;
    }
LAB_0022e3b3:
                    /* try { // try from 0022e3b3 to 0022e3ba has its CatchHandler @ 0022e511 */
    *(undefined8 *)((long)pppuVar24 + -8) = 0x22e3bb;
    core::ptr::
    drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
              (pppuVar24);
                    /* try { // try from 0022e3bb to 0022e3c4 has its CatchHandler @ 0022e523 */
    *(undefined8 *)((long)pppuVar24 + -8) = 0x22e3c5;
    core::ptr::
    drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
              ((undefined *)((long)pppuVar24 + 0x20));
    pppuVar25 = pppuVar24;
    if (bVar34 == 0) {
LAB_0022e43b:
      *(undefined8 *)((long)pppuVar24 + -8) = 0x22e447;
      pbVar12 = (byte *)_<uu_expr::syntax_tree::NumOrStr_as_core::convert::From<usize>>::from
                                  ((undefined *)((long)pppuVar24 + 0x70),0);
      pppuVar26 = pppuVar24;
    }
    else {
LAB_0022e412:
      *(undefined8 *)((long)pppuVar25 + -8) = 0x22e421;
      pbVar12 = (byte *)_<uu_expr::syntax_tree::NumOrStr_as_core::convert::From<usize>>::from
                                  ((undefined *)((long)pppuVar25 + 0x70),1);
      pppuVar26 = pppuVar25;
    }
    uVar37 = *(undefined4 *)((long)pppuVar26 + 0x70);
    uVar39 = *(undefined4 *)((long)pppuVar26 + 0x74);
    uVar40 = *(undefined4 *)((long)pppuVar26 + 0x78);
    uVar41 = *(undefined4 *)((long)pppuVar26 + 0x7c);
    uVar36 = *(undefined4 *)((long)pppuVar26 + 0x84);
    uVar38 = *(undefined4 *)((long)pppuVar26 + 0x88);
    uVar4 = *(undefined4 *)((long)pppuVar26 + 0x8c);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((long)pppuVar26 + 0x80);
    *(undefined4 *)(param_1 + 0x1c) = uVar36;
    *(undefined4 *)(param_1 + 0x20) = uVar38;
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    *(undefined4 *)(param_1 + 8) = uVar37;
    *(undefined4 *)(param_1 + 0xc) = uVar39;
    *(undefined4 *)(param_1 + 0x10) = uVar40;
    *(undefined4 *)(param_1 + 0x14) = uVar41;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    if (bVar3) {
                    /* try { // try from 0022e468 to 0022e474 has its CatchHandler @ 0022e542 */
      *(undefined8 *)((long)pppuVar26 + -8) = 0x22e475;
      core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>
                ((undefined *)((long)pppuVar26 + 0xc0));
LAB_0022e475:
      *(undefined8 *)((long)pppuVar26 + -8) = 0x22e482;
      pbVar12 = (byte *)core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>
                                  ((undefined *)((long)pppuVar26 + 0xa0));
    }
    return pbVar12;
  }
  *(undefined ***)(param_1 + 0x18) = local_80;
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
  goto LAB_0022e475;
}