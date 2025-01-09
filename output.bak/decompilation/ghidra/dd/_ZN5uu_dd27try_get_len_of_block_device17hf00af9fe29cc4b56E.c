void __rustcall uu_dd::try_get_len_of_block_device(undefined8 *param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  int local_c8 [2];
  long local_c0;
  uint local_90;
  
  std::fs::File::metadata(local_c8);
  if (local_c8[0] != 2) {
    if ((local_90 & 0xf000) != 0x6000) {
      *param_1 = 0;
      return;
    }
    auVar1 = _<std::fs::File_as_std::io::Seek>::seek(param_2,1,0);
    if (auVar1._0_8_ != 0) {
      param_1[1] = auVar1._8_8_;
      goto LAB_001d8fb5;
    }
    local_c0 = std::io::Seek::rewind(param_2);
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