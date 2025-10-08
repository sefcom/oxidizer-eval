
  int64_t ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::push_trailing::h6f70456e092d3b95(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    int64_t var_60 = arg2;
    void* rax = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h87cf0787e596fc53(
        &arg1[6], &var_60);
    
    if (!rax)
    {
        int64_t r15_2 = arg1[2];
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6db36899efacabdb(arg1, arg4);
        int64_t rbx_1 = var_60;
        void var_50;
        ruff_python_formatter::comments::map::InOrderEntry::trailing::h53cfc87c4bce3868(&var_50, 
            r15_2, arg1[2]);
        void var_40;
        return hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h9b127e050614fcb6(&var_40, 
            &arg1[6], rbx_1, arg3, &var_50);
    }
    
    int64_t* rdi_11;
    
    if (!*(rax + 0x10))
    {
        int64_t rdi_8 = *(rax + 0x18) + 2;
        int64_t rsi_5 = arg1[5];
        
        if (rdi_8 >= rsi_5)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_8, rsi_5);
            /* no return */
        }
        
        rdi_11 = rdi_8 * 0x18 + arg1[4];
    }
    else
    {
        uint64_t rax_1 =
            ruff_python_formatter::comments::map::InOrderEntry::range::h6e360fb934eb8131(rax
            + 0x10);
        int64_t rdx = arg1[2];
        
        if (rax_1 == rdx)
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6db36899efacabdb(arg1, arg4);
            return ruff_python_formatter::comments::map::InOrderEntry::increment_trailing_range::h83d85426b5e834db(rax + 0x10);
        }
        
        int64_t rdi_14 = *ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::entry_to_out_of_order::h99c7313a90e9d36b(rax + 0x10, arg1[1], rdx, &arg1[3]) + 2;
        int64_t rsi_8 = arg1[5];
        
        if (rdi_14 >= rsi_8)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_14, rsi_8);
            /* no return */
        }
        
        rdi_11 = rdi_14 * 0x18 + arg1[4];
    }
    
    return alloc::vec::Vec$LT$T$C$A$GT$::push::h6db36899efacabdb(rdi_11, arg4);
}
