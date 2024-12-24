/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00168e68) overlaps instruction at (ram,0x00168e63)
    */
/* WARNING: Removing unreachable block (ram,0x00168e5e) */

undefined ** __rustcall
uu_expr::syntax_tree::NumericOp::eval
          (undefined **param_1,uint param_2,undefined8 param_3,long param_4,undefined8 param_5,
          undefined8 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          undefined4 param_10,int param_11,undefined4 param_12,undefined4 param_13,
          undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
          undefined4 param_18,undefined8 param_19,undefined8 param_20,undefined **param_21)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  char cVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  int extraout_EDX;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined **unaff_RBP;
  byte *pbVar14;
  long lVar15;
  char *pcVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined auVar29 [16];
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000024;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000034;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000044;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000054;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000064;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  int iStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined local_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined **local_58;
  undefined8 uStack_50;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar13 = &local_138;
  ppuVar7 = (undefined **)AstNode::eval(&local_e8,param_3);
  local_138._0_4_ = (int)uStack_e0;
  local_58 = uStack_e0;
  uStack_50 = CONCAT44(uStack_d4,iStack_d8);
  local_48 = iStack_d0;
  uStack_44 = uStack_cc;
  uStack_40 = uStack_c8;
  uStack_3c = uStack_c4;
  local_138._4_4_ = uStack_e0._4_4_;
  uStack_130._0_4_ = iStack_d8;
  uStack_130._4_4_ = uStack_d4;
  local_128._0_4_ = iStack_d0;
  local_128._4_4_ = uStack_cc;
  uStack_120._0_4_ = uStack_c8;
  uStack_120._4_4_ = uStack_c4;
  if (local_e8 != (undefined **)0x0) {
LAB_0022e5ea:
    *(int *)(param_1 + 3) = (int)local_128;
    *(undefined4 *)((long)param_1 + 0x1c) = local_128._4_4_;
    *(int *)(param_1 + 4) = (int)uStack_120;
    *(undefined4 *)((long)param_1 + 0x24) = uStack_120._4_4_;
    *(int *)(param_1 + 1) = (int)local_138;
    *(undefined4 *)((long)param_1 + 0xc) = local_138._4_4_;
    *(int *)(param_1 + 2) = (int)uStack_130;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_130._4_4_;
    *param_1 = (undefined *)0x1;
    return ppuVar7;
  }
  ppuVar7 = (undefined **)NumOrStr::eval_as_bigint(&local_118,&local_58);
  local_138 = uStack_110;
  ppuVar2 = local_138;
  uStack_130 = ppuStack_108;
  ppuVar3 = uStack_130;
  local_128 = ppuStack_100;
  ppuVar4 = local_128;
  uStack_120 = uStack_f8;
  ppuVar1 = uStack_120;
  local_138._0_4_ = (int)uStack_110;
  local_138._4_4_ = (undefined4)((ulong)uStack_110 >> 0x20);
  uStack_130._0_4_ = (int)ppuStack_108;
  uStack_130._4_4_ = (undefined4)((ulong)ppuStack_108 >> 0x20);
  local_128._0_4_ = (int)ppuStack_100;
  local_128._4_4_ = (undefined4)((ulong)ppuStack_100 >> 0x20);
  uStack_120._0_4_ = (int)uStack_f8;
  uStack_120._4_4_ = (undefined4)((ulong)uStack_f8 >> 0x20);
  if (local_118 != (undefined **)0x0) goto LAB_0022e5ea;
  local_88 = ppuStack_100;
  uStack_80 = uStack_f8;
  local_98 = (int)local_138;
  uStack_94 = local_138._4_4_;
  uStack_90 = ppuStack_108;
                    /* try { // try from 0022e61e to 0022e670 has its CatchHandler @ 0022e94b */
  local_138 = ppuVar2;
  uStack_130 = ppuVar3;
  local_128 = ppuVar4;
  uStack_120 = ppuVar1;
  AstNode::eval(&local_e8,param_4);
  local_38 = (int)uStack_e0;
  uStack_34 = uStack_e0._4_4_;
  uStack_30 = (undefined **)CONCAT44(uStack_d4,iStack_d8);
  local_28 = (char *)CONCAT44(uStack_cc,iStack_d0);
  uStack_20 = uStack_c8;
  uStack_1c = uStack_c4;
  iVar6 = (int)uStack_e0;
  uVar19 = uStack_e0._4_4_;
  iVar21 = iStack_d8;
  uVar20 = uStack_d4;
  iVar24 = iStack_d0;
  uVar22 = uStack_cc;
  uVar23 = uStack_c8;
  uVar25 = uStack_c4;
  ppuVar7 = local_138;
  ppuVar2 = uStack_130;
  ppuVar3 = local_128;
  ppuVar4 = uStack_120;
  if (local_e8 != (undefined **)0x0) {
LAB_0022e695:
    uStack_120 = ppuVar4;
    local_128 = ppuVar3;
    uStack_130 = ppuVar2;
    local_138 = ppuVar7;
    *(int *)(param_1 + 3) = iVar24;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar22;
    *(undefined4 *)(param_1 + 4) = uVar23;
    *(undefined4 *)((long)param_1 + 0x24) = uVar25;
    *(int *)(param_1 + 1) = iVar6;
    *(undefined4 *)((long)param_1 + 0xc) = uVar19;
    *(int *)(param_1 + 2) = iVar21;
    *(undefined4 *)((long)param_1 + 0x14) = uVar20;
    *param_1 = (undefined *)0x1;
    goto LAB_0022e6a4;
  }
  pcVar16 = (char *)&local_118;
  pbVar14 = (byte *)&local_38;
  NumOrStr::eval_as_bigint();
  local_138 = uStack_110;
  ppuVar7 = local_138;
  uStack_130 = ppuStack_108;
  ppuVar2 = uStack_130;
  local_128 = ppuStack_100;
  ppuVar3 = local_128;
  uStack_120 = uStack_f8;
  ppuVar4 = uStack_120;
  local_138._0_4_ = (int)uStack_110;
  local_138._4_4_ = (undefined4)((ulong)uStack_110 >> 0x20);
  uStack_130._0_4_ = (int)ppuStack_108;
  uStack_130._4_4_ = (undefined4)((ulong)ppuStack_108 >> 0x20);
  local_128._0_4_ = (int)ppuStack_100;
  local_128._4_4_ = (undefined4)((ulong)ppuStack_100 >> 0x20);
  uStack_120._0_4_ = (int)uStack_f8;
  uStack_120._4_4_ = (undefined4)((ulong)uStack_f8 >> 0x20);
  iVar6 = (int)local_138;
  uVar19 = local_138._4_4_;
  iVar21 = (int)uStack_130;
  uVar20 = uStack_130._4_4_;
  iVar24 = (int)local_128;
  uVar22 = local_128._4_4_;
  uVar23 = (int)uStack_120;
  uVar25 = uStack_120._4_4_;
  if (local_118 != (undefined **)0x0) goto LAB_0022e695;
  uStack_a0 = (int)uStack_120;
  uVar19 = uStack_a0;
  uStack_9c = uStack_120._4_4_;
  local_b8 = uStack_110;
  uStack_b0 = ppuStack_108;
  ppuVar8 = (undefined **)
            ((long)&switchD_0022e6e1::caseD_d +
            (long)(int)(&switchD_0022e6e1::caseD_d)[param_2 & 0xff]);
  uStack_a0._0_1_ = (char)uStack_f8;
  iVar6 = (int)local_128;
  uVar20 = local_128._4_4_;
  ppuVar1 = ppuVar8;
  local_a8 = ppuStack_100;
  uStack_a0 = uVar19;
  local_138 = ppuVar7;
  uStack_130 = ppuVar2;
  local_128 = ppuVar3;
  uStack_120 = ppuVar4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2 & 0xff) {
  case 0:
    local_118 = (undefined **)CONCAT44(uStack_94,local_98);
    ppuStack_108 = local_88;
    ppuStack_100 = uStack_80;
    uStack_110 = uStack_90;
    iStack_d8 = (int)local_128;
    uStack_d4 = local_128._4_4_;
    iStack_d0 = (int)uStack_120;
    uStack_cc = uStack_120._4_4_;
    ppuVar7 = (undefined **)
              num_bigint::bigint::addition::
              _<impl_core::ops::arith::Add_for_num_bigint::bigint::BigInt>::add
                        (&local_138,&local_118,&local_e8);
    break;
  case 1:
    local_118 = (undefined **)CONCAT44(uStack_94,local_98);
    ppuStack_108 = local_88;
    ppuStack_100 = uStack_80;
    uStack_110 = uStack_90;
    iStack_d8 = (int)local_128;
    uStack_d4 = local_128._4_4_;
    iStack_d0 = (int)uStack_120;
    uStack_cc = uStack_120._4_4_;
    ppuVar7 = (undefined **)
              num_bigint::bigint::subtraction::
              _<impl_core::ops::arith::Sub_for_num_bigint::bigint::BigInt>::sub
                        (&local_138,&local_118,&local_e8);
    break;
  case 2:
    local_118 = (undefined **)CONCAT44(uStack_94,local_98);
    ppuStack_108 = local_88;
    ppuStack_100 = uStack_80;
    uStack_110 = uStack_90;
    iStack_d8 = (int)local_128;
    uStack_d4 = local_128._4_4_;
    iStack_d0 = (int)uStack_120;
    uStack_cc = uStack_120._4_4_;
    ppuVar7 = (undefined **)
              num_bigint::bigint::multiplication::
              _<impl_core::ops::arith::Mul_for_num_bigint::bigint::BigInt>::mul
                        (&local_138,&local_118,&local_e8);
    break;
  case 3:
    bVar18 = (char)uStack_a0 != '\x01';
    if (bVar18) {
                    /* try { // try from 0022e7a9 to 0022e7c2 has its CatchHandler @ 0022e939 */
      num_bigint::bigint::division::
      _<impl_core::ops::arith::Div<&num_bigint::bigint::BigInt>for&num_bigint::bigint::BigInt>::div
                (&local_e8,&local_98,&local_b8);
      uStack_70 = (int)uStack_e0;
      uStack_6c = uStack_e0._4_4_;
      local_68 = iStack_d8;
      uStack_64 = uStack_d4;
      iStack_60 = iStack_d0;
      uStack_5c = uStack_cc;
      *(int *)(param_1 + 3) = iStack_d8;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_d4;
      *(int *)(param_1 + 4) = iStack_d0;
      *(undefined4 *)((long)param_1 + 0x24) = uStack_cc;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_e8;
      *(undefined4 *)((long)param_1 + 0xc) = local_e8._4_4_;
      *(int *)(param_1 + 2) = (int)uStack_e0;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_e0._4_4_;
      *param_1 = (undefined *)0x0;
                    /* try { // try from 0022e7ec to 0022e7f8 has its CatchHandler @ 0022e94b */
      core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&local_b8);
      goto LAB_0022e6a4;
    }
    goto LAB_0022e8ba;
  case 4:
    if ((char)uStack_a0 == '\x01') {
      local_118 = (undefined **)0x8000000000000000;
    }
    else {
                    /* try { // try from 0022e871 to 0022e8b9 has its CatchHandler @ 0022e939 */
      num_bigint::bigint::division::
      _<impl_core::ops::arith::Div<&num_bigint::bigint::BigInt>for&num_bigint::bigint::BigInt>::div
                (&local_e8,&local_98,&local_b8);
      local_118 = local_e8;
      if (local_e8 != (undefined **)0x8000000000000000) {
                    /* try { // try from 0022e8db to 0022e8e4 has its CatchHandler @ 0022e939 */
        core::ptr::drop_in_place<core::option::Option<num_bigint::bigint::BigInt>>(&local_118);
        local_118 = (undefined **)CONCAT44(uStack_94,local_98);
        ppuStack_108 = local_88;
        ppuStack_100 = uStack_80;
        uStack_110 = uStack_90;
        iStack_d8 = (int)local_a8;
        uStack_d4 = local_a8._4_4_;
        iStack_d0 = uStack_a0;
        uStack_cc = uStack_9c;
        ppuVar7 = (undefined **)
                  num_bigint::bigint::division::
                  _<impl_core::ops::arith::Rem_for_num_bigint::bigint::BigInt>::rem
                            (&local_138,&local_118,&local_e8);
        goto LAB_0022e84d;
      }
    }
    core::ptr::drop_in_place<core::option::Option<num_bigint::bigint::BigInt>>(&local_118);
