void _ZN6uu_ptx17get_output_chunks17h0c2bb66b7373631aE
               (undefined (*param_1) [16],undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5,long param_6,long param_7)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  ulong uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined local_1b8 [16];
  ulong local_1a8;
  ulong local_1a0;
  undefined local_198 [16];
  undefined8 local_188;
  undefined *local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined8 local_160;
  undefined local_158 [16];
  ulong local_148;
  undefined local_140 [16];
  undefined8 local_130;
  long local_128;
  code *local_120;
  undefined *local_118;
  code *local_110;
  long local_108;
  long local_100;
  undefined (*local_f8) [16];
  undefined *local_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined local_c0 [8];
  long local_b8;
  long local_b0;
  undefined local_a8 [8];
  long local_a0;
  long local_98;
  undefined local_90 [8];
  long local_88;
  long local_80;
  undefined local_78 [8];
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_168 = *(long *)(param_7 + 0x50);
  uVar7 = *(ulong *)(param_7 + 0x48) >> 1;
  local_160 = param_2;
  local_f8 = param_1;
  uVar2 = _ZN4core3cmp3Ord3max17hecb99a5fb0c577c5E(uVar7 - local_168);
  local_108 = *(long *)(param_7 + 0x28);
  local_1a0 = _ZN4core3cmp3Ord3max17hecb99a5fb0c577c5E(~(local_108 * 2 + param_4) + uVar7);
  local_198 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h41210ac9edb33abeE
                        (uVar7,1,1,&PTR_s__home_34r7hm4n__rustup_toolchain_00351510);
  local_188 = 0;
                    /* try { // try from 0022c6c8 to 0022c6dc has its CatchHandler @ 0022cc9b */
  local_1b8 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h41210ac9edb33abeE
                        (uVar7,1,1,&PTR_s__home_34r7hm4n__rustup_toolchain_00351510);
  local_1a8 = 0;
                    /* try { // try from 0022c6f0 to 0022c708 has its CatchHandler @ 0022cc96 */
  local_158 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h41210ac9edb33abeE
                        (uVar7,1,1,&PTR_s__home_34r7hm4n__rustup_toolchain_00351510);
  local_148 = 0;
                    /* try { // try from 0022c71f to 0022c737 has its CatchHandler @ 0022cc91 */
  local_140 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h41210ac9edb33abeE
                        (uVar7,1,1,&PTR_s__home_34r7hm4n__rustup_toolchain_00351510);
  uVar4 = local_160;
  local_130 = 0;
                    /* try { // try from 0022c759 to 0022c7c9 has its CatchHandler @ 0022ccc2 */
  _ZN6uu_ptx8trim_idx17h946357e36774701bE(local_160,param_3,0,param_3);
  uVar3 = _ZN4core3cmp3Ord3max17hecb99a5fb0c577c5E(extraout_RDX - uVar2);
  uVar3 = _ZN6uu_ptx21trim_broken_word_left17hd74c554aea0eb997E(uVar4,param_3,uVar3,extraout_RDX);
  auVar8 = _ZN6uu_ptx8trim_idx17h946357e36774701bE(uVar4,param_3,uVar3,extraout_RDX);
  auVar9 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h599a73c91ae99f33E
                     (auVar8._0_8_,auVar8._8_8_,uVar4,param_3,&PTR_s_src_uu_ptx_src_ptx_rs_003519d0)
  ;
  _ZN4core4iter6traits8iterator8Iterator7collect17h271c5ff291e66d45E
            (local_c0,auVar9._0_8_,auVar9._0_8_ + auVar9._8_8_ * 4);
                    /* try { // try from 0022c7e2 to 0022c856 has its CatchHandler @ 0022ccd9 */
  local_170 = auVar8._0_8_;
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hf791cfea2baa4756E
            (local_1b8,local_b8,local_b0 + local_b8);
  if (uVar2 < local_1a8) {
                    /* try { // try from 0022cc5b to 0022cc73 has its CatchHandler @ 0022ccd9 */
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_003801f8)
              ("assertion failed: max_before_size >= before.len()",0x31,
               &PTR_s_src_uu_ptx_src_ptx_rs_003519e8);
  }
  else {
    uVar4 = _ZN4core3cmp3Ord3min17hd46f433d625ea8ebE(local_1a0,param_6);
    uVar4 = _ZN6uu_ptx22trim_broken_word_right17h89ebaf4ee7dd174eE(param_5,param_6,0,uVar4);
    _ZN6uu_ptx8trim_idx17h946357e36774701bE(param_5,param_6,0,uVar4);
    auVar8 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h599a73c91ae99f33E
                       (0,extraout_RDX_00,param_5,param_6,&PTR_s_src_uu_ptx_src_ptx_rs_00351a00);
    _ZN4core4iter6traits8iterator8Iterator7collect17h271c5ff291e66d45E
              (local_a8,auVar8._0_8_,auVar8._0_8_ + auVar8._8_8_ * 4);
                    /* try { // try from 0022c86a to 0022c91c has its CatchHandler @ 0022ccde */
    local_180 = local_158;
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hf791cfea2baa4756E
              (local_180,local_a0,local_98 + local_a0);
    uVar7 = local_1a8;
    if (local_148 <= local_1a0) {
      lVar5 = _ZN6uu_ptx8trim_idx17h946357e36774701bE(param_5,param_6,extraout_RDX_00,param_6);
      lVar6 = _ZN4core3cmp3Ord3max17hecb99a5fb0c577c5E(uVar2 - (uVar7 + local_168));
      uVar4 = _ZN4core3cmp3Ord3min17hd46f433d625ea8ebE(param_6,lVar5 + lVar6);
      uVar4 = _ZN6uu_ptx22trim_broken_word_right17h89ebaf4ee7dd174eE(param_5,param_6,lVar5,uVar4);
      auVar8 = _ZN6uu_ptx8trim_idx17h946357e36774701bE(param_5,param_6,lVar5,uVar4);
      auVar9 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h599a73c91ae99f33E
                         (auVar8._0_8_,auVar8._8_8_,param_5,param_6,
                          &PTR_s_src_uu_ptx_src_ptx_rs_00351a30);
      _ZN4core4iter6traits8iterator8Iterator7collect17h271c5ff291e66d45E
                (local_90,auVar9._0_8_,auVar9._0_8_ + auVar9._8_8_ * 4);
                    /* try { // try from 0022c93d to 0022c9df has its CatchHandler @ 0022ccc7 */
      local_178 = auVar8._8_8_;
      local_100 = extraout_RDX_00;
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hf791cfea2baa4756E
                (local_140,local_88,local_80 + local_88);
      uVar2 = local_148;
      uVar4 = local_160;
      _ZN6uu_ptx8trim_idx17h946357e36774701bE(local_160,param_3,0,local_170);
      lVar5 = _ZN4core3cmp3Ord3max17hecb99a5fb0c577c5E(local_1a0 - (local_168 + uVar2));
      uVar3 = _ZN4core3cmp3Ord3max17hecb99a5fb0c577c5E(extraout_RDX_01 - lVar5);
      uVar3 = _ZN6uu_ptx21trim_broken_word_left17hd74c554aea0eb997E
                        (uVar4,param_3,uVar3,extraout_RDX_01);
      auVar9 = _ZN6uu_ptx8trim_idx17h946357e36774701bE(uVar4,param_3,uVar3,extraout_RDX_01);
      lVar5 = auVar9._0_8_;
      auVar10 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h599a73c91ae99f33E
                          (lVar5,auVar9._8_8_,uVar4,param_3,&PTR_s_src_uu_ptx_src_ptx_rs_00351a48);
      _ZN4core4iter6traits8iterator8Iterator7collect17h271c5ff291e66d45E
                (local_78,auVar10._0_8_,auVar10._0_8_ + auVar10._8_8_ * 4);
                    /* try { // try from 0022c9f3 to 0022cb98 has its CatchHandler @ 0022ccb0 */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hf791cfea2baa4756E
                (local_198,local_70,local_68 + local_70);
      if ((local_100 != param_6) &&
         ((auVar8._0_8_ == local_178 || (local_180 = local_140, local_178 != param_6)))) {
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hf791cfea2baa4756E
                  (local_180,*(long *)(param_7 + 0x20),local_108 + *(long *)(param_7 + 0x20));
      }
      if (local_170 != 0) {
        if (lVar5 == auVar9._8_8_) {
          local_120 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_118 = local_1b8;
          local_110 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_f0 = &DAT_00155170;
          local_e8 = 2;
          local_d0 = 0;
          local_e0 = &local_128;
          local_d8 = 2;
          local_128 = param_7 + 0x18;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h4a28e95acdffaeaeE(&local_60,&local_f0);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E(local_1b8);
          local_1a8 = local_50;
          local_1b8._8_8_ = uStack_58;
          local_1b8._0_8_ = local_60;
        }
        else if (lVar5 != 0) {
          local_120 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_110 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_f0 = &DAT_00155170;
          local_e8 = 2;
          local_d0 = 0;
          local_e0 = &local_128;
          local_d8 = 2;
          local_128 = param_7 + 0x18;
          local_118 = local_198;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h4a28e95acdffaeaeE(&local_48,&local_f0);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E(local_198);
          local_188 = local_38;
          local_198._8_8_ = uStack_40;
          local_198._0_8_ = local_48;
        }
      }
      *(undefined8 *)local_f8[1] = local_130;
      *local_f8 = local_140;
      *(ulong *)(local_f8[2] + 8) = local_1a8;
      *(undefined (*) [16])(local_f8[1] + 8) = local_1b8;
      local_f8[3] = local_158;
      *(ulong *)local_f8[4] = local_148;
      *(undefined4 *)(local_f8[4] + 8) = local_198._0_4_;
      *(undefined4 *)(local_f8[4] + 0xc) = local_198._4_4_;
      *(undefined4 *)local_f8[5] = local_198._8_4_;
      *(undefined4 *)(local_f8[5] + 4) = local_198._12_4_;
      *(undefined8 *)(local_f8[5] + 8) = local_188;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E(local_78);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E(local_90);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E(local_a8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E(local_c0);
      return;
    }
                    /* try { // try from 0022cc76 to 0022cc8e has its CatchHandler @ 0022ccde */
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_003801f8)
              ("assertion failed: max_after_size >= after.len()",0x2f,
               &PTR_s_src_uu_ptx_src_ptx_rs_00351a18);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}