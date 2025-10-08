undefined8 * _ZN9uu_mktemp6Params4from17h79f2486a494e973aE(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  undefined auVar9 [16];
  bool bVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined auVar17 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  code *local_198;
  code *local_190;
  code *local_188;
  undefined8 *local_180;
  undefined local_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined auStack_160 [16];
  code *local_150;
  int local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  long local_138;
  long local_128;
  long local_120;
  undefined *local_118;
  undefined *local_110;
  code *pcStack_108;
  long local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  code *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  code *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined local_70 [16];
  code *local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  undefined local_40 [16];
  
  local_180 = param_2 + 6;
  local_120 = param_2[6];
  puVar1 = (undefined *)param_2[1];
  pcVar2 = (code *)param_2[2];
  local_178 = (undefined  [8])((ulong)local_178 & 0xffffffff00000000);
  uVar14 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x58,local_178);
                    /* try { // try from 00164c83 to 00164cb3 has its CatchHandler @ 00165395 */
  cVar12 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17hce4324c85153fc81E
                     (puVar1,pcVar2,uVar14);
  if (cVar12 == '\0') {
    param_1[1] = 0x8000000000000001;
    uVar3 = *(undefined4 *)((long)param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 1);
    uVar5 = *(undefined4 *)((long)param_2 + 0xc);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)param_2;
    *(undefined4 *)((long)param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar5;
    param_1[4] = param_2[2];
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h92010b458ccdc0ceE
              (param_2 + 3);
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17he610de4c4ff4ed65E
              (local_180);
    return param_1;
  }
  local_188 = pcVar2;
  _ZN9uu_mktemp32find_last_contiguous_block_of_xs17h8d96f8bfdfc9b9d5E(&local_58,puVar1);
  if (local_58 != 1) {
    if (local_120 == -0x8000000000000000) {
      local_198 = (code *)param_2[2];
      local_1a8 = (undefined *)*param_2;
      uStack_1a0 = (code *)param_2[1];
    }
    else {
      puStack_170 = puVar1 + (long)local_188;
      uStack_168 = local_188;
                    /* try { // try from 00164df4 to 00164e00 has its CatchHandler @ 00165395 */
      local_178 = (undefined  [8])puVar1;
      _ZN4core4iter6traits8iterator8Iterator7collect17h4f4da201e1fe28f0E(&local_1a8,local_178);
    }
    param_1[4] = local_198;
    *(undefined4 *)(param_1 + 2) = (undefined4)local_1a8;
    *(undefined4 *)((long)param_1 + 0x14) = local_1a8._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_1a0;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_1a0._4_4_;
    param_1[1] = 0x8000000000000002;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h92010b458ccdc0ceE
              (param_2 + 3);
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17he610de4c4ff4ed65E
              (local_180);
    if (local_120 == -0x8000000000000000) {
      return param_1;
    }
    goto LAB_001652fd;
  }
  lVar16 = CONCAT44(uStack_4c,uStack_50);
  local_128 = local_48;
  local_e8 = param_2[5];
  local_f8 = *(undefined4 *)(param_2 + 3);
  uStack_f4 = *(undefined4 *)((long)param_2 + 0x1c);
  lVar8 = param_2[3];
  uStack_f0 = *(undefined4 *)(param_2 + 4);
  uStack_ec = *(undefined4 *)((long)param_2 + 0x24);
  if (lVar8 == -0x8000000000000000) {
LAB_00164d4e:
    local_118 = (undefined *)0x0;
    local_110 = &DAT_00000001;
    pcStack_108 = (code *)0x0;
  }
  else {
                    /* try { // try from 00164d20 to 00164d29 has its CatchHandler @ 0016536a */
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h5e9a9c3d89a1dce2E
              (local_178,param_2[4],local_e8);
    local_1a8 = puStack_170;
    uStack_1a0 = uStack_168;
    if (local_178 == (undefined  [8])0x8000000000000000) goto LAB_00164d4e;
    local_110 = puStack_170;
    pcStack_108 = uStack_168;
    local_118 = (undefined *)local_178;
  }
  local_100 = lVar16;
  auVar17 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                      (lVar16,puVar1,local_188);
  uVar14 = auVar17._8_8_;
  lVar16 = auVar17._0_8_;
  if (lVar16 == 0) {
                    /* try { // try from 0016531a to 00165338 has its CatchHandler @ 001653f6 */
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_002000c8)
              (puVar1,local_188,0,local_100,&PTR_s_src_uu_mktemp_src_mktemp_rs_001f8fd0);
