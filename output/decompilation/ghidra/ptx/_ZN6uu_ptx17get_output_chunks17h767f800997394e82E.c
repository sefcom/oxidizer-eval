void _ZN6uu_ptx17get_output_chunks17h767f800997394e82E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5,long param_6,long param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  ulong uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined *local_1b8;
  undefined8 local_1b0;
  long *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  long *plStack_180;
  ulong local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long local_150;
  ulong local_148;
  undefined8 *local_140;
  long local_138;
  undefined8 local_130;
  undefined8 local_128;
  long *plStack_120;
  ulong local_118;
  undefined8 local_110;
  long *plStack_108;
  undefined8 local_100;
  long local_f8;
  code *local_f0;
  undefined8 *local_e8;
  code *local_e0;
  long local_d8;
  long local_d0;
  undefined8 *local_c8;
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
  long *plStack_58;
  ulong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_138 = *(long *)(param_7 + 0x50);
  uVar6 = *(ulong *)(param_7 + 0x48) >> 1;
  local_130 = param_2;
  local_c8 = param_1;
  uVar1 = _ZN4core3cmp6max_by17hbbe48af9e9e1ea74E(uVar6 - local_138);
  local_d8 = *(long *)(param_7 + 0x28);
  local_148 = _ZN4core3cmp6max_by17hbbe48af9e9e1ea74E(~(local_d8 * 2 + param_4) + uVar6);
  _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17hbb163462bfbc6d30E(&local_1b8,uVar6,0);
  if (local_1b8 == (undefined *)0x0) {
    local_168 = local_1b0;
    uStack_160 = local_1a8;
    local_158 = 0;
                    /* try { // try from 002b75ba to 002b75c8 has its CatchHandler @ 002b7c87 */
    _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17hbb163462bfbc6d30E(&local_1b8,uVar6,0);
    if (local_1b8 == (undefined *)0x0) {
      local_188 = local_1b0;
      plStack_180 = local_1a8;
      local_178 = 0;
                    /* try { // try from 002b75f2 to 002b7600 has its CatchHandler @ 002b7c82 */
      _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17hbb163462bfbc6d30E
                (&local_1b8,uVar6,0);
      if (local_1b8 == (undefined *)0x0) {
        local_128 = local_1b0;
        plStack_120 = local_1a8;
        local_118 = 0;
                    /* try { // try from 002b7633 to 002b7641 has its CatchHandler @ 002b7c7d */
        _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17hbb163462bfbc6d30E
                  (&local_1b8,uVar6,0);
        uVar3 = local_130;
        if (local_1b8 == (undefined *)0x0) {
          local_110 = local_1b0;
          plStack_108 = local_1a8;
          local_100 = 0;
                    /* try { // try from 002b7676 to 002b76f2 has its CatchHandler @ 002b7c8c */
          _ZN6uu_ptx8trim_idx17hb7cdb8e465fc0246E(local_130,param_3,0,param_3);
          uVar2 = _ZN4core3cmp6max_by17hbbe48af9e9e1ea74E(extraout_RDX - uVar1);
          uVar2 = _ZN6uu_ptx21trim_broken_word_left17hd50f7f90ebb3c8c6E
                            (uVar3,param_3,uVar2,extraout_RDX);
          auVar7 = _ZN6uu_ptx8trim_idx17hb7cdb8e465fc0246E(uVar3,param_3,uVar2,extraout_RDX);
          local_150 = auVar7._0_8_;
          auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h9dd60db5726c3817E
                             (local_150,auVar7._8_8_,uVar3,param_3,
                              &PTR_s_src_uu_ptx_src_ptx_rs_003edee0);
          _ZN99__LT_alloc__string__String_u20_as_u20_core__iter__traits__collect__FromIterator_LT__RF_char_GT__GT_9from_iter17ha7897a8cad1cbef8E
                    (local_c0,auVar7._0_8_,auVar7._0_8_ + auVar7._8_8_ * 4);
          uVar3 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17hd2a6d42d8182f9ebE
                            (local_b8,local_b0 + local_b8);
                    /* try { // try from 002b7710 to 002b778a has its CatchHandler @ 002b7caa */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h3f74110675a0c169E(&local_188,uVar3);
          if (uVar1 < local_178) {
                    /* try { // try from 002b7bf4 to 002b7c0c has its CatchHandler @ 002b7caa */
                    /* WARNING: Subroutine does not return */
            _ZN4core9panicking5panic17h8c3a660c3523e4a4E
                      (&DAT_0015ec78,0x31,&PTR_s_src_uu_ptx_src_ptx_rs_003edef8);
          }
          uVar3 = _ZN4core3cmp6min_by17hf83f431a39c20930E(local_148,param_6);
          uVar3 = _ZN6uu_ptx22trim_broken_word_right17hfe7aac5c1f353599E(param_5,param_6,0,uVar3);
          _ZN6uu_ptx8trim_idx17hb7cdb8e465fc0246E(param_5,param_6,0,uVar3);
          auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h9dd60db5726c3817E
                             (0,extraout_RDX_00,param_5,param_6,
                              &PTR_s_src_uu_ptx_src_ptx_rs_003edf10);
          _ZN99__LT_alloc__string__String_u20_as_u20_core__iter__traits__collect__FromIterator_LT__RF_char_GT__GT_9from_iter17ha7897a8cad1cbef8E
                    (local_a8,auVar7._0_8_,auVar7._0_8_ + auVar7._8_8_ * 4);
          uVar3 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17hd2a6d42d8182f9ebE
                            (local_a0,local_98 + local_a0);
                    /* try { // try from 002b77a8 to 002b7865 has its CatchHandler @ 002b7caf */
          local_140 = &local_128;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h3f74110675a0c169E(local_140,uVar3);
          uVar6 = local_178;
          if (local_148 < local_118) {
                    /* try { // try from 002b7c0f to 002b7c27 has its CatchHandler @ 002b7caf */
                    /* WARNING: Subroutine does not return */
            _ZN4core9panicking5panic17h8c3a660c3523e4a4E
                      (&DAT_0015eca9,0x2f,&PTR_s_src_uu_ptx_src_ptx_rs_003edf28);
          }
          lVar4 = _ZN6uu_ptx8trim_idx17hb7cdb8e465fc0246E(param_5,param_6,extraout_RDX_00,param_6);
          lVar5 = _ZN4core3cmp6max_by17hbbe48af9e9e1ea74E(uVar1 - (uVar6 + local_138));
          uVar3 = _ZN4core3cmp6min_by17hf83f431a39c20930E(param_6,lVar4 + lVar5);
          uVar3 = _ZN6uu_ptx22trim_broken_word_right17hfe7aac5c1f353599E
                            (param_5,param_6,lVar4,uVar3);
          auVar7 = _ZN6uu_ptx8trim_idx17hb7cdb8e465fc0246E(param_5,param_6,lVar4,uVar3);
          lVar5 = auVar7._8_8_;
          auVar8 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h9dd60db5726c3817E
                             (auVar7._0_8_,lVar5,param_5,param_6,
                              &PTR_s_src_uu_ptx_src_ptx_rs_003edf40);
          _ZN99__LT_alloc__string__String_u20_as_u20_core__iter__traits__collect__FromIterator_LT__RF_char_GT__GT_9from_iter17ha7897a8cad1cbef8E
                    (local_90,auVar8._0_8_,auVar8._0_8_ + auVar8._8_8_ * 4);
          local_d0 = auVar7._0_8_;
          uVar3 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17hd2a6d42d8182f9ebE
                            (local_88,local_80 + local_88);
                    /* try { // try from 002b7892 to 002b7940 has its CatchHandler @ 002b7c94 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h3f74110675a0c169E(&local_110,uVar3);
          uVar1 = local_118;
          uVar3 = local_130;
          _ZN6uu_ptx8trim_idx17hb7cdb8e465fc0246E(local_130,param_3,0,local_150);
          lVar4 = _ZN4core3cmp6max_by17hbbe48af9e9e1ea74E(local_148 - (local_138 + uVar1));
          uVar2 = _ZN4core3cmp6max_by17hbbe48af9e9e1ea74E(extraout_RDX_01 - lVar4);
          uVar2 = _ZN6uu_ptx21trim_broken_word_left17hd50f7f90ebb3c8c6E
                            (uVar3,param_3,uVar2,extraout_RDX_01);
          auVar7 = _ZN6uu_ptx8trim_idx17hb7cdb8e465fc0246E(uVar3,param_3,uVar2,extraout_RDX_01);
          lVar4 = auVar7._0_8_;
          auVar8 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h9dd60db5726c3817E
                             (lVar4,auVar7._8_8_,uVar3,param_3,&PTR_s_src_uu_ptx_src_ptx_rs_003edf58
                             );
          _ZN99__LT_alloc__string__String_u20_as_u20_core__iter__traits__collect__FromIterator_LT__RF_char_GT__GT_9from_iter17ha7897a8cad1cbef8E
                    (local_78,auVar8._0_8_,auVar8._0_8_ + auVar8._8_8_ * 4);
          uVar3 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17hd2a6d42d8182f9ebE
                            (local_70,local_68 + local_70);
                    /* try { // try from 002b7959 to 002b7a4a has its CatchHandler @ 002b7c66 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h3f74110675a0c169E(&local_168,uVar3);
          if ((extraout_RDX_00 != param_6) &&
             ((local_d0 == lVar5 || (local_140 = &local_110, lVar5 != param_6)))) {
            uVar3 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17hd2a6d42d8182f9ebE
                              (*(long *)(param_7 + 0x20),local_d8 + *(long *)(param_7 + 0x20));
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h3f74110675a0c169E(local_140,uVar3);
          }
          if (local_150 != 0) {
            if (lVar4 == auVar7._8_8_) {
              local_f0 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
              ;
              local_e8 = &local_188;
              local_e0 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
              ;
              local_1b8 = &DAT_001562c0;
              local_1b0 = 2;
              local_198 = 0;
              local_1a8 = &local_f8;
              local_1a0 = 2;
              local_f8 = param_7 + 0x18;
              _ZN4core6option15Option_LT_T_GT_11map_or_else17hb716a3158a91a555E
                        (&local_60,&local_1b8);
                    /* try { // try from 002b7a4b to 002b7a54 has its CatchHandler @ 002b7c47 */
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E
                        (&local_188);
              local_178 = local_50;
              local_188 = local_60;
              plStack_180 = plStack_58;
            }
            else if (lVar4 != 0) {
              local_f0 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
              ;
              local_e0 = 
              _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
              ;
              local_1b8 = &DAT_001562c0;
              local_1b0 = 2;
              local_198 = 0;
              local_1a8 = &local_f8;
              local_1a0 = 2;
                    /* try { // try from 002b7ad8 to 002b7ae9 has its CatchHandler @ 002b7c66 */
              local_f8 = param_7 + 0x18;
              local_e8 = &local_168;
              _ZN4core6option15Option_LT_T_GT_11map_or_else17hb716a3158a91a555E
                        (&local_48,&local_1b8);
                    /* try { // try from 002b7aea to 002b7af3 has its CatchHandler @ 002b7c28 */
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E
                        (&local_168);
              local_158 = local_38;
              local_168 = CONCAT44(uStack_44,local_48);
              uStack_160 = (long *)CONCAT44(uStack_3c,uStack_40);
            }
          }
          local_c8[2] = local_100;
          *local_c8 = local_110;
          local_c8[1] = plStack_108;
          local_c8[5] = local_178;
          local_c8[3] = local_188;
          local_c8[4] = plStack_180;
          local_c8[6] = local_128;
          local_c8[7] = plStack_120;
          local_c8[8] = local_118;
          *(undefined4 *)(local_c8 + 9) = (undefined4)local_168;
          *(undefined4 *)((long)local_c8 + 0x4c) = local_168._4_4_;
          *(undefined4 *)(local_c8 + 10) = (undefined4)uStack_160;
          *(undefined4 *)((long)local_c8 + 0x54) = uStack_160._4_4_;
          local_c8[0xb] = local_158;
                    /* try { // try from 002b7b6c to 002b7b78 has its CatchHandler @ 002b7c94 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(local_78);
                    /* try { // try from 002b7b80 to 002b7b8c has its CatchHandler @ 002b7caf */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(local_90);
                    /* try { // try from 002b7b94 to 002b7ba0 has its CatchHandler @ 002b7caa */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(local_a8);
                    /* try { // try from 002b7ba3 to 002b7baf has its CatchHandler @ 002b7c8c */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(local_c0);
          return;
        }
                    /* try { // try from 002b7bec to 002b7bf1 has its CatchHandler @ 002b7c7d */
        uVar3 = _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE(local_1b0,local_1a8);
      }
      else {
                    /* try { // try from 002b7bdf to 002b7be4 has its CatchHandler @ 002b7c82 */
        uVar3 = _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE(local_1b0,local_1a8);
      }
      goto LAB_002b7c28;
    }
  }
  else {
    _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE(local_1b0,local_1a8);
  }
                    /* try { // try from 002b7bd2 to 002b7bd7 has its CatchHandler @ 002b7c87 */
  uVar3 = _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE();
LAB_002b7c28:
                    /* catch() { ... } // from try @ 002b7aea with catch @ 002b7c28 */
  local_158 = local_38;
                    /* try { // try from 002b7c6e to 002b7cff has its CatchHandler @ 002b7d08 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(local_78);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(local_90);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(local_a8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(local_c0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(&local_110);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(&local_128);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(&local_188);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbabe7cf62dac4e15E(&local_168);
  _Unwind_Resume(uVar3);
  return;
}