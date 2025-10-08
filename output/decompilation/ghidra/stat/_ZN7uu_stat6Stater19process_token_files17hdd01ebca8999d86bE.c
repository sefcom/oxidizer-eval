undefined8
_ZN7uu_stat6Stater19process_token_files17hdd01ebca8999d86bE
          (undefined8 param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined4 param_7,undefined param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  undefined auVar14 [16];
  undefined8 ****local_188;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 ****local_168;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 ****local_130;
  uint uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  ulong ****local_118;
  undefined *puStack_110;
  ulong ****local_108;
  undefined *local_100;
  undefined8 ****local_f8;
  uint local_f0;
  undefined8 ****local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 ****local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 ***local_b8;
  long local_b0;
  undefined8 local_a8;
  
  lVar1 = *param_2;
  uVar6 = lVar1 - 3;
  uVar5 = 2;
  if (uVar6 < 2) {
    uVar5 = uVar6;
  }
  if (uVar5 == 0) {
    local_130 = (undefined8 ****)CONCAT44(local_130._4_4_,*(undefined4 *)(param_2 + 1));
    local_118 = (ulong ****)&local_130;
    puStack_110 = 
    PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00222288;
    local_168 = (undefined8 ****)&DAT_0011ab40;
    uStack_160 = 1;
    uStack_15c = 0;
    local_148 = 0;
    uStack_158 = &local_118;
    local_150 = 1;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00222270)(&local_168);
    return 0;
  }
  if (uVar5 == 1) {
    _ZN7uu_stat14write_raw_byte17hbbf81da3232f2130E(*(undefined4 *)(param_2 + 1));
    return 0;
  }
  uVar8 = *(undefined8 *)((long)param_2 + 0x1c);
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  switch(*(undefined4 *)(param_2 + 3)) {
  case 0x41:
    (*(code *)PTR__ZN6uucore8features2fs19display_permissions17hc8fe13fd96ae0343E_002222e0)
              (&local_188,param_3,1);
    goto LAB_00176c2f;
  case 0x42:
    uStack_180 = 0x200;
    uStack_17c = 0;
    goto LAB_00176c21;
  case 0x43:
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1259f2eee6e0998aE
              (&local_188,"unsupported for this operating system",0x25);
    goto LAB_00176c2f;
  case 0x44:
    uVar6 = *(ulong *)(param_3 + 0x20);
    goto LAB_00176a5d;
  default:
    local_188 = (undefined8 ****)0x8000000000000005;
    goto LAB_00176c2b;
  case 0x46:
    (*(code *)PTR__ZN6uucore8features5fsext15pretty_filetype17h51e66d968b749c56E_002222f0)
              (&local_188,*(undefined4 *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x50));
    goto LAB_00176c2f;
  case 0x47:
    (*(code *)
      PTR__ZN97__LT_uucore__features__entries__Group_u20_as_u20_uucore__features__entries__Locate_LT_u32_GT__GT_6locate17hf537d3ad4e514fa6E_00222300
    )(&local_168,*(undefined4 *)(param_3 + 0x40));
    if (local_168 == (undefined8 ****)&DAT_8000000000000000) {
      _ZN7uu_stat6Stater19process_token_files28__u7b__u7b_closure_u7d__u7d_17h318241e010beca0aE
                (&local_e8);
    }
    else {
      local_d8 = CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
      local_e8 = local_168;
      local_e0 = CONCAT44(uStack_15c,uStack_160);
    }
    uStack_178 = (undefined4)local_d8;
    uStack_174 = (undefined4)((ulong)local_d8 >> 0x20);
    local_188 = local_e8;
    uStack_180 = (uint)local_e0;
    uStack_17c = (undefined4)((ulong)local_e0 >> 0x20);
    goto LAB_00176c2f;
  case 0x48:
    uVar6 = *(ulong *)(param_3 + 0x48) >> 8;
    break;
  case 0x4c:
    uVar6 = (ulong)*(byte *)(param_3 + 0x48);
    break;
  case 0x4e:
    _ZN7uu_stat20get_quoted_file_name17haf9755dc3410fa80E
              (&local_168,param_4,param_5,param_6,param_7,param_8);
    if (local_168 == (undefined8 ****)&DAT_8000000000000000) {
      return 1;
    }
    uStack_174 = uStack_158._4_4_;
    uStack_17c = uStack_15c;
    uStack_178 = (undefined4)uStack_158;
    local_188 = local_168;
    uStack_180 = uStack_160;
    goto LAB_00176c2f;
  case 0x52:
    local_130 = (undefined8 ****)(*(ulong *)(param_3 + 0x48) & 0xff);
    local_b8 = (undefined8 ***)(*(ulong *)(param_3 + 0x48) >> 8);
    local_118 = &local_b8;
    puStack_110 = 
    PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17ha643a300066f02fcE_00222308
    ;
    local_108 = (ulong ****)&local_130;
    local_100 = 
    PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17ha643a300066f02fcE_00222308
    ;
    local_168 = (undefined8 ****)&DAT_00219f98;
    uStack_160 = 2;
    uStack_15c = 0;
    local_148 = 0;
    uStack_158 = &local_118;
    local_150 = 2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h722d45d5108b1d7dE(&local_188,&local_168);
    goto LAB_00176c2f;
  case 0x54:
    uVar6 = (ulong)*(byte *)(param_3 + 0x48);
    goto LAB_00176a5d;
  case 0x55:
    (*(code *)
      PTR__ZN98__LT_uucore__features__entries__Passwd_u20_as_u20_uucore__features__entries__Locate_LT_u32_GT__GT_6locate17h5d0bb482984d9c00E_002222f8
    )(&local_b0,*(undefined4 *)(param_3 + 0x3c));
    if (local_b0 == -0x8000000000000000) {
LAB_00176c8b:
      _ZN7uu_stat6Stater19process_token_files28__u7b__u7b_closure_u7d__u7d_17h318241e010beca0aE
                (&local_d0,local_a8);
    }
    else {
      _ZN6uucore8features7entries7uid2usr28__u7b__u7b_closure_u7d__u7d_17hd6b2b4d931cf2f66E
                (&local_168,&local_b0);
      local_a8 = CONCAT44(uStack_15c,uStack_160);
      if (local_168 == (undefined8 ****)&DAT_8000000000000000) goto LAB_00176c8b;
      local_c0 = CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
      local_d0 = local_168;
      local_c8 = local_a8;
    }
    uStack_178 = (undefined4)local_c0;
    uStack_174 = (undefined4)((ulong)local_c0 >> 0x20);
    local_188 = local_d0;
    uStack_180 = (uint)local_c8;
    uStack_17c = (undefined4)((ulong)local_c8 >> 0x20);
    goto LAB_00176c2f;
  case 0x57:
    (*(code *)
      PTR__ZN72__LT_std__fs__Metadata_u20_as_u20_uucore__features__fsext__BirthTime_GT_5birth17h0c5185550c9eb1caE_002222e8
    )(&local_168,param_3);
    if ((char)local_168 == '\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = CONCAT44(uStack_15c,uStack_160);
    }
    break;
  case 0x58:
    uVar7 = *(undefined8 *)(param_3 + 0x68);
    goto LAB_00176bd4;
  case 0x59:
    _ZN6chrono8datetime40DateTime_LT_chrono__offset__utc__Utc_GT_14from_timestamp17h1ce8e0fb8cfe0735E
              (&local_168,*(undefined8 *)(param_3 + 0x78),*(undefined4 *)(param_3 + 0x80));
    if ((int)local_168 == 0) {
      (*(code *)
        PTR__ZN101__LT_chrono__datetime__DateTime_LT_chrono__offset__utc__Utc_GT__u20_as_u20_core__default__Default_GT_7default17h251f53cfce2ba472E_00222310
      )(&local_f8);
    }
    else {
      local_f0 = uStack_160;
      local_f8 = local_168;
    }
    (*(code *)
      PTR__ZN168__LT_chrono__datetime__DateTime_LT_chrono__offset__local__Local_GT__u20_as_u20_core__convert__From_LT_chrono__datetime__DateTime_LT_chrono__offset__utc__Utc_GT__GT__GT_4from17h90f246ab10ef0572E_00222318
    )(&local_168,&local_f8);
    auVar14 = _ZN6chrono8datetime18DateTime_LT_Tz_GT_19timestamp_nanos_opt17h14cda3e030e1ca18E
                        (&local_168);
    lVar10 = auVar14._8_8_;
    if ((auVar14 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      iVar4 = _ZN6chrono5naive4date9NaiveDate16num_days_from_ce17h3a63bbbadb6054a1E
                        ((ulong)local_168 & 0xffffffff);
      lVar10 = (ulong)uStack_160 / 1000 +
               ((long)(iVar4 + -0xaf93b) * 0x15180 + ((ulong)local_168 >> 0x20)) * 1000000;
      uVar11 = (undefined4)_s__0011a690;
      uVar12 = (undefined4)((ulong)_s__0011a690 >> 0x20);
    }
    else {
      uVar11 = (undefined4)_s__0011a530;
      uVar12 = (undefined4)((ulong)_s__0011a530 >> 0x20);
    }
    dVar13 = (double)lVar10 / (double)CONCAT44(uVar12,uVar11);
    uStack_180 = SUB84(dVar13,0);
    uStack_17c = (undefined4)((ulong)dVar13 >> 0x20);
    local_188 = (undefined8 ****)0x8000000000000004;
    goto LAB_00176c2b;
  case 0x5a:
    uVar7 = *(undefined8 *)(param_3 + 0x88);
    goto LAB_00176bd4;
  case 0x61:
    uStack_180 = *(uint *)(param_3 + 0x38) & 0xfff;
    local_188 = (undefined8 ****)0x8000000000000003;
    goto LAB_00176c2b;
  case 0x62:
    uVar6 = *(ulong *)(param_3 + 0x60);
    break;
  case 100:
    uVar6 = *(ulong *)(param_3 + 0x20);
    break;
  case 0x66:
    uVar6 = (ulong)*(uint *)(param_3 + 0x38);
    goto LAB_00176a5d;
  case 0x67:
    uVar6 = (ulong)*(uint *)(param_3 + 0x40);
    break;
  case 0x68:
    uVar6 = *(ulong *)(param_3 + 0x30);
    break;
  case 0x69:
    uVar6 = *(ulong *)(param_3 + 0x28);
    break;
  case 0x6d:
    _ZN7uu_stat6Stater16find_mount_point17hb64e131c06b92eb6E(&local_168,param_1,param_6);
    if (local_168 == (undefined8 ****)&DAT_8000000000000000) {
      uVar8 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_002222b8)
                        (&PTR_s_src_uu_stat_src_stat_rs_00219fb8);
                    /* catch() { ... } // from try @ 00176cee with catch @ 00176e66 */
      _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17ha7af664bba1b7bffE
                (&local_130);
      uVar8 = _Unwind_Resume(uVar8);
      return uVar8;
    }
    uStack_178 = (undefined4)uStack_158;
    uStack_174 = uStack_158._4_4_;
    local_188 = local_168;
    uStack_180 = uStack_160;
    uStack_17c = uStack_15c;
    goto LAB_00176c2f;
  case 0x6e:
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1259f2eee6e0998aE
              (&local_188,param_4,param_5);
    goto LAB_00176c2f;
  case 0x6f:
    uVar6 = *(ulong *)(param_3 + 0x58);
    break;
  case 0x72:
    uVar6 = *(ulong *)(param_3 + 0x48);
    break;
  case 0x73:
    uVar7 = *(undefined8 *)(param_3 + 0x50);
LAB_00176bd4:
    uStack_180 = (uint)uVar7;
    uStack_17c = (undefined4)((ulong)uVar7 >> 0x20);
    local_188 = (undefined8 ****)&DAT_8000000000000000;
    goto LAB_00176c2b;
  case 0x74:
    uVar6 = *(ulong *)(param_3 + 0x48) >> 8;
LAB_00176a5d:
    uStack_180 = (uint)uVar6;
    uStack_17c = (undefined4)(uVar6 >> 0x20);
    local_188 = (undefined8 ****)0x8000000000000002;
    goto LAB_00176c2b;
  case 0x75:
    uVar6 = (ulong)*(uint *)(param_3 + 0x3c);
    break;
  case 0x77:
    (*(code *)
      PTR__ZN72__LT_std__fs__Metadata_u20_as_u20_uucore__features__fsext__BirthTime_GT_5birth17h0c5185550c9eb1caE_002222e8
    )(&local_168,param_3);
    if (((ulong)local_168 & 1) == 0) {
      local_130 = (undefined8 ****)&DAT_8000000000000000;
    }
    else {
      _ZN7uu_stat11pretty_time17h245badb3e9e8e0d9E
                (&local_130,CONCAT44(uStack_15c,uStack_160),(undefined4)uStack_158);
    }
                    /* try { // try from 00176cee to 00176d03 has its CatchHandler @ 00176e66 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1259f2eee6e0998aE
              (&local_168,"-,",1);
    local_108 = (ulong ****)CONCAT44(uStack_158._4_4_,(undefined4)uStack_158);
    puStack_110 = (undefined *)CONCAT44(uStack_15c,uStack_160);
    local_118 = local_168;
    if (local_130 != (undefined8 ****)&DAT_8000000000000000) {
      uStack_158._0_4_ = (undefined4)local_120;
      uStack_158._4_4_ = (undefined4)((ulong)local_120 >> 0x20);
      local_168 = local_130;
      uStack_160 = uStack_128;
      uStack_15c = uStack_124;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(&local_118);
    }
    uStack_180 = uStack_160;
    uStack_17c = uStack_15c;
    local_188 = local_168;
    uStack_178 = (undefined4)uStack_158;
    uStack_174 = uStack_158._4_4_;
    goto LAB_00176c2f;
  case 0x78:
    uVar7 = *(undefined8 *)(param_3 + 0x68);
    uVar9 = *(undefined8 *)(param_3 + 0x70);
    goto LAB_00176997;
  case 0x79:
    uVar7 = *(undefined8 *)(param_3 + 0x78);
    uVar9 = *(undefined8 *)(param_3 + 0x80);
    goto LAB_00176997;
  case 0x7a:
    uVar7 = *(undefined8 *)(param_3 + 0x88);
    uVar9 = *(undefined8 *)(param_3 + 0x90);
LAB_00176997:
    _ZN7uu_stat11pretty_time17h245badb3e9e8e0d9E(&local_188,uVar7,uVar9);
    goto LAB_00176c2f;
  }
  uStack_180 = (uint)uVar6;
  uStack_17c = (undefined4)(uVar6 >> 0x20);
LAB_00176c21:
  local_188 = (undefined8 ****)0x8000000000000001;
LAB_00176c2b:
LAB_00176c2f:
                    /* try { // try from 00176c2f to 00176c49 has its CatchHandler @ 00176e7b */
  _ZN7uu_stat8print_it17hbae1e67489e4141fE(&local_188,uVar8,lVar3,lVar1,lVar2);
  _ZN4core3ptr40drop_in_place_LT_uu_stat__OutputType_GT_17h618762e13dd348efE(&local_188);
  return 0;
}