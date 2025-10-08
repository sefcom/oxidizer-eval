void _ZN9uu_csplit9do_csplit17h94790b9168717fc6E
               (int *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined local_160 [8];
  undefined8 local_158;
  undefined8 local_150;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  long local_120;
  long local_118;
  int local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long local_d8;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined local_88 [32];
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hfcf31d9b258cc2e0E
            (local_88,param_3);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h14e6f3a775451a37E
            (&local_68,local_88);
  local_108 = local_68;
  uStack_104 = uStack_64;
  uStack_100 = uStack_60;
  uStack_fc = uStack_5c;
  local_f8 = local_58;
  uStack_f4 = uStack_54;
  uStack_f0 = uStack_50;
  uStack_ec = uStack_4c;
  local_e8 = local_48;
  uStack_e4 = uStack_44;
  uStack_e0 = uStack_40;
  uStack_dc = uStack_3c;
  local_d8 = local_38;
  while( true ) {
    if (local_108 == 3) {
      _ZN4core3ptr88drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_uu_csplit__patterns__Pattern_GT__GT_17h1f8d6e2fb4b3b420E
                (local_88);
      param_1[0] = 0xd;
      param_1[1] = 0;
      return;
    }
    local_68 = local_108;
    uStack_64 = uStack_104;
    uStack_60 = uStack_100;
    uStack_5c = uStack_fc;
    local_58 = local_f8;
    uStack_54 = uStack_f4;
    uStack_50 = uStack_f0;
    uStack_4c = uStack_ec;
    local_48 = local_e8;
    uStack_44 = uStack_e4;
    uStack_40 = uStack_e0;
    uStack_3c = uStack_dc;
    local_38 = local_d8;
                    /* try { // try from 002198ca to 002198d1 has its CatchHandler @ 00219ceb */
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h37c42c1dc99d122aE
              (local_160,&local_108);
    if (local_108 != 0) break;
    if (((byte)local_f8 & CONCAT44(uStack_ec,uStack_f0) == 0) == 0) {
      lVar4 = CONCAT44(uStack_fc,uStack_100);
      if ((local_f8 & 1) == 0) {
        lVar2 = 0;
        lVar3 = lVar4;
        goto LAB_00219be1;
      }
      lVar2 = 0;
      lVar3 = lVar4;
      do {
                    /* try { // try from 00219940 to 00219970 has its CatchHandler @ 00219cfc */
        lVar1 = (*(code *)PTR__ZN9uu_csplit11SplitWriter10new_writer17hee41ac5ef27e0855E_003711d8)
                          (param_2);
        if (lVar1 != 0) goto LAB_00219c23;
        _ZN9uu_csplit11SplitWriter10do_to_line17h77b5b4ed91319959E
                  (&local_148,param_2,local_158,local_150,lVar3,param_4);
        lVar1 = CONCAT44(iStack_144,local_148);
        if (lVar1 != 0xd) goto LAB_00219c35;
        lVar2 = lVar2 + 1;
        lVar3 = lVar3 + lVar4;
      } while (CONCAT44(uStack_ec,uStack_f0) != lVar2);
    }
LAB_00219abf:
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE(local_160);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h14e6f3a775451a37E
              (&local_68,local_88);
    local_108 = local_68;
    uStack_104 = uStack_64;
    uStack_100 = uStack_60;
    uStack_fc = uStack_5c;
    local_f8 = local_58;
    uStack_f4 = uStack_54;
    uStack_f0 = uStack_50;
    uStack_ec = uStack_4c;
    local_e8 = local_48;
    uStack_e4 = uStack_44;
    uStack_e0 = uStack_40;
    uStack_dc = uStack_3c;
    local_d8 = local_38;
  }
  local_98 = uStack_f0;
  uStack_94 = uStack_ec;
  uStack_90 = local_e8;
  uStack_8c = uStack_e4;
  local_a8 = uStack_100;
  uStack_a4 = uStack_fc;
  uStack_a0 = local_f8;
  uStack_9c = uStack_f4;
  lVar4 = 0;
  if ((char)uStack_e0 != '\0') goto LAB_00219a10;
LAB_002199e0:
  lVar3 = 0;
  if (local_108 == 2) goto LAB_00219a22;
LAB_002199e9:
                    /* try { // try from 002199e9 to 00219a5a has its CatchHandler @ 00219d0d */
  lVar2 = (*(code *)PTR__ZN9uu_csplit11SplitWriter10new_writer17hee41ac5ef27e0855E_003711d8)
                    (param_2);
  if (lVar2 == 0) {
    do {
      _ZN9uu_csplit11SplitWriter11do_to_match17h17829ad82477f465E
                (&local_d0,param_2,local_158,local_150,CONCAT44(uStack_a4,local_a8),
                 CONCAT44(uStack_9c,uStack_a0),uStack_104,param_4);
      local_128 = local_b0;
      local_148 = local_d0;
      iStack_144 = iStack_cc;
      iStack_140 = iStack_c8;
      iStack_13c = iStack_c4;
      local_138 = local_c0;
      uStack_134 = uStack_bc;
      uStack_130 = uStack_b8;
      uStack_12c = uStack_b4;
      local_118 = local_d8;
      local_120 = lVar3;
      if (CONCAT44(iStack_cc,local_d0) != 0xd) {
        if (lVar3 == 0) {
          if (local_d0 != 3) goto LAB_00219b84;
          param_1[0] = 0xd;
          param_1[1] = 0;
        }
        else {
          if ((local_d0 != 3) || (lVar4 == 0 || local_d8 == 1)) {
LAB_00219b84:
            *(undefined8 *)(param_1 + 8) = local_b0;
            *(ulong *)(param_1 + 4) = CONCAT44(uStack_bc,local_c0);
            *(ulong *)(param_1 + 6) = CONCAT44(uStack_b4,uStack_b8);
            *param_1 = local_d0;
            param_1[1] = iStack_cc;
            param_1[2] = iStack_c8;
            param_1[3] = iStack_c4;
            goto LAB_00219ba0;
          }
                    /* try { // try from 00219b1c to 00219b2e has its CatchHandler @ 00219cce */
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00371240
          )(&local_d0,local_160);
          *(ulong *)(param_1 + 8) = CONCAT44(uStack_bc,local_c0);
          param_1[4] = local_d0;
          param_1[5] = iStack_cc;
          param_1[6] = iStack_c8;
          param_1[7] = iStack_c4;
          param_1[0] = 4;
          param_1[1] = 0;
          *(long *)(param_1 + 2) = lVar4;
        }
                    /* try { // try from 00219b78 to 00219b81 has its CatchHandler @ 00219cdd */
        _ZN4core3ptr57drop_in_place_LT_uu_csplit__csplit_error__CsplitError_GT_17hcd386fc76ec93e3bE
                  (&local_148);
        goto LAB_00219ba0;
      }
      lVar4 = lVar4 + 1;
      local_118 = local_d8;
      if ((char)uStack_e0 == '\0') goto LAB_002199e0;
LAB_00219a10:
      if (local_d8 == lVar4) {
                    /* try { // try from 00219aa8 to 00219ab4 has its CatchHandler @ 00219ce1 */
        _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17h0ef14e510ab06315E
                  (&local_a8);
        goto LAB_00219abf;
      }
      lVar3 = CONCAT44(uStack_dc,uStack_e0);
      if (local_108 != 2) goto LAB_002199e9;
LAB_00219a22:
      *(undefined *)(param_2 + 0x38) = 1;
    } while( true );
  }
  param_1[0] = 0;
  param_1[1] = 0;
  *(long *)(param_1 + 2) = lVar2;