LAB_0022e8ba:
    param_1[1] = (undefined *)0x4;
    *param_1 = (undefined *)0x1;
                    /* try { // try from 0022e8c9 to 0022e8d5 has its CatchHandler @ 0022e94b */
    core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&local_b8);
LAB_0022e6a4:
    ppuVar7 = (undefined **)core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&local_98);
    return ppuVar7;
  case 5:
    uVar9 = (ulong)(int)(&UINT_00168e60)[(ulong)pbVar14 & 0xff];
    pcVar11 = (char *)((long)&UINT_00168e60 + uVar9);
    local_a8._0_4_ = (int)local_138;
    local_a8._4_4_ = local_138._4_4_;
    uStack_a0 = (int)uStack_130;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((ulong)pbVar14 & 0xff) {
    case 0:
      uStack_a0 = uVar19;
      ppuVar8 = (undefined **)AstNode::eval(&local_138,extraout_RDX);
      iVar6 = (int)uStack_130;
      uVar19 = uStack_130._4_4_;
      uVar20 = (undefined4)local_118;
      uVar22 = local_118._4_4_;
      unaff_RBP = uStack_120;
      if (local_138 == (undefined **)0x0) {
        NumOrStr::eval_as_string(&local_48,&stack0xffffffffffffffe8);
        AstNode::eval(&local_138,param_4);
        param_7 = (int)uStack_130;
        uStack000000000000000c = uStack_130._4_4_;
        param_8 = (int)local_128;
        uStack0000000000000014 = local_128._4_4_;
        param_9 = (int)uStack_120;
        uStack000000000000001c = uStack_120._4_4_;
        param_10 = (undefined4)local_118;
        uStack0000000000000024 = local_118._4_4_;
        if (local_138 == (undefined **)0x0) {
          NumOrStr::eval_as_string(&uStack_30,&param_7);
          uStack_f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_138 = &PTR_s___002a3008;
          uStack_130 = (undefined **)&DAT_00000001;
          local_118 = (undefined **)0x0;
          local_128 = (undefined **)&uStack_f8;
          uStack_120 = (undefined **)&DAT_00000001;
          uStack_f8 = (undefined **)&uStack_30;
          core::option::Option<T>::map_or_else(&param_19,&local_138);
          local_68 = (undefined4)param_19;
          uStack_64 = param_19._4_4_;
          iStack_60 = (int)param_20;
          uStack_5c = param_20._4_4_;
          local_58 = param_21;
          onig::Regex::with_options
                    (&uStack_f8,CONCAT44(param_20._4_4_,(int)param_20),param_21,0,OnigSyntaxGrep);
          if (uStack_f8 == (undefined **)0x8000000000000000) {
            uStack_90 = (undefined **)uStack_f0;
            lVar10 = onig::Regex::captures_len(&uStack_90);
            if (lVar10 == 0) {
              onig::Regex::find(&local_88,&uStack_90,CONCAT44(uStack_3c,uStack_40),
                                CONCAT44(uStack_34,local_38));
              _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_138,"0",1);
              local_e8 = local_128;
              uStack_f8 = local_138;
              uStack_f0 = (code *)uStack_130;
              core::option::Option<T>::map_or(&local_b8,&local_88,&uStack_f8);
            }
            else {
              onig::find::_<impl_onig::Regex>::captures
                        (&uStack_f8,&uStack_90,CONCAT44(uStack_3c,uStack_40),
                         CONCAT44(uStack_34,local_38));
              if (uStack_f8 == (undefined **)0x0) {
                auVar29._8_8_ = 0;
                auVar29._0_8_ = extraout_RDX_00;
                auVar29 = auVar29 << 0x40;
              }
              else {
                local_118 = (undefined **)CONCAT44(uStack_d4,iStack_d8);
                local_128 = local_e8;
                uStack_120 = uStack_e0;
                local_138 = uStack_f8;
                uStack_130 = (undefined **)uStack_f0;
                auVar29 = StringOp::eval::___closure__(&local_138);
              }
              uVar12 = auVar29._8_8_;
              lVar10 = auVar29._0_8_;
              if (lVar10 == 0) {
                uVar12 = 0;
              }
              lVar15 = 1;
              if (lVar10 != 0) {
                lVar15 = lVar10;
              }
              _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_138,lVar15,uVar12);
              local_a8 = local_128;
              local_b8 = local_138;
              uStack_b0 = uStack_130;
            }
            param_1[4] = (undefined *)local_a8;
            *(undefined4 *)(param_1 + 2) = (undefined4)local_b8;
            *(undefined4 *)((long)param_1 + 0x14) = local_b8._4_4_;
            *(undefined4 *)(param_1 + 3) = (undefined4)uStack_b0;
            *(undefined4 *)((long)param_1 + 0x1c) = uStack_b0._4_4_;
            param_1[1] = (undefined *)0x8000000000000000;
            *param_1 = (undefined *)0x0;
            core::ptr::drop_in_place<onig::Regex>(&uStack_90);
            core::ptr::drop_in_place<alloc::string::String>(&local_68);
            core::ptr::drop_in_place<alloc::string::String>(&uStack_30);
          }
          else {
            local_128 = local_e8;
            uStack_120 = uStack_e0;
            local_138 = uStack_f8;
            uStack_130 = (undefined **)uStack_f0;
            core::ptr::drop_in_place<onig::Error>(&local_138);
            param_1[1] = (undefined *)0x5;
            *param_1 = (undefined *)0x1;
            core::ptr::drop_in_place<alloc::string::String>(&local_68);
            core::ptr::drop_in_place<alloc::string::String>(&uStack_30);
          }
        }
        else {
          param_1[3] = (undefined *)uStack_120;
          param_1[4] = (undefined *)local_118;
          *(int *)(param_1 + 1) = (int)uStack_130;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_130._4_4_;
          *(int *)(param_1 + 2) = (int)local_128;
          *(undefined4 *)((long)param_1 + 0x14) = local_128._4_4_;
          *param_1 = (undefined *)0x1;
        }
        ppuVar7 = (undefined **)core::ptr::drop_in_place<alloc::string::String>(&local_48);
        return ppuVar7;
      }
      goto code_r0x0022e9d3;
    case 1:
      uStack_a0 = uVar19;
      ppuVar8 = (undefined **)AstNode::eval(&local_138,extraout_RDX);
      param_11 = (int)uStack_130;
      uStack000000000000002c = uStack_130._4_4_;
      param_12 = (int)local_128;
      uStack0000000000000034 = local_128._4_4_;
      param_13 = (int)uStack_120;
      uStack000000000000003c = uStack_120._4_4_;
      param_14 = (undefined4)local_118;
      uStack0000000000000044 = local_118._4_4_;
      uStack_f8._0_4_ = (int)uStack_130;
      uStack_f8._4_4_ = uStack_130._4_4_;
      uStack_e0._0_4_ = (undefined4)local_118;
      uStack_e0._4_4_ = local_118._4_4_;
      if (local_138 == (undefined **)0x0) {
        NumOrStr::eval_as_string(&local_68,&param_11);
        AstNode::eval(&local_138,param_4);
        param_15 = (int)uStack_130;
        uStack000000000000004c = uStack_130._4_4_;
        param_16 = (int)local_128;
        uStack0000000000000054 = local_128._4_4_;
        param_17 = (int)uStack_120;
        uStack000000000000005c = uStack_120._4_4_;
        param_18 = (undefined4)local_118;
        uStack0000000000000064 = local_118._4_4_;
        if (local_138 == (undefined **)0x0) {
          NumOrStr::eval_as_string(&local_b8,&param_15);
          uStack_80 = (undefined **)((long)local_58 + CONCAT44(uStack_5c,iStack_60));
          local_78 = (undefined **)0x0;
          auVar29 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
                    ::next(&local_88);
          uStack_50 = auVar29._0_8_;
          if (auVar29._8_4_ != 0x110000) {
            do {
              uStack_50 = auVar29._0_8_;
              _<alloc::string::String_as_core::clone::Clone>::clone();
              local_28 = (char *)((long)local_e8 + (long)uStack_f0);
              uStack_30 = (undefined **)uStack_f0;
              while ((iVar6 = core::str::validations::next_code_point(&uStack_30), iVar6 != 0 &&
                     (extraout_EDX != 0x110000))) {
                if (extraout_EDX == auVar29._8_4_) {
                  _<uu_expr::syntax_tree::NumOrStr_as_core::convert::From<usize>>::from
                            (&local_138,uStack_50 + 1);
                  *(int *)(param_1 + 3) = (int)local_128;
                  *(undefined4 *)((long)param_1 + 0x1c) = local_128._4_4_;
                  *(int *)(param_1 + 4) = (int)uStack_120;
                  *(undefined4 *)((long)param_1 + 0x24) = uStack_120._4_4_;
                  *(int *)(param_1 + 1) = (int)local_138;
                  *(undefined4 *)((long)param_1 + 0xc) = local_138._4_4_;
                  *(int *)(param_1 + 2) = (int)uStack_130;
                  *(undefined4 *)((long)param_1 + 0x14) = uStack_130._4_4_;
                  *param_1 = (undefined *)0x0;
                  core::ptr::drop_in_place<alloc::string::String>(&uStack_f8);
                  core::ptr::drop_in_place<alloc::string::String>(&local_b8);
                  goto LAB_0022f02a;
                }
              }
              core::ptr::drop_in_place<alloc::string::String>(&uStack_f8);
              auVar29 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
                        ::next(&local_88);
              uStack_50 = auVar29._0_8_;
            } while (auVar29._8_4_ != 0x110000);
          }
          _<uu_expr::syntax_tree::NumOrStr_as_core::convert::From<usize>>::from(&local_138,0);
          *(int *)(param_1 + 3) = (int)local_128;
          *(undefined4 *)((long)param_1 + 0x1c) = local_128._4_4_;
          *(int *)(param_1 + 4) = (int)uStack_120;
          *(undefined4 *)((long)param_1 + 0x24) = uStack_120._4_4_;
          *(int *)(param_1 + 1) = (int)local_138;
          *(undefined4 *)((long)param_1 + 0xc) = local_138._4_4_;
          *(int *)(param_1 + 2) = (int)uStack_130;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_130._4_4_;
          *param_1 = (undefined *)0x0;
          core::ptr::drop_in_place<alloc::string::String>(&local_b8);
        }
        else {
          param_1[3] = (undefined *)uStack_120;
          param_1[4] = (undefined *)local_118;
          *(int *)(param_1 + 1) = (int)uStack_130;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_130._4_4_;
          *(int *)(param_1 + 2) = (int)local_128;
          *(undefined4 *)((long)param_1 + 0x14) = local_128._4_4_;
          *param_1 = (undefined *)0x1;
        }
LAB_0022f02a:
        ppuVar7 = (undefined **)core::ptr::drop_in_place<alloc::string::String>(&local_68);
        return ppuVar7;
      }
      goto LAB_0022eb30;
    case 2:
      uStack_a0 = uVar19;
      ppuVar8 = (undefined **)AstNode::eval(&local_138,extraout_RDX);
      uStack_f8 = uStack_130;
      uStack_f0 = (code *)local_128;
      local_e8 = uStack_120;
      uStack_e0 = local_118;
      ppuVar7 = uStack_e0;
      if (local_138 != (undefined **)0x0) goto code_r0x0022eae4;
      uStack_e0._0_4_ = (int)local_118;
      uStack_e0._4_4_ = (undefined4)((ulong)local_118 >> 0x20);
      local_a8 = uStack_120;
      uStack_a0 = (int)uStack_e0;
      uStack_9c = uStack_e0._4_4_;
      local_b8 = uStack_130;
      uStack_b0 = local_128;
      uStack_e0 = ppuVar7;
      cVar5 = is_truthy(&local_b8);
      if (cVar5 != '\0') {
        AstNode::eval(&local_138,param_4);
        uStack_f8 = uStack_130;
        uStack_f0 = (code *)local_128;
        local_e8 = uStack_120;
        uStack_e0 = local_118;
        ppuVar7 = uStack_e0;
        if (local_138 == (undefined **)0x0) {
          uStack_e0._0_4_ = (int)local_118;
          uStack_e0._4_4_ = (undefined4)((ulong)local_118 >> 0x20);
          local_78 = uStack_120;
          uStack_70 = (int)uStack_e0;
          uStack_6c = uStack_e0._4_4_;
          local_88 = uStack_130;
          uStack_80 = local_128;
          uStack_e0 = ppuVar7;
          cVar5 = is_truthy(&local_88);
          if (cVar5 != '\0') {
            param_1[3] = (undefined *)local_a8;
            param_1[4] = (undefined *)CONCAT44(uStack_9c,uStack_a0);
            *(undefined4 *)(param_1 + 1) = (undefined4)local_b8;
            *(undefined4 *)((long)param_1 + 0xc) = local_b8._4_4_;
            *(undefined4 *)(param_1 + 2) = (undefined4)uStack_b0;
            *(undefined4 *)((long)param_1 + 0x14) = uStack_b0._4_4_;
            ppuVar7 = local_138;
            ppuVar2 = uStack_130;
            ppuVar3 = local_128;
            ppuVar4 = uStack_120;
            uVar19 = uStack_a0;
            goto switchD_0022e6e1_caseD_8;
          }
          _<uu_expr::syntax_tree::NumOrStr_as_core::convert::From<usize>>::from(&local_138,0);
          *(int *)(param_1 + 3) = (int)local_128;
          *(undefined4 *)((long)param_1 + 0x1c) = local_128._4_4_;
          *(int *)(param_1 + 4) = (int)uStack_120;
          *(undefined4 *)((long)param_1 + 0x24) = uStack_120._4_4_;
          *(int *)(param_1 + 1) = (int)local_138;
          *(undefined4 *)((long)param_1 + 0xc) = local_138._4_4_;
          *(int *)(param_1 + 2) = (int)uStack_130;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_130._4_4_;
          *param_1 = (undefined *)0x0;
          core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&local_88);
          goto LAB_0022ecda;
        }
        goto LAB_0022ecc1;
      }
      _<uu_expr::syntax_tree::NumOrStr_as_core::convert::From<usize>>::from(&local_138,0);
      uVar19 = (int)local_138;
      uVar20 = local_138._4_4_;
      uVar22 = (int)uStack_130;
      uVar23 = uStack_130._4_4_;
      uVar25 = (int)local_128;
      uVar26 = local_128._4_4_;
      uVar27 = (int)uStack_120;
      uVar28 = uStack_120._4_4_;
