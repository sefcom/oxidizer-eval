undefined8 *
_ZN4just8function18justfile_directory17ha9a6716f71b3c245E(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  byte local_30;
  undefined7 uStack_2f;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  lVar1 = *param_2;
  lVar2 = *(long *)(lVar1 + 0x18);
  auVar4 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00566a90)
                     (*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
  lVar2 = auVar4._0_8_;
  if (lVar2 == 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    _ZN4just8function18justfile_directory28__u7b__u7b_closure_u7d__u7d_17hb8e430af5dd1690bE
              (&local_30,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
    param_1[1] = CONCAT71(uStack_2f,local_30);
    param_1[2] = uStack_28;
    param_1[3] = uStack_20;
  }
  else {
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00565dd0)(&local_30,lVar2);
    if ((local_30 & 1) == 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                (&local_30,uStack_28,uStack_20);
      param_1[2] = uStack_28;
      param_1[3] = uStack_20;
      param_1[1] = CONCAT71(uStack_2f,local_30);
      uVar3 = 0;
      goto LAB_0036b269;
    }
    _ZN4just8function18justfile_directory28__u7b__u7b_closure_u7d__u7d_17h0987920aa1e182e9E
              (param_1 + 1,lVar2,auVar4._8_8_);
  }
  uVar3 = 1;
LAB_0036b269:
  *param_1 = uVar3;
  return param_1;
}