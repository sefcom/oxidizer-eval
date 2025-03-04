undefined _ZN6uu_env14native_int_str9NativeStr8contains17h70e4bf3944233adaE
                    (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined extraout_DL;
  undefined uVar3;
  
  uVar1 = _ZN6uu_env14native_int_str27get_single_native_int_value17h9b0956bba8ba8cc0E(param_2);
  uVar3 = 2;
  if ((uVar1 & 1) != 0) {
    lVar2 = _ZN4core5slice6memchr6memchr17hd9bdb72df61b073bE
                      (extraout_DL,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    uVar3 = lVar2 == 1;
  }
  return uVar3;
}