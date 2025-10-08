
  uint64_t uu_chmod::Chmoder::chmod_file::h265d0431d919c569(int64_t* arg1, char* arg2, uint64_t arg3)

{
    char rbx = *(arg1 + 0x25);
    int32_t var_e0;
    uucore::features::perms::get_metadata::hae67a64c0bebe863(&var_e0, arg2, arg3, rbx);
    uint64_t result;
    int128_t* var_238;
    int128_t var_218;
    void** const var_1d8;
    int128_t var_1d0;
    int64_t var_158;
    
    if (var_e0 != 2)
    {
        int32_t var_a8;
        int32_t rbp_1 = 0xfff & var_a8;
        
        if (arg1[3] == 1)
        {
            if (!(uu_chmod::Chmoder::change_file::ha40cda8af2f327da(arg1, rbp_1, *(arg1 + 0x1c), 
                    arg2, arg3) & 1))
                return 0;
            
            return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
        }
        
        void** const rax_4;
        
        if (!(0 + -(*arg1)))
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_1d8, arg1);
            rax_4 = var_1d8;
            var_218 = var_1d0;
        }
        
        if (0 + -(*arg1) || rax_4 == -0x8000000000000000)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        void** const var_170 = rax_4;
        int128_t zmm0_1 = var_218;
        int64_t rbx_1 = *zmm0_1[8];
        _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
            &*var_1d0[8], zmm0_1, rbx_1);
        var_1d8 = nullptr;
        var_1d0 = rbx_1;
        int16_t var_198_1 = 1;
        int32_t r13_1 = rbp_1;
        int32_t var_184_1 = rbp_1;
        
        while (true)
        {
            void* rax_6;
            void* rdx_2;
            rax_6 = core::str::iter::SplitInternal$LT$P$GT$::next::h00c44235cf8bba42(&var_1d8);
            uint64_t result_1;
            char var_200;
            
            if (!rax_6)
            {
                if (uu_chmod::Chmoder::change_file::ha40cda8af2f327da(arg1, var_184_1, rbp_1, arg2, 
                    arg3) & 1)
                {
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
                    break;
                }
                
                if (!(rbp_1 & ~r13_1))
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(
                        &var_170);
                    return 0;
                }
                
                var_238 = 1;
                char* var_230_4 = arg2;
                uint64_t var_228_3 = arg3;
                int64_t var_220;
                var_220 = 0;
                void var_f8;
                uucore::features::fs::display_permissions_unix::hf65510d5c6517b79(&var_f8, rbp_1, 
                    0);
                uucore::features::fs::display_permissions_unix::hf65510d5c6517b79(&var_158, r13_1, 
                    0);
                var_1d8 = &var_238;
                var_1d0 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                *var_1d0[8] = &var_f8;
                int64_t (* var_1c0_4)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                int64_t* var_1b8_4 = &var_158;
                int64_t (* var_1b0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_218 = &data_4ebad0;
                *var_218[8] = 3;
                int64_t var_1f8_1 = 0;
                void** const* var_208_4 = &var_1d8;
                var_200 = 3;
                int128_t var_110;
                core::option::Option$LT$T$GT$::map_or_else::h0f2f61c7a16737e3(&var_110, &var_218);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(&var_158);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(&var_f8);
                var_1c0_4 = 1;
                var_1d8 = var_110;
                int64_t var_100;
                *var_1d0[8] = var_100;
                result_1 = alloc::boxed::Box$LT$T$GT$::new::h3f0686e8f75aaa9d(&var_1d8);
            }
            else
            {
                var_218 = rax_6;
                *var_218[8] = rax_6 + rdx_2;
                int64_t var_230;
                int64_t var_178;
                int128_t* rbx_2;
                
                if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h3a7fa2694c3e6340(core::iter::traits::iterator::Iterator::try_fold::h2b9d08646a37d2f9(&var_218)))
                {
                    uucore::features::mode::parse_symbolic::h506995bac3fe2fa2(&var_238, rbp_1, 
                        rax_6, rdx_2, uucore::features::mode::get_umask::h22fe72fd4e3f2e99(), 
                        std::path::Path::is_dir::h02edbc48c38d7d9e(arg2, arg3));
                    rbx_2 = var_238;
                    rbp_1 = var_230;
                    
                    if (rbx_2 != -0x8000000000000000)
                    {
                        r13_1 = *var_230[4];
                        int64_t var_228;
                        var_178 = var_228;
                    }
                    else
                    {
                        uucore::features::mode::parse_symbolic::h506995bac3fe2fa2(&var_218, r13_1, 
                            rax_6, rdx_2, 0, 
                            std::path::Path::is_dir::h02edbc48c38d7d9e(arg2, arg3));
                        r13_1 =
                            core::result::Result$LT$T$C$E$GT$::unwrap::h3da0837ef6d99752(&var_218);
                    }
                }
                else
                {
                    uucore::features::mode::parse_numeric::hf54e809090b43181(&var_218, rbp_1, 
                        rax_6, rdx_2, std::path::Path::is_dir::h02edbc48c38d7d9e(arg2, arg3));
                    rbx_2 = var_218;
                    rbp_1 = *var_218[8];
                    r13_1 = rbp_1;
                    
                    if (rbx_2 != -0x8000000000000000)
                    {
                        int64_t var_208;
                        var_178 = var_208;
                        r13_1 = *var_218[0xc];
                    }
                }
                
                if (rbx_2 != -0x8000000000000000)
                {
                    var_238 = rbx_2;
                    var_230 = rbp_1;
                    *var_230[4] = r13_1;
                    
                    if (*(arg1 + 0x21))
                    {
                        result = uucore::mods::error::ExitCode::new::hdcf0963f6fc7caed(1);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(
                            &var_238);
                        break;
                    }
                    
                    int64_t var_208_5 = var_178;
                    var_218 = var_238;
                    *var_218[8] = var_230;
                    *var_218[0xc] = *var_230[4];
                    var_200 = 1;
                    result_1 = alloc::boxed::Box$LT$T$GT$::new::h3f0686e8f75aaa9d(&var_218);
                }
                else
                    continue;
            }
            result = result_1;
            break;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(&var_170);
    }
    else
    {
        int64_t var_d8;
        int64_t r12_1 = var_d8;
        var_158 = r12_1;
        
        if (rbx || std::path::Path::is_symlink::h004cfac91d04dbc0(arg2, arg3) != 1)
        {
            if (std::io::error::Error::kind::h135fe00c4e7365f3(r12_1) != 1)
            {
                var_218 = 1;
                *var_218[8] = arg2;
                uint64_t var_208_3 = arg3;
                char var_200_3 = 1;
                var_238 = &var_218;
                int64_t (* var_230_3)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                int64_t* var_228_1 = &var_158;
                int64_t (* var_220_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                var_1d8 = &data_4ebab0;
                var_1d0 = 2;
                int64_t var_1b8_3 = 0;
                *var_1d0[8] = &var_238;
                int64_t var_1c0_3 = 2;
                int128_t var_128;
                core::option::Option$LT$T$GT$::map_or_else::h0f2f61c7a16737e3(&var_128, &var_1d8);
                var_1c0_3 = 1;
                var_1d8 = var_128;
                int64_t var_118;
                *var_1d0[8] = var_118;
                result = alloc::boxed::Box$LT$T$GT$::new::h3f0686e8f75aaa9d(&var_1d8);
                r12_1 = var_158;
            }
            else
            {
                var_218 = 1;
                *var_218[8] = arg2;
                uint64_t var_208_2 = arg3;
                char var_200_2 = 1;
                var_238 = &var_218;
                int64_t (* var_230_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_1d8 = &data_4eba90;
                var_1d0 = 2;
                int64_t var_1b8_2 = 0;
                *var_1d0[8] = &var_238;
                int64_t var_1c0_2 = 1;
                int128_t var_140;
                core::option::Option$LT$T$GT$::map_or_else::h0f2f61c7a16737e3(&var_140, &var_1d8);
                var_1c0_2 = 1;
                var_1d8 = var_140;
                int64_t var_130;
                *var_1d0[8] = var_130;
                result = alloc::boxed::Box$LT$T$GT$::new::h3f0686e8f75aaa9d(&var_1d8);
            }
        }
        else
        {
            if (*(arg1 + 0x22) == 1)
            {
                var_218 = 1;
                *var_218[8] = arg2;
                uint64_t var_208_1 = arg3;
                char var_200_1 = 1;
                var_238 = &var_218;
                int64_t (* var_230_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_1d8 = &data_4eba70;
                var_1d0 = 2;
                int64_t var_1b8_1 = 0;
                *var_1d0[8] = &var_238;
                int64_t var_1c0_1 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_1d8);
            }
            
            result = 0;
        }
        
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::he4a0a2b91febee14(r12_1);
    }
    return result;
}
