
  fn just::compiler::Compiler::find_module_file::h693ba5e762d20c81(arg1: *mut i8, arg2: i64, arg3: u64, arg4: *mut i128, arg5: i64, arg6: u64) -> i64

{
    let mut var_a0: i64 = arg2;
    let var_98: u64 = arg3;
    let mut var_190: i64 = 0;
    let var_188: i64 = 8;
    let var_180: i64 = 0;
    let mut var_288: *mut c_void;
    let mut var_280_2: i64;
    let mut var_278_4: u64;
    let mut var_270: i64;
    let mut i_2: *mut i128;
    let mut var_220: i64;
    let mut var_218: i128;
    let mut var_208: i128;
    let mut var_1f8: i128;
    let mut var_1f0: u64;
    let mut var_1e8: u64;
    let mut var_178: *mut i128;
    let mut var_168: u64;
    let mut var_160: fn(arg1: *mut i64, arg2: i64) -> i64;
    
    if arg5 == 0
    {
        i_2 = arg4;
        let var_220_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
            _$LT$just..name..Name$u20$as$u20$core..fmt..Display$GT$::fmt::h235bf6517801ef05;
        var_288 = &data_82e5d0;
        let var_280_1: i64 = 2;
        let var_268_1: i64 = 0;
        let var_278_1: *mut *mut i128 = &i_2;
        let mut var_270_1: i64 = 1;
        let mut var_90: i128;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_90, 0, arg3, &var_288);
        var_288 = var_90;
        let var_80: i64;
        let var_278_2: i64 = var_80;
        var_270_1 = 1;
        let rdx_1: u64 = alloc::vec::Vec$LT$T$C$A$GT$::push::h7058a2c661acaad6(&var_190, &var_288);
        i_2 = arg4;
        let var_220_2: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
            _$LT$just..name..Name$u20$as$u20$core..fmt..Display$GT$::fmt::h235bf6517801ef05;
        var_288 = &data_82e5f0;
        var_280_2 = 2;
        let var_268_2: i64 = 0;
        let var_278_3: *mut *mut i128 = &i_2;
        var_270 = 1;
        let mut var_78: i128;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_78, 0, rdx_1, &var_288);
        var_288 = var_78;
        let var_68: u64;
        var_278_4 = var_68;
        var_270 = 1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h7058a2c661acaad6(&var_190, &var_288);
        i_2 = nullptr;
        var_220 = 2;
        var_218 = *data_82e5b0;
        var_208 = *data_82e5c0;
        let mut i: i64;
        let mut rdx_3: u64;
        i = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::he3a8d094ac8fb9ab(&i_2);
        
        while i != 0
        {
            var_1f8 = i;
            var_1f0 = rdx_3;
            var_178 = arg4;
            let var_170_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
                _$LT$just..name..Name$u20$as$u20$core..fmt..Display$GT$::fmt::h235bf6517801ef05;
            var_168 = &var_1f8;
            var_160 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
            var_288 = &data_82e610;
            var_280_2 = 2;
            let var_268_3: i64 = 0;
            let var_278_5: *mut *mut i128 = &var_178;
            var_270 = 2;
            let mut var_60: i128;
            core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_60, 0, rdx_3, 
                &var_288);
            var_288 = var_60;
            let var_50: u64;
            var_278_4 = var_50;
            var_270 = 0;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h7058a2c661acaad6(&var_190, &var_288);
            i = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::he3a8d094ac8fb9ab(&i_2);
        }
    }
    else
    {
        std::path::Path::join::h1eac0ae5e7efa361(&var_1f8, arg2, arg3, arg5);
        
        if std::path::Path::is_file::h6e28d87ff76ffc41(var_1f0, var_1e8) != 0
        {
            *arg1.byte_offset(0x18) = var_1e8;
            *arg1.byte_offset(8) = var_1f8;
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
        let mut var_268: i64;
        var_268 = *data_82e5c0;
        let mut i_1: i64;
        let mut rdx_7: i64;
        i_1 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::he3a8d094ac8fb9ab(&var_288);
        
        while i_1 != 0
        {
            std::path::Path::join::h1eac0ae5e7efa361(&var_178, arg5, arg6, i_1);
            var_218 = var_168;
            i_2 = var_178;
            *var_218[8] = 0;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h7058a2c661acaad6(&var_190, &i_2);
            let mut rdx_10: i64;
            i_1 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::he3a8d094ac8fb9ab(&var_288);
        }
        
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_1f8);
    }
    
    let mut var_b8: i64 = 0;
    let var_a8_1: i64 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hb6ebd97b4c0e5ec4(&var_178, &var_190);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcdb832d90bc0aa2f(&i_2, &var_178);
    let mut var_1c8: i128;
    let var_1c0: *mut i8;
    let var_1b8: u64;
    
    if !(0 + -(i_2))
    {
        do
        {
            std::path::Path::join::h8b41166b2967df99(&var_288, arg2, arg3, &i_2);
            _$LT$$RF$std..path..Path$u20$as$u20$lexiclean..Lexiclean$GT$::lexiclean::h6a5ff6ae87480de6(&var_1c8, var_280_2, var_278_4);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_288);
            let mut rax_10: *mut i8;
            let mut rdx_13: u64;
            rax_10 = std::path::Path::parent::hef287f60afa56900(var_1c0, var_1b8);
            
            if rax_10 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_288, rax_10, rdx_13);
            var_1e8 = var_278_4;
            var_1f8 = var_288;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h9dafd29e16c1d307(
                &var_288, &var_b8, &var_1f8);
            let rax_12: *mut i64 = alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_default::ha830fb4bb8839a5b(&var_288);
            var_278_4 = var_1b8;
            var_288 = var_1c8;
            var_270 = *var_218[8];
            alloc::vec::Vec$LT$T$C$A$GT$::push::h7058a2c661acaad6(rax_12, &var_288);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcdb832d90bc0aa2f(&i_2, &var_178);
        } while i_2 != -0x8000000000000000;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$std..path..PathBuf$C$bool$RP$$GT$$GT$::h435d7ed3b0cdcb90(&var_178);
    let mut var_130: i64 = 0;
    let var_128_1: i64 = 8;
    let var_120_1: i64 = 0;
    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0436ce891d6bcb07(&var_288, &var_b8);
    let mut rdi_31: *mut i64 = &var_178;
    
    loop
    {
        _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd23322903d4431d2(rdi_31, &var_288);
        
        if var_178 == -0x8000000000000000
        {
            break;
        }
        
        let mut var_148: i128 = var_178;
        let zmm0_10: i128 = var_160;
        std::fs::read_dir::h5abadba4aa7d2afc(&var_1f8, &var_148);
        let rax_15: i8 = var_1f0;
        
        if rax_15 != 2
        {
            let mut var_118: i64 = var_1f8;
            let var_110_1: i8 = rax_15;
            let rax_17: *mut c_void = *zmm0_10[8];
            let var_150: i64;
            let mut rdx_16: i32;
            rdx_16 = var_150 != 0;
            let rdx_17: u64 = rdx_16 << 5;
            
            loop
            {
                _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1934f30e4eea5c14(&i_2, &var_118);
                
                if i_2 != 1
                {
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h1e42de9666d40c86(&var_118);
                    goto 'label_65c098;
                }
                
                let rcx_10: u64 = var_218;
                
                if var_220 == 0
                {
                    just::search::Search::find_global_justfile::_$u7b$$u7b$closure$u7d$$u7d$::h64683c6068435421(&var_1c8, *var_148[8], var_168, rcx_10);
                    let rax_28: i64 = var_1c8;
                    let zmm0_13: i128 = var_1c0;
                    let var_48_1: i128 = zmm0_13;
                    let var_1b0: i64;
                    let var_38_1: i64 = var_1b0;
                    *arg1.byte_offset(0x20) = var_1b0;
                    *arg1.byte_offset(0x10) = zmm0_13;
                    *arg1 = 0x2a;
                    *arg1.byte_offset(8) = rax_28;
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h1e42de9666d40c86(&var_118);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$std..path..PathBuf$C$bool$RP$$GT$$GT$::h388c8948af8b5aaf(&var_160);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_148);
                    break;
                }
                
                let var_1d8_1: i64 = *var_208[8];
                var_1e8 = var_218;
                var_1f8 = var_220;
                var_1f0 = rcx_10;
                let mut var_d8: ();
                std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_d8, &var_1f8);
                let var_d0: *mut i8;
                let var_c8: i64;
                core::str::converts::from_utf8::h8a6dc80f786921e0(&var_1c8, var_d0, var_c8);
                let rax_22: bool = var_150 == 0;
                let rcx_11: i8 = var_1c8;
                let mut r13_1: *mut i8;
                
                if rcx_11 != 0
                {
                    r13_1 = nullptr;
                    
                    if ((rcx_11 | rax_22) & 1) == 0
                    {
                        'label_65bf98:
                        let mut r12_1: i64 = rdx_17 - (var_150 << 5);
                        let mut rax_23: *mut c_void = rax_17.byte_offset(rdx_17);
                        let mut rbp_2: *mut c_void = rax_17;
                        
                        loop
                        {
                            let r14_2: *mut c_void = rbp_2;
                            rbp_2 = rax_23;
                            let mut rax_24: *mut i8;
                            let mut rdx_21: i64;
                            rax_24 = std::path::Path::file_name::h6d40d88bf3fb287a(
                                *r14_2.byte_offset(8), *r14_2.byte_offset(0x10));
                            
                            if rax_24 != 0
                            {
                                core::str::converts::from_utf8::h8a6dc80f786921e0(&var_1c8, rax_24, 
                                    rdx_21);
                                
                                if (var_1c8 & 1) == 0
                                {
                                    if *r14_2.byte_offset(0x18) == 0
                                    {
                                        if core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(r13_1, var_1b8, var_1c0, var_1b8) == 0
                                        {
                                            goto 'label_65bfc0;
                                        }
                                    }
                                    else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(r13_1, var_1b8, var_1c0, var_1b8) == 0
                                    {
                                        goto 'label_65bfc0;
                                    }
                                    
                                    let mut rax_27: *mut i8;
                                    let mut rdx_23: u64;
                                    rax_27 = std::path::Path::parent::hef287f60afa56900(
                                        *r14_2.byte_offset(8), *r14_2.byte_offset(0x10));
                                    
                                    if rax_27 != 0
                                    {
                                        std::path::Path::join::h1eac0ae5e7efa361(&var_1c8, rax_27, 
                                            rdx_23, r13_1);
                                        alloc::vec::Vec$LT$T$C$A$GT$::push::hfd422a69ba548d71(
                                            &var_130, &var_1c8);
                                        'label_65bfc0:
                                        rax_23 = rbp_2.byte_offset(0x20);
                                        r12_1 += 0x20;
                                        
                                        if r12_1 == 0x20
                                        {
                                            break;
                                        }
                                        
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
                    
                    if ((rcx_11 | rax_22) & 1) == 0
                    {
                        goto 'label_65bf98;
                    }
                }
                core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h578cf5996977c0ea(&var_1f8);
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(
                    &var_d8);
            }
            
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$std..path..PathBuf$C$alloc..vec..Vec$LT$$LP$std..path..PathBuf$C$bool$RP$$GT$$GT$$GT$::h8d8930127ca8b1e7(&var_288);
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h31c8eb8c4d0056c0(&var_130);
        }
        
        let r15_1: i64 = var_1f8;
        var_1c8 = r15_1;
        
        if std::io::error::Error::kind::h135fe00c4e7365f3(r15_1) != 0
        {
            *var_218[7] = var_168;
            *i_2[7] = var_148;
            *arg1 = 0x2a;
            *arg1.byte_offset(1) = i_2;
            *arg1.byte_offset(0x10) = var_220;
            *arg1.byte_offset(0x18) = *var_218[7];
            *arg1.byte_offset(0x20) = r15_1;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$std..path..PathBuf$C$bool$RP$$GT$$GT$::h388c8948af8b5aaf(&var_160);
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$std..path..PathBuf$C$alloc..vec..Vec$LT$$LP$std..path..PathBuf$C$bool$RP$$GT$$GT$$GT$::h8d8930127ca8b1e7(&var_288);
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h31c8eb8c4d0056c0(&var_130);
        }
        
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6f129e5e75731b85(&var_1c8);
        'label_65c098:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$std..path..PathBuf$C$bool$RP$$GT$$GT$::h388c8948af8b5aaf(&var_160);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_148);
        rdi_31 = &var_178;
    }
    
    core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$std..path..PathBuf$C$alloc..vec..Vec$LT$$LP$std..path..PathBuf$C$bool$RP$$GT$$GT$$GT$::h8d8930127ca8b1e7(&var_288);
    
    if var_120_1 <= 1
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7020ec4582f4a09d(&var_288, &var_130);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h89f3f68b0a4d6be6(&arg1[8], &var_288);
        *arg1 = 0x38;
        return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..path..PathBuf$GT$$GT$::h1d9bcd419f39b040(&var_288);
    }
    
    alloc::slice::stable_sort::h4a7742242fac61fb(var_128_1, var_120_1);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7020ec4582f4a09d(&var_288, &var_130);
    let mut var_268_4: *mut i64 = &var_a0;
    core::iter::traits::iterator::Iterator::collect::h86e128cc60d9a1b8(&arg1[0x50], &var_288);
    *var_288[7] = *arg4;
    *var_278_4[7] = arg4[1];
    *var_268_4[7] = arg4[2];
    let var_251_1: i128 = arg4[3];
    let result: i64 = arg4[4];
    *arg1 = 0;
    *arg1.byte_offset(1) = var_288;
    *arg1.byte_offset(0x11) = var_278_4;
    *arg1.byte_offset(0x21) = var_268_4;
    let var_258: i128;
    *arg1.byte_offset(0x31) = var_258;
    *arg1.byte_offset(0x40) = *var_251_1[8];
    *arg1.byte_offset(0x48) = result;
    result
}
