
  fn uu_chcon::errors::Error::from_io1::hdc2db079e528bea9(arg1: *mut i32, arg2: *mut c_void) -> i64

{
    let var_30: i64 = 0x3d00000002;
    let mut var_28: i128;
    _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::hed2fe8e10411cd2a(&var_28, arg2);
    *arg1.byte_offset(0x20) = "Getting security context.Invalid…";
    *arg1.byte_offset(0x28) = 0x18;
    *arg1.byte_offset(8) = var_28;
    let result: i64;
    *arg1.byte_offset(0x18) = result;
    *arg1.byte_offset(0x30) = 0x3d00000002;
    *arg1 = 0x11;
    result
}
