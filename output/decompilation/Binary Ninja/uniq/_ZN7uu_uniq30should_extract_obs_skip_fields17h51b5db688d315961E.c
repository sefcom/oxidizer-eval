
  int64_t uu_uniq::should_extract_obs_skip_fields::h51b5db688d315961(int64_t arg1, int64_t arg2, char arg3, char arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    *var_28[4] = 0;
    int64_t rax_1;
    uint64_t rdx;
    rax_1 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2d, &*var_28[4]);
    
    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(arg1, arg2, 
        rax_1, rdx))
    {
        if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(arg1, arg2, 
                "---wsrc/uu/uniq/src/uniq.rs--gro…", 2) || arg3 || arg4)
            return 0;
        
        if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(arg1, arg2, 
                "-s---wsrc/uu/uniq/src/uniq.rs--g…", 2) && !
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(arg1, 
                arg2, "-f-s---wsrc/uu/uniq/src/uniq.rs-…", 2))
            return core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(arg1, 
                arg2, "-wsrc/uu/uniq/src/uniq.rs--group…", 2) ^ 1;
    }
    
    return 0;
}
