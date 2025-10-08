
  fn ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::push_dangling::h037c8b967909d17b(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i64) -> i64

{
    let mut var_60: i64 = arg2;
    let rax: *mut c_void =
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner_mut::h87cf0787e596fc53(&arg1[6], 
        &var_60);
    
    if rax == 0
    {
        let r12_2: i64 = arg1[2];
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6db36899efacabdb(arg1, arg4);
        let rbx_1: i64 = var_60;
        let mut var_50: ();
        ruff_python_formatter::comments::map::InOrderEntry::dangling::he03c914fb1091a07(&var_50, 
            r12_2, arg1[2]);
        let mut var_40: ();
        return hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h9b127e050614fcb6(&var_40, 
            &arg1[6], rbx_1, arg3, &var_50);
    }
    
    let mut rdi_11: *mut i64;
    
    if *rax.byte_offset(0x10) == 0
    {
        let rdi_8: i64 = *rax.byte_offset(0x18) + 1;
        let rsi_5: i64 = arg1[5];
        
        if rdi_8 >= rsi_5
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_8, rsi_5);
            /* no return */
        }
        
        rdi_11 = rdi_8 * 0x18 + arg1[4];
    }
    else
    {
        let r12_1: i64 = arg1[2];
        
        if *rax.byte_offset(0x1c) == 0 && r12_1 ==
            ruff_python_formatter::comments::map::InOrderEntry::range::h6e360fb934eb8131(rax.
            byte_offset(0x10))
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6db36899efacabdb(arg1, arg4);
            return ruff_python_formatter::comments::map::InOrderEntry::increment_dangling_range::h52bd3f95b5426e67(rax.byte_offset(0x10));
        }
        
        let rdi_14: i64 = *ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::entry_to_out_of_order::h99c7313a90e9d36b(rax.byte_offset(0x10), arg1[1], r12_1, &arg1[3]) + 1;
        let rsi_8: i64 = arg1[5];
        
        if rdi_14 >= rsi_8
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_14, rsi_8);
            /* no return */
        }
        
        rdi_11 = rdi_14 * 0x18 + arg1[4];
    }
    
    alloc::vec::Vec$LT$T$C$A$GT$::push::h6db36899efacabdb(rdi_11, arg4)
}
