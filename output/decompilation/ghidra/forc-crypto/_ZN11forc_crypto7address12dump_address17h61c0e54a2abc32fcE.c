void _ZN11forc_crypto7address12dump_address17h61c0e54a2abc32fcE(undefined *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined auVar2 [16];
  undefined4 local_f0;
  undefined uStack_ec;
  undefined2 uStack_eb;
  undefined uStack_e9;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined3 local_b8;
  undefined4 uStack_b5;
  undefined4 uStack_b1;
  undefined4 uStack_ad;
  undefined uStack_a9;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined local_70 [24];
  undefined local_58 [16];
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  auVar2 = _ZN82__LT_alloc__string__String_u20_as_u20_core__convert__AsRef_LT__u5b_u8_u5d__GT__GT_6as_ref17h6c2a555f71a2b08aE
                     (*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  puVar1 = auVar2._0_8_;
  if (auVar2._8_8_ == 0x20) {
    local_c8 = *puVar1;
    uStack_c4 = puVar1[1];
    uStack_c0 = puVar1[2];
    uStack_bc = puVar1[3];
    local_28 = *(undefined8 *)(puVar1 + 4);
    uStack_20 = *(undefined8 *)(puVar1 + 6);
    local_b8 = (undefined3)local_28;
    uStack_b5 = (undefined4)((ulong)local_28 >> 0x18);
    uStack_b1._0_1_ = (undefined)((ulong)local_28 >> 0x38);
    uStack_b1._1_3_ = (undefined3)uStack_20;
    uStack_ad = (undefined4)((ulong)uStack_20 >> 0x18);
    uStack_a9 = (undefined)((ulong)uStack_20 >> 0x38);
    local_38 = local_c8;
    uStack_34 = uStack_c4;
    uStack_30 = uStack_c0;
    uStack_2c = uStack_bc;
  }
  else {
    _ZN11forc_crypto7address24handle_string_conversion17h63cc450610a58430E(&local_f0,param_2);
    if ((char)local_f0 != '\0') {
      *(ulong *)(param_1 + 8) = CONCAT44(uStack_e4,uStack_e8);
      *param_1 = 6;
      return;
    }
    local_c8 = CONCAT13(uStack_ec,local_f0._1_3_);
    local_b8 = (undefined3)((uint)uStack_e0 >> 8);
    uStack_b5 = uStack_dc;
    uStack_b1 = uStack_d8;
    uStack_ad = uStack_d4;
    uStack_a9 = local_d0;
    uStack_c4._3_1_ = (undefined)uStack_e8;
    uStack_c4 = CONCAT13(uStack_c4._3_1_,
                         (int3)(CONCAT13(uStack_e9,CONCAT21(uStack_eb,uStack_ec)) >> 8));
    uStack_c0 = (undefined4)(CONCAT44(uStack_e4,uStack_e8) >> 8);
    uStack_bc._0_3_ = (undefined3)((uint)uStack_e4 >> 8);
    uStack_bc = CONCAT13((char)uStack_e0,(undefined3)uStack_bc);
  }
  local_a0 = 0;
  local_90 = 0;
                    /* try { // try from 004c3580 to 004c3595 has its CatchHandler @ 004c3685 */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6e3ee4122896b801E
            (&local_f0,&DAT_0017a14b,7);
  local_88[0] = local_f0;
  uStack_80 = uStack_e8;
  uStack_7c = uStack_e4;
                    /* try { // try from 004c35ad to 004c35be has its CatchHandler @ 004c367b */
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hcc18dbcfd952224aE
            (local_70,&local_c8);
                    /* try { // try from 004c35bf to 004c35e9 has its CatchHandler @ 004c368a */
  _ZN10serde_json5value8to_value17hbca4fdadd9c88b9dE(&local_f0,local_70);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0e8745fea5c699d4E
            (local_58,&local_f0,&PTR_DAT_0072c088);
                    /* try { // try from 004c35ea to 004c3605 has its CatchHandler @ 004c3676 */
  _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hf474682998bbc6caE
            (&local_f0,&local_a0,local_88,local_58);
                    /* try { // try from 004c3606 to 004c360f has its CatchHandler @ 004c3674 */
  _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_serde_json__value__Value_GT__GT_17h9a2e9c5503f64a6bE
            (&local_f0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h194128577f2b3aedE(local_70);
  local_48 = local_90;
  uStack_e9 = (undefined)local_a0;
  uStack_e8 = (undefined4)((ulong)local_a0 >> 8);
  uStack_e4._0_3_ = (undefined3)((ulong)local_a0 >> 0x28);
  uStack_e4._3_1_ = (undefined)uStack_98;
  uStack_e0 = (undefined4)((ulong)uStack_98 >> 8);
  uStack_dc._0_3_ = (undefined3)((ulong)uStack_98 >> 0x28);
  uStack_dc._3_1_ = (undefined)local_90;
  uStack_d8 = (undefined4)((ulong)local_90 >> 8);
  uStack_d4._0_3_ = (undefined3)((ulong)local_90 >> 0x28);
  *param_1 = 5;
  *(undefined4 *)(param_1 + 1) = local_f0;
  *(uint *)(param_1 + 5) = CONCAT13(uStack_e9,CONCAT21(uStack_eb,uStack_ec));
  *(undefined4 *)(param_1 + 9) = uStack_e8;
  *(undefined4 *)(param_1 + 0xd) = uStack_e4;
  *(undefined8 *)(param_1 + 0x10) = uStack_98;
  *(undefined8 *)(param_1 + 0x18) = local_90;
  if (auVar2._8_8_ == 0x20) {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h194128577f2b3aedE(param_2);
  }
  return;
}