
  int64_t uu_unexpand::next_tabstop::h080f73c87180f742(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_20 = arg3;
    
    if (arg2 != 1)
    {
        int64_t* var_18 = arg1;
        void* var_10_1 = &arg1[arg2];
        int64_t* rax_6;
        int64_t rcx_1;
        rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::hbb310f0c725f7a84(&var_18, &var_20);
        
        if (!rax_6)
            return 0;
        
        *rax_6;
    }
    else if (!*arg1)
    {
        core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
        /* no return */
    }
    
    return 1;
}
