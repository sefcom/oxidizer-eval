long * _ZN7uu_sort6chunks4read17hb6526332bacfaf4dE
                 (long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                 undefined4 param_9,undefined8 param_10)

{
  ulong uVar1;
  undefined uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulong local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  long local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulong local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  ulong *local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  ulong local_38;
  
  local_148 = param_3[2];
  local_158 = *param_3;
  uStack_150 = param_3[1];
  local_128 = param_3[5];
  local_138 = param_3[3];
  uStack_130 = param_3[4];
  local_108 = param_3[8];
  local_118 = param_3[6];
  uStack_110 = param_3[7];
  local_e8 = param_3[0xb];
  local_f8 = param_3[9];
  uStack_f0 = param_3[10];
  local_168 = param_3[0xe];
  local_178 = *(undefined4 *)(param_3 + 0xc);
  uStack_174 = *(undefined4 *)((long)param_3 + 100);
  uStack_170 = *(undefined4 *)(param_3 + 0xd);
  uStack_16c = *(undefined4 *)((long)param_3 + 0x6c);
  uVar1 = *(ulong *)(param_6 + 0x10);
  if (local_168 < uVar1) {
                    /* try { // try from 0025c525 to 0025c593 has its CatchHandler @ 0025c7c4 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_6resize17h8264c119ba4725aeE(&local_178,uVar1 + 0x2800,0);
  }
  auVar4 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17h4242e70a6429aee1E
                     (uVar1,CONCAT44(uStack_16c,uStack_170),local_168,
                      &PTR_s_src_uu_sort_src_chunks_rs_003017e0);
  _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15copy_from_slice17hd9ca431368e04b79E
            (auVar4._0_8_,auVar4._8_8_,*(undefined8 *)(param_6 + 8),uVar1,
             &PTR_s_src_uu_sort_src_chunks_rs_003017f8);
  _ZN7uu_sort6chunks14read_to_buffer17h9fbf6c8e152af272E
            (&local_c8,param_7,&local_178,param_4,param_5,*(undefined8 *)(param_6 + 0x10),param_9);
  if (local_c8 == 0) {
    uVar2 = (undefined)uStack_b8;
    local_e0 = uStack_c0;
    *(undefined8 *)(param_6 + 0x10) = 0;
    if (local_168 < uStack_c0) {
                    /* try { // try from 0025c79b to 0025c7aa has its CatchHandler @ 0025c7c4 */
      uVar3 = _ZN4core5slice5index26slice_start_index_len_fail17hff2ebd3969f5a2ecE
                        (uStack_c0,local_168,&PTR_s_src_uu_sort_src_chunks_rs_00301828);
                    /* catch() { ... } // from try @ 0025c755 with catch @ 0025c7ab */
      _ZN4core3ptr77drop_in_place_LT_alloc__vec__Vec_LT_uu_sort__numeric_str_cmp__NumInfo_GT__GT_17h4b358fb61bffb9d2E
                (&local_118);
      _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hf2277ef471272728E
                (&local_138);
      _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_uu_sort__Line_GT__GT_17hc95d742df86ef0eaE
                (&local_158);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar3);
    }
    uVar3 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17h57e6a10e070b3bc9E
                      (CONCAT44(uStack_16c,uStack_170) + uStack_c0,
                       local_168 + CONCAT44(uStack_16c,uStack_170));
                    /* try { // try from 0025c633 to 0025c63d has its CatchHandler @ 0025c7c4 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h40580542cdab00bdE(param_6,uVar3);
    if (uStack_c0 != 0) {
      local_38 = local_168;
      local_48 = CONCAT44(uStack_174,local_178);
      uStack_40 = CONCAT44(uStack_16c,uStack_170);
      uStack_b8 = local_128;
      local_c8 = local_138;
      uStack_c0 = uStack_130;
      local_b0 = local_158;
      uStack_a8 = uStack_150;
      local_a0 = local_148;
      local_68 = &local_e0;
      local_98 = local_118;
      uStack_90 = uStack_110;
      local_88 = local_108;
      local_80 = (undefined4)local_f8;
      uStack_7c = local_f8._4_4_;
      uStack_78 = (undefined4)uStack_f0;
      uStack_74 = uStack_f0._4_4_;
      local_70 = local_e8;
      local_60 = &param_9;
      local_58 = param_10;
      _ZN7uu_sort6chunks5Chunk7try_new17h067ba70e68dafea3E(&local_d8,&local_48,&local_c8);
      if (local_d8 != 0) {
        *param_1 = local_d8;
        param_1[1] = local_d0;
        return param_1;
      }
      uVar3 = _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h6e2915accf477763E(param_2);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd1d5e6f7e0663c01E(uVar3);
      *(undefined *)(param_1 + 1) = uVar2;
      *param_1 = 0;
      return param_1;
    }
    *(undefined *)(param_1 + 1) = (undefined)uStack_b8;
    *param_1 = 0;
                    /* try { // try from 0025c74b to 0025c754 has its CatchHandler @ 0025c7bf */
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h026152d332835070E(&local_178);
                    /* try { // try from 0025c755 to 0025c761 has its CatchHandler @ 0025c7ab */
    _ZN4core3ptr74drop_in_place_LT_alloc__vec__Vec_LT_uu_sort__GeneralF64ParseResult_GT__GT_17h9d2c36f5ae56d73cE
              (&local_f8);
                    /* try { // try from 0025c762 to 0025c76b has its CatchHandler @ 0025c7ba */
    _ZN4core3ptr77drop_in_place_LT_alloc__vec__Vec_LT_uu_sort__numeric_str_cmp__NumInfo_GT__GT_17h4b358fb61bffb9d2E
              (&local_118);
                    /* try { // try from 0025c76c to 0025c775 has its CatchHandler @ 0025c7b5 */
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hf2277ef471272728E
              (&local_138);
  }
  else {
    *(undefined4 *)param_1 = (undefined4)uStack_c0;
    *(undefined4 *)((long)param_1 + 4) = uStack_c0._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_b8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_b8._4_4_;
                    /* try { // try from 0025c5aa to 0025c5b3 has its CatchHandler @ 0025c7bf */
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h026152d332835070E(&local_178);
                    /* try { // try from 0025c5b4 to 0025c5c0 has its CatchHandler @ 0025c7b0 */
    _ZN4core3ptr74drop_in_place_LT_alloc__vec__Vec_LT_uu_sort__GeneralF64ParseResult_GT__GT_17h9d2c36f5ae56d73cE
              (&local_f8);
                    /* try { // try from 0025c5c1 to 0025c5ca has its CatchHandler @ 0025c7ba */
    _ZN4core3ptr77drop_in_place_LT_alloc__vec__Vec_LT_uu_sort__numeric_str_cmp__NumInfo_GT__GT_17h4b358fb61bffb9d2E
              (&local_118);
                    /* try { // try from 0025c5cb to 0025c5d4 has its CatchHandler @ 0025c7b5 */
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hf2277ef471272728E
              (&local_138);
  }
  _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_uu_sort__Line_GT__GT_17hc95d742df86ef0eaE
            (&local_158);
  return param_1;
}