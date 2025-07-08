
  fn uu_tail::paths::Input::resolve::h81e1f38162942b9d(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_90: i64;
    let var_80: i64;
    let mut rax_1: i8;
    let mut r14_1: i64;
    
    if *arg2.byte_offset(0x18) != -0x8000000000000000
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_90, 
            "/dev/stdin/dev/fd/0 <==\n\n", 0xa);
        r14_1 = *arg2.byte_offset(0x20);
        let var_88: i64;
        rax_1 = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7(
            r14_1, *arg2.byte_offset(0x28), var_88, var_80);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_90);
    }
    
    if *arg2.byte_offset(0x18) != -0x8000000000000000 && rax_1 == 0
    {
        std::fs::canonicalize::hd214f5c614fa2ecb(&var_90, r14_1);
        
        if var_90 != -0x8000000000000000
        {
            arg1[2] = var_80;
            *arg1 = var_90;
        }
        else
        {
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h2718b16a2e13a805(&var_90);
        }
    }
    else
    {
        let mut var_40: ();
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_40, 
            "/dev/stdin/dev/fd/0 <==\n\n", 0xa);
        let var_38: i64;
        std::fs::canonicalize::hd214f5c614fa2ecb(&var_90, var_38);
        let mut var_78: i128;
        
        if var_90 != -0x8000000000000000
        {
            var_78 = var_90;
            
            if var_78 != -0x8000000000000000
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_90, 
                    "/dev/fd/0 <==\n\n", 9);
                let var_48_1: i64 = var_80;
                let mut var_58: i128 = var_90;
                
                if _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7(*var_78[8], var_80, *var_58[8], var_80) == 0
                {
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_58);
                    arg1[2] = var_80;
                    *arg1 = var_78;
                }
                else
                {
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_58);
                    *arg1 = -0x8000000000000000;
                    
                    if var_78 != -0x8000000000000000
                    {
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(
                            &var_78);
                    }
                }
            }
            else
            {
                *arg1 = -0x8000000000000000;
            }
        }
        else
        {
            var_78 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h2718b16a2e13a805(&var_90);
            *arg1 = -0x8000000000000000;
        }
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_40);
    }
    
    arg1
}
