
  fn uu_stty::control_char_to_string::hcb31aba3c5c265db(arg1: *mut i128, arg2: u8) -> *mut i128

{
    if arg2 == 0
    {
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hed2105606e4cf42e(arg1, "<undef>", 7);
    }
    
    let mut rax: u8 = arg2 & 0x7f;
    let mut rdx: *mut c_void = "M-^ = min = ; time = ;\neraseeof…";
    let mut rcx: i64 = 1;
    
    if arg2 >= 0
    {
        rdx = 1;
    }
    
    let mut var_80: *mut c_void = rdx;
    let var_78: u64 = arg2 >> 6 & 2;
    let mut rdx_1: i32;
    
    if rax < 0x20
    {
        rax |= 0x40;
        rdx_1 = 0x41b212;  /* "^ = min = ; time = ;\neraseeofeo…" */
    }
    else if rax != 0x7f
    {
        rdx_1 = 1;
        rcx = 0;
    }
    else
    {
        rdx_1 = 0x41b212;  /* "^ = min = ; time = ;\neraseeofeo…" */
        rax = 0x3f;
    }
    
    let mut var_70: i64 = rdx_1;
    let var_68: i64 = rcx;
    let mut var_84: u32 = rax;
    let mut var_60: *const *mut c_void = &var_80;
    let var_58: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65652a1c6501a73;
    let var_50: *mut i64 = &var_70;
    let var_48: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65652a1c6501a73;
    let var_40: *mut u32 = &var_84;
    let var_38: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    let mut var_30: *mut c_void = &data_41b1e0;
    let var_28: i64 = 3;
    let var_10: i64 = 0;
    let var_20: *mut *const *mut c_void = &var_60;
    let var_18: i64 = 3;
    core::option::Option$LT$T$GT$::map_or_else::h151e00dca817615d(arg1, &var_30)
}
