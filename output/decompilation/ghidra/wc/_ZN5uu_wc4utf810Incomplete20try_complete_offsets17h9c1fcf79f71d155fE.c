undefined  [16]
_ZN5uu_wc4utf810Incomplete20try_complete_offsets17h9c1fcf79f71d155fE
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  byte extraout_DL;
  undefined8 extraout_RDX;
  undefined7 uVar5;
  ulong uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  long local_48;
  ulong local_40;
  byte local_38;
  byte local_37;
  
  bVar1 = *(byte *)(param_1 + 4);
  uVar6 = (ulong)bVar1;
  if (uVar6 < 5) {
    lVar3 = _ZN4core3cmp6min_by17h81988dc820cb7914E(4 - uVar6,param_3);
    auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17h91a2381faada637bE
                       (lVar3,param_1 + uVar6,4 - uVar6,&PTR_s_src_uu_wc_src_utf8_mod_rs_002315a8);
    auVar8 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hcc9c09d4ae31832dE
                       (lVar3,param_2,param_3,&PTR_s_src_uu_wc_src_utf8_mod_rs_002315c0);
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15copy_from_slice17heb9fab0cf9acb3ceE
              (auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_,
               &PTR_s_src_uu_wc_src_utf8_mod_rs_002315d8);
    uVar4 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hcc9c09d4ae31832dE
                      (lVar3 + uVar6,param_1,4,&PTR_s_src_uu_wc_src_utf8_mod_rs_002315f0);
    _ZN4core3str8converts9from_utf817ha1effb4cca6d9901E(&local_48,uVar4);
    if (local_48 == 0) {
      uVar4 = 0;
      local_37 = extraout_DL;
      goto LAB_001c79ff;
    }
    if (local_40 == 0) {
      uVar5 = (undefined7)((ulong)extraout_RDX >> 8);
      if ((local_38 & 1) == 0) {
        uVar4 = CONCAT71(uVar5,2);
        local_37 = extraout_DL;
LAB_001c79ff:
        *(byte *)(param_1 + 4) = local_37;
        auVar7._8_8_ = uVar4;
        auVar7._0_8_ = lVar3;
        return auVar7;
      }
      if (bVar1 <= local_37) {
        lVar3 = local_37 - uVar6;
        uVar4 = CONCAT71(uVar5,1);
        goto LAB_001c79ff;
      }
      goto LAB_001c7a37;
    }
    lVar3 = local_40 - uVar6;
    if (uVar6 <= local_40) {
      uVar4 = 0;
      local_37 = (byte)local_40;
      goto LAB_001c79ff;
    }
  }
  else {
    _ZN4core5slice5index26slice_start_index_len_fail17hff2ebd3969f5a2ecE
              (uVar6,4,&PTR_s_src_uu_wc_src_utf8_mod_rs_00231638);
  }
  _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_wc_src_utf8_mod_rs_00231620);
LAB_001c7a37:
  _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_wc_src_utf8_mod_rs_00231608);
  pcVar2 = (code *)swi(3);
  auVar7 = (*pcVar2)();
  return auVar7;
}