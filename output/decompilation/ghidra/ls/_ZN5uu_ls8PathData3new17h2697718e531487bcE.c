*/

qword * _ZN5uu_ls8PathData3new17h2697718e531487bcE
                  (qword *param_1,qword *param_2,code *param_3,undefined8 *param_4,
                  undefined4 param_5,uint param_6,byte param_7)

{
  int *piVar1;
  byte *pbVar2;
  code cVar3;
  undefined4 uVar4;
  code **ppcVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  qword *pqVar15;
  uint *puVar16;
  undefined4 extraout_EDX;
  code *UNRECOVERED_JUMPTABLE;
  qword **ppqVar17;
  qword **ppqVar18;
  qword **ppqVar19;
  byte bVar20;
  ulong uVar21;
  undefined *in_R10;
  undefined **in_R11;
  ulong unaff_R12;
  undefined4 uVar22;
  qword *unaff_R14;
  bool bVar23;
  qword *pqStack_170;
  qword *pqStack_168;
  qword *pqStack_160;
  undefined8 uStack_158;
  code *local_150;
  undefined **local_148;
  ulong local_140;
  ulong local_138;
  undefined **local_130;
  undefined8 uStack_128;
  code **local_120;
  ulong local_118;
  ulong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  code *local_f8;
  undefined **ppuStack_f0;
  ulong local_e8;
  code *pcStack_e0;
  code *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  uint local_b0;
  
  uVar9 = (uint)uStack_158;
  ppqVar17 = (qword **)&uStack_158;
  ppqVar19 = (qword **)&uStack_158;
  ppqVar18 = (qword **)&uStack_158;
  UNRECOVERED_JUMPTABLE = (code *)&uStack_158;
  local_120 = (code **)&uStack_158;
  uVar21 = (ulong)param_6;
  uStack_128 = CONCAT44(param_5,(undefined4)uStack_128);
  local_148 = (undefined **)*param_4;
  bVar20 = (byte)param_6;
  local_140 = param_4[1];
  local_138 = param_4[2];
  uStack_158 = (undefined *)(ulong)(uint)uStack_158;
  uVar12 = uVar21 & 0xff;
  uVar13 = (ulong)(int)(&switchD_002993da::switchdataD_001d10a0)[uVar12];
  puVar11 = (uint *)((long)&switchD_002993da::switchdataD_001d10a0 + uVar13);
  uVar22 = SUB84(unaff_R14,0);
  cVar6 = (char)puVar11;
  puVar16 = (uint *)local_148;
  local_150 = param_3;
  local_130 = local_148;
  ppcVar5 = (code **)param_4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar12) {
  case 0:
    cVar3 = *param_3;
    local_120 = (code **)param_4;
    bVar20 = 0;
    break;
  case 1:
    if (param_7 == 0) {
switchD_002992cb_caseD_2995de:
      cVar3 = *param_3;
      local_120 = (code **)param_4;
      bVar20 = false;
    }
    else {
      unaff_R14 = (qword *)param_2[1];
      unaff_R12 = param_2[2];
LAB_002993f2:
                    /* try { // try from 002993f2 to 0029948c has its CatchHandler @ 00299633 */
      uVar22 = (undefined4)CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
      pqStack_160 = (qword *)0x299405;
      local_120 = (code **)param_4;
      _ZN3std2fs8metadata17h0f528178d24a74c4E(&local_e8,unaff_R14,unaff_R12);
      if ((int)local_e8 == 2) goto code_r0x00299410;
                    /* try { // try from 002995fe to 00299607 has its CatchHandler @ 00299633 */
      pqStack_160 = (qword *)0x299608;
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h4d6173845b848954E
                (&local_e8);
      cVar3 = *local_150;
      bVar20 = (local_b0 & 0xf000) == 0x4000;
    }
    break;
  case 2:
switchD_002992cb_caseD_299456:
    cVar3 = *param_3;
    local_120 = (code **)param_4;
    bVar20 = param_7;
    break;
  case 3:
switchD_002992cb_caseD_299434:
    cVar3 = *param_3;
    local_120 = (code **)param_4;
    bVar20 = 1;
    break;
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    puVar16 = &switchD_002992cb::switchdataD_001d10b0;
    lVar10 = (long)(int)(&switchD_002992cb::switchdataD_001d10b0)[(long)puVar11];
    puVar11 = (uint *)((long)&switchD_002992cb::switchdataD_001d10b0 + lVar10);
    bVar23 = (qword *)puVar11 == (qword *)0x0;
    uVar7 = (uint)puVar11;
    ppcVar5 = (code **)param_4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar12) {
    case 0:
      goto switchD_002992cb_caseD_2995de;
    case 1:
      uStack_158 = (undefined *)CONCAT44(param_6,uVar9);
      goto LAB_002993f2;
    case 2:
      goto switchD_002992cb_caseD_299456;
    case 3:
      goto switchD_002992cb_caseD_299434;
    case 4:
      *(char *)(uVar21 + 0x17) = *(char *)(uVar21 + 0x17) + (char)((ulong)local_148 >> 8);
      local_120 = (code **)param_4;
      goto LAB_0029a8f0;
    case 5:
      goto switchD_002992cb_caseD_29a85b;
    case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 9:
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      local_120 = (code **)param_4;
      pqVar15 = (qword *)(*UNRECOVERED_JUMPTABLE)();
      return pqVar15;
    case 10:
      goto code_r0x0029a90f;
    case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc:
      uVar9 = (uint)param_2 ^ *(uint *)((long)param_1 + (long)param_2);
      pcVar14 = (char *)((ulong)uVar9 + 0x4c10245c);
      *pcVar14 = *pcVar14 + -0x50;
      if (uVar9 != 1000000000) {
        return unaff_R14;
      }
      goto LAB_0029e2c6;
    case 0xd:
      piVar1 = (int *)((long)&UINT_001d1110 + lVar10 + 3);
      *piVar1 = *piVar1 + -1;
      puVar11 = (uint *)local_148;
      goto code_r0x0029e259;
    case 0xe:
      goto switchD_002992cb_caseD_29e27b;
    case 0xf:
      goto switchD_002992cb_caseD_29e4d4;
    default:
      puVar11 = (uint *)(ulong)(uVar7 | 0xfff32be5);
      local_120 = (code **)param_4;
      break;
    case 0x12:
      puVar11 = (uint *)(ulong)(uVar7 + 0x1d10b0);
      local_120 = (code **)param_4;
      break;
    case 0x16:
      *(int *)(lVar10 + 0x2e10b0) = *(int *)(lVar10 + 0x2e10b0) >> 8;
      bVar23 = false;
      local_120 = (code **)param_4;
      goto code_r0x0029e4ea;
    case 0x18:
      goto switchD_002992cb_caseD_29e519;
    case 0x1a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1b:
      pqStack_160 = (qword *)&UNK_0029fad4;
      local_120 = (code **)param_4;
      pqVar15 = (qword *)_Unwind_Resume(param_3);
      return pqVar15;
    case 0x1c:
      pcVar14 = (char *)((ulong)puVar11 & 0xffffffffffffff30);
      cVar6 = (char)pcVar14 + *pcVar14;
      pcVar14 = (char *)CONCAT71((int7)((ulong)pcVar14 >> 8),cVar6);
      *pcVar14 = *pcVar14 + cVar6;
      local_120 = (code **)param_4;
      goto code_r0x0029fc08;
    case 0x1d:
      bVar23 = uVar7 < 6;
      goto code_r0x0029fb1f;
    case 0x1e:
      UNRECOVERED_JUMPTABLE = param_3;
      local_120 = (code **)param_4;
      goto code_r0x0029fbfd;
    case 0x1f:
      puVar11 = (uint *)((long)&UINT_001d103c + lVar10 + 1);
      *puVar11 = *puVar11 >> 0x15 | *puVar11 << 0xb;
      *(undefined *)((long)local_148 + 0xe) = 0;
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      local_120 = (code **)param_4;
      pqVar15 = (qword *)(*UNRECOVERED_JUMPTABLE)();
      return pqVar15;
    case 0x20:
      goto code_r0x0029fc85;
    case 0x21:
      goto code_r0x0029fd02;
    case 0x22:
      return (qword *)puVar11;
    case 0x23:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x24:
      piVar1 = (int *)((long)&UINT_001d1038 + lVar10 + 1);
      *piVar1 = *piVar1 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x25:
      UNRECOVERED_JUMPTABLE = (code *)(ulong)((int)local_148 + 0x1d10b0);
      goto switchD_002a015f_switchD;
    case 0x26:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x27:
      ppqVar19 = (qword **)(ulong)((int)&uStack_158 - 8);
      goto code_r0x002a01ae;
    case 0x28:
      goto switchD_002992cb_caseD_2a01cf;
    }
    goto code_r0x0029e507;
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 7:
    local_120 = (code **)param_4;
