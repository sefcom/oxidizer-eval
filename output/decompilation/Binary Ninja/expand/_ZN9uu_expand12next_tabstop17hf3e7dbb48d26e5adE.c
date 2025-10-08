
  int64_t uu_expand::next_tabstop::hf3e7dbb48d26e5ad(int64_t* arg1, int64_t arg2, int64_t arg3, char arg4)

{
    int64_t var_28 = arg3;
    int64_t rcx_2;
    int64_t* var_38;
    int64_t* rax_3;
    
    if (!arg4)
    {
        if (arg2 != 1)
        {
            var_38 = arg1;
            void* var_30_3 = &arg1[arg2];
            rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h1fbb722a12bdd0f1(&var_38, &var_28);
            
            if (!rax_3)
                return 1;
            
            return *rax_3 - arg3;
        }
        
        rcx_2 = *arg1;
        
        if (!rcx_2)
        {
            core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
            /* no return */
        }
    }
    else
    {
        if (arg4 != 1)
        {
            int64_t* rax_9;
            int64_t rdx_5;
            rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hb47ef625d69d1750(arg2 - 1, arg1, arg2);
            var_38 = rax_9;
            void* var_30_2 = &rax_9[rdx_5];
            rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h1fbb722a12bdd0f1(&var_38, &var_28);
            
            if (rax_3)
                return *rax_3 - arg3;
            
            if (!arg2)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(arg2 - 1, 0);
                /* no return */
            }
            
            if (arg2 == 1)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(arg2 - 2, 1);
                /* no return */
            }
            
            int64_t rsi_4 = arg1[arg2 - 1];
            
            if (!rsi_4)
            {
                core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
                /* no return */
            }
            
            int64_t rbx = arg3 - arg1[arg2 - 2];
            uint64_t rcx_5;
            
            if (!((rbx | rsi_4) >> 0x20))
                rcx_5 = COMBINE(0, rbx) / rsi_4;
            else
                rcx_5 = COMBINE(0, rbx) / rsi_4;
            
            return (rcx_5 + 1) * rsi_4 - rbx;
        }
        
        int64_t* rax_2;
        int64_t rdx_1;
        rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hb47ef625d69d1750(arg2 - 1, arg1, arg2);
        var_38 = rax_2;
        void* var_30_1 = &rax_2[rdx_1];
        rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h1fbb722a12bdd0f1(&var_38, &var_28);
        
        if (rax_3)
            return *rax_3 - arg3;
        
        if (!arg2)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(arg2 - 1, 0);
            /* no return */
        }
        
        rcx_2 = arg1[arg2 - 1];
        
        if (!rcx_2)
        {
            core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
            /* no return */
        }
    }
    uint64_t rdx_3;
    
    if (!((arg3 | rcx_2) >> 0x20))
        rdx_3 = COMBINE(0, arg3) % rcx_2;
    else
        rdx_3 = COMBINE(0, arg3) % rcx_2;
    
    return rcx_2 - rdx_3;
}
