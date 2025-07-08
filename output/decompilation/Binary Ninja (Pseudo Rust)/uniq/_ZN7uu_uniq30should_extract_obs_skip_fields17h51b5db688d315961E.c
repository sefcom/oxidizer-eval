
  fn uu_uniq::should_extract_obs_skip_fields::h51b5db688d315961(arg1: i64, arg2: i64, arg3: i8, arg4: i8) -> i64

{
    let rax: i64;
    let mut var_28: i64 = rax;
    *var_28[4] = 0;
    let mut rax_1: i64;
    let mut rdx: u64;
    rax_1 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2d, &*var_28[4]);
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(arg1, arg2, 
        rax_1, rdx) != 0
    {
        if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(arg1, arg2, 
            "---wsrc/uu/uniq/src/uniq.rs--gro…", 2) != 0 || arg3 != 0 || arg4 != 0
        {
            return 0;
        }
        
        if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(arg1, arg2, 
            "-s---wsrc/uu/uniq/src/uniq.rs--g…", 2) == 0 &&
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(arg1, arg2, 
            "-f-s---wsrc/uu/uniq/src/uniq.rs-…", 2) == 0
        {
            return core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(arg1, 
                arg2, "-wsrc/uu/uniq/src/uniq.rs--group…", 2) ^ 1;
        }
    }
    
    0
}
