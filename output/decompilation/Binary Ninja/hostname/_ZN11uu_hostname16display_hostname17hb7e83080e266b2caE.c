
  int64_t uu_hostname::display_hostname::hb7e83080e266b2ca(void* arg1)

{
    int128_t var_168;
    hostname::get::h61ff34d453bc4655(&var_168);
    char* var_d8;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h31343d2c1a16f84a(&var_d8, &var_168);
    char* rcx = var_d8;
    int64_t result;
    
    if (rcx == -0x8000000000000000)
        return result;
    
    char* var_138 = rcx;
    int64_t result_1 = result;
    size_t var_c8;
    size_t var_128_1 = var_c8;
    char** var_f8;
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_f8, result, var_c8);
    uint64_t var_108_1;
    uint64_t var_e8;
    int128_t zmm0_1;
    
    if (var_f8 != -0x8000000000000000)
    {
        var_108_1 = var_e8;
        zmm0_1 = var_f8;
    }
    else
    {
        int64_t var_f0;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h055d5e87f2acdc55(&var_168, 
            var_f0, var_e8);
        uint64_t var_158;
        var_108_1 = var_158;
        zmm0_1 = var_168;
    }
    
    int128_t var_118 = zmm0_1;
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h2b6be5ae4ecb0b10(&var_138);
    int128_t var_148;
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg1, 
        "ip-addressshort0.0.28Display or …", 0xa))
    {
        char rax_7 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg1, "short0.0.28Display or set the sy…", 5);
        char rax_8;
        
        if (!rax_7)
            rax_8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg1, "domainip-addressshort0.0.28Displ…", 6);
        
        void* rax_10;
        int32_t rdx_5;
        
        if (rax_7 || rax_8)
        {
            char* rax_9 = *var_118[8];
            var_d8 = rax_9;
            void* var_d0 = &rax_9[var_108_1];
            int64_t var_c8_1 = 0;
            rax_10 = core::iter::traits::iterator::Iterator::try_fold::hee6e80971634247b(&var_d8);
        }
        
        if ((rax_7 || rax_8) && rdx_5 != 0x110000)
        {
            char* r14_2;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg1, "short0.0.28Display or set the sy…", 5))
            {
                r14_2 = *var_118[8];
                char* rax_16;
                int64_t rdx_11;
                rax_16 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(rax_10 + 1, r14_2, var_108_1);
                
                if (!rax_16)
                {
                    core::str::slice_error_fail::h5dbb61534404fe7e(r14_2, var_108_1, rax_10 + 1, 
                        var_108_1);
                    /* no return */
                }
                
                var_138 = rax_16;
                int64_t var_130_3 = rdx_11;
                var_f8 = &var_138;
                int64_t (* var_f0_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d67e1dd5db2d0a3;
                var_168 = &data_5181f8;
                *var_168[8] = 2;
                var_148 = 0;
                char*** var_158_5 = &var_f8;
                int64_t var_150_4 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_168);
            }
            else
            {
                r14_2 = *var_118[8];
                char* rax_12;
                int64_t rdx_7;
                rax_12 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(rax_10, r14_2, var_108_1);
                
                if (!rax_12)
                {
                    core::str::slice_error_fail::h5dbb61534404fe7e(r14_2, var_108_1, nullptr, 
                        rax_10);
                    /* no return */
                }
                
                var_138 = rax_12;
                int64_t var_130_2 = rdx_7;
                var_f8 = &var_138;
                int64_t (* var_f0_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d67e1dd5db2d0a3;
                var_168 = &data_5181f8;
                *var_168[8] = 2;
                var_148 = 0;
                char*** var_158_4 = &var_f8;
                int64_t var_150_3 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_168);
            }
        }
        else
        {
            var_d8 = &var_118;
            int64_t (* var_d0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_168 = &data_5181f8;
            *var_168[8] = 2;
            var_148 = 0;
            char** var_158_3 = &var_d8;
            int64_t var_150_2 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&var_168);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2518ea1da04bd9ad(&var_118);
    }
    else
    {
        var_168 = var_118;
        _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&var_138, &var_168);
        _$LT$alloc..string..String$u20$as$u20$std..net..socket_addr..ToSocketAddrs$GT$::to_socket_addrs::h05be57e59cc2cc3b(&var_168, &var_138);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8a6ebe87743f1a37(&var_d8, &var_168);
        char* rdx_2 = var_d8;
        
        if (!rdx_2)
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2518ea1da04bd9ad(&var_138);
            return result;
        }
        
        int64_t result_2 = result;
        size_t var_68_1 = var_c8;
        int64_t var_c0;
        int64_t var_60_1 = var_c0;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2518ea1da04bd9ad(&var_138);
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h339483a9a5339a88(&var_168);
        int128_t var_b8_1 = var_148;
        var_c8 = var_108_1;
        var_d8 = var_168;
        int64_t var_a8 = 0;
        char* var_a0_1 = 1;
        void* var_98_1 = nullptr;
        var_e8 = var_68_1;
        var_f8 = rdx_2;
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h430276f2adbaa693(&var_138, &var_f8);
        
        if (var_138 != 2)
        {
            do
            {
                int128_t var_58 = var_138;
                
                if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h8480289187164d9e(
                    &var_d8, &var_58))
                {
                    void var_90;
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h6eb467b2be988407(
                        &var_90, &var_58);
                    int64_t var_88;
                    int64_t var_80;
                    
                    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hc6ddc21bcea4abf2(
                            var_88, var_80, ":1\nsrc/uu/hostname/src/hostname…", 2))
                        alloc::string::String::truncate::hafe089c60c3201e9(&var_90, var_80 - 2);
                    
                    int64_t rax_15;
                    uint64_t rdx_9;
                    rax_15 = core::slice::iter::Iter$LT$T$GT$::make_slice::h4d84bc7c75e20a35(
                        var_88, var_80 + var_88);
                    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::hfb321296f5c74ae6(&var_a8, 
                        rax_15, rdx_9);
                    alloc::string::String::push::h859ae11851fd8b8e(&var_a8, 0x20);
                    uint64_t var_158_1;
                    var_158_1 = var_128_1;
                    var_168 = var_58;
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h06ac9bed48b1a8c9(
                        &var_d8, &var_168);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2518ea1da04bd9ad(
                        &var_90);
                }
                
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h430276f2adbaa693(&var_138, &var_f8);
            } while (var_138 != 2);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$core..net..socket_addr..SocketAddr$GT$$GT$::h63d022b3ffacee7e(&var_f8);
        
        if (var_98_1)
        {
            char* rax_6;
            int64_t rdx_4;
            rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(var_98_1 - 1, var_a0_1, var_98_1);
            
            if (!rax_6)
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(var_a0_1, var_98_1, nullptr, 
                    var_98_1 - 1);
                /* no return */
            }
            
            var_138 = rax_6;
            int64_t var_130_1 = rdx_4;
            var_f8 = &var_138;
            int64_t (* var_f0_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5d67e1dd5db2d0a3;
            var_168 = &data_5181f8;
            *var_168[8] = 2;
            var_148 = 0;
            char*** var_158_2 = &var_f8;
            int64_t var_150_1 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&var_168);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2518ea1da04bd9ad(&var_a8);
        core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$core..net..socket_addr..SocketAddr$GT$$GT$::hfac6686e50cf3d19(&var_d8);
    }
    return 0;
}
