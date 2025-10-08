ulong _ZN3bat4less18parse_less_version17hf361f545e9895bb3E(long param_1,ulong param_2)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined auVar5 [16];
  byte local_30 [8];
  ulong local_28;
  long local_20;
  
  cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hcaa0289a539b3ffeE
                    (param_1,param_2,&DAT_002a2a3f,5);
  uVar4 = 2;
  if (cVar2 != '\0') {
    if (param_2 < 5) {
      (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_008074d8)
                (5,param_2,&PTR_DAT_007ce768);
      local_28 = param_2;
      local_20 = param_1;
LAB_0053c21b:
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00807db8)
                (local_28,local_20,0,uVar4,&PTR_DAT_007ce750);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00807588)
              (local_30,param_1 + 5,param_2 - 5);
    if ((local_30[0] & 1) == 0) {
      auVar5 = _ZN4core3str21__LT_impl_u20_str_GT_4find17had6735de3995ef5eE(local_28,local_20);
      if ((auVar5 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        lVar3 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                          (auVar5._8_8_,local_28,local_20);
        uVar4 = auVar5._8_8_;
        if (lVar3 == 0) goto LAB_0053c21b;
        _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E(local_30,lVar3);
        uVar4 = (ulong)((uint)local_30[0] * 2);
      }
    }
  }
  return uVar4;
}