
  int64_t just::shebang::Shebang::new::he57eb4f1ce7ed327(int64_t* arg1, char* arg2, int64_t arg3)

{
    int64_t result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(
        arg2, arg3, "#!internal error: entered unreac…", 2);
    
    if (!result)
        *arg1 = 0;
    else
    {
        void* rax;
        int64_t rdx_1;
        rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(2, arg2, arg3);
        
        if (!rax)
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 2, arg3);
            /* no return */
        }
        
        void var_58;
        _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
            &var_58, 0xa, rax, rdx_1);
        int64_t var_68 = 0;
        int64_t var_60_1 = rdx_1;
        int16_t var_28_1 = 0;
        int64_t rax_1;
        int64_t rdx_3;
        rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next_inclusive::h05fb6e2c9643a702(&var_68);
        int64_t r12_2 = 1;
        int64_t rsi_3;
        int64_t rdi_4;
        
        if (!rax_1)
        {
            rsi_3 = 0;
            rdi_4 = 1;
        }
        else
        {
            int64_t rax_2;
            int64_t rdx_4;
            rax_2 = _$LT$core..str..LinesMap$u20$as$u20$core..ops..function..Fn$LT$$LP$$RF$str$C$$RP$$GT$$GT$::call::h32b8dbc7f07f5738(rax_1, rdx_3);
            rdi_4 = rax_2;
            rsi_3 = rdx_4;
        }
        
        int64_t rax_3;
        int64_t rdx_5;
        rax_3 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hfd0add22eadc0a63(rdi_4, rsi_3);
        void var_b8;
        _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h473cefa6588d8442(&var_b8, 0x900000020, rax_3, rdx_5);
        int64_t var_88_1 = 0;
        int64_t var_80_1 = rdx_5;
        int16_t var_78_1 = 1;
        int64_t var_70_1 = 1;
        int64_t rax_4;
        int64_t rdx_7;
        rax_4 = core::str::iter::SplitInternal$LT$P$GT$::next::ha4b7bac5e40888b3(&var_b8);
        int64_t r14_2 = rdx_7;
        
        if (!rax_4)
            r14_2 = rax_4;
        
        if (rax_4)
            r12_2 = rax_4;
        
        if (!var_70_1)
        {
            result = 0;
            
            if (!r14_2)
                *arg1 = 0;
            else
            {
                label_68a1f4:
                *arg1 = r12_2;
                arg1[1] = r14_2;
                arg1[2] = result;
                arg1[3] = rdx_7;
            }
        }
        else if (var_70_1 != 1)
        {
            int64_t var_70_3 = var_70_1 - 1;
            result = core::str::iter::SplitInternal$LT$P$GT$::next::ha4b7bac5e40888b3(&var_b8);
            
            if (r14_2)
                goto label_68a1f4;
            
            *arg1 = 0;
        }
        else
        {
            int64_t var_70_2 = 0;
            result = core::str::iter::SplitInternal$LT$P$GT$::get_end::h7348fa543be9108f(&var_b8);
            
            if (r14_2)
                goto label_68a1f4;
            
            *arg1 = 0;
        }
    }
    
    return result;
}