code_r0x00299410:
    pqStack_160 = (qword *)0x29941a;
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h4d6173845b848954E
              (&local_e8);
    cVar3 = *local_150;
    bVar20 = false;
    break;
  case 8:
    return (qword *)puVar11;
  case 9:
    puVar11 = (uint *)(ulong)*(byte *)((long)local_148 + 0x101);
switchD_002992cb_caseD_29a85b:
    puVar16 = &UINT_001d10c0;
switchD_002993da_caseD_c:
    local_120 = (code **)param_4;
                    /* WARNING: Could not recover jumptable at 0x0029a869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pqVar15 = (qword *)(*(code *)((long)(int)*(uint *)((long)puVar16 + (long)puVar11 * 4) +
                                 (long)puVar16))();
    return pqVar15;
  case 10:
    out((short)local_148,(int)puVar11);
    *(byte *)puVar11 = *(byte *)puVar11 + cVar6;
    *(byte *)puVar11 = *(byte *)puVar11 + cVar6;
    local_120 = (code **)param_4;
    if (*(byte *)puVar11 == 0) goto LAB_0029a8f0;
    goto LAB_0029a8e5;
  case 0xb:
    *(byte *)puVar11 = *(byte *)puVar11 + cVar6;
    cVar3 = *(code *)puVar11;
    local_120 = (code **)param_4;
    goto joined_r0x0029a8cc;
  case 0xc:
    goto switchD_002993da_caseD_c;
  case 0xd:
    pqStack_160 = (qword *)&UNK_0029a8c4;
    local_120 = (code **)param_4;
    puVar11 = (uint *)_ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_11sort_by_key17hd70bd53f24d480d9E
                                ();
    cVar3 = param_3[0xef];
joined_r0x0029a8cc:
    if (cVar3 != (code)0x0) {
LAB_0029a8e5:
      pqStack_160 = (qword *)0x29a8f0;
      puVar11 = (uint *)_ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_7reverse17h6c90dc87f6bbfabfE
                                  (unaff_R14,param_2);
    }
LAB_0029a8f0:
    if ((bVar20 == 0) || (ppcVar5 = local_120, param_3[0xf5] == (code)0x0)) {
      return (qword *)puVar11;
    }
switchD_002993da_caseD_e:
    local_120 = ppcVar5;
    ppcVar5 = local_120;
code_r0x0029a90f:
    local_120 = ppcVar5;
    pqVar15 = (qword *)_ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_11sort_by_key17hfc6dfacf67a71fc2E
                                 ();
    return pqVar15;
  case 0xe:
    goto switchD_002993da_caseD_e;
  case 0xf:
    pqStack_160 = (qword *)0x29e227;
    local_120 = (code **)param_4;
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h6fdf0f570893b293E();
    pqStack_160 = (qword *)0x29e22f;
    pqVar15 = (qword *)_Unwind_Resume(param_2);
    return pqVar15;
  case 0x10:
    local_120 = (code **)param_4;
    pqVar15 = (qword *)(*(code *)
                         PTR__ZN91__LT_std__time__SystemTime_u20_as_u20_core__ops__arith__Add_LT_core__time__Duration_GT__GT_3add17ha7d73b33c4ccffebE_0048fee0
                       )();
    return pqVar15;
  case 0x11:
    puVar11 = &UINT_001d10dc;
    puVar16 = (uint *)(long)(int)(&UINT_001d10dc)[(ulong)param_2 & 0xff];
code_r0x0029e259:
    local_120 = (code **)param_4;
                    /* WARNING: Could not recover jumptable at 0x0029e25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pqVar15 = (qword *)(*(code *)((long)puVar16 + (long)puVar11))();
    return pqVar15;
  case 0x12:
    *(char *)((long)param_2 + 0x4c10245c) = *(char *)((long)param_2 + 0x4c10245c) + -0x60;
    bVar23 = (uint)param_2 == 1000000000;
switchD_002992cb_caseD_29e27b:
    if (!bVar23) {
      return unaff_R14;
    }
LAB_0029e2c6:
    pqStack_160 = (qword *)0x29e2d0;
    local_120 = (code **)param_4;
    _ZN4core3ptr94drop_in_place_LT_core__result__Result_LT_std__time__SystemTime_C_std__io__error__Error_GT__GT_17hcabb8f1ce6cde3d2E
              (&local_150);
    return unaff_R14;
  case 0x13:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    puVar16 = &switchD_002993da::switchdataD_001d10a0;
    *(byte *)puVar11 = *(byte *)puVar11 + cVar6;
    local_120 = (code **)param_4;
    goto code_r0x0029e4ec;
  case 0x16:
    local_120 = (code **)param_4;
    goto code_r0x0029e500;
  case 0x1a:
    ppqVar17 = &pqStack_170;
    pqStack_170 = (qword *)puVar11;
    pqStack_168 = param_2;
    pqStack_160 = param_2;
switchD_002992cb_caseD_29e4d4:
    *(undefined8 *)((long)ppqVar17 + -8) = 0x29e4df;
    local_120 = (code **)param_4;
    puVar16 = (uint *)_ZN5uu_ls8PathData9file_type17h413d2014e9fb015bE();
    puVar11 = (uint *)&__DT_RELA[0x9ec].r_addend;
    bVar23 = puVar16 == (uint *)0x0;
code_r0x0029e4ea:
    if (bVar23) {
switchD_002992cb_caseD_29e519:
      return (qword *)puVar11;
    }
code_r0x0029e4ec:
    uVar9 = (*puVar16 & 0xf000) - 0x1000 >> 0xc;
    puVar11 = (uint *)(ulong)uVar9;
    if (0xb < uVar9) {
      return &__DT_RELA[0x9ec].r_addend;
    }
code_r0x0029e500:
    puVar16 = &switchD_0029e50e::switchdataD_001d10ec;
code_r0x0029e507:
                    /* WARNING: Could not recover jumptable at 0x0029e50e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pqVar15 = (qword *)(*(code *)((long)(int)puVar16[(long)puVar11] + (long)puVar16))();
    return pqVar15;
  case 0x1c:
    puVar16 = &switchD_002993da::switchdataD_001d10a0;
    puVar11 = (uint *)CONCAT71((int7)((ulong)puVar11 >> 8),cVar6 + -0x7f);
    local_120 = (code **)param_4;
    goto code_r0x0029e507;
  case 0x1e:
    return (qword *)puVar11;
  case 0x1f:
    return (qword *)puVar11;
  case 0x20:
    *(byte *)puVar11 = *(byte *)puVar11 + cVar6;
    local_120 = (code **)param_4;
code_r0x0029fc08:
    pqStack_160 = (qword *)0x29fc0e;
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0048fdf0)();
    local_d8 = 
    _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h836131a62ea12574E;
    local_130 = &PTR_s_cannot_open_directory_____Permis_00386e98;
    uStack_128 = 2;
    uStack_110 = 0;
    local_120 = &pcStack_e0;
    local_118 = 1;
    pqStack_160 = (qword *)0x29fc62;
    pcStack_e0 = param_3;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h69a0b1154707aabfE(&uStack_100,&local_130);
    goto LAB_002a0065;
  case 0x21:
    *(byte *)puVar11 = *(byte *)puVar11 + cVar6;
    puVar11 = (uint *)(*param_1 ^ 0x8000000000000000);
    bVar23 = puVar11 < (qword *)0x6;
code_r0x0029fb1f:
    pqVar15 = (qword *)0x6;
    if (bVar23) {
      pqVar15 = (qword *)puVar11;
    }
    local_120 = (code **)param_4;
                    /* WARNING: Could not recover jumptable at 0x0029fb36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pqVar15 = (qword *)(*(code *)((long)&switchD_0029fb36::switchdataD_001d111c +
                                 (long)(int)(&switchD_0029fb36::switchdataD_001d111c)[(long)pqVar15]
                                 ))();
    return pqVar15;
  case 0x22:
    pqStack_160 = (qword *)0x29fbf4;
    local_120 = (code **)param_4;
    puVar11 = (uint *)(*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_0048ff40)();
code_r0x0029fbfd:
    param_3 = UNRECOVERED_JUMPTABLE;
    if ((char)puVar11 != '\0') goto code_r0x0029fc08;
    pqStack_160 = (qword *)0x2a0011;
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0048fdf0)();
    local_d8 = 
    _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h836131a62ea12574E;
    local_130 = &PTR_s_cannot_open_file_____Bad_file_de_00386eb8;
    uStack_128 = 2;
    uStack_110 = 0;
    local_120 = &pcStack_e0;
    local_118 = 1;
    pqStack_160 = (qword *)0x2a0065;
    pcStack_e0 = UNRECOVERED_JUMPTABLE;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h69a0b1154707aabfE(&uStack_100,&local_130);
LAB_002a0065:
    pqStack_160 = (qword *)0x2a006d;
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h5012a4810cee898dE
              (&uStack_158);
    uStack_158 = (undefined *)uStack_100;
    local_150 = local_f8;
    local_148 = ppuStack_f0;
    local_f8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_130 = (undefined **)&DAT_001cf290;
    uStack_128 = 1;
    uStack_110 = 0;
    local_118 = 1;
    ppcVar5 = (code **)&uStack_100;
    uStack_100 = &uStack_158;
switchD_002993da_caseD_26:
    local_120 = ppcVar5;
    pqStack_160 = (qword *)0x2a00d8;
    uVar9 = _ZN4core3fmt9Formatter9write_fmt17h80c932efe9b76eb7E();
    pqStack_160 = (qword *)0x2a00e2;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&uStack_158);
    return (qword *)(ulong)uVar9;
  case 0x23:
    if (*param_1 == 0x8000000000000001) {
      puVar11 = &switchD_002993da::switchdataD_001d10a0;
    }
    return (qword *)puVar11;
  case 0x24:
    uStack_158 = (undefined *)((ulong)puVar11 & 0xffffffffffffff58);
    local_150 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4be107e08d241612E;
code_r0x0029fc85:
    local_130 = &PTR_s_invalid___block_size_argument____00386f28;
    uStack_128 = 2;
    uStack_110 = 0;
    local_118 = 1;
    pqStack_160 = (qword *)0x29fe00;
    pqVar15 = (qword *)_ZN4core3fmt9Formatter9write_fmt17h80c932efe9b76eb7E
                                 (*param_2,param_2[1],&local_130);
    return pqVar15;
  case 0x25:
    bVar23 = CARRY1(bRamffffffffffffff8b,bVar20);
    bVar20 = bRamffffffffffffff8b + bVar20;
    bRamffffffffffffff8b = bVar20 + (0xffffffffffe2ef5f < uVar13);
    ppqVar18 = &pqStack_160;
    pcVar14 = (char *)((long)&UINT_001d1028 + uVar13 + 1);
    *pcVar14 = (*pcVar14 + '`') - (bVar23 || CARRY1(bVar20,0xffffffffffe2ef5f < uVar13));
    unaff_R14 = param_2;
    pqStack_160 = param_1;
code_r0x0029fd02:
    *(undefined8 *)((long)ppqVar18 + -8) = 0x29fd08;
    local_120 = (code **)param_4;
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0048fdf0)();
    *(qword **)((long)ppqVar18 + 0x58) = param_2;
    *(code **)((long)ppqVar18 + 0x60) =
         _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h836131a62ea12574E
    ;
    *(undefined **)((long)ppqVar18 + 0x28) = &DAT_00386f48;
    *(undefined8 *)((long)ppqVar18 + 0x30) = 2;
    *(undefined8 *)((long)ppqVar18 + 0x48) = 0;
    *(undefined **)((long)ppqVar18 + 0x38) = (undefined *)((long)ppqVar18 + 0x58);
    *(undefined8 *)((long)ppqVar18 + 0x40) = 1;
    uVar12 = *unaff_R14;
    uVar13 = unaff_R14[1];
    *(undefined8 *)((long)ppqVar18 + -8) = 0x29fd5b;
    uVar9 = _ZN4core3fmt9Formatter9write_fmt17h80c932efe9b76eb7E
                      (uVar12,uVar13,(undefined *)((long)ppqVar18 + 0x28));
    *(undefined8 *)((long)ppqVar18 + -8) = 0x29fd65;
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h5012a4810cee898dE(ppqVar18);
    return (qword *)(ulong)uVar9;
  case 0x26:
    goto switchD_002993da_caseD_26;
  case 0x27:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x28:
                    /* catch() { ... } // from try @ 0029fd51 with catch @ 002a011b */
    pqStack_160 = (qword *)0x2a0126;
    local_120 = (code **)param_4;
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h5012a4810cee898dE
              (&uStack_158);
    pqStack_160 = (qword *)&UNK_002a012e;
    pqVar15 = (qword *)_Unwind_Resume(puVar11);
    return pqVar15;
  case 0x29:
    puVar11 = (uint *)((long)&UINT_001d1028 + uVar13 + 1);
    *puVar11 = *puVar11 >> 1 | (uint)((*puVar11 & 1) != 0) << 0x1f;
    piVar1 = (int *)((long)&UINT_001d1100 + uVar13 + 3);
    *piVar1 = *piVar1 + -1;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)&switchD_002993da::switchdataD_001d10a0 + (long)local_148);
