
  int64_t uu_uniq::should_extract_obs_skip_fields::hfd0c6e5f233e6bba(int64_t arg1, int64_t arg2, char arg3, char arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    *var_28[4] = 0;
    char* rax_1;
    uint64_t rdx;
    rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &*var_28[4]);
    
    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h164e9dfb27ee38d7(arg1, arg2, 
            rax_1, rdx) && !((arg3 | arg4 |
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h164e9dfb27ee38d7(arg1, arg2, 
            "---w--group is mutually exclusiv…", 2)) & 1) && !
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h164e9dfb27ee38d7(arg1, arg2, 
            "-s---w--group is mutually exclus…", 2) && !
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h164e9dfb27ee38d7(arg1, arg2, 
            "-f-s---w--group is mutually excl…", 2))
        return core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h164e9dfb27ee38d7(arg1, 
            arg2, "-w--group is mutually exclusive …", 2) ^ 1;
    
    return 0;
}
