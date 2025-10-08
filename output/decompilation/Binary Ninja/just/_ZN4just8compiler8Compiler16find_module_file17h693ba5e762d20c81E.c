
  int64_t just::compiler::Compiler::find_module_file::h693ba5e762d20c81(char* arg1, int64_t arg2, uint64_t arg3, int128_t* arg4, int64_t arg5, uint64_t arg6)

{
    int64_t var_a0 = arg2;
    uint64_t var_98 = arg3;
    int64_t var_190 = 0;
    int64_t var_188 = 8;
    int64_t var_180 = 0;
    void* const var_288;
    int64_t var_280_2;
    uint64_t var_278_4;
    int64_t var_270;
    int128_t* i_2;
    int64_t var_220;
    int128_t var_218;
    int128_t var_208;
    int128_t var_1f8;
    char* var_1f0;
    uint64_t var_1e8;
    int128_t* var_178;
    uint64_t var_168;
    int64_t (* var_160)(int64_t* arg1, int64_t arg2);
    
    if (!arg5)
    {
        i_2 = arg4;
        int64_t (* var_220_1)(void* arg1, int64_t* arg2) =
            _$LT$just..name..Name$u20$as$u20$core..fmt..Display$GT$::fmt::h235bf6517801ef05;
        var_288 = &data_82e5d0;
        int64_t var_280_1 = 2;
        int64_t var_268_1 = 0;
        int128_t** var_278_1 = &i_2;
        int64_t var_270_1 = 1;
        int128_t var_90;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_90, 0, arg3, &var_288);
        var_288 = var_90;
        int64_t var_80;
        int64_t var_278_2 = var_80;
        var_270_1 = 1;
        uint64_t rdx_1 = alloc::vec::Vec$LT$T$C$A$GT$::push::h7058a2c661acaad6(&var_190, &var_288);
        i_2 = arg4;
        int64_t (* var_220_2)(void* arg1, int64_t* arg2) =
            _$LT$just..name..Name$u20$as$u20$core..fmt..Display$GT$::fmt::h235bf6517801ef05;
        var_288 = &data_82e5f0;
        var_280_2 = 2;
        int64_t var_268_2 = 0;
        int128_t** var_278_3 = &i_2;
        var_270 = 1;
        int128_t var_78;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_78, 0, rdx_1, &var_288);
        var_288 = var_78;
        uint64_t var_68;
        var_278_4 = var_68;
        var_270 = 1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h7058a2c661acaad6(&var_190, &var_288);
        i_2 = nullptr;
        var_220 = 2;
        var_218 = *data_82e5b0;
        var_208 = *data_82e5c0;
        int64_t i;
        char* rdx_3;
        i = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::he3a8d094ac8fb9ab(&i_2);
        
        while (i)
        {
            var_1f8 = i;
            var_1f0 = rdx_3;
            var_178 = arg4;
            int64_t (* var_170_1)(void* arg1, int64_t* arg2) =
                _$LT$just..name..Name$u20$as$u20$core..fmt..Display$GT$::fmt::h235bf6517801ef05;
            var_168 = &var_1f8;
            var_160 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
            var_288 = &data_82e610;
            var_280_2 = 2;
            int64_t var_268_3 = 0;
            int128_t** var_278_5 = &var_178;
            var_270 = 2;
            int128_t var_60;
            core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_60, 0, rdx_3, 
                &var_288);
            var_288 = var_60;
            uint64_t var_50;
            var_278_4 = var_50;
            var_270 = 0;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h7058a2c661acaad6(&var_190, &var_288);
            i = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::he3a8d094ac8fb9ab(&i_2);
        }
    }
    else
    {
        std::path::Path::join::h1eac0ae5e7efa361(&var_1f8, arg2, arg3, arg5);
        
        if (std::path::Path::is_file::h6e28d87ff76ffc41(var_1f0, var_1e8))
        {
            *(arg1 + 0x18) = var_1e8;
            *(arg1 + 8) = var_1f8;
            *arg1 = 0x38;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$std..path..PathBuf$C$bool$RP$$GT$$GT$::h388c8948af8b5aaf(&var_190);
        }
        
        std::path::Path::join::h1eac0ae5e7efa361(&i_2, arg5, arg6, "mod.just } else");
        var_278_4 = var_218;
        var_288 = i_2;
        var_270 = 1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h7058a2c661acaad6(&var_190, &var_288);
        var_288 = nullptr;
        var_280_2 = 2;
        var_278_4 = *data_82e5b0;
        int64_t var_268;
        var_268 = *data_82e5c0;
        int64_t i_1;
        int64_t rdx_7;
        i_1 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::he3a8d094ac8fb9ab(&var_288);
        
        while (i_1)
        {
            std::path::Path::join::h1eac0ae5e7efa361(&var_178, arg5, arg6, i_1);
            var_218 = var_168;
            i_2 = var_178;
            *var_218[8] = 0;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h7058a2c661acaad6(&var_190, &i_2);
            int64_t rdx_10;
            i_1 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::he3a8d094ac8fb9ab(&var_288);
        }
        
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_1f8);
    }
    
    int64_t var_b8 = 0;
    int64_t var_a8_1 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hb6ebd97b4c0e5ec4(&var_178, &var_190);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcdb832d90bc0aa2f(&i_2, &var_178);
    int128_t var_1c8;
    char* var_1c0;
    uint64_t var_1b8;
    
    if (!(0 + -(i_2)))
    {
        do
        {
            std::path::Path::join::h8b41166b2967df99(&var_288, arg2, arg3, &i_2);
            _$LT$$RF$std..path..Path$u20$as$u20$lexiclean..Lexiclean$GT$::lexiclean::h6a5ff6ae87480de6(&var_1c8, var_280_2, var_278_4);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_288);
            char* rax_10;
            uint64_t rdx_13;
            rax_10 = std::path::Path::parent::hef287f60afa56900(var_1c0, var_1b8);
            
            if (!rax_10)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_288, rax_10, rdx_13);
            var_1e8 = var_278_4;
            var_1f8 = var_288;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h9dafd29e16c1d307(
                &var_288, &var_b8, &var_1f8);
            int64_t* rax_12 = alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_default::ha830fb4bb8839a5b(&var_288);
            var_278_4 = var_1b8;
            var_288 = var_1c8;
            var_270 = *var_218[8];
            alloc::vec::Vec$LT$T$C$A$GT$::push::h7058a2c661acaad6(rax_12, &var_288);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcdb832d90bc0aa2f(&i_2, &var_178);
        } while (i_2 != -0x8000000000000000);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$std..path..PathBuf$C$bool$RP$$GT$$GT$::h435d7ed3b0cdcb90(&var_178);
    int64_t var_130 = 0;
    int64_t var_128_1 = 8;
    int64_t var_120_1 = 0;
    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0436ce891d6bcb07(&var_288, &var_b8);
    int64_t* rdi_31 = &var_178;
    
    while (true)
    {
        _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd23322903d4431d2(rdi_31, &var_288);
        
        if (var_178 == -0x8000000000000000)
            break;
        
        int128_t var_148 = var_178;
        int128_t zmm0_10 = var_160;
        std::fs::read_dir::h5abadba4aa7d2afc(&var_1f8, &var_148);
        char rax_15 = var_1f0;
        
        if (rax_15 != 2)
        {
            int64_t var_118 = var_1f8;
            char var_110_1 = rax_15;
            void* rax_17 = *zmm0_10[8];
            int64_t var_150;
            int32_t rdx_16;
            rdx_16 = var_150;
            uint64_t rdx_17 = rdx_16 << 5;
            
            while (true)
            {
                _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1934f30e4eea5c14(&i_2, &var_118);
                
                if (i_2 != 1)
                {
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h1e42de9666d40c86(&var_118);
                    goto label_65c098;
                }
                
                char* rcx_10 = var_218;
                
                if (!var_220)
                {
                    just::search::Search::find_global_justfile::_$u7b$$u7b$closure$u7d$$u7d$::h64683c6068435421(&var_1c8, *var_148[8], var_168, rcx_10);
                    int64_t rax_28 = var_1c8;
                    int128_t zmm0_13 = var_1c0;
                    int128_t var_48_1 = zmm0_13;
                    int64_t var_1b0;
                    int64_t var_38_1 = var_1b0;
                    *(arg1 + 0x20) = var_1b0;
                    *(arg1 + 0x10) = zmm0_13;
                    *arg1 = 0x2a;
                    *(arg1 + 8) = rax_28;
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h1e42de9666d40c86(&var_118);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$std..path..PathBuf$C$bool$RP$$GT$$GT$::h388c8948af8b5aaf(&var_160);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_148);
                    break;
                }
                
                int64_t var_1d8_1 = *var_208[8];
                var_1e8 = var_218;
                var_1f8 = var_220;
                var_1f0 = rcx_10;
                void var_d8;
                std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_d8, &var_1f8);
                char* var_d0;
                int64_t var_c8;
                core::str::converts::from_utf8::h8a6dc80f786921e0(&var_1c8, var_d0, var_c8);
                bool rax_22 = !var_150;
                char rcx_11 = var_1c8;
                char* r13_1;
                
                if (rcx_11)
                {
                    r13_1 = nullptr;
                    
                    if (!((rcx_11 | rax_22) & 1))
                    {
                        label_65bf98:
                        int64_t r12_1 = rdx_17 - (var_150 << 5);
                        void* rax_23 = rax_17 + rdx_17;
                        void* rbp_2 = rax_17;
                        
                        while (true)
                        {
                            void* r14_2 = rbp_2;
                            rbp_2 = rax_23;
                            char* rax_24;
                            int64_t rdx_21;
                            rax_24 = std::path::Path::file_name::h6d40d88bf3fb287a(*(r14_2 + 8), 
                                *(r14_2 + 0x10));
                            
                            if (rax_24)
                            {
                                core::str::converts::from_utf8::h8a6dc80f786921e0(&var_1c8, rax_24, 
                                    rdx_21);
                                
                                if (!(var_1c8 & 1))
                                {
                                    if (!*(r14_2 + 0x18))
                                    {
                                        if (!core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(r13_1, var_1b8, var_1c0, var_1b8))
                                            goto label_65bfc0;
                                    }
                                    else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(r13_1, var_1b8, var_1c0, var_1b8))
                                        goto label_65bfc0;
                                    
                                    char* rax_27;
                                    uint64_t rdx_23;
                                    rax_27 = std::path::Path::parent::hef287f60afa56900(
                                        *(r14_2 + 8), *(r14_2 + 0x10));
                                    
                                    if (rax_27)
                                    {
                                        std::path::Path::join::h1eac0ae5e7efa361(&var_1c8, rax_27, 
                                            rdx_23, r13_1);
                                        alloc::vec::Vec$LT$T$C$A$GT$::push::hfd422a69ba548d71(
                                            &var_130, &var_1c8);
                                        label_65bfc0:
                                        rax_23 = rbp_2 + 0x20;
                                        r12_1 += 0x20;
                                        
                                        if (r12_1 == 0x20)
                                            break;
                                        
                                        continue;
                                    }
                                }
                            }
                            
                            core::option::unwrap_failed::h893f57cb7db71cb7();
                            /* no return */
                        }
                    }
                }
                else
                {
                    r13_1 = var_1c0;
                    
                    if (!((rcx_11 | rax_22) & 1))
                        goto label_65bf98;
                }
                core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h578cf5996977c0ea(&var_1f8);
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                    &var_d8);
            }
            
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$std..path..PathBuf$C$alloc..vec..Vec$LT$$LP$std..path..PathBuf$C$bool$RP$$GT$$GT$$GT$::h8d8930127ca8b1e7(&var_288);
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h31c8eb8c4d0056c0(&var_130);
        }
        
        int64_t r15_1 = var_1f8;
        var_1c8 = r15_1;
        
        if (std::io::error::Error::kind::h135fe00c4e7365f3(r15_1))
        {
            *var_218[7] = var_168;
            *i_2[7] = var_148;
            *arg1 = 0x2a;
            *(arg1 + 1) = i_2;
            *(arg1 + 0x10) = var_220;
            *(arg1 + 0x18) = *var_218[7];
            *(arg1 + 0x20) = r15_1;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$std..path..PathBuf$C$bool$RP$$GT$$GT$::h388c8948af8b5aaf(&var_160);
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$std..path..PathBuf$C$alloc..vec..Vec$LT$$LP$std..path..PathBuf$C$bool$RP$$GT$$GT$$GT$::h8d8930127ca8b1e7(&var_288);
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h31c8eb8c4d0056c0(&var_130);
        }
        
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6f129e5e75731b85(&var_1c8);
        label_65c098:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$std..path..PathBuf$C$bool$RP$$GT$$GT$::h388c8948af8b5aaf(&var_160);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_148);
        rdi_31 = &var_178;
    }
    
    core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$std..path..PathBuf$C$alloc..vec..Vec$LT$$LP$std..path..PathBuf$C$bool$RP$$GT$$GT$$GT$::h8d8930127ca8b1e7(&var_288);
    
    if (var_120_1 <= 1)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7020ec4582f4a09d(&var_288, &var_130);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h89f3f68b0a4d6be6(&arg1[8], &var_288);
        *arg1 = 0x38;
        return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..path..PathBuf$GT$$GT$::h1d9bcd419f39b040(&var_288);
    }
    
    alloc::slice::stable_sort::h4a7742242fac61fb(var_128_1, var_120_1);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7020ec4582f4a09d(&var_288, &var_130);
    int64_t* var_268_4 = &var_a0;
    core::iter::traits::iterator::Iterator::collect::h86e128cc60d9a1b8(&arg1[0x50], &var_288);
    *var_288[7] = *arg4;
    *var_278_4[7] = arg4[1];
    *var_268_4[7] = arg4[2];
    int128_t var_251_1 = arg4[3];
    int64_t result = arg4[4];
    *arg1 = 0;
    *(arg1 + 1) = var_288;
    *(arg1 + 0x11) = var_278_4;
    *(arg1 + 0x21) = var_268_4;
    int128_t var_258;
    *(arg1 + 0x31) = var_258;
    *(arg1 + 0x40) = *var_251_1[8];
    *(arg1 + 0x48) = result;
    return result;
}