switchD_002a015f_switchD:
    local_120 = (code **)param_4;
                    /* WARNING: Could not recover jumptable at 0x002a015f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pqVar15 = (qword *)(*UNRECOVERED_JUMPTABLE)();
    return pqVar15;
  case 0x2a:
    return (qword *)puVar11;
  case 0x2b:
    pcVar14 = (char *)((long)&UINT_001d102c + uVar13 + 1);
    *pcVar14 = *pcVar14 + -0x60;
    *(byte *)(uVar21 + 0x7442c8) = *(byte *)(uVar21 + 0x7442c8) | 0xa0;
    pbVar2 = (byte *)((long)&UINT_001d1020 + uVar13 + 3);
    *pbVar2 = *pbVar2 & 0xa0;
    *(byte *)puVar11 = 0;
    uStack_158 = (undefined *)((ulong)puVar11 & 0xffffffff);
    ppqVar19 = &pqStack_160;
code_r0x002a01ae:
    puVar11 = (uint *)&DAT_00386fd8;
    in_R10 = (undefined *)((long)ppqVar19 + 8);
    in_R11 = &
             PTR__ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h6fdf0f570893b293E_00386078
    ;
switchD_002992cb_caseD_2a01cf:
    local_120 = (code **)param_4;
    *(uint **)((long)ppqVar19 + -8) = puVar11;
    *(undefined **)((long)ppqVar19 + -0x10) = in_R10;
    *(undefined ***)((long)ppqVar19 + -0x18) = in_R11;
    *(undefined8 *)((long)ppqVar19 + -0x20) = 0x2a01df;
    pqVar15 = (qword *)(*(code *)
                         PTR__ZN4core3fmt9Formatter25debug_tuple_field3_finish17h641e0b1a22002401E_0048ff48
                       )();
    return pqVar15;
  case 0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (((byte)cVar3 & 1) == 0) {
    local_118 = 0;
  }
  else {
    local_e8 = *(ulong *)((long)local_150 + 8);
    pcStack_e0 = *(code **)((long)local_150 + 0x10);
    local_d8 = *(code **)((long)local_150 + 0x18);
    uStack_d0 = *(undefined4 *)((long)local_150 + 0x20);
    uStack_cc = *(undefined4 *)((long)local_150 + 0x24);
    local_c8 = *(undefined8 *)((long)local_150 + 0x28);
    if (local_e8 == 0) {
      local_118 = 0;
      uVar22 = 0;
      pqStack_160 = (qword *)0x29948a;
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__DirEntry_C_std__io__error__Error_GT__GT_17h446667b72579c759E
                (&local_e8);
    }
    else {
      local_f8 = *(code **)((long)local_150 + 0x28);
      local_118 = *(ulong *)((long)local_150 + 8);
      uStack_110 = *(ulong *)((long)local_150 + 0x10);
      local_108 = *(undefined8 *)((long)local_150 + 0x18);
      uStack_100 = *(undefined8 **)((long)local_150 + 0x20);
    }
    if (local_118 != 0) {
                    /* try { // try from 002994a0 to 0029950e has its CatchHandler @ 0029963b */
      pqStack_160 = (qword *)0x2994b1;
      uVar8 = _ZN5uu_ls8PathData3new13get_file_type17h648e9c795770d343E
                        (&local_118,param_2[1],param_2[2],bVar20);
      uVar22 = extraout_EDX;
      goto joined_r0x002994ea;
    }
  }
  uVar8 = 2;
