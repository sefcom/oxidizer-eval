
  int64_t uu_cut::cut_files::h785d6e985a8c4fa3(int64_t* arg1, int64_t* arg2)

{
    int128_t var_f8;
    int128_t var_b0;
    
    if (!arg1[2])
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hdd477e9923447a3c(&var_b0, "-: \n: Is a directory\ninvalid i…", 1);
        int64_t var_a0;
        int64_t var_e8_1 = var_a0;
        var_f8 = var_b0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hcc7a9ddcf3936731(arg1, &var_f8);
    }
    
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    uint64_t rax_3;
    void* const rcx;
    
    if (!std::sys::io::is_terminal::isatty::is_terminal::hb6e1a7b5002041a4())
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hd0517eb1fc4b80b9(&var_b0, 
            &std::io::stdio::STDOUT::h411b213c5c9add46);
        rax_3 = alloc::boxed::Box$LT$T$GT$::new::h4c49609b75c393d3(&var_b0);
        rcx = &data_4f93c8;
    }
    else
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        rax_3 = alloc::boxed::Box$LT$T$GT$::new::hedff6b7066f3f2ba(
            &std::io::stdio::STDOUT::h411b213c5c9add46);
        rcx = &data_4f9418;
    }
    
    uint64_t var_80 = rax_3;
    int64_t rax_4 = arg1[2];
    uint64_t var_d0;
    int128_t* var_c0;
    uint64_t var_70;
    
    if (rax_4)
    {
        void* r12_1 = arg1[1];
        void* rbx_1 = r12_1 + rax_4 * 0x18;
        void* rax_6 = r12_1 + 0x18;
        int64_t rdx_1 = *arg2;
        int128_t* rdx_2 = arg2[8];
        int64_t rcx_3 = arg2[9];
        char r15_1 = 0;
        
        do
        {
            void* rbp_1 = r12_1;
            
            while (true)
            {
                r12_1 = rax_6;
                int64_t r13_1 = *(rbp_1 + 8);
                uint64_t r14_1 = *(rbp_1 + 0x10);
                int64_t (* var_e0)(int64_t* arg1);
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4e666ffb317321e6(r13_1, r14_1, "-: \n: Is a directory\ninvalid i…", 1))
                {
                    if (!std::path::Path::is_dir::h02edbc48c38d7d9e(r13_1, r14_1))
                    {
                        std::fs::File::open::h02248eeaa12fef75(&var_b0, r13_1);
                        *(rbp_1 + 8);
                        *(rbp_1 + 0x10);
                        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::haa675c517272d758(&var_f8, &var_b0);
                        uint64_t rax_12 = var_f8;
                        int64_t rdx_9;
                        
                        if (!rax_12)
                        {
                            rax_12 =
                                uu_cut::cut_files::_$u7b$$u7b$closure$u7d$$u7d$::hbeb4f85585c96a83(
                                arg2, &var_80, *var_f8[8]);
                            var_70 = rax_12;
                            int64_t var_68_3 = rdx_9;
                            
                            if (rax_12)
                                goto label_469e2d;
                            
                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h3fc40c7c194632a2(&var_70);
                        }
                        else
                        {
                            rdx_9 = *var_f8[8];
                            var_70 = rax_12;
                            int64_t var_68_1 = rdx_9;
                            label_469e2d:
                            var_d0 = rax_12;
                            int64_t var_c8_2 = rdx_9;
                            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1((*(rdx_9 + 0x58))(
                                rax_12));
                            int128_t* rax_16;
                            int64_t rdx_13;
                            rax_16 = uucore::util_name::h074417a1e6395129();
                            var_c0 = rax_16;
                            int64_t var_b8_4 = rdx_13;
                            var_f8 = &var_c0;
                            *var_f8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd7fdd532799be56e;
                            uint64_t* var_e8_4 = &var_d0;
                            var_e0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb683936e38a4ea07;
                            var_b0 = &data_4f9340;
                            *var_b0[8] = 3;
                            int64_t var_90_4 = 0;
                            int128_t* var_a0_4 = &var_f8;
                            int64_t var_98_4 = 2;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hb71a8d3b47f158bf(&var_d0);
                        }
                        break;
                    }
                    
                    int64_t rax_9;
                    int64_t rdx_4;
                    rax_9 = uucore::util_name::h074417a1e6395129();
                    var_f8 = rax_9;
                    *var_f8[8] = rdx_4;
                    var_c0 = &var_f8;
                    int64_t (* var_b8_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd7fdd532799be56e;
                    var_b0 = &data_4f9370;
                    *var_b0[8] = 2;
                    int64_t var_90_1 = 0;
                    int128_t** var_a0_1 = &var_c0;
                    int64_t var_98_1 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
                    var_f8 = 0;
                    *var_f8[8] = *(rbp_1 + 8);
                    int64_t var_e8_2 = *(rbp_1 + 0x10);
                    var_e0 = 0;
                    var_c0 = &var_f8;
                    int64_t (* var_b8_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_b0 = &data_4f9390;
                    *var_b0[8] = 2;
                    int64_t var_90_2 = 0;
                    int128_t** var_a0_2 = &var_c0;
                    int64_t var_98_2 = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                }
                else if (!(r15_1 & 1))
                {
                    uint64_t rax_11;
                    void** const rdx_6;
                    
                    if (rdx_1 > 1)
                    {
                        std::io::stdio::stdin::h9a05a2c3e7544b2a();
                        rax_11 = uu_cut::cut_fields::hefd7750461942b3d(
                            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b, &var_80, rdx_2, 
                            rcx_3, &arg2[1]);
                    }
                    else
                    {
                        std::io::stdio::stdin::h9a05a2c3e7544b2a();
                        rax_11 = uu_cut::cut_bytes::ha8c2c8670826156c(
                            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b, &var_80, rdx_2, 
                            rcx_3, &arg2[1]);
                        rdx_6 = &data_4f9218;
                    }
                    
                    var_70 = rax_11;
                    void** const var_68_2 = rdx_6;
                    
                    if (!rax_11)
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h3fc40c7c194632a2(&var_70);
                    else
                    {
                        var_d0 = rax_11;
                        void** const var_c8_1 = rdx_6;
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(rdx_6[0xb](rax_11));
                        int128_t* rax_14;
                        int64_t rdx_11;
                        rax_14 = uucore::util_name::h074417a1e6395129();
                        var_c0 = rax_14;
                        int64_t var_b8_3 = rdx_11;
                        var_f8 = &var_c0;
                        *var_f8[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd7fdd532799be56e;
                        uint64_t* var_e8_3 = &var_d0;
                        var_e0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb683936e38a4ea07;
                        var_b0 = &data_4f9340;
                        *var_b0[8] = 3;
                        int64_t var_90_3 = 0;
                        int128_t* var_a0_3 = &var_f8;
                        int64_t var_98_3 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hb71a8d3b47f158bf(&var_d0);
                    }
                    
                    r15_1 = 1;
                    break;
                }
                rax_6 = r12_1 + 0x18;
                rbp_1 = r12_1;
                
                if (r12_1 == rbx_1)
                    goto label_469efa;
            }
            
            rax_6 = r12_1 + 0x18;
            
            if (r12_1 == rbx_1)
                rax_6 = r12_1;
        } while (r12_1 != rbx_1);
    }
    
    label_469efa:
    uint64_t rax_19 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hbe3cf09d9c63ca8b((*(rcx + 0x30))(var_80));
    var_70 = rax_19;
    void** const var_68_4 = &data_4f8e20;
    
    if (!rax_19)
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h3fc40c7c194632a2(&var_70);
    else
    {
        var_d0 = rax_19;
        void** const var_c8_3 = &data_4f8e20;
        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
        int128_t* rax_20;
        int64_t rdx_14;
        rax_20 = uucore::util_name::h074417a1e6395129();
        var_c0 = rax_20;
        int64_t var_b8_5 = rdx_14;
        var_f8 = &var_c0;
        *var_f8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd7fdd532799be56e;
        uint64_t* var_e8_5 = &var_d0;
        int64_t (* var_e0_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb683936e38a4ea07;
        var_b0 = &data_4f9340;
        *var_b0[8] = 3;
        int64_t var_90_5 = 0;
        int128_t* var_a0_5 = &var_f8;
        int64_t var_98_5 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hb71a8d3b47f158bf(&var_d0);
    }
    
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h8c282cad91f072b7(var_80, rcx);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hc22d9a1ba8213ee0(arg1);
}
