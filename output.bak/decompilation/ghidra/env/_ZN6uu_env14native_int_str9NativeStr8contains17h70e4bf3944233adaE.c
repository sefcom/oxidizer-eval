undefined __rustcall uu_env::native_int_str::NativeStr::contains(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined extraout_DL;
  undefined uVar3;
  
  uVar1 = get_single_native_int_value(param_2);
  uVar3 = 2;
  if ((uVar1 & 1) != 0) {
    lVar2 = core::slice::memchr::memchr
                      (extraout_DL,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    uVar3 = lVar2 == 1;
  }
  return uVar3;
}