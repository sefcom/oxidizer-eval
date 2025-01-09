void __rustcall
uu_base32::base_common::fast_decode::write_to_output(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (**(code **)(param_3 + 0x38))
                    (param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}