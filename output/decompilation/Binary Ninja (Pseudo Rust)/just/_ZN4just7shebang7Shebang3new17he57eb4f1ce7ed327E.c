
  fn just::shebang::Shebang::new::he57eb4f1ce7ed327(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> i64

{
    let mut result: i64 =
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(arg2, arg3, 
        "#!internal error: entered unreac…", 2);
    
    if result == 0
    {
        *arg1 = 0;
    }
    else
    {
        let mut rax: *mut c_void;
        let mut rdx_1: i64;
        rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(2, arg2, arg3);
        
        if rax == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 2, arg3);
            /* no return */
        }
        
        let mut var_58: ();
        _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
            &var_58, 0xa, rax, rdx_1);
        let mut var_68: i64 = 0;
        let var_60_1: i64 = rdx_1;
        let var_28_1: i16 = 0;
        let mut rax_1: i64;
        let mut rdx_3: i64;
        rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::h05fb6e2c9643a702(&var_68);
        let mut r12_2: i64 = 1;
        let mut rsi_3: i64;
        let mut rdi_4: i64;
        
        if rax_1 == 0
        {
            rsi_3 = 0;
            rdi_4 = 1;
        }
        else
        {
            let mut rax_2: i64;
            let mut rdx_4: i64;
            rax_2 = _$LT$core..str..LinesMap$u20$as$u20$core..ops..function..Fn$LT$$LP$$RF$str$C$$RP$$GT$$GT$::call::h32b8dbc7f07f5738(rax_1, rdx_3);
            rdi_4 = rax_2;
            rsi_3 = rdx_4;
        }
        
        let mut rax_3: i64;
        let mut rdx_5: i64;
        rax_3 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hfd0add22eadc0a63(rdi_4, rsi_3);
        let mut var_b8: ();
        _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h473cefa6588d8442(&var_b8, 0x900000020, rax_3, rdx_5);
        let var_88_1: i64 = 0;
        let var_80_1: i64 = rdx_5;
        let var_78_1: i16 = 1;
        let var_70_1: i64 = 1;
        let mut rax_4: i64;
        let mut rdx_7: i64;
        rax_4 = core::str::iter::SplitInternal$LT$P$GT$::next::ha4b7bac5e40888b3(&var_b8);
        let mut r14_2: i64 = rdx_7;
        
        if rax_4 == 0
        {
            r14_2 = rax_4;
        }
        
        if rax_4 != 0
        {
            r12_2 = rax_4;
        }
        
        if var_70_1 == 0
        {
            result = 0;
            
            if r14_2 == 0
            {
                *arg1 = 0;
            }
            else
            {
                'label_68a1f4:
                *arg1 = r12_2;
                arg1[1] = r14_2;
                arg1[2] = result;
                arg1[3] = rdx_7;
            }
        }
        else if var_70_1 != 1
        {
            let var_70_3: i64 = var_70_1 - 1;
            result = core::str::iter::SplitInternal$LT$P$GT$::next::ha4b7bac5e40888b3(&var_b8);
            
            if r14_2 != 0
            {
                goto 'label_68a1f4;
            }
            
            *arg1 = 0;
        }
        else
        {
            let var_70_2: i64 = 0;
            result = core::str::iter::SplitInternal$LT$P$GT$::get_end::h7348fa543be9108f(&var_b8);
            
            if r14_2 != 0
            {
                goto 'label_68a1f4;
            }
            
            *arg1 = 0;
        }
    }
    
    result
}