LAB_00219ba0:
                    /* try { // try from 00219ba0 to 00219bac has its CatchHandler @ 00219ce6 */
  _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17h0ef14e510ab06315E(&local_a8);
LAB_00219bad:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE(local_160);
  _ZN4core3ptr88drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_uu_csplit__patterns__Pattern_GT__GT_17h1f8d6e2fb4b3b420E
            (local_88);
  return;
LAB_00219be1:
                    /* try { // try from 00219be1 to 00219c0f has its CatchHandler @ 00219cdf */
  lVar1 = (*(code *)PTR__ZN9uu_csplit11SplitWriter10new_writer17hee41ac5ef27e0855E_003711d8)
                    (param_2);
  if (lVar1 != 0) goto LAB_00219c23;
  _ZN9uu_csplit11SplitWriter10do_to_line17h77b5b4ed91319959E
            (&local_148,param_2,local_158,local_150,lVar3,param_4);
  lVar1 = CONCAT44(iStack_144,local_148);
  if (lVar1 != 0xd) goto LAB_00219c35;
  lVar3 = lVar3 + lVar4;
  lVar2 = lVar2 + 1;
  goto LAB_00219be1;
LAB_00219c23:
  param_1[0] = 0;
  param_1[1] = 0;
  *(long *)(param_1 + 2) = lVar1;
  goto LAB_00219bad;
LAB_00219c35:
  if (lVar2 == 0 || (int)lVar1 != 1) {
    *(undefined8 *)(param_1 + 8) = local_128;
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_134,local_138);
    *(ulong *)(param_1 + 6) = CONCAT44(uStack_12c,uStack_130);
    *param_1 = local_148;
    param_1[1] = iStack_144;
    param_1[2] = iStack_140;
    param_1[3] = iStack_13c;
  }
  else {
                    /* try { // try from 00219c69 to 00219c7b has its CatchHandler @ 00219cbf */
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00371240
    )(&local_d0,local_160);
    *(ulong *)(param_1 + 8) = CONCAT44(uStack_bc,local_c0);
    param_1[4] = local_d0;
    param_1[5] = iStack_cc;
    param_1[6] = iStack_c8;
    param_1[7] = iStack_c4;
    param_1[0] = 2;
    param_1[1] = 0;
    *(long *)(param_1 + 2) = lVar2;
                    /* try { // try from 00219caa to 00219cb9 has its CatchHandler @ 00219ce6 */
    _ZN4core3ptr57drop_in_place_LT_uu_csplit__csplit_error__CsplitError_GT_17hcd386fc76ec93e3bE
              (&local_148);
  }
  goto LAB_00219bad;
}