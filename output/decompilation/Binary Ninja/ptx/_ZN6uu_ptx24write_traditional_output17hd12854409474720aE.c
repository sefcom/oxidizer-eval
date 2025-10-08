
  uint64_t uu_ptx::write_traditional_output::hd12854409474720a(char const (** arg1)[0x9b], int64_t* arg2, int64_t* arg3, void** arg4, uint64_t arg5)

{
    uint64_t result;
    void* const result_1;
    int64_t var_e0;
    uint64_t rax_1;
    void* const rdx;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc639eb17d6278023(arg4, arg5, "-[^]+[^ \t\n]+", 1))
    {
        std::fs::File::create::h80385a49d02ea4fb(&var_e0, arg4);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h0143a7b0968f907c(&result_1, &var_e0);
        result = result_1;
        
        if (!result)
        {
            void** var_118;
            rax_1 = alloc::boxed::Box$LT$T$GT$::new::h78f68dd9e7792e5e(var_118);
            rdx = &data_651ce8;
            goto label_52db3c;
        }
    }
    else
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::h16f26c34398979df(
            &std::io::stdio::STDOUT::h411b213c5c9add46);
        rdx = &data_651d38;
        label_52db3c:
        void var_78;
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h48c1eff1ee71fcce(&var_78, 
            rax_1, rdx);
        regex::regex::string::Regex::new::h830f62d081924685(&var_e0, arg1[7]);
        int128_t var_98;
        core::result::Result$LT$T$C$E$GT$::unwrap::hcfdbcfab40fd90b7(&var_98, &var_e0);
        int64_t rax_3 = *arg3;
        int64_t rcx_1 = arg3[1];
        int64_t rsi_6 = rax_3;
        int128_t* rdi_6;
        rdi_6 = rax_3;
        
        if (rax_3)
            rsi_6 = arg3[2];
        
        int64_t rdx_4;
        rdx_4 = rdi_6;
        var_e0 = rdx_4;
        int64_t var_d8_1 = 0;
        int64_t var_d0_1 = rax_3;
        int64_t var_c8_1 = rcx_1;
        int64_t var_c0_1 = rdx_4;
        int64_t var_b8_1 = 0;
        int64_t var_b0_1 = rax_3;
        int64_t var_a8_1 = rcx_1;
        int64_t var_a0_1 = rsi_6;
        uint32_t r15_1 = *(arg1 + 0x5d);
        uint32_t rbp_1 = *(arg1 + 0x59);
        uint32_t r12_1 = *(arg1 + 0x5a);
        char const (** const var_150_1)[0x22] = &data_651e00;
        
        while (true)
        {
            void* rax_5 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h68f71da84148c088(&var_e0);
            
            if (!rax_5)
            {
                uint64_t result_2 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h09421af0a19fc6ce(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hbac5442ed2d7edaf(&var_78));
                result = result_2;
                
                if (!result_2)
                {
                    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h1c6ec398caf69ee4(
                        &var_98);
                    result = 0;
                    break;
                }
            }
            else
            {
                void** rax_6 =
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h4de00bcffe1eea4e(
                    arg2, rax_5 + 0x18);
                
                if (!rax_6)
                {
                    core::option::expect_failed::h3f620cfb8545dc61(
                        "Missing file in file map\nwrite …");
                    /* no return */
                }
                
                int64_t rdi_9 = *(rax_5 + 0x38);
                int64_t rsi_8 = rax_6[5];
                
                if (rdi_9 >= rsi_8)
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_9, rsi_8);
                    /* no return */
                }
                
                int64_t rax_7 = rax_6[4];
                int64_t rcx_2 = rdi_9 * 3;
                int128_t var_168;
                void var_138;
                uu_ptx::get_reference::h1c80303ca2b5f184(&var_138, rbp_1, r12_1, rax_5, 
                    *(rax_7 + (rcx_2 << 3) + 8), *(rax_7 + (rcx_2 << 3) + 0x10), var_98, var_168);
                int128_t var_130;
                void var_48;
                char const (** rax_15)[0x22];
                int64_t rsi_10;
                int64_t rdi_11;
                
                if (r15_1 == 1)
                {
                    rdi_11 = *(rax_5 + 0x38);
                    rsi_10 = rax_6[5];
                    
                    if (rdi_11 >= rsi_10)
                    {
                        rax_15 = &data_651dd0;
                        label_52debc:
                        var_150_1 = rax_15;
                        core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_11, rsi_10);
                        /* no return */
                    }
                    
                    rsi_10 = rax_6[8];
                    
                    if (rdi_11 >= rsi_10)
                    {
                        rax_15 = &data_651de8;
                        goto label_52debc;
                    }
                    
                    int64_t rax_9 = rax_6[4];
                    int64_t rdx_8 = rdi_11 * 0x18;
                    var_168 = var_130;
                    uu_ptx::format_roff_line::he10d8fad25b32594(&var_48, arg1, *(rax_5 + 0x40), 
                        *(rax_5 + 0x48), *(rax_9 + rdx_8 + 8), *(rax_9 + rdx_8 + 0x10), 
                        *(rax_6[7] + rdx_8 + 8), var_168);
                    label_52dd60:
                    void* var_f0 = &var_48;
                    int64_t (* var_e8_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    result_1 = &data_651cc8;
                    int64_t var_118_1 = 2;
                    int64_t var_100_1 = 0;
                    void** var_110_1 = &var_f0;
                    int64_t var_108_1 = 1;
                    result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h09421af0a19fc6ce(std::io::Write::write_fmt::h4c6bccb60aebda36(&var_78, &result_1));
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(
                        &var_48);
                    
                    if (!result)
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(
                            &var_138);
                        continue;
                    }
                }
                else
                {
                    if (r15_1 == 2)
                    {
                        rdi_11 = *(rax_5 + 0x38);
                        rsi_10 = rax_6[5];
                        
                        if (rdi_11 >= rsi_10)
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_11, rsi_10);
                            /* no return */
                        }
                        
                        rsi_10 = rax_6[8];
                        
                        if (rdi_11 >= rsi_10)
                        {
                            rax_15 = &data_651e18;
                            goto label_52debc;
                        }
                        
                        int64_t rax_8 = rax_6[4];
                        int64_t rdx_6 = rdi_11 * 0x18;
                        var_168 = var_130;
                        uu_ptx::format_tex_line::hd442331aff487d86(&var_48, arg1, *(rax_5 + 0x40), 
                            *(rax_5 + 0x48), *(rax_8 + rdx_6 + 8), *(rax_8 + rdx_6 + 0x10), 
                            *(rax_6[7] + rdx_6 + 8), var_168);
                        goto label_52dd60;
                    }
                    
                    result_1 = 0;
                    result = alloc::boxed::Box$LT$T$GT$::new::h2875cf048a4ad78b(&result_1);
                }
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_138);
            }
            
            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h1c6ec398caf69ee4(&var_98);
            break;
        }
        
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::hda5f8bf0ece5e0b5(&var_78);
    }
    return result;
}
