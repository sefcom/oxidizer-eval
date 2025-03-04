/* WARNING: Type propagation algorithm not settling */

long * _ZN7uu_test4eval17hd0178b83e7335180E(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  char cVar16;
  char cVar17;
  undefined uVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined uVar22;
  int iVar23;
  long lVar24;
  undefined8 uVar25;
  long *plVar26;
  long lVar27;
  byte bVar28;
  long local_118;
  int iStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  undefined8 local_f8;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  long local_d8;
  undefined8 local_c8;
  int iStack_c0;
  int iStack_bc;
  long local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  long local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  long local_58;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  long local_38;
  
  lVar24 = *(long *)(param_2 + 0x10);
  if (lVar24 == 0) {
switchD_001ac045_caseD_6:
    *(undefined *)(param_1 + 1) = 0;
    *param_1 = 7;
    return param_1;
  }
  lVar19 = lVar24 + -1;
  *(long *)(param_2 + 0x10) = lVar19;
  lVar3 = *(long *)(param_2 + 8);
  local_58 = *(long *)(lVar3 + 0x20 + lVar19 * 0x28);
  puVar1 = (undefined8 *)(lVar3 + lVar19 * 0x28);
  local_78 = *(undefined4 *)puVar1;
  uStack_74 = *(undefined4 *)((long)puVar1 + 4);
  plVar21 = puVar1 + 1;
  iStack_70 = *(int *)plVar21;
  iStack_6c = *(int *)((long)puVar1 + 0xc);
  lVar13 = *plVar21;
  piVar2 = (int *)(lVar3 + 0x10 + lVar19 * 0x28);
  local_68 = *piVar2;
  iStack_64 = piVar2[1];
  uVar20 = *(undefined8 *)piVar2;
  plVar5 = (long *)(piVar2 + 2);
  iStack_60 = *(int *)plVar5;
  iStack_5c = piVar2[3];
  lVar15 = *plVar5;
  lVar14 = *plVar5;
  lVar12 = *plVar5;
  lVar27 = *plVar5;
  switch(*puVar1) {
  case 1:
    _ZN7uu_test4eval17hd0178b83e7335180E(&local_118,param_2);
    if (local_118 == 7) {
      *(byte *)(param_1 + 1) = (byte)iStack_110 ^ 1;
      *param_1 = 7;
      return param_1;
    }
    param_1[3] = CONCAT44(iStack_fc,iStack_100);
    *(ulong *)((long)param_1 + 9) =
         CONCAT17((undefined)local_108,CONCAT43(iStack_10c,iStack_110._1_3_));
    *(ulong *)((long)param_1 + 0x11) =
         CONCAT17((undefined)iStack_100,CONCAT43(iStack_104,local_108._1_3_));
    *param_1 = local_118;
    *(byte *)(param_1 + 1) = (byte)iStack_110;
    return param_1;
  case 2:
    break;
  case 3:
    *(bool *)(param_1 + 1) = *plVar5 != 0;
    *param_1 = 7;
    plVar26 = &local_118;
    local_118 = lVar13;
    iStack_110 = local_68;
    iStack_10c = iStack_64;
    local_108 = iStack_60;
    iStack_104 = iStack_5c;
    goto LAB_001acafb;
  case 4:
    if (*plVar21 == 0) {
      if (lVar19 == 0) {
        local_c8 = 7;
LAB_001ac931:
        local_118 = 7;
      }
      else {
        lVar19 = lVar24 + -2;
        *(long *)(param_2 + 0x10) = lVar19;
        plVar21 = (long *)(lVar3 + lVar19 * 0x28);
        local_c8 = *plVar21;
        iStack_c0 = *(int *)(plVar21 + 1);
        iStack_bc = *(int *)((long)plVar21 + 0xc);
        plVar21 = (long *)(lVar3 + 0x10 + lVar19 * 0x28);
        local_b8 = *plVar21;
        uStack_b0 = *(undefined4 *)(plVar21 + 1);
        uStack_ac = *(undefined4 *)((long)plVar21 + 0xc);
        local_a8 = *(undefined8 *)(lVar3 + 0x20 + lVar19 * 0x28);
        if (lVar19 == 0) goto LAB_001ac931;
        lVar24 = lVar24 + -3;
        *(long *)(param_2 + 0x10) = lVar24;
        plVar21 = (long *)(lVar3 + lVar24 * 0x28);
        local_118 = *plVar21;
        iStack_110 = *(int *)(plVar21 + 1);
        iStack_10c = *(int *)((long)plVar21 + 0xc);
        piVar2 = (int *)(lVar3 + 0x10 + lVar24 * 0x28);
        local_108 = *piVar2;
        iStack_104 = piVar2[1];
        iStack_100 = piVar2[2];
        iStack_fc = piVar2[3];
        local_f8 = *(undefined8 *)(lVar3 + 0x20 + lVar24 * 0x28);
      }
      local_e8 = local_68;
      iStack_e4 = iStack_64;
      iStack_e0 = iStack_60;
      iStack_dc = iStack_5c;
      local_d8 = local_58;
                    /* try { // try from 001ac944 to 001ac9cf has its CatchHandler @ 001acd74 */
      cVar16 = _ZN82__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT__RF_str_GT__GT_2eq17ha08c54788d123b03E
                         (lVar15,local_58,&DAT_0011d0d6);
      iVar23 = (int)local_c8;
      if (cVar16 == '\0') {
        bVar28 = iVar23 == 7 && local_118 == 7;
        if (((int)local_118 != 7) && (iVar23 != 7)) {
          bVar28 = _ZN64__LT_uu_test__parser__Symbol_u20_as_u20_core__cmp__PartialEq_GT_2eq17h838c2774cc7a2a63E
                             (&local_118,&local_c8);
        }
      }
      else if ((int)local_118 == 7) {
        bVar28 = iVar23 != 7;
      }
      else {
        bVar28 = 1;
        if (iVar23 != 7) {
          bVar28 = _ZN64__LT_uu_test__parser__Symbol_u20_as_u20_core__cmp__PartialEq_GT_2eq17h838c2774cc7a2a63E
                             (&local_118,&local_c8);
          bVar28 = bVar28 ^ 1;
        }
      }
      *(byte *)(param_1 + 1) = bVar28;
      *param_1 = 7;
                    /* try { // try from 001ac9dc to 001ac9e5 has its CatchHandler @ 001acd6f */
      _ZN4core3ptr72drop_in_place_LT_core__option__Option_LT_uu_test__parser__Symbol_GT__GT_17hbb35a5714e5c51fcE
                (&local_118);
                    /* try { // try from 001ac9e6 to 001ac9ef has its CatchHandler @ 001acd6a */
      _ZN4core3ptr72drop_in_place_LT_core__option__Option_LT_uu_test__parser__Symbol_GT__GT_17hbb35a5714e5c51fcE
                (&local_c8);
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_e8);
      bVar4 = true;
      bVar10 = false;
LAB_001ac9fe:
      bVar11 = true;
    }
    else {
      local_98 = local_68;
      iStack_94 = iStack_64;
      iStack_90 = iStack_60;
      iStack_8c = iStack_5c;
      local_88 = local_58;
      if (iStack_70 == 1) {
        if (lVar19 == 0) {
          local_118 = 7;
LAB_001acc91:
                    /* try { // try from 001acc91 to 001acc95 has its CatchHandler @ 001acde8 */
          uVar20 = _ZN7uu_test4eval19panic_cold_explicit17ha5be655c7f68869bE();
          goto LAB_001accc6;
        }
        lVar19 = lVar24 + -2;
        *(long *)(param_2 + 0x10) = lVar19;
        local_f8 = *(undefined8 *)(lVar3 + 0x20 + lVar19 * 0x28);
        plVar21 = (long *)(lVar3 + lVar19 * 0x28);
        local_118 = *plVar21;
        iVar23 = *(int *)(plVar21 + 1);
        iVar6 = *(int *)((long)plVar21 + 0xc);
        piVar2 = (int *)(lVar3 + 0x10 + lVar19 * 0x28);
        iVar7 = *piVar2;
        iVar8 = piVar2[1];
        uVar20 = *(undefined8 *)piVar2;
        iStack_100 = piVar2[2];
        iStack_fc = piVar2[3];
        lVar27 = *(long *)(piVar2 + 2);
        iStack_110 = iVar23;
        iStack_10c = iVar6;
        local_108 = iVar7;
        iStack_104 = iVar8;
        if (local_118 != 3) goto LAB_001acc91;
        local_e8 = iVar23;
        iStack_e4 = iVar6;
        iStack_e0 = iVar7;
        iStack_dc = iVar8;
        local_d8 = lVar27;
        if (lVar19 == 0) {
          local_118 = 7;
LAB_001accb1:
                    /* try { // try from 001accb1 to 001accb5 has its CatchHandler @ 001acdb3 */
          uVar20 = _ZN7uu_test4eval19panic_cold_explicit17h5cb2ec545d1e8498E();
          goto LAB_001accc6;
        }
        lVar24 = lVar24 + -3;
        *(long *)(param_2 + 0x10) = lVar24;
        local_f8 = *(undefined8 *)(lVar3 + 0x20 + lVar24 * 0x28);
        plVar21 = (long *)(lVar3 + lVar24 * 0x28);
        local_118 = *plVar21;
        iStack_110 = *(int *)(plVar21 + 1);
        iStack_10c = *(int *)((long)plVar21 + 0xc);
        piVar2 = (int *)(lVar3 + 0x10 + lVar24 * 0x28);
        local_108 = *piVar2;
        iStack_104 = piVar2[1];
        iStack_100 = piVar2[2];
        iStack_fc = piVar2[3];
        lVar24 = *(long *)(piVar2 + 2);
        if (local_118 != 3) goto LAB_001accb1;
                    /* try { // try from 001ac1db to 001ac1e8 has its CatchHandler @ 001acd5b */
        local_c8 = plVar21[1];
        iStack_c0 = local_108;
        iStack_bc = iStack_104;
        local_b8 = lVar24;
        _ZN7uu_test8integers17he37c408d0a55d011E
                  (&local_118,*(undefined8 *)piVar2,lVar24,uVar20,lVar27,lVar12,local_58);
        if (local_118 != 7) {
          param_1[3] = CONCAT44(iStack_fc,iStack_100);
          *(uint *)((long)param_1 + 9) = CONCAT13((undefined)iStack_10c,iStack_110._1_3_);
          *(uint *)((long)param_1 + 0xd) = CONCAT13((undefined)local_108,iStack_10c._1_3_);
          *(uint *)((long)param_1 + 0x11) = CONCAT13((undefined)iStack_104,local_108._1_3_);
          *(uint *)((long)param_1 + 0x15) = CONCAT13((undefined)iStack_100,iStack_104._1_3_);
          *param_1 = local_118;
          *(byte *)(param_1 + 1) = (byte)iStack_110;
                    /* try { // try from 001ac8d9 to 001ac8e2 has its CatchHandler @ 001acd3a */
          _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE
                    (&local_c8);
                    /* try { // try from 001ac8e3 to 001ac8ec has its CatchHandler @ 001acd20 */
          _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE
                    (&local_e8);
          goto LAB_001ac91b;
        }
        *(byte *)(param_1 + 1) = (byte)iStack_110;
        *param_1 = 7;
                    /* try { // try from 001ac207 to 001ac210 has its CatchHandler @ 001acd3a */
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_c8)
        ;
                    /* try { // try from 001ac211 to 001ac21a has its CatchHandler @ 001acd20 */
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_e8)
        ;
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_98)
        ;
        bVar10 = true;
        bVar4 = false;
        goto LAB_001ac9fe;
      }
      if (lVar19 == 0) {
        local_118 = 7;
LAB_001acca1:
                    /* try { // try from 001acca1 to 001acca5 has its CatchHandler @ 001acdcc */
        uVar20 = _ZN7uu_test4eval19panic_cold_explicit17h5b16dc8738e204dfE();
LAB_001accc6:
                    /* catch() { ... } // from try @ 001aca39 with catch @ 001accc6
                       catch() { ... } // from try @ 001acb30 with catch @ 001accc6 */
        if (local_118 == 3) {
          _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE
                    (&iStack_110);
        }
        else if ((int)local_118 != 7) {
                    /* try { // try from 001accd9 to 001ace3d has its CatchHandler @ 001ace46 */
          _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h2e64046051177754E(&local_118)
          ;
        }
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_48)
        ;
        plVar21 = (long *)_Unwind_Resume(uVar20);
        return plVar21;
      }
      lVar19 = lVar24 + -2;
      *(long *)(param_2 + 0x10) = lVar19;
      local_f8 = *(undefined8 *)(lVar3 + 0x20 + lVar19 * 0x28);
      plVar21 = (long *)(lVar3 + lVar19 * 0x28);
      local_118 = *plVar21;
      iVar23 = *(int *)(plVar21 + 1);
      iVar6 = *(int *)((long)plVar21 + 0xc);
      piVar2 = (int *)(lVar3 + 0x10 + lVar19 * 0x28);
      iVar7 = *piVar2;
      iVar8 = piVar2[1];
      uVar20 = *(undefined8 *)piVar2;
      iStack_100 = piVar2[2];
      iStack_fc = piVar2[3];
      lVar27 = *(long *)(piVar2 + 2);
      iStack_110 = iVar23;
      iStack_10c = iVar6;
      local_108 = iVar7;
      iStack_104 = iVar8;
      if (local_118 != 3) goto LAB_001acca1;
      local_e8 = iVar23;
      iStack_e4 = iVar6;
      iStack_e0 = iVar7;
      iStack_dc = iVar8;
      local_d8 = lVar27;
      if (lVar19 == 0) {
        local_118 = 7;
LAB_001accc1:
                    /* try { // try from 001accc1 to 001accc5 has its CatchHandler @ 001acd9a */
        uVar20 = _ZN7uu_test4eval19panic_cold_explicit17h92b4006982236d13E();
        goto LAB_001accc6;
      }
      lVar24 = lVar24 + -3;
      *(long *)(param_2 + 0x10) = lVar24;
      local_f8 = *(undefined8 *)(lVar3 + 0x20 + lVar24 * 0x28);
      plVar21 = (long *)(lVar3 + lVar24 * 0x28);
      local_118 = *plVar21;
      iStack_110 = *(int *)(plVar21 + 1);
      iStack_10c = *(int *)((long)plVar21 + 0xc);
      piVar2 = (int *)(lVar3 + 0x10 + lVar24 * 0x28);
      local_108 = *piVar2;
      iStack_104 = piVar2[1];
      iStack_100 = piVar2[2];
      iStack_fc = piVar2[3];
      lVar24 = *(long *)(piVar2 + 2);
      if (local_118 != 3) goto LAB_001accc1;
                    /* try { // try from 001ac628 to 001ac635 has its CatchHandler @ 001acd4c */
      local_c8 = plVar21[1];
      iStack_c0 = local_108;
      iStack_bc = iStack_104;
      local_b8 = lVar24;
      _ZN7uu_test5files17h2d66ad67db33f3bcE
                (&local_118,*(undefined8 *)piVar2,lVar24,uVar20,lVar27,lVar14,local_58);
      if (local_118 != 7) {
        param_1[3] = CONCAT44(iStack_fc,iStack_100);
        *(uint *)((long)param_1 + 9) = CONCAT13((undefined)iStack_10c,iStack_110._1_3_);
        *(uint *)((long)param_1 + 0xd) = CONCAT13((undefined)local_108,iStack_10c._1_3_);
        *(uint *)((long)param_1 + 0x11) = CONCAT13((undefined)iStack_104,local_108._1_3_);
        *(uint *)((long)param_1 + 0x15) = CONCAT13((undefined)iStack_100,iStack_104._1_3_);
        *param_1 = local_118;
        *(byte *)(param_1 + 1) = (byte)iStack_110;
                    /* try { // try from 001ac907 to 001ac910 has its CatchHandler @ 001acd28 */
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_c8)
        ;
                    /* try { // try from 001ac911 to 001ac91a has its CatchHandler @ 001acd18 */
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_e8)
        ;
