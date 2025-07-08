
  int64_t uu_unexpand::next_tabstop::h948056bd8ee01f21(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_20 = arg3;
    
    if (arg2 != 1)
    {
        int64_t* var_18 = arg1;
        void* var_10_1 = &arg1[arg2];
        int64_t* rax_6;
        int64_t rcx_1;
        rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h222f1f9381491abf(&var_18, &var_20);
        
        if (!rax_6)
            return 0;
        
        *rax_6;
    }
    else if (!*arg1)
    {
        core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
        /* no return */
    }
    
    return 1;
}
