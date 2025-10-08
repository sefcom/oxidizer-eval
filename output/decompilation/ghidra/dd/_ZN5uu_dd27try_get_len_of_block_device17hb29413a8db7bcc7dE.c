void _ZN5uu_dd27try_get_len_of_block_device17hb29413a8db7bcc7dE
               (undefined8 *param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  int local_c8 [2];
  long local_c0;
  uint local_90;
  
  (*(code *)PTR__ZN3std2fs4File8metadata17h5e84e533705f8c98E_00246cd8)(local_c8);
  if (local_c8[0] != 2) {
    if ((local_90 & 0xf000) != 0x6000) {
      *param_1 = 0;
      return;
    }
    auVar1 = (*(code *)
               PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17h04cf64217ea00d1dE_002469d8
             )(param_2,1,0);
    if ((auVar1 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      param_1[1] = auVar1._8_8_;
      *param_1 = 2;
      return;
    }
    local_c0 = _ZN3std2io4Seek6rewind17h4f5eb59316fec924E(param_2);
    if (local_c0 == 0) {
      *param_1 = 1;
      param_1[1] = auVar1._8_8_;
      return;
    }
  }
  param_1[1] = local_c0;
  *param_1 = 2;
  return;
}