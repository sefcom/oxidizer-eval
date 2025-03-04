/* WARNING: Removing unreachable block (ram,0x002b8a5b) */

void _ZN6uu_ptx16format_roff_line17h4297720d7d6a4583E
               (undefined4 *param_1,undefined **param_2,long param_3,long param_4,undefined8 param_5
               ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10)

{
  char cVar1;
  undefined uVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_RDX;
  undefined **ppuVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  long local_200;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined **local_1c8;
  code *pcStack_1c0;
  undefined ***local_1b8;
  code *local_1b0;
  undefined *puStack_1a8;
  code *local_1a0;
  undefined *local_198;
  code *pcStack_190;
  undefined8 **local_188;
  undefined8 local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined **local_168;
  undefined8 uStack_160;
  undefined ***local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 *local_f0;
  long local_e8;
  long local_e0;
  undefined **local_d8;
  code *local_d0;
  undefined ***local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined ***local_a8;
  code *local_a0;
  undefined *local_90 [3];
  undefined8 *local_78 [3];
  undefined local_60 [24];
  undefined local_48 [24];
  
  local_1e0 = 0;
  uStack_1d8 = 1;
  local_1d0 = 0;
  local_d0 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
  local_1c8 = &PTR_DAT_003ee100;
  pcStack_1c0 = (code *)0x1;
  puStack_1a8 = (undefined *)0x0;
  local_1b8 = &local_d8;
  local_1b0 = (code *)0x1;
                    /* try { // try from 002b852b to 002b866e has its CatchHandler @ 002b8a58 */
  local_f0 = param_1;
  local_e0 = param_4;
  local_d8 = param_2;
  uVar2 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17h48ff5af1aa7ea5e9E
                    (&local_1e0,&local_1c8);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h3bbd009910b604edE
            (uVar2,&PTR_s_src_uu_ptx_src_ptx_rs_003ee190);
  cVar1 = *(char *)((long)param_2 + 0x5a);
  if (cVar1 == '\0') {
    ppuVar5 = &PTR_s_src_uu_ptx_src_ptx_rs_003ee1a8;
    lVar6 = 0;
    lVar3 = param_3;
  }
  else {
    lVar3 = 0;
    auVar7 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                       (0,param_3,param_5,param_6);
    if (auVar7._0_8_ == 0) {
      ppuVar5 = &PTR_s_src_uu_ptx_src_ptx_rs_003ee1c0;
      local_200 = param_3;
      goto LAB_002b8978;
    }
    auVar8 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17h6c3139838afd9563E
                       (auVar7._0_8_,auVar7._8_8_,param_9,param_10);
    _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17he60d0121d8eb8a5fE
              (auVar8._0_8_,auVar8._8_8_);
    lVar6 = param_3 - extraout_RDX;
    lVar3 = _ZN4core3cmp6max_by17h25e6646c8b089280E(auVar7._8_8_,lVar6);
    ppuVar5 = &PTR_s_src_uu_ptx_src_ptx_rs_003ee1d8;
  }
  auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h9dd60db5726c3817E
                     (lVar6,lVar3,param_7,param_8,ppuVar5);
  local_200 = local_e0;
  auVar8 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                     (param_3,local_e0,param_5,param_6);
  local_e8 = auVar8._0_8_;
  if (local_e8 != 0) {
    auVar9 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h9dd60db5726c3817E
                       (local_200,param_8,param_7,param_8,&PTR_s_src_uu_ptx_src_ptx_rs_003ee208);
    _ZN6uu_ptx17get_output_chunks17h767f800997394e82E
              (&local_1c8,auVar7._0_8_,auVar7._8_8_,auVar8._8_8_,auVar9._0_8_,auVar9._8_8_,param_2);
    local_158 = local_1b8;
    local_168 = local_1c8;
    uStack_160 = pcStack_1c0;
    local_138 = local_1a0;
    local_148 = local_1b0;
    uStack_140 = puStack_1a8;
    local_118 = local_188;
    local_128 = local_198;
    uStack_120 = pcStack_190;
    local_f8 = local_170;
    local_108 = (undefined4)local_180;
    uStack_104 = local_180._4_4_;
    uStack_100 = uStack_178;
    uStack_fc = uStack_174;
                    /* try { // try from 002b86f3 to 002b8702 has its CatchHandler @ 002b8a17 */
    _ZN6uu_ptx17format_roff_field17h47edd2e5708f32dcE(local_90,pcStack_1c0,local_1b8);
                    /* try { // try from 002b8713 to 002b8722 has its CatchHandler @ 002b89bd */
    _ZN6uu_ptx17format_roff_field17h47edd2e5708f32dcE(local_78,uStack_140,local_138);
                    /* try { // try from 002b8723 to 002b873d has its CatchHandler @ 002b89c2 */
    _ZN6uu_ptx17format_roff_field17h47edd2e5708f32dcE(local_60,local_e8,auVar8._8_8_);
                    /* try { // try from 002b874e to 002b875d has its CatchHandler @ 002b89c7 */
    _ZN6uu_ptx17format_roff_field17h47edd2e5708f32dcE(local_48,uStack_120,local_118);
                    /* try { // try from 002b876e to 002b877d has its CatchHandler @ 002b89cc */
    _ZN6uu_ptx17format_roff_field17h47edd2e5708f32dcE
              (&local_a8,CONCAT44(uStack_fc,uStack_100),local_f8);
    pcStack_1c0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_1b0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_1a0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    pcStack_190 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_180 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_d8 = &PTR_DAT_003ee110;
    local_d0 = (code *)0x6;
    local_b8 = 0;
    local_c0 = 5;
                    /* try { // try from 002b87fe to 002b881e has its CatchHandler @ 002b89d1 */
    local_1c8 = local_90;
    local_1b8 = (undefined ***)local_78;
    puStack_1a8 = local_60;
    local_198 = local_48;
    local_188 = &local_a8;
    local_c8 = &local_1c8;
    uVar2 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17h48ff5af1aa7ea5e9E
                      (&local_1e0,&local_d8);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h3bbd009910b604edE
              (uVar2,&PTR_s_src_uu_ptx_src_ptx_rs_003ee220);
                    /* try { // try from 002b881f to 002b882e has its CatchHandler @ 002b89cc */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(&local_a8);
                    /* try { // try from 002b882f to 002b883b has its CatchHandler @ 002b89c7 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(local_48);
                    /* try { // try from 002b883c to 002b8848 has its CatchHandler @ 002b89c2 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(local_60);
                    /* try { // try from 002b8849 to 002b8855 has its CatchHandler @ 002b89bd */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(local_78);
                    /* try { // try from 002b8856 to 002b8895 has its CatchHandler @ 002b8a17 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(local_90);
    if (cVar1 != '\0' || *(char *)((long)param_2 + 0x59) != '\0') {
      _ZN6uu_ptx17format_roff_field17h47edd2e5708f32dcE(&local_d8,param_9,param_10);
      local_a0 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      local_1c8 = &PTR_DAT_003ee170;
      pcStack_1c0 = (code *)0x2;
      puStack_1a8 = (undefined *)0x0;
      local_1b0 = (code *)0x1;
                    /* try { // try from 002b88d9 to 002b88f6 has its CatchHandler @ 002b89ab */
      local_1b8 = (undefined ***)&local_a8;
      local_a8 = &local_d8;
      uVar2 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17h48ff5af1aa7ea5e9E
                        (&local_1e0,&local_1c8);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h3bbd009910b604edE
                (uVar2,&PTR_s_src_uu_ptx_src_ptx_rs_003ee238);
                    /* try { // try from 002b88f7 to 002b8903 has its CatchHandler @ 002b8a17 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(&local_d8);
    }
    *(undefined8 *)(local_f0 + 4) = local_1d0;
    *local_f0 = (undefined4)local_1e0;
    local_f0[1] = local_1e0._4_4_;
    local_f0[2] = (undefined4)uStack_1d8;
    local_f0[3] = uStack_1d8._4_4_;
                    /* try { // try from 002b891d to 002b8929 has its CatchHandler @ 002b89a4 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(&local_108);
                    /* try { // try from 002b892a to 002b8936 has its CatchHandler @ 002b899a */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(&local_128);
                    /* try { // try from 002b8937 to 002b8943 has its CatchHandler @ 002b8990 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(&local_148);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(&local_168);
    return;
  }
  ppuVar5 = &PTR_s_src_uu_ptx_src_ptx_rs_003ee1f0;
  local_e8 = 0;
  lVar3 = param_3;
LAB_002b8978:
                    /* try { // try from 002b8978 to 002b898f has its CatchHandler @ 002b8a58 */
  uVar4 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                    (param_5,param_6,lVar3,local_200,ppuVar5);
                    /* catch() { ... } // from try @ 002b8937 with catch @ 002b8990 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(&local_168);
  _Unwind_Resume(uVar4);
  return;
}