
  fn uu_who::platform::unix::Who::print_runlevel::h9d15e26d69ee4710(arg1: *mut c_void, arg2: *mut c_void) -> i64

{
    let rax: i32 = *arg2.byte_offset(4);
    let mut rcx: i16 = rax + 0xff;
    
    if rax >= 0
    {
        rcx = rax;
    }
    
    let rbp: u32 = *rcx[1];
    let mut var_b0: u32 = rax;
    let mut var_60: *mut u32 = &var_b0;
    let var_58: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    let mut var_90: *mut *mut c_void = &data_4fef58;
    let var_88: i64 = 1;
    let var_70: i64 = 0;
    let var_80: *mut *mut u32 = &var_60;
    let var_78: i64 = 1;
    let mut var_48: ();
    core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_48, &var_90);
    let mut rax_2: i64;
    rax_2 = rbp == 0x4e;
    let mut var_ac: i32 = rax_2 * 5 + 0x4e;
    let mut var_a8: *mut i32 = &var_ac;
    let var_a0: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    var_90 = &data_4fef68;
    let var_88_1: i64 = 1;
    let var_70_1: i64 = 0;
    let var_80_1: *mut *mut i32 = &var_a8;
    let var_78_1: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::ha4af03a514854fed(&var_60, &var_90);
    var_a8 = var_60;
    uu_who::platform::unix::time_string::hf7b3fb93d48ce0b2(&var_90, arg2);
    let rax_6: bool = core::unicode::unicode_data::cc::lookup::h279dc51266654208(rbp);
    let var_50: i64;
    let mut rax_7: i64 = var_50;
    
    if rax_6 != 0
    {
        rax_7 = 0;
    }
    
    let mut r10: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = 1;
    
    if rax_6 == 0
    {
        r10 = var_a0;
    }
    
    let var_c0: i64 = 0;
    let var_d0: i64 = rax_7;
    let var_e0: i64 = 0;
    let var_f0: i64 = 0;
    let var_100: *mut *mut i32 = var_80_1;
    let var_40: i64;
    uu_who::platform::unix::Who::print_line::h48873e2090b4b940(arg1, 1, 0, 0x20, var_40, var_88_1, 
        1, 1, r10, 1);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_90);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_48)
}
