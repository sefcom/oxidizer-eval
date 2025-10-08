
  fn uu_runcon::errors::Error::from_io1::h2e5a1b363c345453(arg1: *mut i32, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64) -> i64

{
    let var_40: i64 = arg6;
    let mut var_38: i128;
    _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::he2ce1db898fd2834(&var_38, arg4);
    *arg1.byte_offset(0x20) = arg2;
    *arg1.byte_offset(0x28) = arg3;
    *arg1.byte_offset(8) = var_38;
    let result: i64;
    *arg1.byte_offset(0x18) = result;
    *arg1.byte_offset(0x30) = arg6;
    *arg1 = 0x10;
    result
}
