undefined8 _ZN5uu_dd4Dest8truncate17h581044b4b2963b16E(char *param_1)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  if (*param_1 != '\x01') {
    return 0;
  }
  auVar2 = _ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17hf141ef1001f771f9E
                     (param_1 + 4,2,0);
  if (auVar2._0_8_ != 0) {
    return auVar2._8_8_;
  }
  uVar1 = _ZN3std2fs4File7set_len17hd21acd2eeb028efbE(param_1 + 4,auVar2._8_8_);
  return uVar1;
}