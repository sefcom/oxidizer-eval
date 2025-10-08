
  fn uu_split::should_extract_obs_lines::hb752b49cf9c3d508(arg1: i64, arg2: i64, arg3: i8, arg4: i8) -> i64

{
    let rax: i64;
    let mut var_28: i64 = rax;
    *var_28[4] = 0;
    let mut rax_1: *mut i8;
    let mut rdx: u64;
    rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &*var_28[4]);
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, arg2, 
        rax_1, rdx) != 0 && ((arg3 | arg4 |
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, arg2, 
        "---a-b-C-l-n-tsrc/uu/split/src/s…", 2)) & 1) == 0 &&
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, arg2, 
        "-a-b-C-l-n-tsrc/uu/split/src/spl…", 2) == 0 &&
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, arg2, 
        "-b-C-l-n-tsrc/uu/split/src/split…", 2) == 0 &&
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, arg2, 
        "-C-l-n-tsrc/uu/split/src/split.r…", 2) == 0 &&
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, arg2, 
        "-l-n-tsrc/uu/split/src/split.rs(…", 2) == 0 &&
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, arg2, 
        "-n-tsrc/uu/split/src/split.rs(uu…", 2) == 0
    {
        return core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, 
            arg2, "-tsrc/uu/split/src/split.rs(uuti…", 2) ^ 1;
    }
    
    0
}
