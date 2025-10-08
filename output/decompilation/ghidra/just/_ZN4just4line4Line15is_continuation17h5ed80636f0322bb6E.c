undefined8
_ZN4just4line4Line15is_continuation17h5ed80636f0322bb6E
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  uint in_EAX;
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  ulong uVar4;
  
  if ((param_2 != 0) && (*(int *)(param_1 + -0x80 + param_2 * 0x80) == 0x12)) {
    auVar2 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)
                       (param_1 + param_2 * 0x80 + -0x78);
    uVar4 = (ulong)in_EAX;
    auVar3 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E
                       (0x5c,&stack0xffffffffffffffec);
    uVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h7edf1f62087d1f75E
                      (auVar2._0_8_,auVar2._8_8_,auVar3._0_8_,auVar3._8_8_,param_5,param_6,uVar4);
    return uVar1;
  }
  return 0;
}