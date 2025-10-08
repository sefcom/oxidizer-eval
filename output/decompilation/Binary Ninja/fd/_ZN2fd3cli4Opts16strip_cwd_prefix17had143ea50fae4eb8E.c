
  int64_t fd::cli::Opts::strip_cwd_prefix::had143ea50fae4eb8(void* arg1, char arg2, char arg3)

{
    int64_t rax;
    int64_t var_18 = rax;
    
    if (!*(arg1 + 0xb0) && !*(arg1 + 0xc8))
    {
        char rax_1 = core::option::Option$LT$T$GT$::map_or::h0f3e669136a2a298(*(arg1 + 0x1f7));
        
        if (!rax_1)
            /* tailcall */
            return fd::construct_config::_$u7b$$u7b$closure$u7d$$u7d$::hc0c2af0721adc740(arg2, 
                arg3);
        
        if (rax_1 == 1)
            return 1;
    }
    
    return 0;
}
