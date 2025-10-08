
  fn bat::vscreen::Attributes::update_with_charset::h05c800051a699d8f(arg1: *mut c_void, arg2: i32, arg3: i64, arg4: i64) -> i64

{
    let mut var_9c: i32 = arg2;
    let mut var_78: *mut *mut [i8; 0x0];
    core::iter::traits::iterator::Iterator::take::heb50f55f44e46178(&var_78, arg3, arg4);
    let mut var_30: ();
    let rdx_1: u64 =
        core::iter::traits::iterator::Iterator::collect::hf2327cdb95cc4d00(&var_30, &var_78);
    let mut var_98: *mut i32 = &var_9c;
    let var_90: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    let var_88: *mut c_void = &var_30;
    let var_80: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_78 = &data_aced50;
    let var_70: i64 = 2;
    let var_58: i64 = 0;
    let var_68: *mut *mut i32 = &var_98;
    let var_60: i64 = 2;
    let mut var_48: i128;
    core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_48, 0, rdx_1, &var_78);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_30);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(arg1.
        byte_offset(0x48));
    let result: i64;
    *arg1.byte_offset(0x58) = result;
    *arg1.byte_offset(0x48) = var_48;
    result
}