LAB_00165368:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* try { // try from 00164e96 to 00164ea5 has its CatchHandler @ 001653f6 */
  _ZN3std4path4Path4join17h54ca0a2412d4ea69E(local_178,local_110,pcStack_108,lVar16,uVar14);
  local_1a8 = puStack_170;
  uStack_1a0 = uStack_168;
                    /* try { // try from 00164eaf to 00164ebe has its CatchHandler @ 00165381 */
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hbac688a0c4ef4a45E
            (&local_a0,&local_1a8);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h4af838b51e1cae1bE(local_178);
                    /* try { // try from 00164ecf to 00164fcd has its CatchHandler @ 00165390 */
  if ((*(char *)((long)param_2 + 0x4b) == '\0') ||
     (cVar12 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                         (lVar16,uVar14), cVar12 == '\0')) {
    if ((lVar8 != -0x8000000000000000) &&
       (cVar12 = (*(code *)PTR__ZN3std4path4Path11is_absolute17hf2dacc49683e82acE_002000e0)
                           (lVar16,uVar14), cVar12 != '\0')) {
      uVar14 = 0x8000000000000005;
      goto LAB_00164f1b;
    }
    pcVar2 = local_90;
    uVar14 = CONCAT44(uStack_94,uStack_98);
    local_178 = (undefined  [8])((ulong)local_178 & 0xffffffff00000000);
    uVar15 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2f,local_178);
    cVar12 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17hce4324c85153fc81E
                       (uVar14,pcVar2,uVar15);
    if (cVar12 == '\0') {
      auVar17 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00200138)(uVar14,pcVar2);
      if (auVar17._0_8_ == 0) {
        local_1a8 = (undefined *)0x0;
        uStack_1a0 = (code *)&DAT_00000001;
        local_198 = (code *)0x0;
      }
      else {
        _local_178 = auVar17;
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hbac688a0c4ef4a45E
                  (&local_1a8,local_178);
      }
                    /* try { // try from 00164fea to 00165027 has its CatchHandler @ 001653a6 */
      lVar16 = (*(code *)PTR__ZN3std4path4Path9file_name17h6d40d88bf3fb287aE_001ffe00)
                         (uVar14,pcVar2);
      if (lVar16 == 0) {
        auVar17._8_8_ = 0;
        auVar17._0_8_ = &DAT_00000001;
        local_70 = auVar17 << 0x40;
        uStack_168 = (code *)0x0;
      }
      else {
        (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001ffdf8)
                  (local_178,lVar16);
        if ((_local_178 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                    /* try { // try from 0016535b to 00165367 has its CatchHandler @ 001653a6 */
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001ffdd0)
                    (&PTR_s_src_uu_mktemp_src_mktemp_rs_001f8fe8);
          goto LAB_00165368;
        }
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h3c498dae33407f89E
                  (local_178,puStack_170,uStack_168);
        local_70 = _local_178;
      }
      local_a8 = local_198;
      local_b8 = (undefined4)local_1a8;
      uStack_b4 = local_1a8._4_4_;
      uStack_b0 = (undefined4)uStack_1a0;
      uStack_ac = uStack_1a0._4_4_;
    }
    else {
      local_a8 = local_90;
      local_b8 = local_a0;
      uStack_b4 = uStack_9c;
      uStack_b0 = uStack_98;
      uStack_ac = uStack_94;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = &DAT_00000001;
      local_70 = auVar9 << 0x40;
      uStack_168 = (code *)0x0;
    }
    pcVar2 = local_188;
    if (local_120 == -0x8000000000000000) {
      local_80 = 1;
      uStack_78 = 0;
      local_88 = 0;
    }
    else {
      local_80 = param_2[7];
      uStack_78 = param_2[8];
      local_88 = local_120;
    }
    local_60 = uStack_168;
    local_40 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                         (local_128,puVar1,local_188);
    if (local_40._0_8_ == 0) {
                    /* try { // try from 0016533b to 00165358 has its CatchHandler @ 001653b6 */
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_002000c8)
                (puVar1,pcVar2,local_128,pcVar2,&PTR_s_src_uu_mktemp_src_mktemp_rs_001f9000);
      goto LAB_00165368;
    }
    local_1a8 = local_40;
    uStack_1a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h6e4bdad1b13e5d00E;
    local_198 = (code *)&local_88;
    local_190 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_178 = (undefined  [8])&DAT_0011b210;
    puStack_170 = (undefined *)0x2;
    auStack_160._8_8_ = 0;
    auStack_160._0_8_ = 2;
                    /* try { // try from 0016514e to 0016515f has its CatchHandler @ 001653b6 */
    uStack_168 = (code *)&local_1a8;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h00d6975f0c0267a7E(&local_58,local_178);
    local_d8 = local_58;
    uStack_d4 = uStack_54;
    uStack_d0 = uStack_50;
    uStack_cc = uStack_4c;
    local_c8 = local_48;
                    /* try { // try from 00165188 to 0016518c has its CatchHandler @ 0016536f */
    cVar13 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                       (CONCAT44(uStack_4c,uStack_50));
    if (cVar13 == '\0') {
      uStack_168 = local_a8;
      pcVar2 = uStack_168;
      local_178 = (undefined  [8])CONCAT44(uStack_b4,local_b8);
      puStack_170 = (undefined *)CONCAT44(uStack_ac,uStack_b0);
      local_150 = local_60;
      local_138 = local_c8;
      local_148 = local_d8;
      uStack_144 = uStack_d4;
      uStack_140 = uStack_d0;
      uStack_13c = uStack_cc;
      param_1[8] = local_c8;
      *(int *)(param_1 + 6) = local_d8;
      *(undefined4 *)((long)param_1 + 0x34) = uStack_d4;
      *(undefined4 *)(param_1 + 7) = uStack_d0;
      *(undefined4 *)((long)param_1 + 0x3c) = uStack_cc;
      *param_1 = local_178;
      param_1[1] = puStack_170;
      param_1[4] = local_70._8_8_;
      param_1[5] = local_60;
      uStack_168._0_4_ = SUB84(local_a8,0);
      uStack_168._4_4_ = (undefined4)((ulong)local_a8 >> 0x20);
      auStack_160._0_4_ = local_70._0_4_;
      auStack_160._4_4_ = local_70._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_168;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_168._4_4_;
      *(undefined4 *)(param_1 + 3) = auStack_160._0_4_;
      *(undefined4 *)((long)param_1 + 0x1c) = auStack_160._4_4_;
      param_1[9] = local_128 - local_100;
      uStack_168 = pcVar2;
      auStack_160 = local_70;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdd7c658a73a0c2dfE(&local_88);
      if (cVar12 == '\0') {
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdd7c658a73a0c2dfE(&local_a0);
      }
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h4af838b51e1cae1bE(&local_118);
      _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h92010b458ccdc0ceE
                (&local_f8);
      goto LAB_001652fd;
    }
    param_1[4] = local_c8;
    *(int *)(param_1 + 2) = local_d8;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_d4;
    *(undefined4 *)(param_1 + 3) = uStack_d0;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_cc;
    param_1[1] = 0x8000000000000004;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdd7c658a73a0c2dfE(&local_88);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdd7c658a73a0c2dfE(local_70);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdd7c658a73a0c2dfE(&local_b8);
    bVar7 = true;
    bVar6 = false;
    bVar10 = false;
    bVar11 = true;
    if (cVar12 == '\0') goto LAB_001651f5;
  }
  else {
    uVar14 = 0x8000000000000003;
LAB_00164f1b:
    param_1[1] = uVar14;
    uVar3 = *(undefined4 *)((long)param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 1);
    uVar5 = *(undefined4 *)((long)param_2 + 0xc);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)param_2;
    *(undefined4 *)((long)param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar5;
    param_1[4] = param_2[2];
    *param_1 = 0x8000000000000000;
    bVar10 = true;
    bVar11 = false;
LAB_001651f5:
    bVar7 = bVar11;
    bVar6 = bVar10;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdd7c658a73a0c2dfE(&local_a0);
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h4af838b51e1cae1bE(&local_118);
  _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h92010b458ccdc0ceE
            (&local_f8);
  if (bVar6) {
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17he610de4c4ff4ed65E
              (local_180);
  }
  if (!bVar7) {
    return param_1;
  }
LAB_001652fd:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdd7c658a73a0c2dfE(param_2);
  return param_1;
}