joined_r0x002994ea:
  if ((uStack_128 & 0x100000000) == 0) {
    local_e8 = 0;
    pcStack_e0 = (code *)&DAT_00000001;
    local_d8 = (code *)0x0;
  }
  else {
    pqStack_160 = (qword *)0x29950c;
    _ZN5uu_ls20get_security_context17h4da0c13867f1ac9eE(&local_e8,param_2[1],param_2[2],bVar20);
  }
  param_1[0x24] = (qword)local_f8;
  *(undefined4 *)(param_1 + 0x22) = (undefined4)local_108;
  *(undefined4 *)((long)param_1 + 0x114) = local_108._4_4_;
  *(undefined4 *)(param_1 + 0x23) = (undefined4)uStack_100;
  *(undefined4 *)((long)param_1 + 0x11c) = uStack_100._4_4_;
  param_1[0x20] = local_118;
  param_1[0x21] = uStack_110;
  param_1[6] = local_e8;
  param_1[7] = (qword)pcStack_e0;
  param_1[8] = (qword)local_d8;
  param_1[9] = 3;
  *(undefined4 *)(param_1 + 0x1f) = uVar8;
  *(undefined4 *)((long)param_1 + 0xfc) = uVar22;
  *param_1 = (qword)local_148;
  param_1[1] = local_140;
  param_1[2] = local_138;
  uVar22 = *(undefined4 *)((long)param_2 + 4);
  uVar8 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar22;
  *(undefined4 *)(param_1 + 4) = uVar8;
  *(undefined4 *)((long)param_1 + 0x24) = uVar4;
  param_1[5] = param_2[2];
  *(byte *)(param_1 + 0x25) = bVar20;
  pqVar15 = (qword *)(ulong)param_7;
  *(byte *)((long)param_1 + 0x129) = param_7;
  if (((ulong)uStack_158 & 0x100000000) != 0) {
    pqStack_160 = (qword *)0x2995cc;
    pqVar15 = (qword *)_ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h9930b46afeec8fe4E
                                 (local_130,local_120[1]);
  }
  return pqVar15;
}