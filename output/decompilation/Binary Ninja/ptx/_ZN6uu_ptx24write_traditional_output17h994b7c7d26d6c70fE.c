
  int128_t* uu_ptx::write_traditional_output::h994b7c7d26d6c70f(char const (** arg1)[0x97], int64_t* arg2, int64_t* arg3, void** arg4, uint64_t arg5)

{
    int128_t* result;
    void* const result_1;
    int32_t var_118;
    int64_t var_e0;
    int64_t* rax_1;
    void* const rcx;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he450917857c3e673(arg4, arg5, "-:assertion failed: beg <= endas…", 1))
    {
        std::fs::File::create::h7afd7399792ad865(&var_e0, arg4);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hcf4fec145e7d01a1(&result_1, &var_e0);
        result = result_1;
        
        if (!result)
        {
            rax_1 = alloc::boxed::Box$LT$T$GT$::new::h9f305fe194b67db1(var_118);
            rcx = &data_6ee270;
            goto label_5b8b2d;
        }
    }
    else
    {
        std::io::stdio::stdout::h077da66234850927();
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::hb5cf39cdf7805947(
            &std::io::stdio::STDOUT::hdbe36c11cd3014ce);
        rcx = &data_6ee2c0;
        label_5b8b2d:
        void var_60;
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hc28e5ceb504200ea(&var_60, 
            0x2000, rax_1, rcx);
        arg1[8];
        regex::regex::string::Regex::new::h2b022f3b326b0361(&var_e0, arg1[7]);
        int128_t var_80;
        core::result::Result$LT$T$C$E$GT$::unwrap::hc501836100c48eb1(&var_80, &var_e0);
        int64_t rax_3 = *arg3;
        int64_t rcx_1 = arg3[1];
        int64_t rsi_5 = rax_3;
        int128_t* rdi_6;
        rdi_6 = rax_3;
        
        if (rax_3)
            rsi_5 = arg3[2];
        
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
        int64_t var_a0_1 = rsi_5;
        uint32_t rbp_1 = *(arg1 + 0x5d);
        uint32_t rcx_2 = *(arg1 + 0x59);
        uint32_t rax_5 = *(arg1 + 0x5a);
        char const (** const var_148_1)[0x21] = &data_6ee370;
        void var_138;
        
        while (true)
        {
            void* rax_6 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h42515bd069bd12f0(&var_e0);
            
            if (!rax_6)
            {
                core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf34b8b1af3b36f38(
                    &var_80);
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h4237c84ac900e5ad(&var_60);
                return nullptr;
            }
            
            void* rax_7 =
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h5a6cffc6474407cf(arg2, 
                rax_6 + 0x18);
            
            if (!rax_7)
            {
                core::option::expect_failed::h9e03a1f6ff88dbcf("Missing file in file map\nProduc…");
                /* no return */
            }
            
            void** const r14 = *(rax_6 + 0x38);
            int64_t rsi_7 = *(rax_7 + 0x28);
            
            if (r14 >= rsi_7)
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(r14, rsi_7);
                /* no return */
            }
            
            int64_t r12_1 = *(rax_7 + 0x20);
            void* r13_1 = r14 * 3;
            int128_t var_168;
            uu_ptx::get_reference::hde200eae24bcb508(&var_138, rcx_2, rax_5, rax_6, 
                *(r12_1 + (r13_1 << 3) + 8), *(r12_1 + (r13_1 << 3) + 0x10), var_80, var_168, arg1, 
                rax_5, &data_6ee370, arg2);
            void* rax_8 = r12_1 + (r13_1 << 3);
            void var_98;
            int128_t var_130;
            int64_t rsi_9;
            
            if (rbp_1 == 1)
            {
                rsi_9 = *(rax_7 + 0x40);
                
                if (r14 >= rsi_9)
                {
                    var_148_1 = &data_6ee358;
                    core::panicking::panic_bounds_check::h25a5330941572dd1(r14, rsi_9);
                    /* no return */
                }
                
                var_168 = var_130;
                uu_ptx::format_roff_line::h4297720d7d6a4583(&var_98, arg1, *(rax_6 + 0x40), 
                    *(rax_6 + 0x48), *(rax_8 + 8), *(rax_8 + 0x10), 
                    *(*(rax_7 + 0x38) + (r13_1 << 3) + 8), var_168);
            }
            else
            {
                if (rbp_1 != 2)
                {
                    result_1 = 0;
                    result = alloc::boxed::Box$LT$T$GT$::new::hfc4024115c711549(&result_1);
                    break;
                }
                
                rsi_9 = *(rax_7 + 0x40);
                
                if (r14 >= rsi_9)
                {
                    core::panicking::panic_bounds_check::h25a5330941572dd1(r14, rsi_9);
                    /* no return */
                }
                
                var_168 = var_130;
                uu_ptx::format_tex_line::h116c5459a35e6a61(&var_98, arg1, *(rax_6 + 0x40), 
                    *(rax_6 + 0x48), *(rax_8 + 8), *(rax_8 + 0x10), 
                    *(*(rax_7 + 0x38) + (r13_1 << 3) + 8), var_168);
            }
            void* var_f0 = &var_98;
            int64_t (* var_e8_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            result_1 = &data_6ee250;
            var_118 = 2;
            int64_t var_100_1 = 0;
            void** var_110_1 = &var_f0;
            int64_t var_108_1 = 1;
            int128_t* result_2 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h12e604f0a0762086(std::io::Write::write_fmt::hc188f250100c2fb6(&var_60, &result_1));
            result = result_2;
            
            if (result_2)
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_98);
                break;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_98);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_138);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_138);
        core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf34b8b1af3b36f38(&var_80);
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h4237c84ac900e5ad(&var_60);
    }
    return result;
}
