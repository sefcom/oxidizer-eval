void _ZN12forc_publish14md_pre_process17MarkdownFlattener15expand_includes17h83dead0047470900E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  uint local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 *local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  uint local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  int local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  int local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined local_d0 [144];
  undefined8 local_40;
  undefined8 local_38;
  
  local_220 = param_1;
  local_1d8 = param_6;
  auVar8 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_01049580)(param_4,param_5);
  pcVar4 = auVar8._0_8_;
  local_1d0 = 1;
  if (pcVar4 != (char *)0x0) {
    local_1d0 = auVar8._8_8_;
  }
  pcVar6 = ".";
  if (pcVar4 != (char *)0x0) {
    pcVar6 = pcVar4;
  }
  local_208 = 0;
  uStack_200 = 1;
  local_1f8 = 0;
                    /* try { // try from 007644fc to 00764511 has its CatchHandler @ 00764844 */
  _ZN14regex_automata4meta5regex5Regex13captures_iter17hccf880d63147bd55E
            (&local_168,param_7,param_2,param_3);
  (*(code *)PTR_memcpy_01048fd8)(local_d0,&local_168,0x90);
  uVar7 = 0;
  local_218 = param_3;
  local_210 = param_2;
  local_40 = param_2;
  local_38 = param_3;
  do {
                    /* try { // try from 00764550 to 00764564 has its CatchHandler @ 0076483d */
    _ZN95__LT_regex__regex__string__CaptureMatches_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6d814b345fcadbe4E
              (&local_1b0,local_d0);
    if (local_1b0 == 2) {
                    /* try { // try from 007646e3 to 00764720 has its CatchHandler @ 00764844 */
      _ZN4core3ptr57drop_in_place_LT_regex__regex__string__CaptureMatches_GT_17h0333ae05a60aae6aE
                (local_d0);
      uVar2 = local_210;
      uVar3 = local_218;
      auVar8 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                         (uVar7,local_210,local_218);
      lVar5 = auVar8._0_8_;
      if (lVar5 != 0) {
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hdd9024501c8cb502E
                  (&local_208,lVar5,auVar8._8_8_ + lVar5);
        local_220[3] = local_1f8;
        local_220[1] = local_208;
        local_220[2] = uStack_200;
        *local_220 = 6;
        return;
      }
                    /* try { // try from 007647f9 to 00764811 has its CatchHandler @ 00764844 */
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_01049490)
                (uVar2,uVar3,uVar7,uVar3,&PTR_s_forc_plugins_forc_publish_src_md_00f53f40);
LAB_00764812:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_128 = local_170;
    local_138 = local_180;
    uStack_134 = uStack_17c;
    uStack_130 = uStack_178;
    uStack_12c = uStack_174;
    local_148 = local_190;
    uStack_144 = uStack_18c;
    uStack_140 = uStack_188;
    uStack_13c = uStack_184;
    local_158 = local_1a0;
    uStack_154 = uStack_19c;
    uStack_150 = uStack_198;
    uStack_14c = uStack_194;
    local_168 = local_1b0;
    uStack_164 = uStack_1ac;
    uStack_160 = uStack_1a8;
    uStack_15c = uStack_1a4;
    _ZN14regex_automata4util8captures8Captures9get_group17he912e51c5907ba91E(&local_238,&local_158);
    uVar3 = local_228;
    if ((local_238 & 1) == 0) {
                    /* try { // try from 007647cb to 007647f6 has its CatchHandler @ 00764859 */
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_01048e68)
                (&PTR_s_forc_plugins_forc_publish_src_md_00f53f58);
      goto LAB_00764812;
    }
    uVar2 = CONCAT44(uStack_22c,uStack_230);
    auVar8 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                       (uVar7,uVar2,local_210,local_218);
    lVar5 = auVar8._0_8_;
    if (lVar5 == 0) {
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_01049490)
                (local_210,local_218,uVar7,uVar2,&PTR_s_forc_plugins_forc_publish_src_md_00f53f70);
      goto LAB_00764812;
    }
                    /* try { // try from 0076460b to 00764652 has its CatchHandler @ 00764842 */
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hdd9024501c8cb502E
              (&local_208,lVar5,auVar8._8_8_ + lVar5);
    auVar8 = (*(code *)
               PTR__ZN87__LT_regex__regex__string__Captures_u20_as_u20_core__ops__index__Index_LT_usize_GT__GT_5index17hee09901a468b7c4fE_01049940
             )(&local_168,1,&PTR_s_forc_plugins_forc_publish_src_md_00f53f88);
    auVar8 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17h72324a5878dbe828E
                       (auVar8._0_8_,auVar8._8_8_);
    _ZN3std4path4Path4join17h3d685c86d6c853ecE
              (&local_1f0,pcVar6,local_1d0,auVar8._0_8_,auVar8._8_8_);
    uVar7 = uStack_1e8;
                    /* try { // try from 0076465d to 00764669 has its CatchHandler @ 00764818 */
    _ZN3std2fs12canonicalize17h7b404ad07e351b4bE(&local_1c8,uStack_1e8,local_1e0);
    local_228 = local_1b8;
    local_238 = local_1c8;
    uStack_234 = uStack_1c4;
    uStack_230 = uStack_1c0;
    uStack_22c = uStack_1bc;
                    /* try { // try from 0076468d to 007646b7 has its CatchHandler @ 0076481d */
    lVar5 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hb2ceaefb36fdf086E
                      (local_1d8,&local_238);
    if (lVar5 == 0) {
      local_220[3] = local_228;
      *(uint *)(local_220 + 1) = local_238;
      *(undefined4 *)((long)local_220 + 0xc) = uStack_234;
      *(undefined4 *)(local_220 + 2) = uStack_230;
      *(undefined4 *)((long)local_220 + 0x14) = uStack_22c;
      *local_220 = 2;
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h355ad17cb4a62d71E(local_1f0,uVar7);
                    /* try { // try from 00764795 to 007647a1 has its CatchHandler @ 00764816 */
      _ZN4core3ptr51drop_in_place_LT_regex__regex__string__Captures_GT_17h83efac1785873b9eE
                (&local_168);
                    /* try { // try from 007647a2 to 007647ae has its CatchHandler @ 00764844 */
      _ZN4core3ptr57drop_in_place_LT_regex__regex__string__CaptureMatches_GT_17h0333ae05a60aae6aE
                (local_d0);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcc89c62839702889E(&local_208);
      return;
    }
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hdd9024501c8cb502E
              (&local_208,*(long *)(lVar5 + 0x20),*(long *)(lVar5 + 0x28) + *(long *)(lVar5 + 0x20))
    ;
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h355ad17cb4a62d71E
              (CONCAT44(uStack_234,local_238),CONCAT44(uStack_22c,uStack_230));
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h355ad17cb4a62d71E(local_1f0,uVar7);
                    /* try { // try from 007646d3 to 007646da has its CatchHandler @ 0076483d */
    _ZN4core3ptr51drop_in_place_LT_regex__regex__string__Captures_GT_17h83efac1785873b9eE
              (&local_168);
    uVar7 = uVar3;
  } while( true );
}