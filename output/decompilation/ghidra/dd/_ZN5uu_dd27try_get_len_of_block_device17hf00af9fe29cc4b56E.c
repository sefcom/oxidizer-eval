void _ZN5uu_dd27try_get_len_of_block_device17hf00af9fe29cc4b56E
               (undefined8 *param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  int local_c8 [2];
  long local_c0;
  uint local_90;
  
  _ZN3std2fs4File8metadata17he899a18112e6f19eE(local_c8);
  if (local_c8[0] != 2) {
    if ((local_90 & 0xf000) != 0x6000) {
      *param_1 = 0;
      return;
    }
    auVar1 = _ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17hf141ef1001f771f9E
                       (param_2,1,0);
    if (auVar1._0_8_ != 0) {
      param_1[1] = auVar1._8_8_;
      goto LAB_001d8fb5;
    }
    local_c0 = _ZN3std2io4Seek6rewind17h775fcf7d5bbb9e4dE(param_2);
    if (local_c0 == 0) {
      *param_1 = 1;
      param_1[1] = auVar1._8_8_;
      return;
    }
  }
  param_1[1] = local_c0;
LAB_001d8fb5:
  *param_1 = 2;
  return;
}