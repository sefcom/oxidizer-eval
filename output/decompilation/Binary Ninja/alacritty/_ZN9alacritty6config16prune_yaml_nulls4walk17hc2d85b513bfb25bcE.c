
  int64_t alacritty::config::prune_yaml_nulls::walk::hc2d85b513bfb25bc(void* arg1, char arg2)

{
    char var_9 = arg2;
    int64_t rcx = -0x8000000000000000 ^ *arg1;
    int64_t rax = 5;
    
    if (rcx < 7)
        rax = rcx;
    
    if (rax == 5)
    {
        indexmap::map::core::IndexMapCore$LT$K$C$V$GT$::retain_in_order::he9a4d152b7a8fd53(arg1, 
            &var_9);
        int64_t rax_3;
        rax_3 = !*(arg1 + 0x30);
        return rax_3;
    }
    
    if (rax == 4)
    {
        alloc::vec::Vec$LT$T$C$A$GT$::retain_mut::hfadf262ef8a2827f(arg1 + 8, &var_9);
        int64_t rax_2;
        rax_2 = !*(arg1 + 0x18);
        return rax_2;
    }
    
    if (rax)
        return 0;
    
    rax = 1;
    return rax;
}
