
  fn uu_ln::exec::h58832f6de7ace9b1(arg1: *mut c_void, arg2: i64, arg3: *mut c_void) -> u64

{
    let mut var_80: i64;
    let mut result: u64;
    let mut var_78: *mut i8;
    let var_70: u64;
    
    if !(0 + -(*arg3.byte_offset(0x18)))
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3685ff12e9f7df8a(&var_80, *arg3.byte_offset(0x20), *arg3.byte_offset(0x28));
        result = uu_ln::link_files_in_dir::h2bcf86d9527747bd(arg1, arg2, var_78, var_70, arg3);
    }
    else
    {
        if *arg3.byte_offset(0x33) != 0
        {
            if arg2 == 1
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h3184c1608c40fe12(&var_78, *arg1.byte_offset(8), *arg1.byte_offset(0x10));
                var_80 = 3;
                return alloc::boxed::Box$LT$T$GT$::new::h9832a2155b69f23f(&var_80);
            }
            
            if arg2 <= 2
            {
                if arg2 == 0
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: !files.is_empt…");
                    /* no return */
                }
                
                /* tailcall */
                return uu_ln::link::hcb5f3490f1fb339b(*arg1.byte_offset(8), 
                    *arg1.byte_offset(0x10), *arg1.byte_offset(0x20), *arg1.byte_offset(0x28), 
                    arg3);
            }
            
            let mut var_48: i128;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h3184c1608c40fe12(&var_48, *arg1.byte_offset(0x38), *arg1.byte_offset(0x40));
            let mut rax_1: i64;
            let mut rdx_5: u64;
            rax_1 = uucore::execution_phrase::hf0e80cb4793732ad();
            let mut var_30: i128;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3685ff12e9f7df8a(&var_30, rax_1, rdx_5);
            let var_20: i64;
            let var_50_1: i64 = var_20;
            let var_60_1: i128 = var_30;
            var_78 = var_48;
            let var_38: i64;
            let var_68_1: i64 = var_38;
            var_80 = 4;
            return alloc::boxed::Box$LT$T$GT$::new::h9832a2155b69f23f(&var_80);
        }
        
        if arg2 != 1
        {
            let mut rax_6: i64;
            
            if arg2 != 0
            {
                rax_6 = arg2 * 3;
            }
            
            if arg2 == 0 || arg1.byte_offset(rax_6 << 3) == 0x18
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            let rax_7: *mut c_void = arg1.byte_offset(rax_6 << 3);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3685ff12e9f7df8a(&var_80, *rax_7.byte_offset(-0x10), *rax_7.byte_offset(-8));
            let mut rax_8: i8;
            
            if arg2 <= 2
            {
                rax_8 = std::path::Path::is_dir::h02edbc48c38d7d9e(var_78, var_70);
            }
            
            if arg2 <= 2 && rax_8 == 0
            {
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hba0bfa390dca4ccb(&var_80);
                /* tailcall */
                return uu_ln::link::hcb5f3490f1fb339b(*arg1.byte_offset(8), 
                    *arg1.byte_offset(0x10), *arg1.byte_offset(0x20), *arg1.byte_offset(0x28), 
                    arg3);
            }
            
            let mut rax_9: *mut c_void;
            let mut rdx_9: i64;
            rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h390e6364cd2e1201(arg2 - 1, arg1, arg2);
            result =
                uu_ln::link_files_in_dir::h2bcf86d9527747bd(rax_9, rdx_9, var_78, var_70, arg3);
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3685ff12e9f7df8a(&var_80, ".//home/34r7hm4n/.rustup/toolcha…", 1);
            result = uu_ln::link_files_in_dir::h2bcf86d9527747bd(arg1, 1, var_78, var_70, arg3);
        }
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hba0bfa390dca4ccb(&var_80);
    result
}
