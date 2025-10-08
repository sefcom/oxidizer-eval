
  fn uu_stat::print_float::h1938f14c785bf2a3(arg1: *mut c_void, arg2: i64, arg3: i64, arg4: u64, arg5: i8, arg6: i64 @ zmm0) -> i64

{
    let mut rax: u64 = *arg1.byte_offset(3);
    let mut rsi: *const i8 = " +";
    
    if (rax & 1) == 0
    {
        rsi = 1;
    }
    
    let mut r8: *const i8 = "+";
    let temp0: i8 = *arg1.byte_offset(4);
    
    if temp0 == 0
    {
        r8 = rsi;
    }
    
    if temp0 != 0
    {
        rax = 1;
    }
    
    let mut var_80: *const i8 = r8;
    let var_78: u64 = rax;
    let mut var_50: ();
    uu_stat::precision_trunc::hfc70d3e7a70986fc(&var_50, arg3, arg4, arg6);
    let mut var_70: *const *const i8 = &var_80;
    let var_68: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
    let var_60: *mut c_void = &var_50;
    let var_58: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let mut var_b8: *mut c_void = &data_41cfd0;
    let var_b0: i64 = 2;
    let var_98: i64 = 0;
    let var_a8: *mut *const *const i8 = &var_70;
    let var_a0: i64 = 2;
    let mut var_38: i128;
    core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_38, &var_b8);
    var_b8 = var_38;
    let var_28: i64;
    let var_a8_1: i64 = var_28;
    uu_stat::pad_and_print::h4c659c1797f3ded6(var_b0, var_28, *arg1.byte_offset(2), arg2, arg5);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_b8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_50)
}
