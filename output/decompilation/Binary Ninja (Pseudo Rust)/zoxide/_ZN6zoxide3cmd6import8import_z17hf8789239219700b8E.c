
  fn zoxide::cmd::import::import_z::hf8789239219700b8(arg1: *mut i64, arg2: i64, arg3: i64) -> u64

{
    let mut var_68: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, 
        0xa, arg2, arg3);
    let mut var_78: i64 = 0;
    let var_70: i64 = arg3;
    let var_38: i16 = 0;
    let mut i: i64;
    let mut rdx_1: i64;
    i = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::hb8835bbe8c60b743(&var_78);
    
    while i != 0
    {
        let mut rax: i64;
        let mut rdx_2: i64;
        rax = _$LT$core..str..LinesMap$u20$as$u20$core..ops..function..Fn$LT$$LP$$RF$str$C$$RP$$GT$$GT$::call::h32b8dbc7f07f5738(i, rdx_1);
        let mut var_108: i64 = rax;
        let var_100_1: i64 = rdx_2;
        
        if rdx_2 != 0
        {
            let mut var_b0: ();
            _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
                &var_b0, 0x7c, rax, rdx_2);
            let mut var_c0: i64 = 0;
            let var_b8_1: i64 = rdx_2;
            let var_80_1: i16 = 1;
            let mut var_c8_1: i64 = 2;
            let mut rax_1: i64;
            let mut rdx_4: u64;
            rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next_back::h2273d74c4d8f9a95(&var_c0);
            let mut var_118: *mut i8;
            anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$core..convert..Infallible$GT$$u20$for$u20$core..option..Option$LT$T$GT$$GT$::with_context::h2ecddd1f531e1e59(&var_118, rax_1, rdx_4, &var_108);
            let rsi_2: *mut i8 = var_118;
            let var_110: u64;
            
            if rsi_2 == 0
            {
                return var_110;
            }
            
            let mut var_f8: *mut i8 = rsi_2;
            let var_f0_1: u64 = var_110;
            let mut rax_2: i8;
            let mut rdx_7: u64;
            rax_2 = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::h8c1443f3eaf5363e(&var_118, &var_f8, 
                core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_118, 
                    rsi_2, var_110));
            
            if (rax_2 & 1) != 0
            {
                return rdx_7;
            }
            
            let mut rsi_4: i64;
            
            if var_c8_1 == 0
            {
                rsi_4 = 0;
            }
            else
            {
                let mut rax_4: i64;
                
                if var_c8_1 != 1
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
            let rsi_5: *mut i8 = var_118;
            let mut r15_2: u64 = var_110;
            let mut var_d8: i8;
            let mut rdx_10: u64;
            
            if rsi_5 != 0
            {
                let mut var_e8: *mut i8 = rsi_5;
                let var_e0_1: u64 = r15_2;
                core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::h05023748d9faa6d2(&var_118, rsi_5, r15_2);
                rdx_10 = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::h033bb80bcdf39c0f(&var_d8, &var_118, &var_e8);
                let var_d0: u64;
                r15_2 = var_d0;
            }
            
            if rsi_5 == 0 || (var_d8 & 1) != 0
            {
                return r15_2;
            }
            
            let mut rsi_7: i64;
            
            if var_c8_1 == 0
            {
                rsi_7 = 0;
            }
            else
            {
                let mut rax_7: i64;
                
                if var_c8_1 != 1
                {
                    let var_c8_3: i64 = var_c8_1 - 1;
                    rax_7 = core::str::iter::SplitInternal$LT$P$GT$::next_back::h2273d74c4d8f9a95(
                        &var_c0);
                }
                else
                {
                    let var_c8_2: i64 = 0;
                    rax_7 = core::str::iter::SplitInternal$LT$P$GT$::get_end::hdd358197edd14f78(
                        &var_c0);
                }
                
                rsi_7 = rax_7;
            }
            
            anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$core..convert..Infallible$GT$$u20$for$u20$core..option..Option$LT$T$GT$$GT$::with_context::h2ecddd1f531e1e59(&var_118, rsi_7, rdx_10, &var_108);
            let rsi_8: *mut i8 = var_118;
            
            if rsi_8 == 0
            {
                return var_110;
            }
            
            let mut zmm0_1: i512;
            zmm0_1 = r15_2;
            zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::add_unchecked::hc55a6d1c0639e47d(arg1, rsi_8, var_110);
        }
        
        i = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::hb8835bbe8c60b743(&var_78);
    }
    
    if arg1[7] == 1
    {
        zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::dedup::hac63854fe676c6b3(arg1);
    }
    
    0
}
