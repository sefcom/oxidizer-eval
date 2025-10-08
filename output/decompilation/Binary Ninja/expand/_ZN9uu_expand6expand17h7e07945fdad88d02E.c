
  int64_t uu_expand::expand::h7e07945fdad88d02(void* arg1)

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    void var_58;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h62993fbbc8aa06bb(&var_58, 
        &std::io::stdio::STDOUT::h411b213c5c9add46);
    int64_t* r14 = *(arg1 + 0x20);
    int64_t r15 = *(arg1 + 0x28);
    int64_t var_e0 = 0;
    int64_t var_d8 = 1;
    int64_t var_d0 = 0;
    int64_t rax = *(arg1 + 0x10);
    int64_t result;
    int64_t rsi_9;
    int64_t rdi_16;
    
    if (!rax)
    {
        rsi_9 = 1;
        rdi_16 = 0;
        label_45dc27:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hb3894eaab1b20cfd(rdi_16, rsi_9);
        result = 0;
    }
    else
    {
        void* r13_1 = *(arg1 + 8);
        void* r12_2 = rax * 0x18 + r13_1;
        void* rax_2 = r13_1 + 0x18;
        void* var_a8_1 = r12_2;
        
        while (true)
        {
            void* var_b0 = r13_1;
            int64_t rdi_1 = *(r13_1 + 8);
            uint64_t rsi_1 = *(r13_1 + 0x10);
            r13_1 = rax_2;
            void* const var_128;
            int64_t** var_118;
            int64_t var_108;
            int64_t* var_f0;
            int64_t* var_a0;
            int64_t (* var_98)(int64_t* arg1, int64_t arg2);
            
            if (!std::path::Path::is_dir::h02edbc48c38d7d9e(rdi_1, rsi_1))
            {
                void* rax_5 = var_b0;
                uu_expand::open::hc6af5baed7605e7e(&var_a0, *(rax_5 + 8), *(rax_5 + 0x10));
                
                if (var_a0)
                {
                    int64_t var_70;
                    int64_t var_f8_1 = var_70;
                    int128_t var_80;
                    var_108 = var_80;
                    int128_t var_90;
                    var_118 = var_90;
                    var_128 = var_a0;
                    int64_t i;
                    
                    do
                    {
                        int64_t rax_7;
                        int64_t rdx_3;
                        rax_7 = std::io::read_until::he79a9ae76b7d0ac2(&var_128, &var_e0);
                        
                        if (rax_7 & 1)
                        {
                            if (!var_d0)
                                goto label_45dacf;
                            
                            goto label_45dbed;
                        }
                        
                        if (!rdx_3)
                        {
                            rdx_3 = 0;
                            label_45dbed:
                            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb34bad757c41de(rax_7, rdx_3);
                            r12_2 = var_a8_1;
                            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h4160db49dd893c24(&var_128);
                            goto label_45d940;
                        }
                        
                        label_45dacf:
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb34bad757c41de(rax_7, rdx_3);
                        i = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4d94a61557d52f12(uu_expand::expand_line::h49356f72fbe6ed37(&var_e0, &var_58, r14, r15, 
                            arg1));
                        result = i;
                    } while (!i);
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::h4160db49dd893c24(&var_128);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hb3894eaab1b20cfd(
                        var_e0, var_d8);
                    break;
                }
                
                int128_t var_c8 = var_98;
                int64_t* rax_9;
                int64_t rdx_5;
                rax_9 = uucore::util_name::h074417a1e6395129();
                var_f0 = rax_9;
                int64_t var_e8_2 = rdx_5;
                int64_t** var_68 = &var_f0;
                int64_t (* var_60_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a55ce0d4da56261;
                var_128 = &data_4e8ad0;
                int64_t var_120_3 = 2;
                int64_t var_108_2 = 0;
                int64_t*** var_118_2 = &var_68;
                int64_t var_110_3 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                var_f0 = &var_c8;
                int64_t (* var_e8_3)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h27bb90d2eb185827;
                var_128 = &data_4e8b10;
                int64_t var_120_4 = 2;
                var_108 = 0;
                var_118 = &var_f0;
                int64_t var_110_4 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hdb3e2bb4f9085848(var_c8, *var_c8[8]);
            }
            else
            {
                int64_t* rax_4;
                int64_t rdx_1;
                rax_4 = uucore::util_name::h074417a1e6395129();
                var_a0 = rax_4;
                int64_t var_98_1 = rdx_1;
                var_f0 = &var_a0;
                int64_t (* var_e8_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a55ce0d4da56261;
                var_128 = &data_4e8ad0;
                int64_t var_120_1 = 2;
                int64_t var_108_1 = 0;
                int64_t** var_118_1 = &var_f0;
                int64_t var_110_1 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                var_a0 = &var_b0;
                var_98 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd97d1afc4e866689;
                var_128 = &data_4e8af0;
                int64_t var_120_2 = 2;
                var_108 = 0;
                var_118 = &var_a0;
                int64_t var_110_2 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_128);
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            }
            label_45d940:
            rax_2 = r13_1 + 0x18;
            
            if (r13_1 == r12_2)
                rax_2 = r13_1;
            
            if (r13_1 == r12_2)
            {
                rdi_16 = var_e0;
                rsi_9 = var_d8;
                goto label_45dc27;
            }
        }
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h7c3e098b824165b9(&var_58);
    return result;
}
