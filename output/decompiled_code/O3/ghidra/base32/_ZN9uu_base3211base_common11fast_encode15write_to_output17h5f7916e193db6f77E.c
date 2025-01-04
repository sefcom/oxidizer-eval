long __rustcall
uu_base32::base_common::fast_encode::write_to_output
          (long *param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined param_5)

{
  long lVar1;
  
  if (*param_1 == -0x8000000000000000) {
    lVar1 = write_without_line_breaks(param_2,param_3,*(undefined8 *)(param_4 + 0x38),param_5);
  }
  else {
    lVar1 = write_with_line_breaks();
  }
  if (lVar1 == 0) {
    return 0;
  }
  return lVar1;
}