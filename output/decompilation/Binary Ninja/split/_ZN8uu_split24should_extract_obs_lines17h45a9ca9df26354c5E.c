
  int64_t uu_split::should_extract_obs_lines::h45a9ca9df26354c5(int64_t arg1, int64_t arg2, char arg3, char arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    *var_28[4] = 0;
    
    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcb49aff15e773791(arg1, arg2, 
        core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&*var_28[4]), 1))
    {
        if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcb49aff15e773791(arg1, arg2, 
                "---a-b-C-l-n-tsrc/uu/split/src/s…", 2) || arg3 || arg4)
            return 0;
        
        if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcb49aff15e773791(arg1, arg2, 
                "-a-b-C-l-n-tsrc/uu/split/src/spl…", 2) && !
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcb49aff15e773791(arg1, 
                arg2, "-b-C-l-n-tsrc/uu/split/src/split…", 2) && !
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcb49aff15e773791(arg1, 
                arg2, "-C-l-n-tsrc/uu/split/src/split.r…", 2) && !
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcb49aff15e773791(arg1, 
                arg2, "-l-n-tsrc/uu/split/src/split.rs0…", 2) && !
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcb49aff15e773791(arg1, 
                arg2, "-n-tsrc/uu/split/src/split.rs0.0…", 2))
            return core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcb49aff15e773791(arg1, 
                arg2, "-tsrc/uu/split/src/split.rs0.0.2…", 2) ^ 1;
    }
    
    return 0;
}
