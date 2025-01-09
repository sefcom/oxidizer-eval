/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0022f173) overlaps instruction at (ram,0x0022f172)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0022f7dd) */

byte * __rustcall
uu_expr::syntax_tree::RelationOp::eval
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
  long local_28;
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
  pbVar14 = (byte *)AstNode::eval(&local_98,param_3);
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
  AstNode::eval(&local_98,param_4);
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
  NumOrStr::to_bigint(&local_e8,&local_68);
                    /* try { // try from 0022e80f to 0022e81e has its CatchHandler @ 0022ebdf */
  pbStack_110 = (byte *)0x22e81f;
  ppuVar33 = (undefined **)NumOrStr::to_bigint(&local_108);
  if ((local_e8 == -0x8000000000000000) || (local_108 == (undefined **)0x8000000000000000)) {
LAB_0022e864:
    uStack_88 = (undefined **)CONCAT44(uStack_54,local_58);
    uStack_80 = (undefined **)CONCAT44(uStack_4c,uStack_50);
    local_98 = local_68;
    uStack_94 = uStack_64;
    iStack_90 = (int)uStack_60;
    uStack_8c = uStack_60._4_4_;
    pbStack_110 = (byte *)0x22e896;
    NumOrStr::eval_as_string(&stack0xffffffffffffff38,&local_98);
    uStack_88 = (undefined **)CONCAT44(uStack_34,local_38);
    uStack_80 = (undefined **)CONCAT44(uStack_2c,uStack_30);
    local_98 = local_48;
    uStack_94 = uStack_44;
    iStack_90 = iStack_40;
    uStack_8c = uStack_3c;
                    /* try { // try from 0022e8b3 to 0022e8c1 has its CatchHandler @ 0022ebbd */
    pppuVar29 = (undefined ***)&uStack_b0;
    pbStack_110 = (byte *)0x22e8c2;
    uVar35 = local_38;
    uVar37 = uStack_34;
    uVar38 = uStack_30;
    uVar39 = uStack_2c;
    ppuVar33 = (undefined **)NumOrStr::eval_as_string();
    uVar16 = (ulong)(int)(&switchD_0022e8d4::caseD_13)[param_2 & 0xff];
    pbVar14 = (byte *)((long)&switchD_0022e8d4::caseD_13 + uVar16);
    cVar11 = (char)pbVar14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_2 & 0xff) {
    case 0:
                    /* try { // try from 0022e8ea to 0022e8ee has its CatchHandler @ 0022ebae */
      pbStack_110 = (byte *)0x22e8ef;
      cVar11 = _<alloc::vec::Vec<T,A1>as_core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp
                         (uStack_c0,local_b8,CONCAT44(uStack_a4,local_a8),
                          CONCAT44(uStack_9c,iStack_a0));
      bVar32 = cVar11 == -1;
      break;
    case 1:
code_r0x0022ea42:
      *(undefined8 *)((long)pppuVar21 + -8) = 0x22ea51;
      cVar11 = _<alloc::vec::Vec<T,A1>as_core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp
                         ();
      bVar32 = (byte)(cVar11 - 3U) < 0xfe;
      pppuVar22 = pppuVar21;
      break;
    case 2:
switchD_0022e848_caseD_9:
      pbStack_110 = (byte *)0x22ea13;
      bVar32 = ::alloc::vec::partial_eq::
               _<impl_core::cmp::PartialEq<alloc::vec::Vec<U,A2>>for_alloc::vec::Vec<T,A1>>::eq();
      pppuVar22 = &local_108;
      break;
    case 3:
code_r0x0022ea21:
      *(undefined8 *)((long)pppuVar20 + -8) = 0x22ea30;
      bVar32 = ::alloc::vec::partial_eq::
               _<impl_core::cmp::PartialEq<alloc::vec::Vec<U,A2>>for_alloc::vec::Vec<T,A1>>::eq();
      bVar32 = bVar32 ^ 1;
      pppuVar22 = pppuVar20;
      break;
    case 4:
code_r0x0022e9e3:
                    /* try { // try from 0022e9ed to 0022ea6f has its CatchHandler @ 0022ebae */
      *(undefined8 *)((long)pppuVar19 + -8) = 0x22e9f2;
      cVar11 = _<alloc::vec::Vec<T,A1>as_core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp
                         ();
      bVar32 = cVar11 == '\x01';
      pppuVar22 = pppuVar19;
      break;
    case 5:
      pbStack_110 = (byte *)0x22ea70;
      bVar32 = _<alloc::vec::Vec<T,A1>as_core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp
                         (uStack_c0,local_b8,CONCAT44(uStack_a4,local_a8),
                          CONCAT44(uStack_9c,iStack_a0));
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
      core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&uStack_88);
      pbStack_110 = (byte *)0x22ed81;
      pbVar14 = (byte *)core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&local_68);
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
      pbVar14 = (byte *)num_bigint::bigint::multiplication::
                        _<impl_core::ops::arith::Mul_for_num_bigint::bigint::BigInt>::mul
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
      pbVar14 = (byte *)AstNode::eval();
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
      pbVar14 = (byte *)is_truthy((long *)pppuVar28 + 0x10);
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
      AstNode::eval(pppuVar28,CONCAT71(uVar3,1));
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
        cVar11 = is_truthy((long *)pppuVar28 + 0x16);
        if (cVar11 == '\0') {
          ((long *)pppuVar28)[-1] = 0x22f74a;
          _<uu_expr::syntax_tree::NumOrStr_as_core::convert::From<usize>>::from(pppuVar28,0);
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
          core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>((long *)pppuVar28 + 0x16);
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
      pbVar14 = (byte *)core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(puVar30);
      return pbVar14;
    case 0xd:
      *(byte *)pppuVar29 = (*(byte *)pppuVar29 + 0xac) - (0xffffffffffea0fab < uVar16);
      param_9 = param_9 - (int)pbVar14;
      uVar18 = extraout_RDX_00;
switchD_0022e848_caseD_13:
      pbStack_110 = (byte *)0x22f076;
      pbVar14 = (byte *)AstNode::eval((ulong)&local_108 & 0xffffffff,uVar18);
      param_9 = (int)uStack_100;
      uStack000000000000001c = uStack_100._4_4_;
      in_stack_00000020 = (undefined4)local_f8;
      uStack0000000000000024 = local_f8._4_4_;
      param_10 = (undefined4)uStack_f0;
      uStack000000000000002c = uStack_f0._4_4_;
      in_stack_00000030 = (int)local_e8;
      uStack0000000000000034 = local_e8._4_4_;
      if (local_108 == (undefined **)0x0) {
        pbStack_110 = (byte *)0x22f286;
        NumOrStr::eval_as_string(&stack0xffffffffffffffe8,&stack0x00000018);
                    /* try { // try from 0022f286 to 0022f290 has its CatchHandler @ 0022f8fe */
        pbStack_110 = (byte *)0x22f291;
        AstNode::eval(&local_108,CONCAT71(uVar3,1));
        param_11 = (int)uStack_100;
        uStack000000000000003c = uStack_100._4_4_;
        in_stack_00000040 = (undefined4)local_f8;
        uStack0000000000000044 = local_f8._4_4_;
        param_12 = (undefined4)uStack_f0;
        uStack000000000000004c = uStack_f0._4_4_;
        in_stack_00000050 = (int)local_e8;
        uStack0000000000000054 = local_e8._4_4_;
        if (local_108 == (undefined **)0x0) {
                    /* try { // try from 0022f3bc to 0022f3d3 has its CatchHandler @ 0022f8fe */
          pbStack_110 = (byte *)0x22f3d4;
          NumOrStr::eval_as_string(&stack0x00000000,&stack0x00000038);
          local_108 = &PTR_s___002a30a8;
          uStack_100 = (code *)&DAT_00000001;
          local_e8 = 0;
          local_f8 = (undefined **)&stack0xffffffffffffff38;
          uStack_f0 = (undefined **)&DAT_00000001;
                    /* try { // try from 0022f415 to 0022f424 has its CatchHandler @ 0022f8c8 */
          pbStack_110 = (byte *)0x22f425;
          core::option::Option<T>::map_or_else(&stack0x00000098,&local_108);
          local_38 = param_13;
          uStack_34 = uStack000000000000009c;
          uStack_30 = uStack00000000000000a0;
          uStack_2c = uStack00000000000000a4;
          local_28 = param_14;
                    /* try { // try from 0022f44d to 0022f460 has its CatchHandler @ 0022f8cd */
          pbStack_110 = (byte *)0x22f461;
          onig::Regex::with_options
                    (&stack0xffffffffffffff38,
                     CONCAT44(uStack00000000000000a4,uStack00000000000000a0),param_14,0,
                     OnigSyntaxGrep);
          if (&stack0x00000000 == (undefined *)0x8000000000000000) {
            uStack_60 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    /* try { // try from 0022f483 to 0022f4f7 has its CatchHandler @ 0022f8b6 */
            pbStack_110 = (byte *)0x22f491;
            lVar15 = onig::Regex::captures_len(0x7fffffffffffffa0);
            if (lVar15 == 0) {
                    /* try { // try from 0022f784 to 0022f7f6 has its CatchHandler @ 0022f8b6 */
              pbStack_110 = (byte *)0x22f79a;
              onig::Regex::find(0x7fffffffffffffa8,0x7fffffffffffffa0,unaff_R15,unaff_RBP);
              pbStack_110 = (byte *)0x22f7ae;
              _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_108,"0",1);
              local_b8 = local_f8;
              pbStack_110 = (byte *)0x22f7db;
              core::option::Option<T>::map_or
                        (0x7fffffffffffff78,0x7fffffffffffffa8,0x7fffffffffffff38);
            }
            else {
              pbStack_110 = (byte *)0x22f4bd;
              onig::find::_<impl_onig::Regex>::captures
                        (0x7fffffffffffff38,0x7fffffffffffffa0,unaff_R15,unaff_RBP);
              local_d8 = CONCAT44(uStack_94,local_98);
              local_e8 = CONCAT44(uStack_a4,local_a8);
              iStack_e0 = iStack_a0;
              uStack_dc = uStack_9c;
              local_f8 = local_b8;
              uStack_f0 = (undefined **)CONCAT44(uStack_ac,uStack_b0);
              uStack_100 = _<alloc::string::String_as_core::fmt::Display>::fmt;
              pbStack_110 = (byte *)0x22f4f8;
              local_108 = (undefined **)register0x00000020;
              auVar40 = StringOp::eval::___closure__(&local_108);
              if (auVar40._0_8_ == 0) {
                auVar40 = ZEXT816(1);
              }
              pbStack_110 = (byte *)0x22f7f7;
              _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_108,auVar40._0_8_,auVar40._8_8_)
              ;
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
                    /* try { // try from 0022f833 to 0022f83f has its CatchHandler @ 0022f8cd */
            pbStack_110 = (byte *)0x22f840;
            core::ptr::drop_in_place<onig::Regex>(0x7fffffffffffffa0);
                    /* try { // try from 0022f840 to 0022f84c has its CatchHandler @ 0022f8c8 */
            pbStack_110 = (byte *)0x22f84d;
            core::ptr::drop_in_place<alloc::string::String>(0x7fffffffffffffc8);
                    /* try { // try from 0022f84d to 0022f859 has its CatchHandler @ 0022f8fe */
            pbStack_110 = (byte *)0x22f85a;
            core::ptr::drop_in_place<alloc::string::String>(0x8000000000000000);
          }
          else {
            local_f8 = local_b8;
            uStack_f0 = (undefined **)CONCAT44(uStack_ac,uStack_b0);
            uStack_100 = _<alloc::string::String_as_core::fmt::Display>::fmt;
                    /* try { // try from 0022f682 to 0022f689 has its CatchHandler @ 0022f8cd */
            pbStack_110 = (byte *)0x22f68a;
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
                    /* try { // try from 0022f699 to 0022f6a5 has its CatchHandler @ 0022f8c8 */
            pbStack_110 = (byte *)0x22f6a6;
            core::ptr::drop_in_place<alloc::string::String>(&local_38);
                    /* try { // try from 0022f6a6 to 0022f6b2 has its CatchHandler @ 0022f8fe */
            pbStack_110 = (byte *)0x22f6b3;
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
        pbStack_110 = (byte *)0x22f867;
        pbVar14 = (byte *)core::ptr::drop_in_place<alloc::string::String>(&stack0xffffffffffffffe8);
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
      Parser::parse();
switchD_0022e848_caseD_17:
      return pbVar14;
    case 0x10:
switchD_0022e848_caseD_16:
      pbStack_110 = (byte *)0x22fc54;
      AstNode::eval(&uStack_100);
      uVar35 = SUB84(uStack_f0,0);
      uVar37 = uStack_f0._4_4_;
      ppuVar33 = local_f8;
      if ((undefined **)uStack_100 != (undefined **)0x0) {
LAB_0022fc8a:
        *(int *)(param_1 + 0x18) = (int)local_e8;
        *(undefined4 *)(param_1 + 0x1c) = local_e8._4_4_;
        *(int *)(param_1 + 0x20) = iStack_e0;
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
      NumOrStr::eval_as_string(&local_d8,&stack0xffffffffffffffe8);
                    /* try { // try from 0022fd33 to 0022fd44 has its CatchHandler @ 0022ff4f */
      pbStack_110 = (byte *)0x22fd38;
      uVar18 = _<core::str::iter::Chars_as_core::iter::traits::iterator::Iterator>::count
                         (CONCAT44(uStack_cc,local_d0),
                          in_stack_ffffffffffffff38 + CONCAT44(uStack_cc,local_d0));
      pbStack_110 = (byte *)0x22fd45;
      _<uu_expr::syntax_tree::NumOrStr_as_core::convert::From<usize>>::from(&local_b8,uVar18);
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
      NumOrStr::eval_as_string(&iStack_90,appuStack_78);
      pbStack_110 = (byte *)0x22fcdd;
      AstNode::eval(&uStack_100,*(undefined8 *)(CONCAT71(uVar3,1) + 0x10));
      local_58 = (undefined4)local_f8;
      uStack_54 = local_f8._4_4_;
      uStack_50 = (undefined4)uStack_f0;
      uStack_4c = uStack_f0._4_4_;
      local_48 = (int)local_e8;
      uStack_44 = local_e8._4_4_;
      iStack_40 = iStack_e0;
      uStack_3c = uStack_dc;
      if ((undefined **)uStack_100 == (undefined **)0x0) {
        pbStack_110 = (byte *)0x22fd7a;
        NumOrStr::eval_as_bigint(&local_b8,&local_58);
        if (local_b8 == (undefined **)0x0) {
          local_d0 = iStack_a0;
          uStack_cc = uStack_9c;
          if ((undefined **)CONCAT44(uStack_ac,uStack_b0) == (undefined **)0x8000000000000000)
          goto LAB_0022fde3;
          local_f8 = (undefined **)CONCAT44(uStack_a4,local_a8);
          uStack_f0 = (undefined **)CONCAT44(uStack_9c,iStack_a0);
          pbStack_110 = (byte *)0x22fdd9;
          uStack_100 = (code *)CONCAT44(uStack_ac,uStack_b0);
          local_e8 = CONCAT44(uStack_94,local_98);
          auVar40 = AstNode::eval::___closure__(&uStack_100);
          lVar15 = auVar40._8_8_;
          if (auVar40._0_8_ == 0) goto LAB_0022fde3;
        }
        else {
          pbStack_110 = (byte *)0x22fd8c;
          core::ptr::
          drop_in_place<core::result::Result<num_bigint::bigint::BigInt,uu_expr::ExprError>>
                    (&local_b8);
LAB_0022fde3:
          lVar15 = 0;
        }
        pbStack_110 = (byte *)0x22fdf4;
        AstNode::eval(&uStack_100,*(undefined8 *)(CONCAT71(uVar3,1) + 0x18));
        local_38 = (undefined4)local_f8;
        uStack_34 = local_f8._4_4_;
        uStack_30 = (undefined4)uStack_f0;
        uStack_2c = uStack_f0._4_4_;
        local_28 = local_e8;
        if ((undefined **)uStack_100 != (undefined **)0x0) goto LAB_0022fe26;
        pbStack_110 = (byte *)0x22fe61;
        NumOrStr::eval_as_bigint(&local_b8,&local_38);
        if (local_b8 == (undefined **)0x0) {
          local_d0 = iStack_a0;
          uStack_cc = uStack_9c;
          if ((undefined **)CONCAT44(uStack_ac,uStack_b0) == (undefined **)0x8000000000000000)
          goto LAB_0022ff27;
          local_f8 = (undefined **)CONCAT44(uStack_a4,local_a8);
          uStack_f0 = (undefined **)CONCAT44(uStack_9c,iStack_a0);
          pbStack_110 = (byte *)0x22fec7;
          uStack_100 = (code *)CONCAT44(uStack_ac,uStack_b0);
          local_e8 = CONCAT44(uStack_94,local_98);
          auVar40 = AstNode::eval::___closure__(&uStack_100);
          if (((auVar40._0_8_ == 0) || (lVar15 == 0)) || (auVar40._8_8_ == 0)) goto LAB_0022ff27;
          uStack_f0 = (undefined **)(lVar15 + -1);
          local_f8 = (undefined **)((long)uStack_80 + (long)uStack_88);
          uStack_100 = (code *)uStack_88;
          pbStack_110 = (byte *)0x22ff0f;
          local_e8 = auVar40._8_8_;
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
          pbStack_110 = (byte *)0x22fe7d;
          core::ptr::
          drop_in_place<core::result::Result<num_bigint::bigint::BigInt,uu_expr::ExprError>>
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
      piVar31 = &iStack_90;
LAB_0022fe3a:
      pbStack_110 = (byte *)0x22fe3f;
      core::ptr::drop_in_place<alloc::string::String>(piVar31);
      return param_1;
    default:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x15:
      return pbVar14;
    }
                    /* try { // try from 0022ea76 to 0022ea7f has its CatchHandler @ 0022ebbd */
    *(undefined8 *)((long)pppuVar22 + -8) = 0x22ea80;
    core::ptr::drop_in_place<alloc::string::String>((undefined *)((long)pppuVar22 + 0x58));
                    /* try { // try from 0022ea83 to 0022ea8f has its CatchHandler @ 0022ebd2 */
    *(undefined8 *)((long)pppuVar22 + -8) = 0x22ea90;
    core::ptr::drop_in_place<alloc::string::String>((undefined *)((long)pppuVar22 + 0x40));
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
    cVar11 = _<num_bigint::bigint::BigInt_as_core::cmp::Ord>::cmp(&local_e8,&local_108);
    bVar32 = cVar11 == -1;
    goto LAB_0022e90f;
  case 1:
                    /* try { // try from 0022e96c to 0022e97b has its CatchHandler @ 0022ebd2 */
    pbStack_110 = (byte *)0x22e97c;
    cVar11 = _<num_bigint::bigint::BigInt_as_core::cmp::Ord>::cmp(&local_e8,&local_108);
    if (cVar11 == '\x01') {
                    /* try { // try from 0022e987 to 0022e98e has its CatchHandler @ 0022ebdf */
      pbStack_110 = (byte *)0x22e98f;
      core::ptr::
      drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                (&local_108);
                    /* try { // try from 0022e992 to 0022e99b has its CatchHandler @ 0022ebf1 */
      pbStack_110 = (byte *)0x22e99c;
      core::ptr::
      drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                (&local_e8);
      goto LAB_0022eb06;
    }
                    /* try { // try from 0022eac8 to 0022eacf has its CatchHandler @ 0022ebdf */
    pbStack_110 = (byte *)0x22ead0;
    core::ptr::
    drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
              (&local_108);
                    /* try { // try from 0022ead3 to 0022eaee has its CatchHandler @ 0022ebf1 */
    pbStack_110 = (byte *)0x22eadd;
    core::ptr::
    drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
              (&local_e8);
LAB_0022eadd:
    bVar2 = true;
    goto LAB_0022eae0;
  case 2:
    if ((char)local_d0 != (char)uStack_f0) {
                    /* try { // try from 0022eaac to 0022eab3 has its CatchHandler @ 0022ebdf */
      pbStack_110 = (byte *)0x22eab4;
      core::ptr::
      drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                (&local_108);
                    /* try { // try from 0022eab7 to 0022eac0 has its CatchHandler @ 0022ebf1 */
      pbStack_110 = (byte *)0x22eac1;
      core::ptr::
      drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                (&local_e8);
      goto LAB_0022eb06;
    }
    if ((char)local_d0 == '\x01') {
                    /* try { // try from 0022e92e to 0022e935 has its CatchHandler @ 0022ebdf */
      pbStack_110 = (byte *)0x22e936;
      core::ptr::
      drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                (&local_108);
                    /* try { // try from 0022e939 to 0022e942 has its CatchHandler @ 0022ebf1 */
      pbStack_110 = (byte *)0x22e943;
      core::ptr::
      drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                (&local_e8);
      goto LAB_0022eadd;
    }
    bVar2 = true;
                    /* try { // try from 0022eb75 to 0022eba2 has its CatchHandler @ 0022ebd2 */
    pbStack_110 = (byte *)0x22eb7d;
    bVar32 = ::alloc::vec::partial_eq::
             _<impl_core::cmp::PartialEq<alloc::vec::Vec<U,A2>>for_alloc::vec::Vec<T,A1>>::eq
                       (CONCAT44(uStack_dc,iStack_e0),local_d8,uStack_100,local_f8);
    break;
  case 3:
    bVar2 = true;
    if ((char)local_d0 == (char)uStack_f0) {
      if ((char)local_d0 != '\x01') {
        pbStack_110 = (byte *)0x22eba3;
        bVar32 = ::alloc::vec::partial_eq::
                 _<impl_core::cmp::PartialEq<alloc::vec::Vec<U,A2>>for_alloc::vec::Vec<T,A1>>::eq
                           (CONCAT44(uStack_dc,iStack_e0),local_d8,uStack_100,local_f8);
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
    cVar11 = _<num_bigint::bigint::BigInt_as_core::cmp::Ord>::cmp(&local_e8,&local_108);
    bVar32 = cVar11 == '\x01';
LAB_0022e90f:
    bVar2 = true;
    pppuVar23 = &local_108;
    break;
  case 5:
                    /* try { // try from 0022e9a4 to 0022e9b3 has its CatchHandler @ 0022ebd2 */
    pbStack_110 = (byte *)0x22e9b4;
    bVar32 = _<num_bigint::bigint::BigInt_as_core::cmp::Ord>::cmp(&local_e8,&local_108);
    if (bVar32 < 2) {
      pbStack_110 = (byte *)0x22e9c7;
      core::ptr::
      drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                (&local_108);
                    /* try { // try from 0022e9ca to 0022e9d3 has its CatchHandler @ 0022ebf1 */
      pbStack_110 = (byte *)0x22e9d4;
      core::ptr::
      drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
                (&local_e8);
      goto LAB_0022eadd;
    }
                    /* try { // try from 0022eaf1 to 0022eaf8 has its CatchHandler @ 0022ebdf */
    pbStack_110 = (byte *)0x22eaf9;
    core::ptr::
    drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
              (&local_108);
                    /* try { // try from 0022eafc to 0022eb14 has its CatchHandler @ 0022ebf1 */
    pbStack_110 = (byte *)0x22eb06;
    core::ptr::
    drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
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
    pbVar14 = (byte *)num_bigint::bigint::addition::
                      _<impl_core::ops::arith::Add_for_num_bigint::bigint::BigInt>::add
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
    core::unicode::unicode_data::white_space::WHITESPACE_MAP[lVar15 + 0xce] =
         core::unicode::unicode_data::white_space::WHITESPACE_MAP[lVar15 + 0xce] + '<';
                    /* try { // try from 0022f14d to 0022f159 has its CatchHandler @ 0022f88d */
    pppuVar27 = (undefined ***)0xb024;
    cVar11 = bVar32 - 0x10;
    pcVar17 = (char *)CONCAT71((int7)((ulong)pbVar14 >> 8),cVar11);
    if (0xf < bVar32 || cVar11 == '\0') {
      *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x15f03c + (uint)(0xf < bVar32);
      goto switchD_0022e8d4_caseD_e;
    }
    *pcVar17 = *pcVar17 + cVar11;
    if (cVar11 != '\0') goto switchD_0022e8d4_caseD_e;
                    /* try { // try from 0022f70c to 0022f715 has its CatchHandler @ 0022f88d */
    uRam000000000000b01c = 0x22f716;
    _<uu_expr::syntax_tree::NumOrStr_as_core::convert::From<usize>>::from(0xb024,0);
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
                    /* try { // try from 0022f72e to 0022f73a has its CatchHandler @ 0022f922 */
    uRam000000000000b01c = 0x22f73b;
    core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(0xb0d4);
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
  core::ptr::
  drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
            (pppuVar23);
                    /* try { // try from 0022ea9b to 0022eaa4 has its CatchHandler @ 0022ebf1 */
  *(undefined8 *)((long)pppuVar23 + -8) = 0x22eaa5;
  core::ptr::
  drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>
            ((undefined *)((long)pppuVar23 + 0x20));
  pppuVar24 = pppuVar23;
  if (bVar32 == 0) {
LAB_0022eb09:
    *(undefined8 *)((long)pppuVar23 + -8) = 0x22eb15;
    pbVar14 = (byte *)_<uu_expr::syntax_tree::NumOrStr_as_core::convert::From<usize>>::from
                                ((undefined *)((long)pppuVar23 + 0x70),0);
    pppuVar25 = pppuVar23;
  }
  else {
LAB_0022eae0:
    *(undefined8 *)((long)pppuVar24 + -8) = 0x22eaef;
    pbVar14 = (byte *)_<uu_expr::syntax_tree::NumOrStr_as_core::convert::From<usize>>::from
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
    core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>((undefined *)((long)pppuVar25 + 0xc0));
LAB_0022eb43:
    *(undefined8 *)((long)pppuVar25 + -8) = 0x22eb50;
    pbVar14 = (byte *)core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>
                                ((undefined *)((long)pppuVar25 + 0xa0));
  }
  return pbVar14;
}