LAB_0022ec86:
      *(undefined4 *)(param_1 + 3) = uVar25;
      *(undefined4 *)((long)param_1 + 0x1c) = uVar26;
      *(undefined4 *)(param_1 + 4) = uVar27;
      *(undefined4 *)((long)param_1 + 0x24) = uVar28;
      *(undefined4 *)(param_1 + 1) = uVar19;
      *(undefined4 *)((long)param_1 + 0xc) = uVar20;
      *(undefined4 *)(param_1 + 2) = uVar22;
      *(undefined4 *)((long)param_1 + 0x14) = uVar23;
      *param_1 = (undefined *)0x0;
      goto LAB_0022ecda;
    case 3:
      uStack_a0 = uVar19;
      ppuVar8 = (undefined **)AstNode::eval(&local_138,extraout_RDX);
      uStack_f8 = uStack_130;
      uStack_f0 = (code *)local_128;
      iVar6 = (int)uStack_120;
      uVar20 = uStack_120._4_4_;
      uVar19 = (undefined4)local_118;
      uStack_9c = local_118._4_4_;
      ppuVar1 = local_138;
      ppuVar7 = local_138;
      ppuVar2 = uStack_130;
      ppuVar3 = local_128;
      ppuVar4 = uStack_120;
      goto switchD_0022e6e1_caseD_6;
    case 4:
      goto code_r0x0022f4f5;
    case 5:
      goto code_r0x0022f5be;
    case 6:
      goto code_r0x0022f520;
    case 7:
      *pcVar11 = *pcVar11 + (char)pcVar11;
      uStack_a0 = uVar19;
      *pcVar16 = *pcVar16 + '`';
      local_98 = CONCAT31(local_98._1_3_,(char)local_98 + -0x60);
