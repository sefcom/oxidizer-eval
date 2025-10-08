
  fn uu_uniq::should_extract_obs_skip_fields::hfd0c6e5f233e6bba(arg1: i64, arg2: i64, arg3: i8, arg4: i8) -> i64

{
    let rax: i64;
    let mut var_28: i64 = rax;
    *var_28[4] = 0;
    let mut rax_1: *mut i8;
    let mut rdx: u64;
    rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &*var_28[4]);
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h164e9dfb27ee38d7(arg1, arg2, 
        rax_1, rdx) != 0 && ((arg3 | arg4 |
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h164e9dfb27ee38d7(arg1, arg2, 
        "---w--group is mutually exclusiv…", 2)) & 1) == 0 &&
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h164e9dfb27ee38d7(arg1, arg2, 
        "-s---w--group is mutually exclus…", 2) == 0 &&
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h164e9dfb27ee38d7(arg1, arg2, 
        "-f-s---w--group is mutually excl…", 2) == 0
    {
        return core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h164e9dfb27ee38d7(arg1, 
            arg2, "-w--group is mutually exclusive …", 2) ^ 1;
    }
    
    0
}
