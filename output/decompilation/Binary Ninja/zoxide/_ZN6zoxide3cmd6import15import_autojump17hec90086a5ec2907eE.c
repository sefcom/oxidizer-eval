
  int64_t* zoxide::cmd::import::import_autojump::hec90086a5ec2907e(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    void var_88;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_88, 
        0xa, arg2, arg3);
    int64_t var_98 = 0;
    int64_t var_90 = arg3;
    int16_t var_58 = 0;
    int64_t i;
    int64_t rdx_1;
    i = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::hb8835bbe8c60b743(&var_98);
    
    while (i)
    {
        int64_t rax;
        int64_t rdx_2;
        rax = _$LT$core..str..LinesMap$u20$as$u20$core..ops..function..Fn$LT$$LP$$RF$str$C$$RP$$GT$$GT$::call::h32b8dbc7f07f5738(i, rdx_1);
        int64_t var_b8 = rax;
        int64_t var_b0_1 = rdx_2;
        
        if (rdx_2)
        {
            void var_50;
            core::str::_$LT$impl$u20$str$GT$::split_once::h949c65ff205b16da(&var_50, rax, rdx_2);
            char* var_d8;
            anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$core..convert..Infallible$GT$$u20$for$u20$core..option..Option$LT$T$GT$$GT$::with_context::h7873a399563cc2cb(&var_d8, &var_50, &var_b8);
            char* rsi_3 = var_d8;
            int64_t* result;
            
            if (rsi_3)
            {
                char* var_a8 = rsi_3;
                int64_t* result_1 = result;
                core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::h05023748d9faa6d2(&var_50, rsi_3, result);
                anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::h033bb80bcdf39c0f(&var_d8, &var_50, &var_a8);
            }
            
            if (!rsi_3 || var_d8 == 1)
                return result;
            
            zoxide::cmd::import::sigmoid::h4104d738136ae795(result);
            int64_t var_c8;
            uint64_t var_c0;
            zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::add_unchecked::hc55a6d1c0639e47d(arg1, var_c8, var_c0);
        }
        
        i = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::hb8835bbe8c60b743(&var_98);
    }
    
    if (arg1[7] == 1)
        zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::dedup::hac63854fe676c6b3(arg1);
    
    return nullptr;
}
