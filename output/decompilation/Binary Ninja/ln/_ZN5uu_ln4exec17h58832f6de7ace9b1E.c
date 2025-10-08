
  uint64_t uu_ln::exec::h58832f6de7ace9b1(void* arg1, int64_t arg2, void* arg3)

{
    int64_t var_80;
    uint64_t result;
    char* var_78;
    uint64_t var_70;
    
    if (!(0 + -(*(arg3 + 0x18))))
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3685ff12e9f7df8a(&var_80, *(arg3 + 0x20), *(arg3 + 0x28));
        result = uu_ln::link_files_in_dir::h2bcf86d9527747bd(arg1, arg2, var_78, var_70, arg3);
    }
    else
    {
        if (*(arg3 + 0x33))
        {
            if (arg2 == 1)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h3184c1608c40fe12(&var_78, *(arg1 + 8), *(arg1 + 0x10));
                var_80 = 3;
                return alloc::boxed::Box$LT$T$GT$::new::h9832a2155b69f23f(&var_80);
            }
            
            if (arg2 <= 2)
            {
                if (!arg2)
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: !files.is_empt…");
                    /* no return */
                }
                
                /* tailcall */
                return uu_ln::link::hcb5f3490f1fb339b(*(arg1 + 8), *(arg1 + 0x10), *(arg1 + 0x20), 
                    *(arg1 + 0x28), arg3);
            }
            
            int128_t var_48;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h3184c1608c40fe12(&var_48, *(arg1 + 0x38), *(arg1 + 0x40));
            int64_t rax_1;
            uint64_t rdx_5;
            rax_1 = uucore::execution_phrase::hf0e80cb4793732ad();
            int128_t var_30;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3685ff12e9f7df8a(&var_30, rax_1, rdx_5);
            int64_t var_20;
            int64_t var_50_1 = var_20;
            int128_t var_60_1 = var_30;
            var_78 = var_48;
            int64_t var_38;
            int64_t var_68_1 = var_38;
            var_80 = 4;
            return alloc::boxed::Box$LT$T$GT$::new::h9832a2155b69f23f(&var_80);
        }
        
        if (arg2 != 1)
        {
            int64_t rax_6;
            
            if (arg2)
                rax_6 = arg2 * 3;
            
            if (!arg2 || arg1 + (rax_6 << 3) == 0x18)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            void* rax_7 = arg1 + (rax_6 << 3);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3685ff12e9f7df8a(&var_80, *(rax_7 - 0x10), *(rax_7 - 8));
            char rax_8;
            
            if (arg2 <= 2)
                rax_8 = std::path::Path::is_dir::h02edbc48c38d7d9e(var_78, var_70);
            
            if (arg2 <= 2 && !rax_8)
            {
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hba0bfa390dca4ccb(&var_80);
                /* tailcall */
                return uu_ln::link::hcb5f3490f1fb339b(*(arg1 + 8), *(arg1 + 0x10), *(arg1 + 0x20), 
                    *(arg1 + 0x28), arg3);
            }
            
            void* rax_9;
            int64_t rdx_9;
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
    return result;
}
