
  fn zoxide::cmd::import::import_autojump::hec90086a5ec2907e(arg1: *mut i64, arg2: i64, arg3: i64) -> *mut i64

{
    let mut var_88: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_88, 
        0xa, arg2, arg3);
    let mut var_98: i64 = 0;
    let var_90: i64 = arg3;
    let var_58: i16 = 0;
    let mut i: i64;
    let mut rdx_1: i64;
    i = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::hb8835bbe8c60b743(&var_98);
    
    while i != 0
    {
        let mut rax: i64;
        let mut rdx_2: i64;
        rax = _$LT$core..str..LinesMap$u20$as$u20$core..ops..function..Fn$LT$$LP$$RF$str$C$$RP$$GT$$GT$::call::h32b8dbc7f07f5738(i, rdx_1);
        let mut var_b8: i64 = rax;
        let var_b0_1: i64 = rdx_2;
        
        if rdx_2 != 0
        {
            let mut var_50: ();
            core::str::_$LT$impl$u20$str$GT$::split_once::h949c65ff205b16da(&var_50, rax, rdx_2);
            let mut var_d8: *mut i8;
            anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$core..convert..Infallible$GT$$u20$for$u20$core..option..Option$LT$T$GT$$GT$::with_context::h7873a399563cc2cb(&var_d8, &var_50, &var_b8);
            let rsi_3: *mut i8 = var_d8;
            let result: *mut i64;
            
            if rsi_3 != 0
            {
                let mut var_a8: *mut i8 = rsi_3;
                let result_1: *mut i64 = result;
                core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::h05023748d9faa6d2(&var_50, rsi_3, result);
                anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::h033bb80bcdf39c0f(&var_d8, &var_50, &var_a8);
            }
            
            if rsi_3 == 0 || var_d8 == 1
            {
                return result;
            }
            
            zoxide::cmd::import::sigmoid::h4104d738136ae795(result);
            let var_c8: i64;
            let var_c0: u64;
            zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::add_unchecked::hc55a6d1c0639e47d(arg1, var_c8, var_c0);
        }
        
        i = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::hb8835bbe8c60b743(&var_98);
    }
    
    if arg1[7] == 1
    {
        zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::dedup::hac63854fe676c6b3(arg1);
    }
    
    nullptr
}
