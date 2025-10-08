
  int64_t uu_split::should_extract_obs_lines::hb752b49cf9c3d508(int64_t arg1, int64_t arg2, char arg3, char arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    *var_28[4] = 0;
    char* rax_1;
    uint64_t rdx;
    rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &*var_28[4]);
    
    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, arg2, 
            rax_1, rdx) && !((arg3 | arg4 |
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, arg2, 
            "---a-b-C-l-n-tsrc/uu/split/src/s…", 2)) & 1) && !
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, arg2, 
            "-a-b-C-l-n-tsrc/uu/split/src/spl…", 2) && !
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, arg2, 
            "-b-C-l-n-tsrc/uu/split/src/split…", 2) && !
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, arg2, 
            "-C-l-n-tsrc/uu/split/src/split.r…", 2) && !
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, arg2, 
            "-l-n-tsrc/uu/split/src/split.rs(…", 2) && !
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, arg2, 
            "-n-tsrc/uu/split/src/split.rs(uu…", 2))
        return core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(arg1, 
            arg2, "-tsrc/uu/split/src/split.rs(uuti…", 2) ^ 1;
    
    return 0;
}