code_r0x0022f564:
      goto LAB_0022f5ba;
    default:
      *(char *)(uVar9 - 0x7fe96544) = *(char *)(uVar9 - 0x7fe96544) + (char)extraout_RDX;
      puVar13 = &uStack_130;
      break;
    case 10:
      *(char *)((long)param_1 + 0xc) = *(char *)((long)param_1 + 0xc) - (0xffffffffffe9719f < uVar9)
      ;
    }
    *(undefined *)(**(long **)((long)puVar13 + 8) + 0xc) =
         *(undefined *)(**(long **)((long)puVar13 + 8) + 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
switchD_0022e6e1_caseD_6:
    uStack_120 = ppuVar4;
    local_128 = ppuVar3;
    uStack_130 = ppuVar2;
    local_138 = ppuVar7;
    local_e8 = (undefined **)CONCAT44(uVar20,iVar6);
    uStack_e0 = (undefined **)CONCAT44(uStack_9c,uVar19);
    if (ppuVar1 != (undefined **)0x0) {
code_r0x0022eae4:
      local_128._0_4_ = (undefined4)uStack_f0;
      local_128._4_4_ = uStack_f0._4_4_;
      uStack_120._0_4_ = (undefined4)local_e8;
      uStack_120._4_4_ = local_e8._4_4_;
      goto LAB_0022eb30;
    }
    local_a8 = (undefined **)CONCAT44(uVar20,iVar6);
    local_b8 = uStack_f8;
    uStack_b0 = (undefined **)uStack_f0;
                    /* try { // try from 0022eb6b to 0022eb77 has its CatchHandler @ 0022f21c */
    uStack_a0 = uVar19;
    ppuVar7 = (undefined **)is_truthy(&local_b8);
    if ((char)ppuVar7 != '\0') {
      param_1[3] = (undefined *)local_a8;
      param_1[4] = (undefined *)CONCAT44(uStack_9c,uStack_a0);
      param_1[1] = (undefined *)local_b8;
      param_1[2] = (undefined *)uStack_b0;
      *param_1 = (undefined *)0x0;
      return ppuVar7;
    }
                    /* try { // try from 0022ec97 to 0022eca1 has its CatchHandler @ 0022f21c */
    AstNode::eval(&local_138,param_4);
    uStack_f8 = uStack_130;
    uStack_f0 = (code *)local_128;
    local_e8 = uStack_120;
    uStack_e0 = local_118;
    ppuVar7 = uStack_e0;
    if (local_138 == (undefined **)0x0) {
      uStack_e0._0_4_ = (int)local_118;
      uStack_e0._4_4_ = (undefined4)((ulong)local_118 >> 0x20);
      local_78 = uStack_120;
      uStack_70 = (int)uStack_e0;
      uStack_6c = uStack_e0._4_4_;
      local_88 = uStack_130;
      uStack_80 = local_128;
                    /* try { // try from 0022eedc to 0022eee8 has its CatchHandler @ 0022f1ab */
      uStack_e0 = ppuVar7;
      cVar5 = is_truthy(&local_88);
      if (cVar5 != '\0') {
        uVar19 = (undefined4)local_88;
        uVar20 = local_88._4_4_;
        uVar22 = (undefined4)uStack_80;
        uVar23 = uStack_80._4_4_;
        uVar25 = (undefined4)local_78;
        uVar26 = local_78._4_4_;
        uVar27 = uStack_70;
        uVar28 = uStack_6c;
        goto LAB_0022ec86;
      }
                    /* try { // try from 0022f070 to 0022f079 has its CatchHandler @ 0022f1ab */
      _<uu_expr::syntax_tree::NumOrStr_as_core::convert::From<usize>>::from(&local_138,0);
      *(int *)(param_1 + 3) = (int)local_128;
      *(undefined4 *)((long)param_1 + 0x1c) = local_128._4_4_;
      *(int *)(param_1 + 4) = (int)uStack_120;
      *(undefined4 *)((long)param_1 + 0x24) = uStack_120._4_4_;
      *(int *)(param_1 + 1) = (int)local_138;
      *(undefined4 *)((long)param_1 + 0xc) = local_138._4_4_;
      *(int *)(param_1 + 2) = (int)uStack_130;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_130._4_4_;
      *param_1 = (undefined *)0x0;
                    /* try { // try from 0022f092 to 0022f09e has its CatchHandler @ 0022f21c */
      core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&local_88);
    }
    else {
LAB_0022ecc1:
      uStack_f8._0_4_ = (int)uStack_130;
      uStack_f8._4_4_ = (undefined4)((ulong)uStack_130 >> 0x20);
      uStack_f0._0_4_ = SUB84(local_128,0);
      uStack_f0._4_4_ = (undefined4)((ulong)local_128 >> 0x20);
      param_1[3] = (undefined *)uStack_120;
      param_1[4] = (undefined *)uStack_e0;
      *(int *)(param_1 + 1) = (int)uStack_f8;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_f8._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_f0;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_f0._4_4_;
      *param_1 = (undefined *)0x1;
      uStack_f8 = uStack_130;
      uStack_f0 = (code *)local_128;
      local_e8 = uStack_120;
    }
