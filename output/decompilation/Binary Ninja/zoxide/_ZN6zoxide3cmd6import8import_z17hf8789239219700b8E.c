
  uint64_t zoxide::cmd::import::import_z::hf8789239219700b8(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    void var_68;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, 
        0xa, arg2, arg3);
    int64_t var_78 = 0;
    int64_t var_70 = arg3;
    int16_t var_38 = 0;
    int64_t i;
    int64_t rdx_1;
    i = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::hb8835bbe8c60b743(&var_78);
    
    while (i)
    {
        int64_t rax;
        int64_t rdx_2;
        rax = _$LT$core..str..LinesMap$u20$as$u20$core..ops..function..Fn$LT$$LP$$RF$str$C$$RP$$GT$$GT$::call::h32b8dbc7f07f5738(i, rdx_1);
        int64_t var_108 = rax;
        int64_t var_100_1 = rdx_2;
        
        if (rdx_2)
        {
            void var_b0;
            _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
                &var_b0, 0x7c, rax, rdx_2);
            int64_t var_c0 = 0;
            int64_t var_b8_1 = rdx_2;
            int16_t var_80_1 = 1;
            int64_t var_c8_1 = 2;
            int64_t rax_1;
            uint64_t rdx_4;
            rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next_back::h2273d74c4d8f9a95(&var_c0);
            char* var_118;
            anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$core..convert..Infallible$GT$$u20$for$u20$core..option..Option$LT$T$GT$$GT$::with_context::h2ecddd1f531e1e59(&var_118, rax_1, rdx_4, &var_108);
            char* rsi_2 = var_118;
            uint64_t var_110;
            
            if (!rsi_2)
                return var_110;
            
            char* var_f8 = rsi_2;
            uint64_t var_f0_1 = var_110;
            char rax_2;
            uint64_t rdx_7;
            rax_2 = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::h8c1443f3eaf5363e(&var_118, &var_f8, 
                core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_118, 
                    rsi_2, var_110));
            
            if (rax_2 & 1)
                return rdx_7;
            
            int64_t rsi_4;
            
            if (!var_c8_1)
                rsi_4 = 0;
            else
            {
                int64_t rax_4;
                
                if (var_c8_1 != 1)
                {
                    var_c8_1 -= 1;
                    rax_4 = core::str::iter::SplitInternal$LT$P$GT$::next_back::h2273d74c4d8f9a95(
                        &var_c0);
                }
                else
                {
                    var_c8_1 = 0;
                    rax_4 = core::str::iter::SplitInternal$LT$P$GT$::get_end::hdd358197edd14f78(
                        &var_c0);
                }
                
                rsi_4 = rax_4;
            }
            
            anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$core..convert..Infallible$GT$$u20$for$u20$core..option..Option$LT$T$GT$$GT$::with_context::h2ecddd1f531e1e59(&var_118, rsi_4, rdx_7, &var_108);
            char* rsi_5 = var_118;
            uint64_t r15_2 = var_110;
            char var_d8;
            uint64_t rdx_10;
            
            if (rsi_5)
            {
                char* var_e8 = rsi_5;
                uint64_t var_e0_1 = r15_2;
                core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::h05023748d9faa6d2(&var_118, rsi_5, r15_2);
                rdx_10 = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::h033bb80bcdf39c0f(&var_d8, &var_118, &var_e8);
                uint64_t var_d0;
                r15_2 = var_d0;
            }
            
            if (!rsi_5 || var_d8 & 1)
                return r15_2;
            
            int64_t rsi_7;
            
            if (!var_c8_1)
                rsi_7 = 0;
            else
            {
                int64_t rax_7;
                
                if (var_c8_1 != 1)
                {
                    int64_t var_c8_3 = var_c8_1 - 1;
                    rax_7 = core::str::iter::SplitInternal$LT$P$GT$::next_back::h2273d74c4d8f9a95(
                        &var_c0);
                }
                else
                {
                    int64_t var_c8_2 = 0;
                    rax_7 = core::str::iter::SplitInternal$LT$P$GT$::get_end::hdd358197edd14f78(
                        &var_c0);
                }
                
                rsi_7 = rax_7;
            }
            
            anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$core..convert..Infallible$GT$$u20$for$u20$core..option..Option$LT$T$GT$$GT$::with_context::h2ecddd1f531e1e59(&var_118, rsi_7, rdx_10, &var_108);
            char* rsi_8 = var_118;
            
            if (!rsi_8)
                return var_110;
            
            int512_t zmm0_1;
            zmm0_1 = r15_2;
            zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::add_unchecked::hc55a6d1c0639e47d(arg1, rsi_8, var_110);
        }
        
        i = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::hb8835bbe8c60b743(&var_78);
    }
    
    if (arg1[7] == 1)
        zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::dedup::hac63854fe676c6b3(arg1);
    
    return 0;
}
