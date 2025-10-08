
  int64_t ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::push_leading::he90569e9276cd544(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    int64_t var_60 = arg2;
    void* rax = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h87cf0787e596fc53(
        &arg1[6], &var_60);
    
    if (!rax)
    {
        int64_t r12_2 = arg1[2];
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6db36899efacabdb(arg1, arg4);
        int64_t rbx_1 = var_60;
        void var_50;
        ruff_python_formatter::comments::map::InOrderEntry::leading::hb1749f99636007f0(&var_50, 
            r12_2, arg1[2]);
        void var_40;
        return hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h9b127e050614fcb6(&var_40, 
            &arg1[6], rbx_1, arg3, &var_50);
    }
    
    int64_t* rdi_10;
    
    if (!*(rax + 0x10))
    {
        int64_t rdi_7 = *(rax + 0x18);
        int64_t rsi_5 = arg1[5];
        
        if (rdi_7 >= rsi_5)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_7, rsi_5);
            /* no return */
        }
        
        rdi_10 = rdi_7 * 0x18 + arg1[4];
    }
    else
    {
        int64_t r12_1 = arg1[2];
        
        if (!*(rax + 0x18) && r12_1 ==
            ruff_python_formatter::comments::map::InOrderEntry::range::h6e360fb934eb8131(rax
            + 0x10))
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6db36899efacabdb(arg1, arg4);
            return ruff_python_formatter::comments::map::InOrderEntry::increment_leading_range::h8eafbb6d1a816b39(rax + 0x10);
        }
        
        int64_t rdi_12 = *ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::entry_to_out_of_order::h99c7313a90e9d36b(rax + 0x10, arg1[1], r12_1, &arg1[3]);
        int64_t rsi_8 = arg1[5];
        
        if (rdi_12 >= rsi_8)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_12, rsi_8);
            /* no return */
        }
        
        rdi_10 = rdi_12 * 0x18 + arg1[4];
    }
    
    return alloc::vec::Vec$LT$T$C$A$GT$::push::h6db36899efacabdb(rdi_10, arg4);
}
