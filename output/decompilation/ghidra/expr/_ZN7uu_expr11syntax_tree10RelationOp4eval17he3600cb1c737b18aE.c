*/

undefined **
_ZN7uu_expr11syntax_tree10RelationOp4eval17he3600cb1c737b18aE
          (char *param_1,ulong param_2,int *param_3,byte *param_4,byte *param_5,int param_6)

{
  code *pcVar1;
  code cVar2;
  undefined4 uVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  uint *puVar24;
  byte bVar25;
  byte bVar26;
  uint uVar27;
  int iVar28;
  byte bVar38;
  byte *pbVar29;
  undefined **ppuVar30;
  byte *pbVar31;
  undefined **ppuVar32;
  ulong uVar33;
  undefined **UNRECOVERED_JUMPTABLE;
  undefined8 uVar34;
  int *piVar35;
  char *pcVar36;
  undefined **ppuVar37;
  char cVar41;
  uint *puVar40;
  byte bVar44;
  undefined2 uVar42;
  undefined **ppuVar43;
  undefined **extraout_RDX;
  undefined **extraout_RDX_00;
  char cVar45;
  char cVar46;
  undefined8 *puVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  ulong *puVar50;
  undefined8 *puVar51;
  undefined8 *puVar52;
  undefined8 *puVar53;
  undefined8 *puVar54;
  undefined8 *puVar55;
  undefined8 *puVar56;
  undefined8 *puVar57;
  undefined8 *puVar58;
  undefined8 *puVar59;
  undefined8 *puVar60;
  undefined8 *puVar61;
  undefined8 *puVar62;
  undefined8 *puVar63;
  undefined8 *puVar64;
  uint *puVar65;
  undefined8 *puVar66;
  undefined8 *puVar67;
  long *plVar68;
  undefined8 *puVar69;
  undefined8 *puVar70;
  ulong uVar71;
  code *pcVar72;
  undefined **ppuVar73;
  code *pcVar74;
  undefined **ppuVar75;
  long unaff_R13;
  int iVar76;
  undefined **ppuVar77;
  uint *puVar78;
  long in_GS_OFFSET;
  bool bVar79;
  byte in_AF;
  bool bVar80;
  byte in_TF;
  byte in_IF;
  bool bVar81;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined *puVar82;
  uint extraout_XMM0_Dc;
  uint uVar83;
  uint extraout_XMM0_Dd;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  undefined auVar88 [16];
  undefined auVar89 [12];
  int iStack0000000000000038;
  int iStack000000000000003c;
  int iStack0000000000000040;
  int iStack0000000000000044;
  uint in_stack_000000a0;
  undefined auStack_1f8 [8];
  undefined **ppuStack_1f0;
  undefined auStack_198 [216];
  char *pcStack_c0;
  undefined **ppuStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  char cStack_90;
  int local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined ***local_78;
  undefined **ppuStack_70;
  undefined **local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined ***local_48;
  undefined **ppuStack_40;
  uint local_38;
  uint uStack_34;
  undefined8 uStack_30;
  undefined7 uVar39;
  
  bVar26 = 0;
  puVar55 = &local_a8;
  ppuVar32 = (undefined **)&local_a8;
  puVar56 = &local_a8;
  puVar57 = &local_a8;
  puVar60 = &local_a8;
  puVar59 = &local_a8;
  puVar61 = &local_a8;
  puVar62 = &local_a8;
  puVar64 = &local_a8;
  puVar66 = &local_a8;
  puVar69 = &local_a8;
  puVar47 = &local_a8;
  puVar51 = &local_a8;
  puVar48 = &local_a8;
  puVar50 = &local_a8;
  puVar63 = &local_a8;
  puVar65 = (uint *)&local_a8;
  puVar70 = &local_a8;
  puVar52 = &local_a8;
  puVar58 = &local_a8;
  puVar53 = &local_a8;
  puVar54 = &local_a8;
  puVar78 = (uint *)(param_3 + 2);
  if (*param_3 == 1) {
    uVar27 = *puVar78;
    iVar76 = param_3[3];
    iVar28 = param_3[4];
    iVar10 = param_3[5];
    iVar11 = param_3[7];
    iVar12 = param_3[8];
    iVar13 = param_3[9];
    *(int *)(param_1 + 0x18) = param_3[6];
    *(int *)(param_1 + 0x1c) = iVar11;
    *(int *)(param_1 + 0x20) = iVar12;
    *(int *)(param_1 + 0x24) = iVar13;
    *(uint *)(param_1 + 8) = uVar27;
    *(int *)(param_1 + 0xc) = iVar76;
    *(int *)(param_1 + 0x10) = iVar28;
    *(int *)(param_1 + 0x14) = iVar10;
    param_1[0] = '\x01';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    ppuVar32 = (undefined **)
               _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT_17h0c833a88cc9a87cfE
                         (param_4);
    return ppuVar32;
  }
  local_68 = *(undefined ***)puVar78;
  puStack_60 = *(undefined **)(param_3 + 4);
  local_58 = *(char **)(param_3 + 6);
  uStack_50 = *(uint **)(param_3 + 8);
  ppuVar30 = (undefined **)(param_4 + 8);
  if ((*param_4 & 1) != 0) {
    uVar27 = *(uint *)ppuVar30;
    uVar3 = *(undefined4 *)(param_4 + 0xc);
    uVar14 = *(undefined4 *)(param_4 + 0x10);
    uVar15 = *(undefined4 *)(param_4 + 0x14);
    uVar34 = *(undefined8 *)(param_4 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_4 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = uVar34;
    *(uint *)(param_1 + 8) = uVar27;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    *(undefined4 *)(param_1 + 0x10) = uVar14;
    *(undefined4 *)(param_1 + 0x14) = uVar15;
    param_1[0] = '\x01';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    goto LAB_001a42cf;
  }
  uVar71 = param_2 & 0xffffffff;
  local_48 = (undefined ***)*ppuVar30;
  ppuStack_40 = *(undefined ***)(param_4 + 0x10);
  uVar27 = *(uint *)(param_4 + 0x18);
  uVar85 = *(uint *)(param_4 + 0x1c);
  uVar86 = *(uint *)(param_4 + 0x20);
  uVar87 = *(uint *)(param_4 + 0x24);
  uStack_30 = *(undefined8 *)(param_4 + 0x20);
                    /* try { // try from 001a4002 to 001a400e has its CatchHandler @ 001a4341 */
  local_38 = uVar27;
  uStack_34 = uVar85;
  _ZN7uu_expr11syntax_tree8NumOrStr9to_bigint17hc415274c30aae534E(&local_88,puVar78);
  ppuVar73 = ppuVar30;
                    /* try { // try from 001a400f to 001a4019 has its CatchHandler @ 001a432a */
  _ZN7uu_expr11syntax_tree8NumOrStr9to_bigint17hc415274c30aae534E(&local_a8);
  ppuVar77 = (undefined **)CONCAT44(uStack_84,local_88);
  bVar44 = (byte)param_1;
  puVar40 = &switchD_001a40b6::caseD_27;
  uVar33 = (ulong)(int)(&switchD_001a40b6::caseD_27)[param_2 & 0xff];
  bVar79 = 0xffffffffffee3627 < uVar33;
  UNRECOVERED_JUMPTABLE = (undefined **)((long)&switchD_001a40b6::caseD_27 + uVar33);
  bVar25 = (byte)UNRECOVERED_JUMPTABLE;
  plVar68 = &local_a8;
  puVar55 = &local_a8;
  puVar23 = &local_a8;
  puVar67 = &local_a8;
  ppuVar75 = local_a8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2 & 0xff) {
  case 0:
    bVar26 = _ZN61__LT_num_bigint__bigint__BigInt_u20_as_u20_core__cmp__Ord_GT_3cmp17h39aca0666f7babaaE
                       (&local_88,&local_a8);
    goto LAB_001a4180;
  case 1:
    cVar45 = _ZN61__LT_num_bigint__bigint__BigInt_u20_as_u20_core__cmp__Ord_GT_3cmp17h39aca0666f7babaaE
                       (&local_88,&local_a8);
    uVar71 = (ulong)(cVar45 < '\x01');
    goto LAB_001a4184;
  case 2:
    if ((char)ppuStack_70 == cStack_90) {
      if ((char)ppuStack_70 == '\x01') goto LAB_001a427b;
      uVar27 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h0032e1dc3f085ef7E
                         (CONCAT44(uStack_7c,local_80),local_78,uStack_a0,local_98);
      uVar71 = (ulong)uVar27;
      goto LAB_001a4184;
    }
LAB_001a4134:
    _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h35788999f3179b91E
              (local_a8,uStack_a0);
    _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h35788999f3179b91E
              (ppuVar77,CONCAT44(uStack_7c,local_80));
    bVar79 = true;
    goto LAB_001a426e;
  case 3:
    if ((char)ppuStack_70 == cStack_90) {
      if ((char)ppuStack_70 == '\x01') goto LAB_001a4134;
      bVar26 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h0032e1dc3f085ef7E
                         (CONCAT44(uStack_7c,local_80),local_78,uStack_a0,local_98);
      uVar71 = (ulong)(bVar26 ^ 1);
      goto LAB_001a4184;
    }
LAB_001a427b:
    _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h35788999f3179b91E
              (local_a8,uStack_a0);
    _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h35788999f3179b91E
              (ppuVar77,CONCAT44(uStack_7c,local_80));
    bVar79 = true;
    goto LAB_001a4295;
  case 4:
    cVar45 = _ZN61__LT_num_bigint__bigint__BigInt_u20_as_u20_core__cmp__Ord_GT_3cmp17h39aca0666f7babaaE
                       (&local_88,&local_a8);
    uVar71 = (ulong)('\0' < cVar45);
    goto LAB_001a4184;
  case 5:
    bVar26 = _ZN61__LT_num_bigint__bigint__BigInt_u20_as_u20_core__cmp__Ord_GT_3cmp17h39aca0666f7babaaE
                       (&local_88,&local_a8);
    bVar26 = ~bVar26;
LAB_001a4180:
    uVar71 = (ulong)(bVar26 >> 7);
LAB_001a4184:
    _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h35788999f3179b91E
              (local_a8,uStack_a0);
code_r0x001a4199:
    _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h35788999f3179b91E
              (ppuVar77);
    bVar79 = true;
    bVar26 = (byte)uVar71;
    puVar54 = &local_a8;
    goto joined_r0x001a426c;
  case 6:
    _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h35788999f3179b91E
              (local_a8,uStack_a0);
    _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h35788999f3179b91E
              (ppuVar77,CONCAT44(uStack_7c,local_80));
    ppuVar75 = (undefined **)0x0;
                    /* try { // try from 001a4056 to 001a4063 has its CatchHandler @ 001a4341 */
    (*(code *)PTR__ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h12de1e9c78140f1fE_00251920)
              (&local_88,puVar78);
    ppuVar73 = ppuVar30;
                    /* try { // try from 001a4064 to 001a406f has its CatchHandler @ 001a430b */
    puVar82 = (undefined *)
              (*(code *)
                PTR__ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h12de1e9c78140f1fE_00251920)
                        ();
    puVar40 = &switchD_001a4082::caseD_21;
    uVar33 = (ulong)(int)(&switchD_001a4082::caseD_21)[param_2 & 0xff];
    bVar79 = 0xffffffffffee360f < uVar33;
    UNRECOVERED_JUMPTABLE = (undefined **)((long)&switchD_001a4082::caseD_21 + uVar33);
    bVar80 = UNRECOVERED_JUMPTABLE == (undefined **)0x0;
    cVar45 = (char)UNRECOVERED_JUMPTABLE;
    uVar83 = (uint)UNRECOVERED_JUMPTABLE;
    puVar24 = (uint *)&local_a8;
    puVar54 = &local_a8;
    puVar53 = &local_a8;
    puVar57 = &local_a8;
    ppuVar77 = ppuVar75;
    ppuVar43 = extraout_RDX_00;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_2 & 0xff) {
    case 0:
      bVar26 = _ZN108__LT_alloc__vec__Vec_LT_T_C_A1_GT__u20_as_u20_core__cmp__PartialOrd_LT_alloc__vec__Vec_LT_T_C_A2_GT__GT__GT_11partial_cmp17h8429a8dd48d0bf9bE
                         (CONCAT44(uStack_7c,local_80),local_78,uStack_a0,local_98);
      break;
    case 1:
      goto switchD_001a4082_caseD_1;
    case 2:
      local_a8 = (undefined **)CONCAT44(uStack_7c,local_80);
      goto switchD_001a40b6_caseD_9;
    case 3:
      goto switchD_001a4082_caseD_3;
    case 4:
      goto switchD_001a4082_caseD_4;
    case 5:
      bVar26 = _ZN108__LT_alloc__vec__Vec_LT_T_C_A1_GT__u20_as_u20_core__cmp__PartialOrd_LT_alloc__vec__Vec_LT_T_C_A2_GT__GT__GT_11partial_cmp17h8429a8dd48d0bf9bE
                         (CONCAT44(uStack_7c,local_80),local_78,uStack_a0,local_98);
      bVar26 = ~bVar26;
      break;
    case 6:
      iVar76 = (int)local_58 - uVar83;
      local_58 = (char *)CONCAT44(local_58._4_4_,iVar76);
      puVar40 = &switchD_001a448d::caseD_1b;
      uVar33 = (ulong)(int)(&switchD_001a448d::caseD_1b)[param_2 & 0xff];
      bVar79 = 0xffffffffffee35f7 < uVar33;
      UNRECOVERED_JUMPTABLE = (undefined **)((long)&switchD_001a448d::caseD_1b + uVar33);
      bVar25 = (byte)UNRECOVERED_JUMPTABLE;
      iVar28 = (int)UNRECOVERED_JUMPTABLE;
      uVar39 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE >> 8);
      ppuVar37 = UNRECOVERED_JUMPTABLE;
      puVar59 = &local_a8;
      puVar64 = &local_a8;
      puVar51 = &local_a8;
      uVar83 = extraout_XMM0_Dc;
      uVar84 = extraout_XMM0_Dd;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(param_2 & 0xff) {
      case 0:
        local_a8 = (undefined **)CONCAT44(uStack_34,local_38);
        uStack_a0 = uStack_30;
        goto code_r0x001a44a5;
      case 1:
        local_a8 = (undefined **)CONCAT44(uStack_34,local_38);
        uStack_a0 = uStack_30;
        local_78 = local_48;
        ppuStack_70 = ppuStack_40;
        uStack_84 = local_58._4_4_;
        local_80 = (undefined4)uStack_50;
        uStack_7c = uStack_50._4_4_;
        local_88 = iVar76;
        ppuVar32 = (undefined **)
                   _ZN10num_bigint6bigint11subtraction78__LT_impl_u20_core__ops__arith__Sub_u20_for_u20_num_bigint__bigint__BigInt_GT_3sub17h9f5015f3ea5aa6f7E
                             (&stack0xffffffffffffffe8,&local_a8,&local_88);
        goto LAB_001a45b4;
      case 2:
        local_a8 = (undefined **)CONCAT44(uStack_34,local_38);
        uStack_a0 = uStack_30;
        goto code_r0x001a452b;
      case 3:
        if ((char)ppuStack_40 != '\x01') {
          _ZN10num_bigint6bigint8division82__LT_impl_u20_core__ops__arith__Div_u20_for_u20__RF_num_bigint__bigint__BigInt_GT_3div17hc712775fe696b254E
                    (&local_88,&local_38,&local_58);
          *(undefined ****)(param_1 + 0x18) = local_78;
          *(undefined ***)(param_1 + 0x20) = ppuStack_70;
          *(int *)(param_1 + 8) = local_88;
          *(undefined4 *)(param_1 + 0xc) = uStack_84;
          *(undefined4 *)(param_1 + 0x10) = local_80;
          *(undefined4 *)(param_1 + 0x14) = uStack_7c;
          param_1[0] = '\0';
          param_1[1] = '\0';
          param_1[2] = '\0';
          param_1[3] = '\0';
          param_1[4] = '\0';
          param_1[5] = '\0';
          param_1[6] = '\0';
          param_1[7] = '\0';
          goto LAB_001a444d;
        }
        goto LAB_001a4561;
      case 4:
        ppuVar77 = (undefined **)&DAT_8000000000000000;
        if ((char)ppuStack_40 != '\x01') {
          piVar35 = &local_88;
          goto code_r0x001a44e9;
        }
        goto LAB_001a450b;
      case 5:
        goto switchD_001a448d_caseD_5;
      case 6:
        (&DAT_0011c993)[uVar33] = (&DAT_0011c993)[uVar33] + (char)param_6 + bVar79;
        uVar33 = (ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff08;
        goto code_r0x001a47b2;
      case 7:
        goto switchD_001a448d_caseD_7;
      case 8:
        goto switchD_001a448d_caseD_8;
      case 9:
        uVar33 = CONCAT71(uVar39,bVar25 + 0x48);
        goto code_r0x001a5791;
      case 10:
        bVar80 = CARRY1(UINT_0011ca14._3_1_,bVar25);
        bVar25 = UINT_0011ca14._3_1_ + bVar25;
        UINT_0011ca14._3_1_ = bVar25 + bVar79;
        *(uint *)ppuVar32 = *(uint *)ppuVar32 + iVar28 + (uint)(bVar80 || CARRY1(bVar25,bVar79));
        puVar24 = (uint *)&local_a8;
        goto switchD_001a4082_caseD_10;
      case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xc:
        *(uint *)(param_5 + -0x39) = (*(int *)(param_5 + -0x39) - param_6) - (uint)bVar79;
        UNRECOVERED_JUMPTABLE = (undefined **)((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff60);
        *(char *)UNRECOVERED_JUMPTABLE =
             (char)*(code *)UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE;
        *(char *)UNRECOVERED_JUMPTABLE =
             (char)*(code *)UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE;
        puVar65 = (uint *)&local_a8;
        goto code_r0x001a5865;
      case 0xd:
        goto switchD_001a448d_caseD_d;
      case 0xe:
        return UNRECOVERED_JUMPTABLE;
      case 0xf:
        pcVar36 = (char *)((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff48);
        *pcVar36 = *pcVar36 + (char)pcVar36;
        *pcVar36 = *pcVar36 + (char)pcVar36;
        goto switchD_001a4082_caseD_15;
      case 0x10:
        if (-1 < (long)UNRECOVERED_JUMPTABLE) {
          (&UNK_0011c995)[uVar33] = (&UNK_0011c995)[uVar33] + '\b';
          UNRECOVERED_JUMPTABLE = (undefined **)(ulong)(iVar28 - 0x8a59c);
          goto code_r0x001a65cc;
        }
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar25;
        goto switchD_001a4082_caseD_17;
      case 0x11:
        pcVar36 = (char *)(((ulong)ppuVar32 & 0xffffffff) - 0x73);
        *pcVar36 = *pcVar36 + '\b';
        goto switchD_001a4082_caseD_1b;
      case 0x12:
        goto switchD_001a448d_caseD_12;
      case 0x13:
        pcVar36 = (char *)((long)&UINT_0011c9cc + uVar33 + 3);
        *pcVar36 = (*pcVar36 + -8) - bVar79;
        goto code_r0x001a6680;
      case 0x14:
        goto code_r0x001a668e;
      case 0x15:
        local_a8 = ppuVar73;
        goto switchD_001a40b6_caseD_1b;
      case 0x16:
        UNRECOVERED_JUMPTABLE =
             (undefined **)CONCAT71(uVar39,bVar25 | (byte)*(code *)UNRECOVERED_JUMPTABLE);
        puVar59 = &local_a8;
        break;
      case 0x17:
        puVar59 = (undefined8 *)&stack0xffffffffffffff50;
        *(uint *)UNRECOVERED_JUMPTABLE = *(uint *)UNRECOVERED_JUMPTABLE + iVar28;
        (&UNK_0011c995)[uVar33] = (&UNK_0011c995)[uVar33] + '\b';
        UNRECOVERED_JUMPTABLE = (undefined **)(ulong)(iVar28 + 0xa43e0);
        break;
      case 0x18:
        goto switchD_001a448d_caseD_18;
      case 0x19:
        goto switchD_001a448d_caseD_19;
      case 0x1a:
        goto switchD_001a448d_caseD_1a;
      case 0x1b:
code_r0x0011ca08:
        LOCK();
        uVar27 = *(uint *)(ppuVar43 + 1);
        *(uint *)(ppuVar43 + 1) = (uint)ppuVar32;
        local_a8 = (undefined **)CONCAT44((int)((ulong)ppuVar32 >> 0x20),uVar27);
        UNLOCK();
        *(char *)(uVar71 + 0x7b) = *(char *)(uVar71 + 0x7b) + (char)((ulong)puVar40 >> 8);
        *(byte *)UNRECOVERED_JUMPTABLE =
             (byte)*(code *)UNRECOVERED_JUMPTABLE | (byte)UNRECOVERED_JUMPTABLE;
        UNRECOVERED_JUMPTABLE = (undefined **)(ulong)((uint)UNRECOVERED_JUMPTABLE | 0x4e00087b);
code_r0x0011ca0f:
        cRam000000004e11d290 = cRam000000004e11d290 + (char)puVar40;
        ppuVar30 = UNRECOVERED_JUMPTABLE;
        puVar59 = puVar48;
        ppuVar32 = local_a8;
        if ((POPCOUNT(cRam000000004e11d290) & 1U) == 0) goto code_r0x0011ca17;
code_r0x0011ca1f:
        pcVar36 = (char *)((long)puVar40 + 0x2d00087d);
        cVar45 = *pcVar36;
        cVar46 = (char)((ulong)ppuVar43 >> 8);
        *pcVar36 = *pcVar36 + cVar46;
        UNRECOVERED_JUMPTABLE = ppuVar30;
        if (SCARRY1(cVar45,cVar46) != *pcVar36 < '\0') goto code_r0x0011ca27;
        *(char *)((long)puVar40 + -0x21fff76e) =
             *(char *)((long)puVar40 + -0x21fff76e) + (char)puVar40;
code_r0x0011ca35:
        UNRECOVERED_JUMPTABLE = (undefined **)((ulong)ppuVar43 & 0xffffffff);
        ppuVar43 = ppuVar30;
        goto code_r0x0011ca27;
      }
      goto LAB_001a673e;
    case 7:
      LOCK();
      uVar27 = *(uint *)UNRECOVERED_JUMPTABLE;
      *(uint *)UNRECOVERED_JUMPTABLE = uVar83;
      pcVar36 = (char *)CONCAT44((int)((ulong)UNRECOVERED_JUMPTABLE >> 0x20),uVar27);
      UNLOCK();
      *pcVar36 = *pcVar36 + (char)uVar27;
      goto LAB_001a4561;
    case 8:
      goto switchD_001a4082_caseD_8;
    case 9:
      (&UNK_0011c97d)[uVar33] = (&UNK_0011c97d)[uVar33] & 0xf0;
      (&DAT_0011c979)[uVar33] = (&DAT_0011c979)[uVar33] + -0x10;
      out(0x48,cVar45);
      puVar57 = (undefined8 *)(undefined *)0x9024;
      goto code_r0x001a454f;
    case 10:
      puVar56 = (undefined8 *)0x9024;
      (&DAT_0011c979)[uVar33] = (&DAT_0011c979)[uVar33] + -0x10;
      out(0x48,cVar45);
      goto code_r0x001a44c9;
    case 0xb:
      ppuStack_b8 = ppuVar30;
      pcStack_c0 = param_1;
      puVar78 = &switchD_001a4082::caseD_21;
      ppuStack_1f0 = ppuVar32;
      ppuVar75 = extraout_RDX_00 + 1;
      puVar59 = (undefined8 *)auStack_1f8;
switchD_001a448d_caseD_5:
      puVar40 = &UINT_0011ca1c;
      uVar27 = (&UINT_0011ca1c)[(ulong)ppuVar73 & 0xff];
      UNRECOVERED_JUMPTABLE = (undefined **)((long)&UINT_0011ca1c + (long)(int)uVar27);
      plVar68 = puVar59;
      puVar70 = puVar59;
      local_a8 = ppuVar32;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((ulong)ppuVar73 & 0xff) {
      case 0:
        if (((byte)*(code *)extraout_RDX_00 & 1) == 0) {
          local_a8 = (undefined **)((long)puVar59 + 0x88);
          goto switchD_001a40b6_caseD_13;
        }
        break;
      case 1:
        if (((byte)*(code *)extraout_RDX_00 & 1) == 0) {
          *(undefined **)((long)puVar59 + -8) = &UNK_001a4816;
          (*(code *)
            PTR__ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h12de1e9c78140f1fE_00251920)
                    ((undefined *)((long)puVar59 + 0x10),ppuVar75);
          if ((*(byte *)puVar78 & 1) == 0) {
            *(undefined8 *)((long)puVar59 + -8) = 0x1a49c4;
            (*(code *)
              PTR__ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h12de1e9c78140f1fE_00251920)
                      ((undefined *)((long)puVar59 + 0x70));
            *(long *)((long)puVar59 + 0xb8) = *(long *)((long)puVar59 + 0x18);
            *(long *)((long)puVar59 + 0xc0) =
                 *(long *)((long)puVar59 + 0x20) + *(long *)((long)puVar59 + 0x18);
            *(undefined8 *)((long)puVar59 + 200) = 0;
            *(undefined8 *)((long)puVar59 + -8) = 0x1a49fa;
            auVar88 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2cd4ce92fdece041E
                                ((undefined *)((long)puVar59 + 0xb8));
            puVar82 = 
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00251a58
            ;
            if (auVar88._8_4_ != 0x110000) {
              do {
                *(undefined8 *)((long)puVar59 + -8) = 0x1a4a91;
                (*(code *)puVar82)((undefined *)((long)puVar59 + 0xe0),
                                   (undefined *)((long)puVar59 + 0x70));
                *(long *)((long)puVar59 + 0xa0) = *(long *)((long)puVar59 + 0xe8);
                *(long *)((long)puVar59 + 0xa8) =
                     *(long *)((long)puVar59 + 0xf0) + *(long *)((long)puVar59 + 0xe8);
                while( true ) {
                  *(undefined8 *)((long)puVar59 + -8) = 0x1a4ac8;
                  auVar89 = _ZN4core3str11validations15next_code_point17h84659763701eb288E
                                      ((undefined *)((long)puVar59 + 0xa0));
                  if (((auVar89 & (undefined  [12])0x1) == (undefined  [12])0x0) ||
                     (auVar89._8_4_ == 0x110000)) break;
                  if (auVar89._8_4_ == auVar88._8_4_) {
                    *(undefined8 *)((long)puVar59 + -8) = 0x1a4b39;
                    (*(code *)
                      PTR__ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17h7f74ddc3053bca16E_00251a50
                    )((undefined *)((long)puVar59 + 0x30),auVar88._0_8_ + 1);
                    uVar3 = *(undefined4 *)((long)puVar59 + 0x30);
                    uVar14 = *(undefined4 *)((long)puVar59 + 0x34);
                    uVar15 = *(undefined4 *)((long)puVar59 + 0x38);
                    uVar16 = *(undefined4 *)((long)puVar59 + 0x3c);
                    uVar17 = *(undefined4 *)((long)puVar59 + 0x44);
                    uVar18 = *(undefined4 *)((long)puVar59 + 0x48);
                    uVar19 = *(undefined4 *)((long)puVar59 + 0x4c);
                    puVar51 = *(undefined8 **)((long)puVar59 + 8);
                    *(undefined4 *)(puVar51 + 3) = *(undefined4 *)((long)puVar59 + 0x40);
                    *(undefined4 *)((long)puVar51 + 0x1c) = uVar17;
                    *(undefined4 *)(puVar51 + 4) = uVar18;
                    *(undefined4 *)((long)puVar51 + 0x24) = uVar19;
                    *(undefined4 *)(puVar51 + 1) = uVar3;
                    *(undefined4 *)((long)puVar51 + 0xc) = uVar14;
                    *(undefined4 *)(puVar51 + 2) = uVar15;
                    *(undefined4 *)((long)puVar51 + 0x14) = uVar16;
                    *puVar51 = 0;
                    *(undefined **)((long)puVar59 + -8) = &LAB_001a4b64;
                    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E
                              ((undefined *)((long)puVar59 + 0xe0));
                    goto LAB_001a4b64;
                  }
                }
                *(undefined8 *)((long)puVar59 + -8) = 0x1a4ae2;
                _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E
                          ((undefined *)((long)puVar59 + 0xe0));
                *(undefined8 *)((long)puVar59 + -8) = 0x1a4aef;
                auVar88 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2cd4ce92fdece041E
                                    ((undefined *)((long)puVar59 + 0xb8));
              } while (auVar88._8_4_ != 0x110000);
            }
            *(undefined8 *)((long)puVar59 + -8) = 0x1a4a0f;
            (*(code *)
              PTR__ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17h7f74ddc3053bca16E_00251a50
            )((undefined *)((long)puVar59 + 0x30),0);
            uVar3 = *(undefined4 *)((long)puVar59 + 0x30);
            uVar14 = *(undefined4 *)((long)puVar59 + 0x34);
            uVar15 = *(undefined4 *)((long)puVar59 + 0x38);
            uVar16 = *(undefined4 *)((long)puVar59 + 0x3c);
            uVar34 = *(undefined8 *)((long)puVar59 + 0x48);
            puVar51 = *(undefined8 **)((long)puVar59 + 8);
            puVar51[3] = *(undefined8 *)((long)puVar59 + 0x40);
            puVar51[4] = uVar34;
            *(undefined4 *)(puVar51 + 1) = uVar3;
            *(undefined4 *)((long)puVar51 + 0xc) = uVar14;
            *(undefined4 *)(puVar51 + 2) = uVar15;
            *(undefined4 *)((long)puVar51 + 0x14) = uVar16;
            *puVar51 = 0;
LAB_001a4b64:
            *(undefined8 *)((long)puVar59 + -8) = 0x1a4b6e;
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E
                      ((undefined *)((long)puVar59 + 0x70));
            puVar82 = (undefined *)((long)puVar59 + 0x10);
          }
          else {
            uVar27 = puVar78[2];
            uVar85 = puVar78[3];
            uVar86 = puVar78[4];
            uVar87 = puVar78[5];
            uVar34 = *(undefined8 *)(puVar78 + 8);
            puVar51 = *(undefined8 **)((long)puVar59 + 8);
            puVar51[3] = *(undefined8 *)(puVar78 + 6);
            puVar51[4] = uVar34;
            *(uint *)(puVar51 + 1) = uVar27;
            *(uint *)((long)puVar51 + 0xc) = uVar85;
            *(uint *)(puVar51 + 2) = uVar86;
            *(uint *)((long)puVar51 + 0x14) = uVar87;
            *puVar51 = 1;
            puVar82 = (undefined *)((long)puVar59 + 0x10);
          }
          goto LAB_001a4e78;
        }
        break;
      case 2:
        puVar23 = puVar59;
        ppuVar77 = ppuVar75;
        if (((byte)*(code *)extraout_RDX_00 & 1) == 0) goto switchD_001a40b6_caseD_14;
        break;
      case 3:
        uVar33 = 1;
        puVar61 = puVar59;
        if (((byte)*(code *)extraout_RDX_00 & 1) != 0) goto code_r0x001a47b2;
        *(undefined8 *)((long)puVar59 + -8) = 0x1a47a8;
        cVar45 = (*(code *)PTR__ZN7uu_expr11syntax_tree9is_truthy17hefcaac958900f87aE_00251928)
                           (ppuVar75);
        goto code_r0x001a47a8;
      case 4:
        goto code_r0x001a57c4;
      case 5:
        puVar24 = (uint *)puVar59;
        goto switchD_001a4082_caseD_10;
      case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 7:
        puVar65 = (uint *)puVar59;
        goto code_r0x001a5865;
      case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 9:
code_r0x001a6553:
        pcVar72 = (code *)swi(3);
        ppuVar32 = (undefined **)(*pcVar72)();
        return ppuVar32;
      case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xb:
        ppuVar73 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff);
        goto code_r0x001a65cc;
      case 0xc:
        if ((long)UNRECOVERED_JUMPTABLE < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(uint *)UNRECOVERED_JUMPTABLE = *(uint *)UNRECOVERED_JUMPTABLE + (int)UNRECOVERED_JUMPTABLE
        ;
        (&UNK_0011c9a9)[(int)uVar27] = (&UNK_0011c9a9)[(int)uVar27] + '\x1c';
        ppuVar32 = (undefined **)
                   (*(code *)
                     PTR__ZN57__LT_core__fmt__Formatter_u20_as_u20_core__fmt__Write_GT_9write_str17h7dbec3f69c4ad810E_00251878
                   )(ppuVar73,(int)UNRECOVERED_JUMPTABLE + -0x8862c,0x11);
        return ppuVar32;
      case 0xd:
        goto code_r0x001a65a1;
      case 0xe:
        goto code_r0x001a668e;
      case 0xf:
        goto code_r0x001a668e;
      case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x11:
        UNRECOVERED_JUMPTABLE = (undefined **)((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff18);
        *(byte *)UNRECOVERED_JUMPTABLE =
             *(byte *)UNRECOVERED_JUMPTABLE | (byte)UNRECOVERED_JUMPTABLE;
        *(byte *)UNRECOVERED_JUMPTABLE =
             *(byte *)UNRECOVERED_JUMPTABLE + (byte)UNRECOVERED_JUMPTABLE;
        goto LAB_001a673e;
      case 0x12:
        goto switchD_001a40b6_caseD_21;
      case 0x13:
        UNRECOVERED_JUMPTABLE = (undefined **)((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff10);
        *(uint *)UNRECOVERED_JUMPTABLE = *(uint *)UNRECOVERED_JUMPTABLE + (int)UNRECOVERED_JUMPTABLE
        ;
        *(char *)UNRECOVERED_JUMPTABLE =
             (char)*(code *)UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE;
        puVar55 = puVar59;
        goto switchD_001a40b6_caseD_22;
      case 0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x15:
        UNRECOVERED_JUMPTABLE =
             (undefined **)
             CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE >> 8),
                      (byte)UNRECOVERED_JUMPTABLE | *param_5);
LAB_001a673e:
        *(undefined ***)((long)puVar59 + 8) = UNRECOVERED_JUMPTABLE;
        *(undefined8 *)((long)puVar59 + 0x10) = 1;
        *(undefined8 *)((long)puVar59 + 0x18) = 8;
        *(undefined8 *)((long)puVar59 + 0x20) = 0;
        *(undefined8 *)((long)puVar59 + 0x28) = 0;
        goto LAB_001a675d;
      case 0x16:
        uVar27 = in(0x7c);
        pbVar29 = (byte *)(ulong)uVar27;
        *pbVar29 = *pbVar29 | (byte)uVar27;
        puVar40 = (uint *)0x11ca7d;
        *pbVar29 = *pbVar29 | (byte)uVar27;
        bVar80 = SBORROW4(uVar27,0x7900087d);
        ppuVar30 = (undefined **)(ulong)(uVar27 + 0x86fff783);
        bVar79 = (int)(uVar27 + 0x86fff783) < 0;
code_r0x0011ca29:
        if (bVar80 == bVar79) {
          ppuVar43 = (undefined **)
                     CONCAT62((int6)((ulong)ppuVar43 >> 0x10),
                              CONCAT11((char)((ulong)ppuVar43 >> 8) + (char)param_1,(char)ppuVar43))
          ;
          goto code_r0x0011ca35;
        }
        *(code *)((long)ppuVar30 + -0x76fff773) =
             (code)((char)*(code *)((long)ppuVar30 + -0x76fff773) + (char)((ulong)puVar40 >> 8));
        UNRECOVERED_JUMPTABLE = (undefined **)((ulong)ppuVar43 & 0xffffffff);
        *(byte *)UNRECOVERED_JUMPTABLE =
             (byte)*(code *)UNRECOVERED_JUMPTABLE | (byte)UNRECOVERED_JUMPTABLE;
        goto code_r0x0011ca3a;
      }
      uVar27 = *(uint *)ppuVar75;
      uVar85 = *(uint *)((long)ppuVar75 + 4);
      uVar86 = *(uint *)(ppuVar75 + 1);
      uVar87 = *(uint *)((long)ppuVar75 + 0xc);
      puVar82 = ppuVar75[3];
      puVar51 = *(undefined8 **)((long)puVar59 + 8);
      puVar51[3] = ppuVar75[2];
      puVar51[4] = puVar82;
      *(uint *)(puVar51 + 1) = uVar27;
      *(uint *)((long)puVar51 + 0xc) = uVar85;
      *(uint *)(puVar51 + 2) = uVar86;
      *(uint *)((long)puVar51 + 0x14) = uVar87;
      *puVar51 = 1;
LAB_001a47ef:
      ppuVar32 = (undefined **)
                 _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT_17h0c833a88cc9a87cfE
                           (puVar78);
      return ppuVar32;
    case 0xc:
      cVar45 = (char)((long)((long)extraout_RDX_00 << 0x20 |
                            (ulong)UNRECOVERED_JUMPTABLE & 0xffffffff) / (long)(int)ppuVar32) +
               -0x80 + bVar79;
code_r0x001a47a8:
      if (cVar45 == '\0') {
        ppuVar32 = (undefined **)(puVar78 + 2);
        uVar34 = 1;
        if ((*(byte *)puVar78 & 1) == 0) {
          *(undefined8 *)((long)puVar59 + -8) = 0x1a4899;
          cVar45 = (*(code *)PTR__ZN7uu_expr11syntax_tree9is_truthy17hefcaac958900f87aE_00251928)
                             (ppuVar32);
          if (cVar45 == '\0') {
                    /* try { // try from 001a4b87 to 001a4b93 has its CatchHandler @ 001a4e8f */
            *(undefined8 *)((long)puVar59 + -8) = 0x1a4b94;
            (*(code *)
              PTR__ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17h7f74ddc3053bca16E_00251a50
            )((undefined *)((long)puVar59 + 0x30),0);
            goto LAB_001a4b94;
          }
          uVar34 = 0;
        }
        uVar27 = *(uint *)ppuVar32;
        uVar85 = puVar78[3];
        uVar86 = puVar78[4];
        uVar87 = puVar78[5];
        uVar21 = *(undefined8 *)(puVar78 + 8);
        puVar51 = *(undefined8 **)((long)puVar59 + 8);
        puVar51[3] = *(undefined8 *)(puVar78 + 6);
        puVar51[4] = uVar21;
        *(uint *)(puVar51 + 1) = uVar27;
        *(uint *)((long)puVar51 + 0xc) = uVar85;
        *(uint *)(puVar51 + 2) = uVar86;
        *(uint *)((long)puVar51 + 0x14) = uVar87;
        *puVar51 = uVar34;
        goto LAB_001a4bbd;
      }
      uVar33 = 0;
      puVar61 = puVar59;
code_r0x001a47b2:
      uVar27 = *(uint *)ppuVar75;
      uVar85 = *(uint *)((long)ppuVar75 + 4);
      uVar86 = *(uint *)(ppuVar75 + 1);
      uVar87 = *(uint *)((long)ppuVar75 + 0xc);
      puVar82 = ppuVar75[3];
      puVar4 = *(ulong **)((long)puVar61 + 8);
      puVar4[3] = (ulong)ppuVar75[2];
      puVar4[4] = (ulong)puVar82;
      *(uint *)(puVar4 + 1) = uVar27;
      *(uint *)((long)puVar4 + 0xc) = uVar85;
      *(uint *)(puVar4 + 2) = uVar86;
      *(uint *)((long)puVar4 + 0x14) = uVar87;
      *puVar4 = uVar33;
      goto LAB_001a47ef;
    case 0xd:
      puVar59 = &local_a8;
      if (bVar79 || bVar80) goto code_r0x001a471f;
      *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + cVar45;
      goto code_r0x001a4729;
    case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf:
      uVar33 = (ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff40;
      puVar63 = &local_a8;
      goto code_r0x001a5791;
    case 0x10:
switchD_001a4082_caseD_10:
      puVar65 = puVar24;
      puVar65[-2] = 0x1a5c84;
      puVar65[-1] = 0;
      (*(code *)
        PTR__ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17h7f74ddc3053bca16E_00251a50
      )((ulong)puVar65 & 0xffffffff,ppuVar75);
      uVar27 = *puVar65;
      uVar85 = puVar65[1];
      uVar86 = puVar65[2];
      uVar87 = puVar65[3];
      uVar83 = puVar65[5];
      uVar84 = puVar65[6];
      uVar20 = puVar65[7];
      puVar78[4] = puVar65[4];
      puVar78[5] = uVar83;
      puVar78[6] = uVar84;
      puVar78[7] = uVar20;
      *puVar78 = uVar27;
      puVar78[1] = uVar85;
      puVar78[2] = uVar86;
      puVar78[3] = uVar87;
      puVar65[0x18] = 0;
      puVar65[0x19] = 0;
      puVar65[-2] = 0x1a5cb3;
      puVar65[-1] = 0;
      _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd3e63ca5919932edE
                (puVar65,puVar65 + 0x12,uVar71,puVar65 + 0x18);
      goto LAB_001a5cfd;
    case 0x11:
      local_98 = (ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff10;
      ppuVar32 = extraout_RDX_00;
      goto code_r0x001a5cd0;
    case 0x12:
      *(code *)UNRECOVERED_JUMPTABLE = *(code *)UNRECOVERED_JUMPTABLE;
      param_1[0x1482484] = param_1[0x1482484] + -0x10;
      *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + cVar45;
      puVar65 = (uint *)&local_a8;
      goto code_r0x001a5865;
    case 0x13:
      *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + cVar45;
      *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + cVar45;
      *(char *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + cVar45;
      (&UNK_0011c9b7)[uVar33] = (&UNK_0011c9b7)[uVar33] + -0x10;
      pcVar36 = (char *)((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff60);
      *pcVar36 = *pcVar36 + (char)pcVar36;
      *pcVar36 = *pcVar36 + (char)pcVar36;
      goto switchD_001a448d_caseD_d;
    case 0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x15:
      goto switchD_001a4082_caseD_15;
    case 0x16:
switchD_001a448d_caseD_1a:
      local_68 = (undefined **)CONCAT44(local_68._4_4_,(int)UNRECOVERED_JUMPTABLE);
      puVar67 = &local_a8;
      goto switchD_001a40b6_caseD_1d;
    case 0x17:
switchD_001a4082_caseD_17:
      UNRECOVERED_JUMPTABLE = (undefined **)&DAT_0011c030;
      goto code_r0x001a65cc;
    case 0x18:
      goto switchD_001a4082_caseD_18;
    case 0x19:
      goto switchD_001a4082_caseD_19;
    case 0x1a:
code_r0x001a6680:
      local_58 = (char *)((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff48);
      *local_58 = *local_58 + (char)local_58;
      *local_58 = *local_58 + (char)local_58;
      puVar70 = &local_a8;
      uStack_50 = puVar40;
      goto code_r0x001a668e;
    case 0x1b:
switchD_001a4082_caseD_1b:
      UNRECOVERED_JUMPTABLE = &PTR_s_Invalid_content_of_____Unmatched_0024a990;
      puVar59 = &local_a8;
      goto LAB_001a673e;
    case 0x1c:
      UNRECOVERED_JUMPTABLE = (undefined **)((ulong)&ppuStack_70 & 0xffffffff);
      puVar55 = &local_a8;
      goto switchD_001a40b6_caseD_22;
    case 0x1d:
      ppuStack_70 = (undefined **)CONCAT44(ppuStack_70._4_4_,uVar83);
      puVar59 = &local_a8;
      goto code_r0x001a65a1;
    case 0x1e:
      goto code_r0x001a66e9;
    case 0x1f:
      UNRECOVERED_JUMPTABLE =
           (undefined **)
           ((long)&switchD_001a4082::caseD_21 +
           (long)(int)(&switchD_001a4082::caseD_21)[uVar83 | 0xfff764d2]);
      goto switchD_001a4082_caseD_18;
    case 0x20:
      goto switchD_001a4082_caseD_20;
    case 0x21:
      puVar47 = (undefined8 *)((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff);
      local_a8 = ppuVar32;
code_r0x0011c9f1:
      UNRECOVERED_JUMPTABLE = (undefined **)((ulong)puVar51 & 0xffffffff);
      bVar25 = (byte)UNRECOVERED_JUMPTABLE;
      puVar48 = puVar47;
      ppuVar32 = local_a8;
      if (bVar79 || bVar80) {
code_r0x0011c9fb:
        *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar25;
        if (-1 < (char)*(code *)UNRECOVERED_JUMPTABLE) goto code_r0x0011c9ff;
      }
      else {
        bVar38 = (byte)((ulong)UNRECOVERED_JUMPTABLE >> 8);
        *(byte *)puVar40 = *(char *)puVar40 + bVar38;
        if (-1 < *(char *)puVar40) {
          cVar45 = bVar44 + bVar38;
          param_1 = (char *)CONCAT71((int7)((ulong)param_1 >> 8),cVar45);
          if (!CARRY1(bVar44,bVar38) && cVar45 != '\0') {
            *(byte *)(ppuVar43 + 0xf) = (char)*(code *)(ppuVar43 + 0xf) + bVar25;
            *(byte *)UNRECOVERED_JUMPTABLE = (byte)*(code *)UNRECOVERED_JUMPTABLE | bVar25;
            goto code_r0x0011ca08;
          }
          goto code_r0x0011c9fb;
        }
code_r0x0011c9ff:
        pcVar72 = (code *)((long)local_a8 + 0x42000877);
        *pcVar72 = (code)((char)*pcVar72 + (char)((ulong)param_1 >> 8));
        if ((char)*pcVar72 < '\0') goto code_r0x0011ca0f;
      }
      pcVar72 = (code *)((long)local_a8 + 0x6d00087a);
      *pcVar72 = (code)((char)*pcVar72 + bVar25);
      ppuVar30 = UNRECOVERED_JUMPTABLE;
      puVar59 = puVar47;
      if ((POPCOUNT(*pcVar72) & 1U) == 0) goto code_r0x0011ca0f;
code_r0x0011ca17:
      cVar46 = (char)param_1 + (char)puVar40;
      param_1 = (char *)CONCAT71((int7)((ulong)param_1 >> 8),cVar46);
      cVar45 = (char)((ulong)puVar40 >> 8);
      if ((POPCOUNT(cVar46) & 1U) == 0) {
        bVar80 = SCARRY1(cRam000000007911d2a6,cVar45);
        cRam000000007911d2a6 = cRam000000007911d2a6 + cVar45;
        bVar79 = cRam000000007911d2a6 < '\0';
        goto code_r0x0011ca29;
      }
      cVar46 = (char)((ulong)ppuVar30 >> 8);
      cVar41 = cVar45 + cVar46;
      puVar40 = (uint *)CONCAT62((int6)((ulong)puVar40 >> 0x10),CONCAT11(cVar41,(char)puVar40));
      UNRECOVERED_JUMPTABLE = ppuVar30;
      if (SCARRY1(cVar45,cVar46) == cVar41 < '\0') goto code_r0x0011ca1f;
code_r0x0011ca27:
      ppuVar30 = ppuVar43;
      *(char *)((long)puVar40 + 0x7d) =
           *(char *)((long)puVar40 + 0x7d) + (char)((ulong)param_1 >> 8);
      bVar25 = (byte)UNRECOVERED_JUMPTABLE;
      *(byte *)UNRECOVERED_JUMPTABLE = (byte)*(code *)UNRECOVERED_JUMPTABLE | bVar25;
      *(byte *)UNRECOVERED_JUMPTABLE = (byte)*(code *)UNRECOVERED_JUMPTABLE | bVar25;
      *(uint *)(ppuVar30 + -0xda43fff) = (uint)ppuVar30;
      *(byte *)UNRECOVERED_JUMPTABLE = (byte)*(code *)UNRECOVERED_JUMPTABLE | bVar25;
      puVar49 = (undefined8 *)((long)puVar59 + -8);
      puVar59 = (undefined8 *)((long)puVar59 + -8);
      *puVar49 = 0xffffffffffffff8e;
code_r0x0011ca3a:
      bVar25 = (byte)UNRECOVERED_JUMPTABLE;
      *(byte *)UNRECOVERED_JUMPTABLE = (byte)*(code *)UNRECOVERED_JUMPTABLE | bVar25;
      uRam3300089b37000891 = SUB84(UNRECOVERED_JUMPTABLE,0);
      puVar50 = (ulong *)((long)puVar59 + -8);
      *(ulong *)((long)puVar59 + -8) =
           (ulong)(in_NT & 1) * 0x4000 | (ulong)(bVar26 & 1) * 0x400 | (ulong)(in_IF & 1) * 0x200 |
           (ulong)(in_TF & 1) * 0x100 | (ulong)((char)*(code *)UNRECOVERED_JUMPTABLE < '\0') * 0x80
           | (ulong)(*(code *)UNRECOVERED_JUMPTABLE == (code)0x0) * 0x40 | (ulong)(in_AF & 1) * 0x10
           | (ulong)((POPCOUNT(*(code *)UNRECOVERED_JUMPTABLE) & 1U) == 0) * 4 |
           (ulong)(in_ID & 1) * 0x200000 | (ulong)(in_VIP & 1) * 0x100000 |
           (ulong)(in_VIF & 1) * 0x80000 | (ulong)(in_AC & 1) * 0x40000;
      *(byte *)UNRECOVERED_JUMPTABLE = (byte)*(code *)UNRECOVERED_JUMPTABLE | bVar25;
      puVar40 = (uint *)0xd500089b;
      *(byte *)UNRECOVERED_JUMPTABLE = (byte)*(code *)UNRECOVERED_JUMPTABLE | bVar25;
      local_a8 = ppuVar32;
      goto code_r0x0011ca50;
    }
    bVar26 = bVar26 >> 7;
    puVar52 = &local_a8;
    break;
  case 7:
    (&UNK_0011c963)[uVar33] = (&UNK_0011c963)[uVar33] ^ 0xd8;
    puVar53 = (undefined8 *)&stack0xffffffffffffff50;
switchD_001a4082_caseD_3:
    puVar52 = puVar53;
    *(undefined8 *)((long)puVar52 + -8) = 0x1a4209;
    bVar26 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h7fbec500b9bd0fe9E
                       (*(undefined8 *)((long)puVar52 + 0x28),*(undefined8 *)((long)puVar52 + 0x30),
                        *(undefined8 *)((long)puVar52 + 8),*(undefined8 *)((long)puVar52 + 0x10));
    bVar26 = bVar26 ^ 1;
    break;
  case 8:
    puVar57 = (undefined8 *)&stack0xffffffffffffff50;
switchD_001a4082_caseD_4:
    puVar52 = puVar57;
    *(undefined8 *)((long)puVar52 + -8) = 0x1a41c8;
    cVar45 = _ZN108__LT_alloc__vec__Vec_LT_T_C_A1_GT__u20_as_u20_core__cmp__PartialOrd_LT_alloc__vec__Vec_LT_T_C_A2_GT__GT__GT_11partial_cmp17h8429a8dd48d0bf9bE
                       (*(undefined8 *)((long)puVar52 + 0x28),*(undefined8 *)((long)puVar52 + 0x30),
                        *(undefined8 *)((long)puVar52 + 8),*(undefined8 *)((long)puVar52 + 0x10));
    bVar26 = '\0' < cVar45;
    break;
  case 9:
switchD_001a40b6_caseD_9:
    bVar26 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h7fbec500b9bd0fe9E
                       (local_a8,local_78,uStack_a0,local_98);
    break;
  case 10:
    ppuVar77 = (undefined **)((ulong)ppuVar73 & 0xffffffff);
    goto code_r0x001a4199;
  case 0xb:
    (&UNK_0011c963)[uVar33] = (&UNK_0011c963)[uVar33] ^ 0xd8;
    puVar54 = (undefined8 *)&stack0xffffffffffffff50;
switchD_001a4082_caseD_1:
    puVar52 = puVar54;
    *(undefined8 *)((long)puVar52 + -8) = 0x1a422a;
    cVar45 = _ZN108__LT_alloc__vec__Vec_LT_T_C_A1_GT__u20_as_u20_core__cmp__PartialOrd_LT_alloc__vec__Vec_LT_T_C_A2_GT__GT__GT_11partial_cmp17h8429a8dd48d0bf9bE
                       (*(undefined8 *)((long)puVar52 + 0x28),*(undefined8 *)((long)puVar52 + 0x30),
                        *(undefined8 *)((long)puVar52 + 8),*(undefined8 *)((long)puVar52 + 0x10));
    bVar26 = cVar45 < '\x01';
    break;
  case 0xc:
    *(char *)UNRECOVERED_JUMPTABLE =
         (char)*(code *)UNRECOVERED_JUMPTABLE << 1 | (char)*(code *)UNRECOVERED_JUMPTABLE < '\0';
    *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar25;
    return UNRECOVERED_JUMPTABLE;
  case 0xd:
    *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar25;
    goto code_r0x001a454f;
  case 0xe:
    piVar35 = (int *)((ulong)&local_88 & 0xffffffff);
code_r0x001a44e9:
    _ZN10num_bigint6bigint8division82__LT_impl_u20_core__ops__arith__Div_u20_for_u20__RF_num_bigint__bigint__BigInt_GT_3div17hc712775fe696b254E
              (piVar35,&local_38,&local_58);
    ppuVar32 = (undefined **)CONCAT44(uStack_84,local_88);
switchD_001a4082_caseD_8:
    if (ppuVar32 != ppuVar77) {
      _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h35788999f3179b91E
                ();
      local_a8 = (undefined **)CONCAT44(uStack_34,local_38);
      uStack_a0 = uStack_30;
      local_78 = local_48;
      ppuStack_70 = ppuStack_40;
      local_88 = (int)local_58;
      uStack_84 = local_58._4_4_;
      local_80 = (undefined4)uStack_50;
      uStack_7c = uStack_50._4_4_;
      ppuVar32 = (undefined **)
                 _ZN10num_bigint6bigint8division78__LT_impl_u20_core__ops__arith__Rem_u20_for_u20_num_bigint__bigint__BigInt_GT_3rem17hb3841d50c8e3d31eE
                           (&stack0xffffffffffffffe8,&local_a8,&local_88);
      puVar58 = &local_a8;
      goto LAB_001a45b4;
    }
LAB_001a450b:
    _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_num_bigint__bigint__BigInt_C_num_bigint__ParseBigIntError_GT__GT_17h35788999f3179b91E
              (ppuVar77);
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
LAB_001a444d:
    _ZN4core3ptr47drop_in_place_LT_num_bigint__bigint__BigInt_GT_17hd240cd584614de3eE
              (local_58,uStack_50);
    ppuVar32 = (undefined **)
               _ZN4core3ptr47drop_in_place_LT_num_bigint__bigint__BigInt_GT_17hd240cd584614de3eE
                         (CONCAT44(uStack_34,local_38),uStack_30);
    return ppuVar32;
  case 0xf:
    *(byte *)local_a8 = ((char)*(code *)local_a8 - 0x28U) + bVar79;
    local_a8 = (undefined **)CONCAT44(local_a8._4_4_,(int)local_a8 - (int)UNRECOVERED_JUMPTABLE);
code_r0x001a452b:
    local_78 = local_48;
    ppuStack_70 = ppuStack_40;
    local_88 = (int)local_58;
    uStack_84 = local_58._4_4_;
    local_80 = (undefined4)uStack_50;
    uStack_7c = uStack_50._4_4_;
    puVar57 = &local_a8;
code_r0x001a454f:
    *(undefined8 *)((long)puVar57 + -8) = 0x1a4554;
    ppuVar32 = (undefined **)
               _ZN10num_bigint6bigint14multiplication78__LT_impl_u20_core__ops__arith__Mul_u20_for_u20_num_bigint__bigint__BigInt_GT_3mul17h0db45ed69ea0883eE
                         ();
    puVar58 = puVar57;
LAB_001a45b4:
    uVar34 = *(undefined8 *)((long)puVar58 + 0x90);
    uVar21 = *(undefined8 *)((long)puVar58 + 0x98);
    uVar22 = *(undefined8 *)((long)puVar58 + 0xa8);
    *(undefined8 *)((long)puVar58 + 0xc0) = *(undefined8 *)((long)puVar58 + 0xa0);
    *(undefined8 *)((long)puVar58 + 200) = uVar22;
    *(undefined8 *)((long)puVar58 + 0xb0) = uVar34;
    *(undefined8 *)((long)puVar58 + 0xb8) = uVar21;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)((long)puVar58 + 0xa0);
    *(undefined8 *)(param_1 + 0x20) = uVar22;
    *(undefined8 *)(param_1 + 8) = uVar34;
    *(undefined8 *)(param_1 + 0x10) = uVar21;
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    return ppuVar32;
  case 0x10:
code_r0x001a44a5:
    local_78 = local_48;
    ppuStack_70 = ppuStack_40;
    local_88 = (int)local_58;
    uStack_84 = local_58._4_4_;
    local_80 = (undefined4)uStack_50;
    uStack_7c = uStack_50._4_4_;
code_r0x001a44c9:
    *(undefined8 *)((long)puVar56 + -8) = 0x1a44ce;
    ppuVar32 = (undefined **)
               _ZN10num_bigint6bigint8addition78__LT_impl_u20_core__ops__arith__Add_u20_for_u20_num_bigint__bigint__BigInt_GT_3add17h1a73340263ff5867E
                         ();
    puVar58 = puVar56;
    goto LAB_001a45b4;
  case 0x11:
    pcVar72 = (code *)swi(3);
    ppuVar32 = (undefined **)(*pcVar72)();
    return ppuVar32;
  case 0x12:
switchD_001a40b6_caseD_12:
    ppuVar75 = ppuVar77;
    *UNRECOVERED_JUMPTABLE = (undefined *)0x1;
    goto LAB_001a4bbd;
  case 0x13:
switchD_001a40b6_caseD_13:
    *(char *)UNRECOVERED_JUMPTABLE =
         (char)*(code *)UNRECOVERED_JUMPTABLE + (char)UNRECOVERED_JUMPTABLE;
    *(code *)((long)UNRECOVERED_JUMPTABLE + -0x73) =
         (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE + -0x73) + (char)puVar40);
    pcVar36 = (char *)((long)puVar40 * 5 + -10);
    *pcVar36 = *pcVar36 + (char)puVar40;
    uRam000000000000881c = 0x1a471b;
    (*(code *)PTR__ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h12de1e9c78140f1fE_00251920)
              (local_a8);
    puVar59 = (undefined8 *)0x8824;
    ppuVar73 = (undefined **)(puVar78 + 2);
code_r0x001a471f:
    puVar60 = puVar59;
    if ((*(byte *)puVar78 & 1) == 0) {
                    /* try { // try from 001a48c3 to 001a48d0 has its CatchHandler @ 001a4ef9 */
      *(undefined8 *)((long)puVar59 + -8) = 0x1a48d1;
      (*(code *)PTR__ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h12de1e9c78140f1fE_00251920)
                ((undefined *)((long)puVar59 + 0xa0));
      lVar9 = *(long *)((long)puVar59 + 0xa8);
      lVar5 = *(long *)((long)puVar59 + 0xb0);
                    /* try { // try from 001a48e1 to 001a4919 has its CatchHandler @ 001a4f2e */
      *(undefined8 *)((long)puVar59 + -8) = 0x1a48f1;
      _ZN7uu_expr11syntax_tree24check_posix_regex_errors17h83c506dd31e4b1f6E
                ((undefined *)((long)puVar59 + 0x30),lVar9,lVar5);
      lVar6 = *(long *)((long)puVar59 + 0x30);
      if (lVar6 == 0xd) {
        *(undefined8 *)((long)puVar59 + -8) = 0x1a491a;
        auVar88 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h1bcad2531ed7b92aE
                            (lVar5 + 1,1,1,&PTR_DAT_0024a858);
        *(undefined (*) [16])((long)puVar59 + 0x10) = auVar88;
        *(undefined8 *)((long)puVar59 + 0x20) = 0;
                    /* try { // try from 001a492d to 001a4995 has its CatchHandler @ 001a4f2c */
        *(undefined8 *)((long)puVar59 + -8) = 0x1a493c;
        _ZN5alloc6string6String4push17h0ede46164189e411E((undefined *)((long)puVar59 + 0x10),0x5e);
        *(long *)((long)puVar59 + 0xd0) = lVar9;
        *(long *)((long)puVar59 + 0xd8) = lVar5 + lVar9;
        *(undefined8 *)((long)puVar59 + -8) = 0x1a495c;
        auVar88 = _ZN4core3str11validations15next_code_point17h84659763701eb288E
                            ((undefined *)((long)puVar59 + 0xd0));
        uVar33 = 0x110000;
        if ((auVar88 & (undefined  [16])0x1) != (undefined  [16])0x0) {
          uVar33 = auVar88._8_8_ & 0xffffffff;
        }
        iVar76 = (int)uVar33;
        if (iVar76 == 0x2a) {
                    /* try { // try from 001a4bd3 to 001a4bf9 has its CatchHandler @ 001a4f2c */
          *(undefined8 *)((long)puVar59 + -8) = 0x1a4beb;
          _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17he36b228b683b60fdE
                    ((undefined *)((long)puVar59 + 0x10),"\\*","\\^");
LAB_001a4bfa:
          *(undefined4 *)((long)puVar59 + 0x30) = *(undefined4 *)((long)puVar59 + 0xd0);
          *(undefined4 *)((long)puVar59 + 0x34) = *(undefined4 *)((long)puVar59 + 0xd4);
          *(undefined4 *)((long)puVar59 + 0x38) = *(undefined4 *)((long)puVar59 + 0xd8);
          *(undefined4 *)((long)puVar59 + 0x3c) = *(undefined4 *)((long)puVar59 + 0xdc);
          bVar26 = 0;
          do {
            *(undefined8 *)((long)puVar59 + -8) = 0x1a4c4f;
            auVar88 = _ZN4core3str11validations15next_code_point17h84659763701eb288E
                                ((undefined *)((long)puVar59 + 0x30));
            uVar71 = auVar88._8_8_ & 0xffffffff;
            if ((auVar88 & (undefined  [16])0x1) == (undefined  [16])0x0) {
              uVar71 = 0x110000;
            }
            if ((int)uVar71 == 0x5e) {
              if (!(bool)((int)uVar33 - 0x5dU < 0xfffffffe | bVar26)) goto LAB_001a4c81;
                    /* try { // try from 001a4c20 to 001a4c8b has its CatchHandler @ 001a4f46 */
              *(undefined8 *)((long)puVar59 + -8) = 0x1a4c36;
              _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17he36b228b683b60fdE
                        ((undefined *)((long)puVar59 + 0x10),"\\^","0");
            }
            else {
              if ((int)uVar71 == 0x110000) goto LAB_001a4c8e;
LAB_001a4c81:
              *(undefined8 *)((long)puVar59 + -8) = 0x1a4c8c;
              _ZN5alloc6string6String4push17h0ede46164189e411E
                        ((undefined *)((long)puVar59 + 0x10),uVar71);
            }
            bVar26 = (bVar26 ^ 1) & (int)uVar33 == 0x5c;
            uVar33 = uVar71;
          } while( true );
        }
        if (iVar76 == 0x5e) goto LAB_001a4bfa;
        if (iVar76 != 0x110000) {
          *(undefined8 *)((long)puVar59 + -8) = 0x1a4bfa;
          _ZN5alloc6string6String4push17h0ede46164189e411E
                    ((undefined *)((long)puVar59 + 0x10),uVar33);
          goto LAB_001a4bfa;
        }
        *(undefined8 *)((long)puVar59 + -8) = 0x1a4996;
        (*(code *)
          PTR__ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17h7f74ddc3053bca16E_00251a50
        )((undefined *)((long)puVar59 + 0x30),0);
        uVar3 = *(undefined4 *)((long)puVar59 + 0x30);
        uVar14 = *(undefined4 *)((long)puVar59 + 0x34);
        uVar15 = *(undefined4 *)((long)puVar59 + 0x38);
        uVar16 = *(undefined4 *)((long)puVar59 + 0x3c);
        uVar34 = *(undefined8 *)((long)puVar59 + 0x48);
        puVar51 = *(undefined8 **)((long)puVar59 + 8);
        puVar51[3] = *(undefined8 *)((long)puVar59 + 0x40);
        puVar51[4] = uVar34;
        *(undefined4 *)(puVar51 + 1) = uVar3;
        *(undefined4 *)((long)puVar51 + 0xc) = uVar14;
        *(undefined4 *)(puVar51 + 2) = uVar15;
        *(undefined4 *)((long)puVar51 + 0x14) = uVar16;
        *puVar51 = 0;
        goto LAB_001a4e59;
      }
      puVar51 = *(undefined8 **)((long)puVar59 + 8);
      puVar51[4] = *(undefined8 *)((long)puVar59 + 0x48);
      uVar3 = *(undefined4 *)((long)puVar59 + 0x3c);
      uVar14 = *(undefined4 *)((long)puVar59 + 0x40);
      uVar15 = *(undefined4 *)((long)puVar59 + 0x44);
      *(undefined4 *)(puVar51 + 2) = *(undefined4 *)((long)puVar59 + 0x38);
      *(undefined4 *)((long)puVar51 + 0x14) = uVar3;
      *(undefined4 *)(puVar51 + 3) = uVar14;
      *(undefined4 *)((long)puVar51 + 0x1c) = uVar15;
      puVar51[1] = lVar6;
      *puVar51 = 1;
      goto LAB_001a4e63;
    }
code_r0x001a4729:
    puVar82 = *ppuVar73;
    uVar83 = *(uint *)(ppuVar73 + 1);
    uVar84 = *(uint *)((long)ppuVar73 + 0xc);
    uVar27 = *(uint *)(ppuVar73 + 2);
    uVar85 = *(uint *)((long)ppuVar73 + 0x14);
    uVar86 = *(uint *)(ppuVar73 + 3);
    uVar87 = *(uint *)((long)ppuVar73 + 0x1c);
    UNRECOVERED_JUMPTABLE = *(undefined ***)((long)puVar60 + 8);
    puVar51 = puVar60;
switchD_001a448d_caseD_7:
    puVar59 = puVar51;
    *(uint *)(UNRECOVERED_JUMPTABLE + 3) = uVar27;
    *(uint *)((long)UNRECOVERED_JUMPTABLE + 0x1c) = uVar85;
    *(uint *)(UNRECOVERED_JUMPTABLE + 4) = uVar86;
    *(uint *)((long)UNRECOVERED_JUMPTABLE + 0x24) = uVar87;
    UNRECOVERED_JUMPTABLE[1] = puVar82;
    *(uint *)(UNRECOVERED_JUMPTABLE + 2) = uVar83;
    *(uint *)((long)UNRECOVERED_JUMPTABLE + 0x14) = uVar84;
    *UNRECOVERED_JUMPTABLE = (undefined *)0x1;
    goto LAB_001a4e70;
  case 0x14:
switchD_001a40b6_caseD_14:
    puVar59 = puVar23;
    pcVar36 = (char *)((long)puVar40 * 5 + -9);
    *pcVar36 = *pcVar36 + (char)puVar40;
    *(undefined8 *)((long)puVar59 + -8) = 0x1a475b;
    cVar45 = (*(code *)PTR__ZN7uu_expr11syntax_tree9is_truthy17hefcaac958900f87aE_00251928)
                       (ppuVar75);
    if (cVar45 == '\0') {
                    /* try { // try from 001a4849 to 001a4855 has its CatchHandler @ 001a4f11 */
      *(undefined8 *)((long)puVar59 + -8) = 0x1a4856;
      (*(code *)
        PTR__ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17h7f74ddc3053bca16E_00251a50
      )((undefined *)((long)puVar59 + 0x30),0);
      uVar3 = *(undefined4 *)((long)puVar59 + 0x30);
      uVar14 = *(undefined4 *)((long)puVar59 + 0x34);
      uVar15 = *(undefined4 *)((long)puVar59 + 0x38);
      uVar16 = *(undefined4 *)((long)puVar59 + 0x3c);
      uVar17 = *(undefined4 *)((long)puVar59 + 0x44);
      uVar18 = *(undefined4 *)((long)puVar59 + 0x48);
      uVar19 = *(undefined4 *)((long)puVar59 + 0x4c);
      puVar51 = *(undefined8 **)((long)puVar59 + 8);
      *(undefined4 *)(puVar51 + 3) = *(undefined4 *)((long)puVar59 + 0x40);
      *(undefined4 *)((long)puVar51 + 0x1c) = uVar17;
      *(undefined4 *)(puVar51 + 4) = uVar18;
      *(undefined4 *)((long)puVar51 + 0x24) = uVar19;
      *(undefined4 *)(puVar51 + 1) = uVar3;
      *(undefined4 *)((long)puVar51 + 0xc) = uVar14;
      *(undefined4 *)(puVar51 + 2) = uVar15;
      *(undefined4 *)((long)puVar51 + 0x14) = uVar16;
      *puVar51 = 0;
      *(undefined8 *)((long)puVar59 + -8) = 0x1a487c;
      _ZN4core3ptr51drop_in_place_LT_uu_expr__syntax_tree__NumOrStr_GT_17hed5f1ee52967d14eE
                (ppuVar77);
      goto LAB_001a47ef;
    }
    ppuVar75 = (undefined **)(puVar78 + 2);
    if ((*(byte *)puVar78 & 1) != 0) {
      puVar82 = *ppuVar75;
      uVar83 = puVar78[4];
      uVar84 = puVar78[5];
      uVar27 = puVar78[6];
      uVar85 = puVar78[7];
      uVar86 = puVar78[8];
      uVar87 = puVar78[9];
      UNRECOVERED_JUMPTABLE = *(undefined ***)((long)puVar59 + 8);
switchD_001a448d_caseD_8:
      *(uint *)(UNRECOVERED_JUMPTABLE + 3) = uVar27;
      *(uint *)((long)UNRECOVERED_JUMPTABLE + 0x1c) = uVar85;
      *(uint *)(UNRECOVERED_JUMPTABLE + 4) = uVar86;
      *(uint *)((long)UNRECOVERED_JUMPTABLE + 0x24) = uVar87;
      UNRECOVERED_JUMPTABLE[1] = puVar82;
      *(uint *)(UNRECOVERED_JUMPTABLE + 2) = uVar83;
      *(uint *)((long)UNRECOVERED_JUMPTABLE + 0x14) = uVar84;
      goto switchD_001a40b6_caseD_12;
    }
    *(undefined8 *)((long)puVar59 + -8) = 0x1a4a3b;
    cVar45 = (*(code *)PTR__ZN7uu_expr11syntax_tree9is_truthy17hefcaac958900f87aE_00251928)
                       (ppuVar75);
    if (cVar45 != '\0') {
      uVar27 = *(uint *)ppuVar77;
      uVar85 = *(uint *)((long)ppuVar77 + 4);
      uVar86 = *(uint *)(ppuVar77 + 1);
      uVar87 = *(uint *)((long)ppuVar77 + 0xc);
      puVar82 = ppuVar77[3];
      puVar51 = *(undefined8 **)((long)puVar59 + 8);
      puVar51[3] = ppuVar77[2];
      puVar51[4] = puVar82;
      *(uint *)(puVar51 + 1) = uVar27;
      *(uint *)((long)puVar51 + 0xc) = uVar85;
      *(uint *)(puVar51 + 2) = uVar86;
      *(uint *)((long)puVar51 + 0x14) = uVar87;
      *puVar51 = 0;
      goto LAB_001a4bbd;
    }
                    /* try { // try from 001a4b78 to 001a4b84 has its CatchHandler @ 001a4e91 */
    *(undefined8 *)((long)puVar59 + -8) = 0x1a4b85;
    (*(code *)
      PTR__ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17h7f74ddc3053bca16E_00251a50
    )((undefined *)((long)puVar59 + 0x30),0);
    ppuVar32 = ppuVar75;
    ppuVar75 = ppuVar77;
LAB_001a4b94:
    uVar3 = *(undefined4 *)((long)puVar59 + 0x30);
    uVar14 = *(undefined4 *)((long)puVar59 + 0x34);
    uVar15 = *(undefined4 *)((long)puVar59 + 0x38);
    uVar16 = *(undefined4 *)((long)puVar59 + 0x3c);
    uVar17 = *(undefined4 *)((long)puVar59 + 0x44);
    uVar18 = *(undefined4 *)((long)puVar59 + 0x48);
    uVar19 = *(undefined4 *)((long)puVar59 + 0x4c);
    puVar51 = *(undefined8 **)((long)puVar59 + 8);
    *(undefined4 *)(puVar51 + 3) = *(undefined4 *)((long)puVar59 + 0x40);
    *(undefined4 *)((long)puVar51 + 0x1c) = uVar17;
    *(undefined4 *)(puVar51 + 4) = uVar18;
    *(undefined4 *)((long)puVar51 + 0x24) = uVar19;
    *(undefined4 *)(puVar51 + 1) = uVar3;
    *(undefined4 *)((long)puVar51 + 0xc) = uVar14;
    *(undefined4 *)(puVar51 + 2) = uVar15;
    *(undefined4 *)((long)puVar51 + 0x14) = uVar16;
    *puVar51 = 0;
    *(undefined8 *)((long)puVar59 + -8) = 0x1a4bba;
    _ZN4core3ptr51drop_in_place_LT_uu_expr__syntax_tree__NumOrStr_GT_17hed5f1ee52967d14eE(ppuVar32);
LAB_001a4bbd:
    ppuVar32 = (undefined **)
               _ZN4core3ptr51drop_in_place_LT_uu_expr__syntax_tree__NumOrStr_GT_17hed5f1ee52967d14eE
                         (ppuVar75);
    return ppuVar32;
  case 0x15:
    *(uint *)extraout_RDX = *(uint *)extraout_RDX;
    goto LAB_001a5783;
  case 0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x17:
    uVar27 = *(uint *)(uVar71 + 0x20);
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00251a58
    )(&local_a8,unaff_R13 + 8);
    ppuVar32 = (undefined **)(ulong)uVar27;
code_r0x001a5cd0:
    *(ulong *)(param_3 + 8) = local_98;
    param_3[4] = (int)local_a8;
    param_3[5] = local_a8._4_4_;
    param_3[6] = (int)uStack_a0;
    param_3[7] = uStack_a0._4_4_;
    local_48 = (undefined ***)0x0;
    ppuStack_40 = ppuVar30;
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd3e63ca5919932edE
              (&local_a8,&puStack_60,ppuVar32,&local_48);
    goto LAB_001a5cfd;
  case 0x18:
    *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar25;
    (&UNK_0011c961)[uVar33] = (&UNK_0011c961)[uVar33] + -0x28;
    param_3[4] = iStack0000000000000038;
    param_3[5] = iStack000000000000003c;
    param_3[6] = iStack0000000000000040;
    param_3[7] = iStack0000000000000044;
    UNRECOVERED_JUMPTABLE = (undefined **)(ulong)in_stack_000000a0;
    puVar65 = (uint *)&local_a8;
code_r0x001a5865:
    puVar78[7] = *(uint *)((long)puVar65 + 0x14b);
    *(int *)((long)puVar78 + 0x19) = (int)UNRECOVERED_JUMPTABLE;
    *(undefined8 *)((long)puVar65 + 0x60) = 0;
    *(undefined8 *)((long)puVar65 + -8) = 0x1a5891;
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd3e63ca5919932edE
              (puVar65,(undefined *)((long)puVar65 + 0x48),uVar71,
               (undefined *)((long)puVar65 + 0x60));
LAB_001a5cfd:
    *(undefined8 *)((long)puVar65 + -8) = 0x1a5d05;
    _ZN4core3ptr128drop_in_place_LT_core__option__Option_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT__GT_17h00a86d471ef57dacE
              (puVar65);
    puVar62 = (undefined8 *)puVar65;
    goto LAB_001a5783;
  case 0x19:
    puVar64 = (undefined8 *)&stack0xffffffffffffff50;
    *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar25;
    (&UNK_0011c99f)[uVar33] = (&UNK_0011c99f)[uVar33] + -0x28;
    piVar35 = (int *)((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff78);
    *piVar35 = *piVar35 + (int)piVar35;
    *(char *)piVar35 = *(char *)piVar35 + (char)piVar35;
    uStack_30 = 0;
    uStack_50 = (uint *)0x0;
switchD_001a448d_caseD_d:
    *(undefined8 *)((long)puVar64 + -8) = 0x1a5bb5;
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd3e63ca5919932edE();
    *(undefined8 *)((long)puVar64 + -8) = 0x1a5bbd;
    _ZN4core3ptr128drop_in_place_LT_core__option__Option_LT_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT__GT_17h00a86d471ef57dacE
              (puVar64);
    *(undefined8 *)((long)puVar64 + -8) = 0x1a5bca;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E
              ((undefined *)((long)puVar64 + 0xe0));
    puVar62 = puVar64;
LAB_001a5783:
    uVar33 = *(ulong *)((long)puVar62 + 0x40);
    puVar63 = puVar62;
    if (uVar33 == 0) {
      uVar3 = *(undefined4 *)(*(long *)((long)puVar62 + 0x140) + 0x20);
      *(undefined8 *)((long)puVar62 + -8) = 0x1a5edf;
      _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6remove17h99c8b623889323eaE
                ((undefined *)((long)puVar62 + 0x60),(undefined *)((long)puVar62 + 0x48),uVar3);
      if (*(int *)((long)puVar62 + 0x60) != 2) {
        puVar7 = *(undefined4 **)((long)puVar62 + 0x28);
        *(undefined8 *)(puVar7 + 8) = *(undefined8 *)((long)puVar62 + 0x80);
        uVar3 = *(undefined4 *)((long)puVar62 + 0x60);
        uVar14 = *(undefined4 *)((long)puVar62 + 100);
        uVar15 = *(undefined4 *)((long)puVar62 + 0x68);
        uVar16 = *(undefined4 *)((long)puVar62 + 0x6c);
        uVar17 = *(undefined4 *)((long)puVar62 + 0x74);
        uVar18 = *(undefined4 *)((long)puVar62 + 0x78);
        uVar19 = *(undefined4 *)((long)puVar62 + 0x7c);
        puVar7[4] = *(undefined4 *)((long)puVar62 + 0x70);
        puVar7[5] = uVar17;
        puVar7[6] = uVar18;
        puVar7[7] = uVar19;
        *puVar7 = uVar3;
        puVar7[1] = uVar14;
        puVar7[2] = uVar15;
        puVar7[3] = uVar16;
        *(undefined8 *)((long)puVar62 + -8) = 0x1a5f16;
        _ZN4core3ptr154drop_in_place_LT_alloc__collections__btree__map__BTreeMap_LT_u32_C_core__result__Result_LT_uu_expr__syntax_tree__NumOrStr_C_uu_expr__ExprError_GT__GT__GT_17h5aab3143cda1a591E
                  ((undefined *)((long)puVar62 + 0x48));
        *(undefined8 *)((long)puVar62 + -8) = 0x1a6056;
        _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_u64_GT__GT_17h8b6941f1ad84c071E
                  (*(undefined8 *)((long)puVar62 + 0x30),*(undefined8 *)((long)puVar62 + 0x38));
        return *(undefined ***)((long)puVar62 + 0x28);
      }
      *(undefined8 *)((long)puVar62 + -8) = 0x1a607a;
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00251a10)
                (&PTR_s_src_uu_expr_src_syntax_tree_rs_0024a978);
                    /* WARNING: Does not return */
      pcVar72 = (code *)invalidInstructionException();
      (*pcVar72)();
    }
code_r0x001a5791:
    *(ulong *)((long)puVar63 + 0x40) = uVar33 - 1;
    uVar33 = **(ulong **)(*(long *)((long)puVar63 + 0x38) + -8 + uVar33 * 8);
    ppuVar73 = (undefined **)0x0;
    if ((code *)((long)ppuVar30 + (uVar33 - 1)) < &DAT_00000004) {
      ppuVar73 = (undefined **)(uVar33 ^ (ulong)ppuVar30);
    }
code_r0x001a57c4:
                    /* WARNING: Could not recover jumptable at 0x001a57d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ppuVar32 = (undefined **)
               (*(code *)((long)&switchD_001a5771::switchdataD_0011ca2c +
                         (long)(int)(&switchD_001a5771::switchdataD_0011ca2c)[(long)ppuVar73]))();
    return ppuVar32;
  case 0x1a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1b:
switchD_001a40b6_caseD_1b:
    ppuVar32 = (undefined **)
               (*(code *)
                 PTR__ZN57__LT_core__fmt__Formatter_u20_as_u20_core__fmt__Write_GT_9write_str17h7dbec3f69c4ad810E_00251878
               )(local_a8);
    return ppuVar32;
  case 0x1c:
switchD_001a4082_caseD_20:
    puVar66 = &uStack_a0;
    goto code_r0x001a6592;
  case 0x1d:
    goto switchD_001a40b6_caseD_1d;
  case 0x1e:
    pcVar72 = (code *)swi(3);
    ppuVar32 = (undefined **)(*pcVar72)();
    return ppuVar32;
  case 0x1f:
    ppuVar32 = local_a8;
switchD_001a4082_caseD_15:
    puVar69 = (undefined8 *)&stack0xffffffffffffff50;
    puStack_60 = ppuVar32[2];
    local_58 = ppuVar32[3];
    local_68 = (undefined **)0x0;
    uStack_50 = (uint *)CONCAT71(uStack_50._1_7_,1);
    local_78 = &local_68;
    UNRECOVERED_JUMPTABLE =
         (undefined **)
         PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00251ab0
    ;
switchD_001a4082_caseD_19:
    *(undefined ***)((long)puVar69 + 0x40) = UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE = &PTR_s_syntax_error__expecting_____inst_0024a9f0;
    puVar55 = puVar69;
    goto switchD_001a40b6_caseD_22;
  case 0x20:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x21:
switchD_001a40b6_caseD_21:
    UNRECOVERED_JUMPTABLE =
         (undefined **)
         ((long)(*plVar68 << 0x20 | (ulong)UNRECOVERED_JUMPTABLE & 0xffffffff) / (long)(int)local_a8
         & 0xffffffff);
code_r0x001a65cc:
    ppuVar32 = (undefined **)
               (*(code *)
                 PTR__ZN57__LT_core__fmt__Formatter_u20_as_u20_core__fmt__Write_GT_9write_str17h7dbec3f69c4ad810E_00251878
               )(ppuVar73,UNRECOVERED_JUMPTABLE,0x10);
    return ppuVar32;
  case 0x22:
    goto switchD_001a40b6_caseD_22;
  case 0x23:
    *(byte *)UNRECOVERED_JUMPTABLE = (char)*(code *)UNRECOVERED_JUMPTABLE + bVar25;
    (&UNK_0011c961)[uVar33] = (&UNK_0011c961)[uVar33] + -0x28;
    goto switchD_001a448d_caseD_12;
  case 0x24:
    local_58 = (char *)(ulong)*(uint *)(local_a8 + 2);
    uStack_50 = (uint *)local_a8[3];
    puStack_60 = (undefined *)0x0;
code_r0x001a66e9:
    local_48 = (undefined ***)CONCAT71(local_48._1_7_,1);
    ppuStack_70 = &puStack_60;
    ppuVar37 = (undefined **)
               PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00251ab0
    ;
switchD_001a448d_caseD_18:
    UNRECOVERED_JUMPTABLE = &PTR_s_syntax_error__expecting_____afte_0024a9e0;
    puVar55 = &local_a8;
    local_68 = ppuVar37;
    goto switchD_001a40b6_caseD_22;
  case 0x25:
    goto code_r0x001a6553;
  case 0x26:
    pbVar29 = param_5 + -0x75;
    bVar26 = *pbVar29;
    bVar44 = (byte)param_6;
    bVar25 = *pbVar29;
    *pbVar29 = bVar25 + bVar44 + bVar79;
    param_5[-0x39] =
         (param_5[-0x39] - bVar44) - (CARRY1(bVar26,bVar44) || CARRY1(bVar25 + bVar44,bVar79));
switchD_001a448d_caseD_19:
    local_58 = (char *)((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff48);
    *local_58 = *local_58 + (char)local_58;
    *local_58 = *local_58 + (char)local_58;
switchD_001a448d_caseD_12:
    uStack_50 = puVar40;
code_r0x001a6592:
    *(undefined *)((long)puVar66 + 0x60) = 1;
    *(undefined **)((long)puVar66 + 0x38) = (undefined *)((long)puVar66 + 0x48);
    puVar59 = puVar66;
code_r0x001a65a1:
    *(undefined **)((long)puVar59 + 0x40) =
         PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00251ab0
    ;
    puVar67 = puVar59;
switchD_001a40b6_caseD_1d:
    UNRECOVERED_JUMPTABLE = &PTR_s_syntax_error__unexpected_argumen_0024a9c0;
    puVar55 = puVar67;
switchD_001a40b6_caseD_22:
    puVar59 = puVar55;
    *(undefined ***)((long)puVar59 + 8) = UNRECOVERED_JUMPTABLE;
    *(undefined8 *)((long)puVar59 + 0x10) = 1;
    *(undefined8 *)((long)puVar59 + 0x28) = 0;
    *(undefined **)((long)puVar59 + 0x18) = (undefined *)((long)puVar59 + 0x38);
    *(undefined8 *)((long)puVar59 + 0x20) = 1;
LAB_001a675d:
    puVar82 = *ppuVar73;
    puVar8 = ppuVar73[1];
    *(undefined8 *)((long)puVar59 + -8) = 0x1a676e;
    ppuVar32 = (undefined **)
               _ZN4core3fmt9Formatter9write_fmt17h80c932efe9b76eb7E
                         (puVar82,puVar8,(undefined *)((long)puVar59 + 8));
    return ppuVar32;
  case 0x27:
    puVar40 = (uint *)((long)&UINT_0011c9d4 + 3);
    ppuVar30 = extraout_RDX;
    if (UNRECOVERED_JUMPTABLE == (undefined **)0x0) {
      bRam0000000000000000 = bRam0000000000000000 | bVar25;
      if ((POPCOUNT(bRam0000000000000000) & 1U) == 0) {
        bRam0000000000000000 = bRam0000000000000000 | bVar25;
        cVar2 = *(code *)(local_a8 + 1);
        *(char *)(uVar71 + 0x77) = *(char *)(uVar71 + 0x77) + bVar25;
        bRam0000000000000000 = bRam0000000000000000 | bVar25;
        uVar33 = CONCAT62((int6)((ulong)extraout_RDX >> 0x10),
                          CONCAT11((char)((ulong)extraout_RDX >> 8) + (char)cVar2,(char)extraout_RDX
                                  )) << 0x20;
        puVar51 = (undefined8 *)(uVar33 / *(uint *)(ppuVar73 + 1));
        ppuVar43 = (undefined **)(uVar33 % (ulong)*(uint *)(ppuVar73 + 1));
        pbVar29 = (byte *)(param_1 + -0x6bfff789);
        bVar79 = CARRY1(*pbVar29,(byte)ppuVar43);
        *pbVar29 = *pbVar29 + (byte)ppuVar43;
        bVar80 = *pbVar29 == 0;
        goto code_r0x0011c9f1;
      }
      puVar50 = (ulong *)&stack0xffffffffffffff50;
    }
code_r0x0011ca50:
    *(byte *)UNRECOVERED_JUMPTABLE =
         (byte)*(code *)UNRECOVERED_JUMPTABLE | (byte)UNRECOVERED_JUMPTABLE;
    bVar44 = (byte)((ulong)ppuVar30 >> 8);
    *param_1 = *param_1 + bVar44;
    bVar81 = (*puVar50 & 0x400) != 0;
    *(byte *)UNRECOVERED_JUMPTABLE =
         (byte)*(code *)UNRECOVERED_JUMPTABLE | (byte)UNRECOVERED_JUMPTABLE;
    pcVar72 = (code *)((long)ppuVar73 + (ulong)bVar81 * -8 + 4);
    uVar27 = *(uint *)ppuVar73;
    pbVar31 = (byte *)CONCAT44((int)((ulong)UNRECOVERED_JUMPTABLE >> 0x20),uVar27);
    bVar26 = (byte)uVar27;
    *pbVar31 = *pbVar31 | bVar26;
    *(int *)(pbVar31 + 0x89b7900 + (long)puVar40) = -*(int *)(pbVar31 + 0x89b7900 + (long)puVar40);
    bVar25 = (byte)(uVar27 >> 8);
    *(char *)((long)puVar40 + 0x89b) = *(char *)((long)puVar40 + 0x89b) + bVar25;
    *pbVar31 = *pbVar31 + bVar26;
    pbVar29 = pbVar31 + 0x72;
    *pbVar29 = *pbVar29 + (char)ppuVar30;
    bVar80 = *pbVar29 == 0;
    bVar79 = (long)(int)((long)*(int *)(pcVar72 + 0x74) * 0x6c656820) !=
             (long)*(int *)(pcVar72 + 0x74) * 0x6c656820;
    uVar42 = SUB82(ppuVar30,0);
    if (bVar79) {
      out(*(undefined4 *)pcVar72,uVar42);
      if (!bVar79) goto code_r0x0011cb1a;
      if ((bVar79) || (!bVar79 && !bVar80)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (!bVar79 && !bVar80) {
        pcVar74 = (code *)((long)local_a8 + (ulong)bVar81 * -8 + 4);
        uVar27 = in(uVar42);
        *(uint *)local_a8 = uVar27;
        out(*(undefined4 *)(pcVar72 + (ulong)bVar81 * -8 + 4),uVar42);
        if (bVar79) {
          *pbVar31 = *pbVar31 + bVar26;
          *pbVar31 = *pbVar31 + bVar26;
          *(byte *)puVar40 = *(char *)puVar40 + bVar26;
          *pbVar31 = *pbVar31 + bVar26;
          *pbVar31 = *pbVar31 + bVar26;
        }
        else if (bVar80) {
          pcVar74[0x66] = (code)((byte)pcVar74[0x66] & (byte)((ulong)puVar40 >> 8));
          pcVar1 = (code *)((long)ppuVar30 + 0x6f);
          *pcVar1 = (code)((byte)*pcVar1 & bVar25);
          if (*pcVar1 == (code)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          goto code_r0x0011cb37;
        }
        *pbVar31 = *pbVar31 + bVar26;
code_r0x0011cb37:
        pbVar29 = (byte *)((long)puVar40 + 0x73);
        bVar79 = CARRY1(*pbVar29,bVar25);
        *pbVar29 = *pbVar29 + bVar25;
        if (!bVar79) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (!bVar79) {
          cVar2 = (code)in(uVar42);
          *pcVar74 = cVar2;
          *(byte **)((ulong)(uint)(*(int *)(pbVar31 +
                                           (long)(pcVar74 + (ulong)bVar81 * -2 + 1) * 2 + 0x20) *
                                  0x4143203c) - 8) = pbVar31;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (!bVar79) {
          out(*(undefined4 *)((int)(pcVar72 + (ulong)bVar81 * -8 + 4) + 4 + (uint)bVar81 * -8),
              uVar42);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (!bVar79) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        lVar9 = (long)*(int *)(in_GS_OFFSET + ((int)param_1 + 0x74)) * 0x732f7972;
        if ((int)lVar9 == lVar9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *puVar50 = 0x2f656d6f;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      out(*(undefined2 *)pcVar72,uVar42);
      if (!bVar79) {
        if (!bVar80) {
          param_1[in_GS_OFFSET + 0x75] = param_1[in_GS_OFFSET + 0x75] & bVar44;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar27 = uVar27 + 0x505;
        *(char *)(ulong)uVar27 = *(char *)(ulong)uVar27 + (char)uVar27;
        cVar2 = (code)in(uVar42);
        *(code *)local_a8 = cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (!bVar79) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar85 = in(uVar42);
      *(uint *)local_a8 = uVar85;
      uVar3 = in(uVar42);
      *(undefined4 *)((long)local_a8 + (ulong)bVar81 * -8 + 4) = uVar3;
    }
    if (bVar79) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar31 = *pbVar31 + bVar26;
code_r0x0011cb1a:
    *pbVar31 = *pbVar31 + bVar26;
    *pbVar31 = *pbVar31 + bVar26;
    *pbVar31 = *pbVar31 + bVar26;
    *pbVar31 = *pbVar31 | bVar26;
    *pbVar31 = *pbVar31 + bVar26;
    *pbVar31 = *pbVar31 + bVar26;
    *pbVar31 = *pbVar31 + bVar26;
    *pbVar31 = *pbVar31 + bVar26;
    *pbVar31 = *pbVar31 + bVar26;
    *pbVar31 = *pbVar31 + bVar26;
    *pbVar31 = *pbVar31 + bVar26;
    *(uint *)pbVar31 = *(int *)pbVar31 + uVar27;
    *pbVar31 = *pbVar31 + bVar26;
    *pbVar31 = *pbVar31 + bVar26;
    *pbVar31 = *pbVar31 + bVar26;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)((long)puVar52 + -8) = 0x1a425c;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E(puVar52);
  *(undefined8 *)((long)puVar52 + -8) = 0x1a4266;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E
            ((undefined *)((long)puVar52 + 0x20));
  bVar79 = false;
  puVar54 = puVar52;
joined_r0x001a426c:
  puVar53 = puVar54;
  if (bVar26 == 0) {
LAB_001a426e:
                    /* try { // try from 001a426e to 001a42a2 has its CatchHandler @ 001a4320 */
    *(undefined8 *)((long)puVar53 + -8) = 0x1a4279;
    ppuVar32 = (undefined **)
               (*(code *)
                 PTR__ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17h7f74ddc3053bca16E_00251a50
               )(puVar53,0);
    puVar55 = puVar53;
  }
  else {
LAB_001a4295:
    *(undefined8 *)((long)puVar54 + -8) = 0x1a42a3;
    ppuVar32 = (undefined **)
               (*(code *)
                 PTR__ZN83__LT_uu_expr__syntax_tree__NumOrStr_u20_as_u20_core__convert__From_LT_usize_GT__GT_4from17h7f74ddc3053bca16E_00251a50
               )(puVar54,1);
    puVar55 = puVar54;
  }
  uVar3 = *(undefined4 *)puVar55;
  uVar14 = *(undefined4 *)((long)puVar55 + 4);
  uVar15 = *(undefined4 *)((long)puVar55 + 8);
  uVar16 = *(undefined4 *)((long)puVar55 + 0xc);
  uVar17 = *(undefined4 *)((long)puVar55 + 0x14);
  uVar18 = *(undefined4 *)((long)puVar55 + 0x18);
  uVar19 = *(undefined4 *)((long)puVar55 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((long)puVar55 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = uVar17;
  *(undefined4 *)(param_1 + 0x20) = uVar18;
  *(undefined4 *)(param_1 + 0x24) = uVar19;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar14;
  *(undefined4 *)(param_1 + 0x10) = uVar15;
  *(undefined4 *)(param_1 + 0x14) = uVar16;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  if (bVar79) {
    *(undefined8 *)((long)puVar55 + -8) = 0x1a42ca;
    _ZN4core3ptr51drop_in_place_LT_uu_expr__syntax_tree__NumOrStr_GT_17hed5f1ee52967d14eE
              ((undefined4 *)((long)puVar55 + 0x60));
    puVar78 = (uint *)((long)puVar55 + 0x40);
LAB_001a42cf:
    *(undefined8 *)((long)puVar55 + -8) = 0x1a42d4;
    ppuVar32 = (undefined **)
               _ZN4core3ptr51drop_in_place_LT_uu_expr__syntax_tree__NumOrStr_GT_17hed5f1ee52967d14eE
                         (puVar78);
  }
  return ppuVar32;
code_r0x001a668e:
  *(undefined *)((long)puVar70 + 0x60) = 1;
  *(undefined **)((long)puVar70 + 0x38) = (undefined *)((long)puVar70 + 0x48);
  *(undefined **)((long)puVar70 + 0x40) =
       PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00251ab0
  ;
  UNRECOVERED_JUMPTABLE = &PTR_s_syntax_error__missing_argument_a_0024a9d0;
  puVar55 = puVar70;
  goto switchD_001a40b6_caseD_22;
switchD_001a4082_caseD_18:
                    /* WARNING: Could not recover jumptable at 0x001a6575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar32 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE)();
  return ppuVar32;
LAB_001a4c8e:
                    /* try { // try from 001a4c98 to 001a4cb1 has its CatchHandler @ 001a4f2c */
  *(undefined8 *)((long)puVar59 + -8) = 0x1a4cb2;
  (*(code *)PTR__ZN4onig5Regex12with_options17h89d1b975e89c8f9fE_00251a68)
            ((undefined *)((long)puVar59 + 0x118),*(undefined8 *)((long)puVar59 + 0x18),
             *(undefined8 *)((long)puVar59 + 0x20),8,PTR_OnigSyntaxGrep_00251a60);
  *(undefined8 *)((long)puVar59 + -8) = 0x1a4d65;
  _ZN4core3ptr32drop_in_place_LT_onig__Error_GT_17hf7fa5a0a586a9cf4E
            ((undefined *)((long)puVar59 + 0x118));
  puVar51 = *(undefined8 **)((long)puVar59 + 8);
  puVar51[1] = 5;
  *puVar51 = 1;
LAB_001a4e59:
  *(undefined8 *)((long)puVar59 + -8) = 0x1a4e63;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E
            ((undefined *)((long)puVar59 + 0x10));
LAB_001a4e63:
  *(undefined8 *)((long)puVar59 + -8) = 0x1a4e70;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E
            ((undefined *)((long)puVar59 + 0xa0));
LAB_001a4e70:
  puVar82 = (undefined *)((long)puVar59 + 0x88);
LAB_001a4e78:
  *(undefined8 *)((long)puVar59 + -8) = 0x1a4e7d;
  ppuVar32 = (undefined **)
             _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbc755e5bc570b277E(puVar82);
  return ppuVar32;
}