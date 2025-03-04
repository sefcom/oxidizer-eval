/* WARNING: Removing unreachable block (ram,0x001bf8d8) */

undefined8 * _ZN9uu_mktemp6Params4from17h08dfed7a01f28665E(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined auVar9 [16];
  code *pcVar10;
  code *pcVar11;
  char cVar12;
  char cVar13;
  undefined8 uVar14;
  long lVar15;
  bool bVar16;
  undefined auVar17 [16];
  undefined8 local_198;
  undefined8 uStack_190;
  code *local_188;
  code *local_180;
  undefined local_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined auStack_160 [16];
  code *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  long local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  long local_118;
  undefined8 local_108;
  long local_100;
  undefined8 *local_f8;
  code *local_f0;
  code *pcStack_e8;
  code *local_e0;
  code *pcStack_d8;
  code *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined local_90 [16];
  code *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68;
  undefined local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  plVar1 = param_2 + 6;
  if (param_2[6] != -0x8000000000000000) {
    uVar14 = param_2[1];
    uVar2 = param_2[2];
    local_178 = (undefined  [8])((ulong)local_178 & 0xffffffff00000000);
                    /* try { // try from 001bf0a0 to 001bf0dc has its CatchHandler @ 001bf8c9 */
    auVar17 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x58,local_178);
    cVar12 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h133ed96069defad3E
                       (uVar14,uVar2,auVar17._0_8_,auVar17._8_8_);
    if (cVar12 == '\0') {
      param_1[3] = param_2[2];
      uVar5 = *(undefined4 *)((long)param_2 + 4);
      uVar6 = *(undefined4 *)(param_2 + 1);
      uVar7 = *(undefined4 *)((long)param_2 + 0xc);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)param_2;
      *(undefined4 *)((long)param_1 + 0xc) = uVar5;
      *(undefined4 *)(param_1 + 2) = uVar6;
      *(undefined4 *)((long)param_1 + 0x14) = uVar7;
      param_1[4] = 0x8000000000000001;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001bf1cb to 001bf1cf has its CatchHandler @ 001bf7f7 */
      _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hfe845c517ac2f71cE
                (param_2 + 3);
                    /* try { // try from 001bf1d3 to 001bf1dc has its CatchHandler @ 001bf871 */
      _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17habc7c620b4b38486E
                (plVar1);
      return param_1;
    }
  }
  _ZN9uu_mktemp32find_last_contiguous_block_of_xs17h8856c2687abea15aE
            (&local_128,param_2[1],param_2[2]);
  if (CONCAT44(uStack_124,local_128) == 0) {
    bVar16 = *plVar1 != -0x8000000000000000;
    if (bVar16) {
      local_178 = (undefined  [8])param_2[1];
      uStack_168 = (code *)param_2[2];
      uStack_170 = (code *)((long)local_178 + (long)uStack_168);
                    /* try { // try from 001bf1fc to 001bf20a has its CatchHandler @ 001bf8c9 */
      _ZN95__LT_alloc__string__String_u20_as_u20_core__iter__traits__collect__FromIterator_LT_char_GT__GT_9from_iter17h880836f94e14e84dE
                (&local_198,local_178);
    }
    else {
      local_188 = (code *)param_2[2];
      local_198 = (code *)*param_2;
      uStack_190 = (code *)param_2[1];
    }
    param_1[3] = local_188;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_198;
    *(undefined4 *)((long)param_1 + 0xc) = local_198._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_190;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_190._4_4_;
    param_1[4] = 0x8000000000000002;
    *param_1 = 0x8000000000000000;
                    /* try { // try from 001bf230 to 001bf234 has its CatchHandler @ 001bf7ff */
    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hfe845c517ac2f71cE
              (param_2 + 3);
LAB_001bf69b:
                    /* try { // try from 001bf69b to 001bf6a4 has its CatchHandler @ 001bf871 */
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17habc7c620b4b38486E
              (plVar1);
  }
  else {
    uVar8 = CONCAT44(uStack_11c,uStack_120);
    local_100 = local_118;
    local_b8 = param_2[5];
    local_c8 = *(undefined4 *)(param_2 + 3);
    uStack_c4 = *(undefined4 *)((long)param_2 + 0x1c);
    uStack_c0 = *(undefined4 *)(param_2 + 4);
    uStack_bc = *(undefined4 *)((long)param_2 + 0x24);
    if (param_2[3] == -0x8000000000000000) {
LAB_001bf163:
      local_f8 = (undefined8 *)0x0;
      local_f0 = (code *)&DAT_00000001;
      pcStack_e8 = (code *)0x0;
    }
    else {
                    /* try { // try from 001bf12c to 001bf140 has its CatchHandler @ 001bf86c */
      _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h0e8a4977c3ae2c93E
                (local_178,&local_c8);
      local_198 = uStack_170;
      uStack_190 = uStack_168;
      if (local_178 == (undefined  [8])0x8000000000000000) goto LAB_001bf163;
      local_f0 = uStack_170;
      pcStack_e8 = uStack_168;
      local_f8 = (undefined8 *)local_178;
    }
    lVar15 = param_2[1];
    if (uVar8 != 0) {
      uVar3 = param_2[2];
      if (uVar8 < uVar3) {
        if (*(char *)(lVar15 + uVar8) < -0x40) {
LAB_001bf269:
                    /* try { // try from 001bf26c to 001bf2b0 has its CatchHandler @ 001bf883 */
          uVar14 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                             (lVar15,uVar3,0,uVar8,&PTR_s_src_uu_mktemp_src_mktemp_rs_00236a40);
          goto LAB_001bf7d0;
        }
      }
      else if (uVar8 != uVar3) goto LAB_001bf269;
    }
    _ZN3std4path4Path4join17hac25b276bfec4f36E(local_178,local_f0,pcStack_e8,lVar15,uVar8);
    local_198 = uStack_170;
    uStack_190 = uStack_168;
                    /* try { // try from 001bf2bb to 001bf2cc has its CatchHandler @ 001bf828 */
    uVar14 = _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17hb2b1bff17e4619f7E
                       (&local_e0,&local_198);
    local_108 = CONCAT71((int7)((ulong)uVar14 >> 8),1);
                    /* try { // try from 001bf2d7 to 001bf41d has its CatchHandler @ 001bf888 */
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hef8b921f38343bf4E(local_178);
    if ((*(char *)((long)param_2 + 0x4b) == '\0') ||
       (cVar12 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17hf6fa57beb1c3cfdfE
                           (lVar15,uVar8), cVar12 == '\0')) {
      if ((CONCAT44(uStack_c4,local_c8) != -0x8000000000000000) &&
         (cVar12 = _ZN3std4path4Path11is_absolute17h3431a23d91045560E(lVar15,uVar8), cVar12 != '\0')
         ) {
        uVar14 = 0x8000000000000005;
        goto LAB_001bf341;
      }
      pcVar11 = local_d0;
      pcVar10 = pcStack_d8;
      local_178 = (undefined  [8])((ulong)local_178 & 0xffffffff00000000);
      uVar14 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2f,local_178);
      cVar12 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h133ed96069defad3E
                         (pcVar10,pcVar11,uVar14);
      if (cVar12 == '\0') {
        auVar17 = _ZN3std4path4Path6parent17h65c9a340a6266f2dE(pcStack_d8,local_d0);
        if (auVar17._0_8_ == 0) {
          local_198 = (code *)0x0;
          uStack_190 = (code *)&DAT_00000001;
          local_188 = (code *)0x0;
        }
        else {
          _local_178 = auVar17;
          _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17hb2b1bff17e4619f7E
                    (&local_198,local_178);
        }
                    /* try { // try from 001bf43b to 001bf479 has its CatchHandler @ 001bf80e */
        lVar15 = _ZN3std4path4Path9file_name17h79ecbb7850a9c7f3E(pcStack_d8,local_d0);
        if (lVar15 == 0) {
          auVar17._8_8_ = 0;
          auVar17._0_8_ = &DAT_00000001;
          local_90 = auVar17 << 0x40;
          local_80 = (code *)0x0;
        }
        else {
          _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
                    (local_178,lVar15);
          if (local_178 != (undefined  [8])0x0) {
                    /* try { // try from 001bf7c3 to 001bf7cf has its CatchHandler @ 001bf80e */
            uVar14 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                               (&PTR_s_src_uu_mktemp_src_mktemp_rs_00236a58);
            goto LAB_001bf7d0;
          }
          _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hf2364d4dece97e39E
                    (local_178,uStack_170,uStack_168);
          local_80 = uStack_168;
          local_90 = _local_178;
        }
        uStack_168 = local_188;
        local_178 = (undefined  [8])local_198;
        uStack_170 = uStack_190;
        local_108 = CONCAT71((int7)((ulong)local_188 >> 8),1);
      }
      else {
        uStack_168 = local_d0;
        local_178 = (undefined  [8])local_e0;
        uStack_170 = pcStack_d8;
        local_108 = 0;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = &DAT_00000001;
        local_90 = auVar9 << 0x40;
        local_80 = (code *)0x0;
      }
      local_68 = uStack_168;
      local_78 = local_178._0_4_;
      uStack_74 = local_178._4_4_;
      uStack_70 = (undefined4)uStack_170;
      uStack_6c = uStack_170._4_4_;
      local_a8 = *plVar1;
      if (local_a8 == -0x8000000000000000) {
        local_a0 = 1;
        uStack_98 = 0;
        local_a8 = 0;
      }
      else {
        local_a0 = param_2[7];
        uStack_98 = param_2[8];
      }
      uVar14 = param_2[1];
      uVar2 = param_2[2];
      local_58 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                           (local_100,uVar14,uVar2);
      if (local_58._0_8_ == 0) {
                    /* try { // try from 001bf7a3 to 001bf7c0 has its CatchHandler @ 001bf83d */
        uVar14 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                           (uVar14,uVar2,local_100,uVar2,&PTR_s_src_uu_mktemp_src_mktemp_rs_00236a70
                           );
LAB_001bf7d0:
                    /* catch() { ... } // from try @ 001bf645 with catch @ 001bf7d0 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h068543f44d037b0aE(&local_78);
        if ((char)local_108 != '\0') {
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h068543f44d037b0aE(&local_e0);
        }
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hef8b921f38343bf4E(&local_f8);
        _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hfe845c517ac2f71cE
                  (&local_c8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h068543f44d037b0aE(param_2);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar14);
      }
      local_198 = (code *)local_58;
      uStack_190 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9054f5fd3dba116aE;
      local_188 = (code *)&local_a8;
      local_180 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      local_178 = (undefined  [8])&DAT_0011a7a8;
      uStack_170 = (code *)0x2;
      auStack_160._8_8_ = 0;
      uStack_168 = (code *)&local_198;
      auStack_160._0_8_ = 2;
                    /* try { // try from 001bf5c3 to 001bf5d4 has its CatchHandler @ 001bf83d */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hcc2932731f604033E(&local_48,local_178);
      local_128 = local_48;
      uStack_124 = uStack_44;
      uStack_120 = uStack_40;
      uStack_11c = uStack_3c;
      local_118 = local_38;
                    /* try { // try from 001bf5fd to 001bf601 has its CatchHandler @ 001bf7e5 */
      cVar13 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17hf6fa57beb1c3cfdfE
                         (CONCAT44(uStack_3c,uStack_40));
      if (cVar13 == '\0') {
        uStack_168 = local_68;
        pcVar10 = uStack_168;
        local_178 = (undefined  [8])CONCAT44(uStack_74,local_78);
        uStack_170 = (code *)CONCAT44(uStack_6c,uStack_70);
        local_150 = local_80;
        local_138 = local_118;
        local_148 = local_128;
        uStack_144 = uStack_124;
        uStack_140 = uStack_120;
        uStack_13c = uStack_11c;
        param_1[8] = local_118;
        *(undefined4 *)(param_1 + 6) = local_128;
        *(undefined4 *)((long)param_1 + 0x34) = uStack_124;
        *(undefined4 *)(param_1 + 7) = uStack_120;
        *(undefined4 *)((long)param_1 + 0x3c) = uStack_11c;
        *param_1 = local_178;
        param_1[1] = uStack_170;
        param_1[4] = local_90._8_8_;
        param_1[5] = local_80;
        uStack_168._0_4_ = SUB84(local_68,0);
        uStack_168._4_4_ = (undefined4)((ulong)local_68 >> 0x20);
        auStack_160._0_4_ = local_90._0_4_;
        auStack_160._4_4_ = local_90._4_4_;
        *(undefined4 *)(param_1 + 2) = (undefined4)uStack_168;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_168._4_4_;
        *(undefined4 *)(param_1 + 3) = auStack_160._0_4_;
        *(undefined4 *)((long)param_1 + 0x1c) = auStack_160._4_4_;
        param_1[9] = local_100 - uVar8;
                    /* try { // try from 001bf739 to 001bf745 has its CatchHandler @ 001bf7d8 */
        uStack_168 = pcVar10;
        auStack_160 = local_90;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h068543f44d037b0aE(&local_a8);
        if (cVar12 == '\0') {
                    /* try { // try from 001bf753 to 001bf75f has its CatchHandler @ 001bf883 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h068543f44d037b0aE(&local_e0);
        }
                    /* try { // try from 001bf766 to 001bf772 has its CatchHandler @ 001bf86c */
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hef8b921f38343bf4E(&local_f8);
                    /* try { // try from 001bf779 to 001bf785 has its CatchHandler @ 001bf820 */
        _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hfe845c517ac2f71cE
                  (&local_c8);
        goto LAB_001bf786;
      }
      param_1[3] = local_118;
      *(undefined4 *)(param_1 + 1) = local_128;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_124;
      *(undefined4 *)(param_1 + 2) = uStack_120;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_11c;
      param_1[4] = 0x8000000000000004;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001bf638 to 001bf644 has its CatchHandler @ 001bf7e0 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h068543f44d037b0aE(&local_a8);
                    /* try { // try from 001bf645 to 001bf651 has its CatchHandler @ 001bf7d0 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h068543f44d037b0aE(local_90);
                    /* try { // try from 001bf655 to 001bf661 has its CatchHandler @ 001bf888 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h068543f44d037b0aE(&local_78);
      bVar16 = true;
      bVar4 = false;
      if (cVar12 == '\0') goto LAB_001bf66f;
    }
    else {
      uVar14 = 0x8000000000000003;
LAB_001bf341:
      param_1[3] = param_2[2];
      uVar5 = *(undefined4 *)((long)param_2 + 4);
      uVar6 = *(undefined4 *)(param_2 + 1);
      uVar7 = *(undefined4 *)((long)param_2 + 0xc);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)param_2;
      *(undefined4 *)((long)param_1 + 0xc) = uVar5;
      *(undefined4 *)(param_1 + 2) = uVar6;
      *(undefined4 *)((long)param_1 + 0x14) = uVar7;
      param_1[4] = uVar14;
      *param_1 = 0x8000000000000000;
      bVar4 = true;
      bVar16 = false;
LAB_001bf66f:
                    /* try { // try from 001bf66f to 001bf67b has its CatchHandler @ 001bf883 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h068543f44d037b0aE(&local_e0);
    }
                    /* try { // try from 001bf67c to 001bf688 has its CatchHandler @ 001bf86c */
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hef8b921f38343bf4E(&local_f8);
                    /* try { // try from 001bf689 to 001bf695 has its CatchHandler @ 001bf820 */
    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hfe845c517ac2f71cE
              (&local_c8);
    if (bVar4) goto LAB_001bf69b;
  }
  if (!bVar16) {
    return param_1;
  }
LAB_001bf786:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h068543f44d037b0aE(param_2);
  return param_1;
}