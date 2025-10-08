undefined  [16]
_ZN5uu_wc4utf810Incomplete20try_complete_offsets17h473bfdae9ee1fad0E
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte extraout_DL;
  undefined8 extraout_RDX;
  undefined7 uVar5;
  ulong uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  byte local_48 [8];
  ulong local_40;
  byte local_38;
  byte local_37;
  
  bVar1 = *(byte *)(param_1 + 4);
  uVar6 = (ulong)bVar1;
  if (uVar6 < 5) {
    uVar3 = _ZN4core3cmp3Ord3min17hb704016e1b3086a2E(4 - uVar6,param_3);
    auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17hb9f4f421da6706dfE
                       (uVar3,param_1 + uVar6,4 - uVar6,&PTR_DAT_001f8fb8);
    auVar8 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h7028662c39c50e0fE
                       (0,uVar3,param_2,param_3,&PTR_DAT_001f8fd0);
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15copy_from_slice17h738b473666d6ec1eE
              (auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_,&PTR_DAT_001f8fe8);
    uVar4 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h7028662c39c50e0fE
                      (0,uVar3 + uVar6,param_1,4,&PTR_DAT_001f9000);
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001ff968)(local_48,uVar4);
    if ((local_48[0] & 1) == 0) {
      uVar4 = 0;
      local_37 = extraout_DL;
      goto LAB_00164d1d;
    }
    if (local_40 == 0) {
      uVar5 = (undefined7)((ulong)extraout_RDX >> 8);
      if ((local_38 & 1) == 0) {
        uVar4 = CONCAT71(uVar5,2);
        local_37 = extraout_DL;
LAB_00164d1d:
        *(byte *)(param_1 + 4) = local_37;
        auVar7._8_8_ = uVar4;
        auVar7._0_8_ = uVar3;
        return auVar7;
      }
      if (bVar1 <= local_37) {
        uVar3 = (ulong)(byte)(local_37 - bVar1);
        uVar4 = CONCAT71(uVar5,1);
        goto LAB_00164d1d;
      }
      goto LAB_00164d79;
    }
    uVar3 = local_40 - uVar6;
    if (uVar6 <= local_40) {
      uVar4 = 0;
      local_37 = (byte)local_40;
      goto LAB_00164d1d;
    }
  }
  else {
    (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_001ffc88)
              (uVar6,4,&PTR_DAT_001f9048);
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001ffc90)(&PTR_DAT_001f9030);
LAB_00164d79:
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001ffc90)(&PTR_DAT_001f9018);
  pcVar2 = (code *)swi(3);
  auVar7 = (*pcVar2)();
  return auVar7;
}