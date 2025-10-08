
  fn uu_od::prn_float::format_flo32::hb158b5d92d44987e(arg1: i128 @ zmm0) -> *mut i128

{
    let mut var_54: i32 = arg1;
    let rax: i32 = arg1;
    let mut rcx_1: i32;
    rcx_1 = (rax & 0x7fffffff) == 0x7f800000;
    let rdi: *mut i128;
    
    if (rax & 0x7fffff) == 0 || rcx_1 != 0 || (rax & 0x7f800000) != 0
    {
        arg1 = arg1;
        /* tailcall */
        return uu_od::prn_float::format_float::hb20d3bf5c81306f8(rdi, 0xe, 8, arg1);
    }
    
    let mut var_50: *mut i32 = &var_54;
    let var_48: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f32$GT$::fmt::h33a5b7ff1cb3b6ab;
    let var_40: i64 = 0;
    let var_38: i16 = 0xe;
    let mut var_30: *mut c_void = &data_41a940;
    let var_28: i64 = 1;
    let var_10: *mut c_void = &data_41d228;
    let var_8: i64 = 1;
    let var_20: *mut *mut i32 = &var_50;
    let var_18: i64 = 2;
    core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(rdi, &var_30)
}