LAB_001ac91b:
        plVar26 = (long *)&local_98;
        goto LAB_001acafb;
      }
      *(byte *)(param_1 + 1) = (byte)iStack_110;
      *param_1 = 7;
                    /* try { // try from 001ac654 to 001ac65d has its CatchHandler @ 001acd28 */
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_c8);
                    /* try { // try from 001ac65e to 001ac667 has its CatchHandler @ 001acd18 */
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_e8);
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_98);
      bVar10 = true;
      bVar11 = false;
      bVar4 = true;
    }
    if ((CONCAT44(iStack_6c,iStack_70) != 0) && (bVar10 = bVar4, iStack_70 != 1)) {
      bVar10 = bVar11;
    }
    if (!bVar10) {
      return param_1;
    }
    plVar26 = (long *)&local_68;
    goto LAB_001acafb;
  case 5:
    plVar26 = (long *)&local_68;
    if (*plVar21 == 0) {
      local_48 = local_68;
      iStack_44 = iStack_64;
      iStack_40 = iStack_60;
      iStack_3c = iStack_5c;
      local_38 = local_58;
      if (lVar19 == 0) {
LAB_001ac4a7:
        *(undefined *)(param_1 + 1) = 1;
        *param_1 = 7;
        plVar26 = (long *)&local_48;
      }
      else {
        lVar24 = lVar24 + -2;
        *(long *)(param_2 + 0x10) = lVar24;
        local_f8 = *(undefined8 *)(lVar3 + 0x20 + lVar24 * 0x28);
        plVar21 = (long *)(lVar3 + lVar24 * 0x28);
        local_118 = *plVar21;
        iStack_110 = *(int *)(plVar21 + 1);
        iStack_10c = *(int *)((long)plVar21 + 0xc);
        piVar2 = (int *)(lVar3 + 0x10 + lVar24 * 0x28);
        local_108 = *piVar2;
        iStack_104 = piVar2[1];
        iStack_100 = piVar2[2];
        iStack_fc = piVar2[3];
        iVar23 = iStack_110;
        iVar6 = iStack_10c;
        iVar7 = local_108;
        iVar8 = iStack_104;
        lVar24 = *(long *)(piVar2 + 2);
        if (local_118 != 3) {
          if (local_118 != 6) {
            if (local_118 != 7) {
              local_c8 = 1;
              uStack_b0 = CONCAT31(uStack_b0._1_3_,1);
                    /* try { // try from 001acb30 to 001acb3e has its CatchHandler @ 001accc6 */
              iStack_c0 = iStack_60;
              iStack_bc = iStack_5c;
              local_b8 = local_58;
              _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h0530b763d48a6791E
                        (&local_e8,&local_c8);
              param_1[3] = local_d8;
              *(int *)(param_1 + 1) = local_e8;
              *(int *)((long)param_1 + 0xc) = iStack_e4;
              *(int *)(param_1 + 2) = iStack_e0;
              *(int *)((long)param_1 + 0x14) = iStack_dc;
              *param_1 = 3;
              if (local_118 == 3) {
                _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE
                          (&iStack_110);
              }
              else if (local_118 != 7) {
                    /* try { // try from 001acb69 to 001acb7e has its CatchHandler @ 001acd03 */
                _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h2e64046051177754E
                          (&local_118);
              }
              plVar26 = (long *)&local_48;
              goto LAB_001acafb;
            }
            goto LAB_001ac4a7;
          }
                    /* try { // try from 001aca39 to 001aca4a has its CatchHandler @ 001accc6 */
          _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_c8,1,0);
          local_88 = local_b8;
          local_98 = (int)local_c8;
          iStack_94 = local_c8._4_4_;
          iStack_90 = iStack_c0;
          iStack_8c = iStack_bc;
          iVar23 = local_98;
          iVar6 = iStack_94;
          iVar7 = iStack_90;
          iVar8 = iStack_8c;
          lVar24 = local_88;
          if ((~(uint)local_118 & 3) != 0) {
                    /* try { // try from 001aca6f to 001acab0 has its CatchHandler @ 001accf1 */
            _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h2e64046051177754E
                      (&local_118);
            iVar23 = local_98;
            iVar6 = iStack_94;
            iVar7 = iStack_90;
            iVar8 = iStack_8c;
            lVar24 = local_88;
          }
        }
        local_88 = lVar24;
        iStack_8c = iVar8;
        iStack_90 = iVar7;
        iStack_94 = iVar6;
        local_98 = iVar23;
        cVar16 = _ZN82__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT__RF_str_GT__GT_2eq17ha08c54788d123b03E
                           (CONCAT44(iStack_3c,iStack_40),local_38,&DAT_0011d0ef);
        bVar4 = local_88 != 0;
        if (cVar16 != '\0') {
          bVar4 = local_88 == 0;
        }
        *(bool *)(param_1 + 1) = bVar4;
        *param_1 = 7;
                    /* try { // try from 001acad3 to 001acadf has its CatchHandler @ 001acd03 */
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_98)
        ;
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_48)
        ;
        if (CONCAT44(iStack_6c,iStack_70) == 0) {
          return param_1;
        }
      }
      goto LAB_001acafb;
    }
                    /* try { // try from 001ac25f to 001ac269 has its CatchHandler @ 001ace22 */
    local_e8 = local_68;
    iStack_e4 = iStack_64;
    iStack_e0 = iStack_60;
    iStack_dc = iStack_5c;
    local_d8 = local_58;
    _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
              (&local_118,*plVar5);
    if (local_118 != 0) {
      uVar20 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_00214c20);
      goto LAB_001accc6;
    }
    if (*(long *)(param_2 + 0x10) == 0) {
      local_118 = 7;
    }
    else {
      uVar20 = CONCAT44(iStack_10c,iStack_110);
      uVar9 = CONCAT44(iStack_104,local_108);
      lVar19 = *(long *)(param_2 + 0x10) + -1;
      *(long *)(param_2 + 0x10) = lVar19;
      lVar24 = *(long *)(param_2 + 8);
      local_f8 = *(undefined8 *)(lVar24 + 0x20 + lVar19 * 0x28);
      plVar21 = (long *)(lVar24 + lVar19 * 0x28);
      local_118 = *plVar21;
      iStack_110 = *(int *)(plVar21 + 1);
      iStack_10c = *(int *)((long)plVar21 + 0xc);
      piVar2 = (int *)(lVar24 + 0x10 + lVar19 * 0x28);
      local_108 = *piVar2;
      iStack_104 = piVar2[1];
      iStack_100 = piVar2[2];
      iStack_fc = piVar2[3];
      if (local_118 == 3) {
        local_c8 = plVar21[1];
        iStack_c0 = local_108;
        iStack_bc = iStack_104;
        local_b8 = *(long *)(piVar2 + 2);
                    /* try { // try from 001ac2d9 to 001ac2ef has its CatchHandler @ 001ace13 */
        cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                           (uVar20,uVar9,&DAT_0011d0d0,2);
        if (cVar16 == '\0') {
                    /* try { // try from 001ac680 to 001ac870 has its CatchHandler @ 001ace13 */
          cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                             (uVar20,uVar9,&DAT_0011d0aa,2);
          uVar25 = 1;
          if (cVar16 != '\0') goto LAB_001ac85f;
          cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                             (uVar20,uVar9,&DAT_0011d0ac,2);
          uVar25 = 2;
          if (cVar16 != '\0') goto LAB_001ac85f;
          cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                             (uVar20,uVar9,&DAT_0011d0ae,2);
          uVar25 = 3;
          if (cVar16 != '\0') goto LAB_001ac85f;
          cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                             (uVar20,uVar9,&DAT_0011d0b0,2);
          uVar25 = 5;
          if (cVar16 != '\0') goto LAB_001ac85f;
          cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                             (uVar20,uVar9,&DAT_0011d0b2,2);
          uVar25 = 6;
          if (cVar16 != '\0') goto LAB_001ac85f;
          cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                             (uVar20,uVar9,&DAT_0011d0b4,2);
          uVar25 = 7;
          if (cVar16 != '\0') goto LAB_001ac85f;
          cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                             (uVar20,uVar9,&DAT_0011d0b6,2);
          uVar25 = 8;
          if (cVar16 != '\0') goto LAB_001ac85f;
          cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                             (uVar20,uVar9,&DAT_0011d0b8,2);
          uVar25 = 9;
          if (cVar16 != '\0') goto LAB_001ac85f;
          cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                             (uVar20,uVar9,&DAT_0011d0ba,2);
          uVar25 = 8;
          if (cVar16 != '\0') goto LAB_001ac85f;
          cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                             (uVar20,uVar9,&DAT_0011d0bc,2);
          uVar25 = 4;
          if (cVar16 != '\0') goto LAB_001ac85f;
          cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                             (uVar20,uVar9,&DAT_0011d0be,2);
          uVar25 = 10;
          if (cVar16 != '\0') goto LAB_001ac85f;
          cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                             (uVar20,uVar9,&DAT_0011d0c0,2);
          uVar25 = 0xb;
          if (cVar16 != '\0') goto LAB_001ac85f;
          cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                             (uVar20,uVar9,&DAT_0011d0c2,2);
          uVar25 = 0xc;
          if (cVar16 != '\0') goto LAB_001ac85f;
          cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                             (uVar20,uVar9,&DAT_0011d0c4,2);
          uVar25 = 0xd;
          if (cVar16 != '\0') goto LAB_001ac85f;
          cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                             (uVar20,uVar9,&DAT_0011d0c6,2);
          uVar25 = 0xe;
          if (cVar16 != '\0') goto LAB_001ac85f;
                    /* try { // try from 001acb8c to 001acc3c has its CatchHandler @ 001ace13 */
          cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                             (uVar20,uVar9,&DAT_0011d0c8,2);
          if (cVar16 == '\0') {
            cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                               (uVar20,uVar9,&DAT_0011d0ca,2);
            uVar25 = 0xf;
            if (cVar16 == '\0') {
              cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                 (uVar20,uVar9,&DAT_0011d0cc,2);
              uVar25 = 0x10;
              if (cVar16 == '\0') {
                cVar16 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                   (uVar20,uVar9,&DAT_0011d0ce,2);
                uVar25 = 0x11;
                if (cVar16 == '\0') {
                  uVar20 = _ZN7uu_test4eval19panic_cold_explicit17h81c4b099897e5224E();
                  goto LAB_001accc6;
                }
              }
            }
            goto LAB_001ac85f;
          }
          _ZN7uu_test6isatty17h35113a9be9add355E(&local_118,CONCAT44(iStack_bc,iStack_c0),local_b8);
          if (local_118 != 7) {
            param_1[3] = CONCAT44(iStack_fc,iStack_100);
            *(uint *)((long)param_1 + 9) = CONCAT13((undefined)iStack_10c,iStack_110._1_3_);
            *(uint *)((long)param_1 + 0xd) = CONCAT13((undefined)local_108,iStack_10c._1_3_);
            *(uint *)((long)param_1 + 0x11) = CONCAT13((undefined)iStack_104,local_108._1_3_);
            *(uint *)((long)param_1 + 0x15) = CONCAT13((undefined)iStack_100,iStack_104._1_3_);
            *param_1 = local_118;
            *(byte *)(param_1 + 1) = (byte)iStack_110;
                    /* try { // try from 001acc5a to 001acc75 has its CatchHandler @ 001ace22 */
            _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE
                      (&local_c8);
            goto LAB_001ac9b0;
          }
          uVar18 = (byte)iStack_110 != '\0';
        }
        else {
          uVar25 = 0;
LAB_001ac85f:
          uVar18 = _ZN7uu_test4path17h72a91cd3b6f0d02cE
                             (CONCAT44(iStack_bc,iStack_c0),local_b8,uVar25);
        }
        *(undefined *)(param_1 + 1) = uVar18;
        *param_1 = 7;
                    /* try { // try from 001ac87b to 001ac884 has its CatchHandler @ 001ace22 */
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_c8)
        ;
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_e8)
        ;
        if (CONCAT44(iStack_6c,iStack_70) != 0) {
          return param_1;
        }
        goto LAB_001acafb;
      }
    }
                    /* try { // try from 001acc81 to 001acc85 has its CatchHandler @ 001ace04 */
    uVar20 = _ZN7uu_test4eval19panic_cold_explicit17h361454b4f33cbd30E();
    goto LAB_001accc6;
  case 6:
  case 7:
    goto switchD_001ac045_caseD_6;
  default:
    *param_1 = 0;
    return param_1;
  }
  local_e8 = iStack_70;
  iStack_e4 = iStack_6c;
  iStack_e0 = local_68;
  iStack_dc = iStack_64;
  local_d8 = lVar27;
                    /* try { // try from 001ac076 to 001ac087 has its CatchHandler @ 001ace31 */
  cVar16 = _ZN82__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT__RF_str_GT__GT_2eq17ha08c54788d123b03E
                     (uVar20,lVar27,&DAT_0011d0d2);
  if (cVar16 == '\0') {
                    /* try { // try from 001ac34e to 001ac415 has its CatchHandler @ 001ace31 */
    bVar28 = _ZN82__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT__RF_str_GT__GT_2eq17ha08c54788d123b03E
                       (uVar20,lVar27,&DAT_0011d0d4);
    if ((bVar28 & *(ulong *)(param_2 + 0x10) < 2) == 1) {
      uVar20 = CONCAT44(iStack_dc,iStack_e0);
      lVar27 = local_d8;
      goto LAB_001ac378;
    }
LAB_001ac3bd:
    _ZN7uu_test4eval17hd0178b83e7335180E(&local_118,param_2);
    uVar18 = (byte)iStack_110;
    if (local_118 == 7) {
      _ZN7uu_test4eval17hd0178b83e7335180E(&local_118,param_2);
      cVar16 = (byte)iStack_110;
      if (local_118 == 7) {
        cVar17 = _ZN82__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT__RF_str_GT__GT_2eq17ha08c54788d123b03E
                           (CONCAT44(iStack_dc,iStack_e0),local_d8,&DAT_0011d0d2);
        uVar22 = 0;
        if (cVar16 != '\0') {
          uVar22 = uVar18;
          uVar18 = 1;
        }
        if (cVar17 == '\0') {
          uVar22 = uVar18;
        }
        *(undefined *)(param_1 + 1) = uVar22;
        *param_1 = 7;
      }
      else {
        param_1[3] = CONCAT44(iStack_fc,iStack_100);
        *(uint *)((long)param_1 + 9) = CONCAT13((undefined)iStack_10c,iStack_110._1_3_);
        *(uint *)((long)param_1 + 0xd) = CONCAT13((undefined)local_108,iStack_10c._1_3_);
        *(uint *)((long)param_1 + 0x11) = CONCAT13((undefined)iStack_104,local_108._1_3_);
        *(uint *)((long)param_1 + 0x15) = CONCAT13((undefined)iStack_100,iStack_104._1_3_);
        *param_1 = local_118;
        *(byte *)(param_1 + 1) = (byte)iStack_110;
      }
    }
    else {
      param_1[3] = CONCAT44(iStack_fc,iStack_100);
      *(uint *)((long)param_1 + 9) = CONCAT13((undefined)iStack_10c,iStack_110._1_3_);
      *(uint *)((long)param_1 + 0xd) = CONCAT13((undefined)local_108,iStack_10c._1_3_);
      *(uint *)((long)param_1 + 0x11) = CONCAT13((undefined)iStack_104,local_108._1_3_);
      *(uint *)((long)param_1 + 0x15) = CONCAT13((undefined)iStack_100,iStack_104._1_3_);
      *param_1 = local_118;
      *(byte *)(param_1 + 1) = (byte)iStack_110;
    }
  }
  else {
    if (1 < *(ulong *)(param_2 + 0x10)) goto LAB_001ac3bd;
LAB_001ac378:
    local_118 = 1;
    iStack_110 = (int)uVar20;
    iStack_10c = (int)((ulong)uVar20 >> 0x20);
    local_108 = (int)lVar27;
    iStack_104 = (int)((ulong)lVar27 >> 0x20);
    iStack_100 = CONCAT31(iStack_100._1_3_,1);
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h0530b763d48a6791E
              (&local_c8,&local_118);
    param_1[3] = local_b8;
    *(int *)(param_1 + 1) = (int)local_c8;
    *(int *)((long)param_1 + 0xc) = local_c8._4_4_;
    *(int *)(param_1 + 2) = iStack_c0;
    *(int *)((long)param_1 + 0x14) = iStack_bc;
    *param_1 = 6;
  }
LAB_001ac9b0:
  plVar26 = (long *)&local_e8;
LAB_001acafb:
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(plVar26);
  return param_1;
}