LAB_0022ecda:
    puVar17 = &local_b8;
LAB_0022ece2:
    ppuVar7 = (undefined **)core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(puVar17);
    return ppuVar7;
  case 7:
    iVar6 = (int)local_138;
    uVar19 = local_138._4_4_;
    local_128._0_4_ = (int)uStack_130;
    local_128._4_4_ = uStack_130._4_4_;
    uVar20 = unaff_retaddr;
    uVar22 = unaff_retaddr_00;
code_r0x0022e9d3:
    uStack_e0._4_4_ = uVar22;
    uStack_e0._0_4_ = uVar20;
    uStack_f8._4_4_ = uVar19;
    uStack_f8._0_4_ = iVar6;
    uStack_120._0_4_ = (int)unaff_RBP;
    uStack_120._4_4_ = (int)((ulong)unaff_RBP >> 0x20);
LAB_0022eb30:
    *(int *)(param_1 + 3) = (int)uStack_120;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_120._4_4_;
    *(int *)(param_1 + 4) = (int)uStack_e0;
    *(undefined4 *)((long)param_1 + 0x24) = uStack_e0._4_4_;
    *(int *)(param_1 + 1) = (int)uStack_f8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_f8._4_4_;
    *(int *)(param_1 + 2) = (int)local_128;
    *(undefined4 *)((long)param_1 + 0x14) = local_128._4_4_;
    *param_1 = (undefined *)0x1;
    return ppuVar8;
  case 8:
