undefined8 _ZN4just4line4Line10is_comment17h9a81c927aacfe8c9E(void)

{
  uint in_EAX;
  undefined8 uVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined auVar2 [16];
  undefined auVar3 [16];
  ulong uVar4;
  
  auVar2 = _ZN4just4line4Line5first17h712dd6f4cff55297E();
  if (auVar2._0_8_ != 0) {
    uVar4 = (ulong)in_EAX;
    auVar3 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E
                       (0x23,&stack0xffffffffffffffec);
    uVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h8590487e544a86f3E
                      (auVar2._0_8_,auVar2._8_8_,auVar3._0_8_,auVar3._8_8_,in_R8,in_R9,uVar4);
    return uVar1;
  }
  return 0;
}