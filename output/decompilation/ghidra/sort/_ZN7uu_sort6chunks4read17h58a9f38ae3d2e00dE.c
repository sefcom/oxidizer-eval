void _ZN7uu_sort6chunks4read17h58a9f38ae3d2e00dE
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
               undefined8 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  ulong local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulong local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulong *local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulong local_38;
  
  local_158 = param_4[5];
  local_168 = param_4[3];
  uStack_160 = param_4[4];
  local_138 = param_4[8];
  local_148 = param_4[6];
  uStack_140 = param_4[7];
  local_118 = param_4[0xb];
  local_128 = param_4[9];
  uStack_120 = param_4[10];
  uVar5 = param_4[0xc];
  uVar1 = param_4[0xd];
  local_f8 = param_4[0xe];
  local_178 = param_4[0x11];
  local_188 = *(undefined4 *)(param_4 + 0xf);
  uStack_184 = *(undefined4 *)((long)param_4 + 0x7c);
  uStack_180 = *(undefined4 *)(param_4 + 0x10);
  uStack_17c = *(undefined4 *)((long)param_4 + 0x84);
  uVar2 = *(ulong *)(param_7 + 0x10);
  local_108 = param_2;
  local_100 = param_3;
  if (local_178 < uVar2) {
                    /* try { // try from 001c1541 to 001c1609 has its CatchHandler @ 001c17c6 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_6resize17hd0b7699f012edafbE(&local_188,uVar2 + 0x2800);
  }
  auVar6 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17h1c97f681984dd1feE
                     (uVar2,CONCAT44(uStack_17c,uStack_180),local_178);
  _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15copy_from_slice17h4cb53a267c2007e7E
            (auVar6._0_8_,auVar6._8_8_,*(undefined8 *)(param_7 + 8),uVar2);
  _ZN7uu_sort6chunks14read_to_buffer17ha9325b7e544409bcE
            (&local_d8,param_8,param_9,&local_188,param_5,param_6,*(undefined8 *)(param_7 + 0x10),
             param_10);
  if ((int)local_d8 == 1) {
    *(undefined4 *)param_1 = (undefined4)uStack_d0;
    *(undefined4 *)((long)param_1 + 4) = uStack_d0._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_c8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_c8._4_4_;
  }
  else {
    uVar4 = (undefined)uStack_c8;
    local_f0 = uStack_d0;
    *(undefined8 *)(param_7 + 0x10) = 0;
    if (local_178 < uStack_d0) {
                    /* try { // try from 001c17ae to 001c17c3 has its CatchHandler @ 001c17c6 */
      (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_00296ca0)
                (uStack_d0,local_178,&PTR_s_src_uu_sort_src_chunks_rs_0028c510);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2155a296ae1fa540E
              (param_7,CONCAT44(uStack_17c,uStack_180) + uStack_d0,
               local_178 + CONCAT44(uStack_17c,uStack_180));
    if (uStack_d0 != 0) {
      local_38 = local_178;
      local_48 = CONCAT44(uStack_184,local_188);
      uStack_40 = CONCAT44(uStack_17c,uStack_180);
      uStack_c8 = local_158;
      local_d8 = local_168;
      uStack_d0 = uStack_160;
      local_c0 = *param_4;
      uStack_b8 = param_4[1];
      local_b0 = param_4[2];
      local_60 = &local_f0;
      local_a8 = local_148;
      uStack_a0 = uStack_140;
      local_98 = local_138;
      local_90 = (undefined4)local_128;
      uStack_8c = local_128._4_4_;
      uStack_88 = (undefined4)uStack_120;
      uStack_84 = uStack_120._4_4_;
      local_80 = local_118;
      local_68 = local_f8;
      local_58 = &param_10;
      local_50 = param_11;
      local_78 = uVar5;
      local_70 = uVar1;
      _ZN7uu_sort6chunks5Chunk7try_new17h11865afbebe6af3dE(&local_e8,&local_48,&local_d8);
      if (local_e8 != 0) {
        *param_1 = local_e8;
        param_1[1] = local_e0;
        return;
      }
      uVar5 = _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h35b630fd0acd1b39E(local_108,local_100);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h16399e104acae490E(uVar5);
      *(undefined *)(param_1 + 1) = uVar4;
      *param_1 = 0;
      return;
    }
    *(undefined *)(param_1 + 1) = (undefined)uStack_c8;
    *param_1 = 0;
  }
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hf1471b789cf37b11E(&local_188);
  _ZN4core3ptr102drop_in_place_LT_alloc__vec__Vec_LT_std__sync__mpmc__array__Slot_LT_uu_sort__chunks__Chunk_GT__GT__GT_17hd036655fcae2cd02E
            (uVar5,uVar1);
  _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h9e04263d6b1dcdf4E(&local_128);
  _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h9e04263d6b1dcdf4E(&local_148);
  _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h9e04263d6b1dcdf4E(&local_168);
  _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_uu_sort__Line_GT__GT_17hc3c59c200dc6ee06E
            (param_4);
  return;
}