switchD_0022e6e1_caseD_8:
    uStack_a0 = uVar19;
    uStack_120 = ppuVar4;
    local_128 = ppuVar3;
    uStack_130 = ppuVar2;
    local_138 = ppuVar7;
    *param_1 = (undefined *)0x0;
    puVar17 = &local_88;
    goto LAB_0022ece2;
  case 9:
    pcVar11 = (char *)(ulong)*pbVar14;
code_r0x0022f4f5:
    uStack_a0 = uVar19;
                    /* WARNING: Could not recover jumptable at 0x0022f503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar7 = (undefined **)
              (*(code *)((long)&UINT_00168e70 + (long)(int)(&UINT_00168e70)[(long)pcVar11]))();
    return ppuVar7;
  case 10:
    local_a8._0_4_ = local_48;
    local_a8._4_4_ = uStack_44;
    uStack_a0 = uStack_40;
    uStack_9c = uStack_3c;
    local_98 = local_38;
    uStack_94 = uStack_34;
    uStack_90._0_4_ = (undefined4)uStack_30;
    uStack_90._4_4_ = uStack_30._4_4_;
LAB_0022f5ba:
    *(int *)(param_1 + 3) = local_98;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_94;
    *(undefined4 *)(param_1 + 4) = (undefined4)uStack_90;
    *(undefined4 *)((long)param_1 + 0x24) = uStack_90._4_4_;
    uStack_130._4_4_ = uStack_9c;
code_r0x0022f5be:
    *(int *)(param_1 + 1) = (int)local_a8;
    *(undefined4 *)((long)param_1 + 0xc) = local_a8._4_4_;
    *(undefined4 *)(param_1 + 2) = uStack_a0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_130._4_4_;
    *param_1 = (undefined *)0x1;
    return param_1;
  case 0xb:
    DAT_0070c772 = DAT_0070c772 + 'L' +
                   (0xffffffffffe971b3U <
                   (ulong)(long)(int)(&switchD_0022e6e1::caseD_d)[param_2 & 0xff]);
    _<alloc::string::String_as_core::clone::Clone>::clone();
    pcVar11 = (char *)0x8000000000000000;
code_r0x0022f520:
    param_1[1] = pcVar11;
    *param_1 = (undefined *)0x0;
    return param_1;
  case 0xc:
    *(char *)ppuVar8 = *(char *)ppuVar8 + (char)ppuVar8;
    *pcVar16 = *pcVar16 + 'L';
    local_98 = local_98 + -0x168e4c;
    if (local_98 != 0) goto code_r0x0022f564;
    NumOrStr::eval_as_string(local_c0,&local_a8);
                    /* try { // try from 0022f603 to 0022f60c has its CatchHandler @ 0022f88e */
    AstNode::eval(&uStack_130,*(undefined8 *)(param_4 + 0x10));
    local_88 = local_128;
    uStack_80 = uStack_120;
    uVar19 = SUB84(local_118,0);
    uStack_70 = (undefined4)uStack_110;
    uStack_6c = uStack_110._4_4_;
    if (uStack_130 == (undefined **)0x0) {
                    /* try { // try from 0022f698 to 0022f723 has its CatchHandler @ 0022f88e */
      NumOrStr::eval_as_bigint(&local_e8,&local_88);
      if (local_e8 == (undefined **)0x0) {
        if (uStack_e0 == (undefined **)0x8000000000000000) goto LAB_0022f713;
        local_128 = (undefined **)CONCAT44(uStack_d4,iStack_d8);
        uStack_120 = (undefined **)CONCAT44(uStack_cc,iStack_d0);
        uStack_130 = uStack_e0;
        local_118 = (undefined **)CONCAT44(uStack_c4,uStack_c8);
        auVar29 = AstNode::eval::___closure__(&uStack_130);
        lVar10 = auVar29._8_8_;
        if (auVar29._0_8_ == 0) goto LAB_0022f713;
      }
      else {
        core::ptr::
        drop_in_place<core::result::Result<num_bigint::bigint::BigInt,uu_expr::ExprError>>
                  (&local_e8);
LAB_0022f713:
        lVar10 = 0;
      }
      AstNode::eval(&uStack_130,*(undefined8 *)(param_4 + 0x18));
      local_68 = (int)local_128;
      uStack_64 = local_128._4_4_;
      iStack_60 = (int)uStack_120;
      uStack_5c = uStack_120._4_4_;
      uVar19 = SUB84(local_118,0);
      if (uStack_130 == (undefined **)0x0) {
                    /* try { // try from 0022f77f to 0022f83e has its CatchHandler @ 0022f88e */
        NumOrStr::eval_as_bigint(&local_e8,&local_68);
        if (local_e8 == (undefined **)0x0) {
          if (uStack_e0 == (undefined **)0x8000000000000000) goto LAB_0022f857;
          local_128 = (undefined **)CONCAT44(uStack_d4,iStack_d8);
          uStack_120 = (undefined **)CONCAT44(uStack_cc,iStack_d0);
          uStack_130 = uStack_e0;
          local_118 = (undefined **)CONCAT44(uStack_c4,uStack_c8);
          auVar29 = AstNode::eval::___closure__(&uStack_130);
          if (((auVar29._0_8_ == 0) || (lVar10 == 0)) || (auVar29._8_8_ == (undefined **)0x0))
          goto LAB_0022f857;
          uStack_120 = (undefined **)(lVar10 + -1);
          local_128 = (undefined **)((long)uStack_b0 + (long)local_b8);
          uStack_130 = local_b8;
          local_118 = auVar29._8_8_;
          _<alloc::string::String_as_core::iter::traits::collect::FromIterator<char>>::from_iter
                    (&local_e8,&uStack_130);
          param_1[4] = (undefined *)CONCAT44(uStack_d4,iStack_d8);
          *(undefined4 *)(param_1 + 2) = (undefined4)local_e8;
          *(undefined4 *)((long)param_1 + 0x14) = local_e8._4_4_;
          *(int *)(param_1 + 3) = (int)uStack_e0;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_e0._4_4_;
          param_1[1] = (undefined *)0x8000000000000000;
        }
        else {
          core::ptr::
          drop_in_place<core::result::Result<num_bigint::bigint::BigInt,uu_expr::ExprError>>
                    (&local_e8);
LAB_0022f857:
          param_1[1] = (undefined *)0x8000000000000000;
          param_1[2] = (undefined *)0x0;
          param_1[3] = (undefined *)0x1;
          param_1[4] = (undefined *)0x0;
        }
        *param_1 = (undefined *)0x0;
        goto LAB_0022f765;
      }
    }
    *(undefined4 *)(param_1 + 3) = uVar19;
    *(undefined4 *)((long)param_1 + 0x1c) = local_118._4_4_;
    *(undefined4 *)(param_1 + 4) = (undefined4)uStack_110;
    *(undefined4 *)((long)param_1 + 0x24) = uStack_110._4_4_;
    *(int *)(param_1 + 1) = (int)local_128;
    *(undefined4 *)((long)param_1 + 0xc) = local_128._4_4_;
    *(int *)(param_1 + 2) = (int)uStack_120;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_120._4_4_;
    *param_1 = (undefined *)0x1;
LAB_0022f765:
    core::ptr::drop_in_place<alloc::string::String>(local_c0);
    return param_1;
  default:
  case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_0022e84d:
  *(int *)(param_1 + 3) = (int)local_128;
  *(undefined4 *)((long)param_1 + 0x1c) = local_128._4_4_;
  *(int *)(param_1 + 4) = (int)uStack_120;
  *(undefined4 *)((long)param_1 + 0x24) = uStack_120._4_4_;
  *(int *)(param_1 + 1) = (int)local_138;
  *(undefined4 *)((long)param_1 + 0xc) = local_138._4_4_;
  *(int *)(param_1 + 2) = (int)uStack_130;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_130._4_4_;
  *param_1 = (undefined *)0x0;
  return ppuVar7;
}