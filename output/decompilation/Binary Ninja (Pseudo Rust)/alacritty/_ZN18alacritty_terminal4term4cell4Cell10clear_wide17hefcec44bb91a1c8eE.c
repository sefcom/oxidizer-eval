
  fn alacritty_terminal::term::cell::Cell::clear_wide::hefcec44bb91a1c8e(arg1: *mut i64)

{
    let rax: i64;
    let var_18: i64 = rax;
    let rbx: *mut i64 = arg1;
    *arg1.byte_offset(0x14) &= 0xdf;
    
    if *arg1 != 0
    {
        let rax_1: *mut c_void = alloc::sync::Arc$LT$T$C$A$GT$::make_mut::hd1b9ba4e0192b0c5(rbx);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::he96c0fdde40bc7e1(*rax_1, 
            *rax_1.byte_offset(8));
        *rax_1 = 0;
        *rax_1.byte_offset(8) = 4;
        *rax_1.byte_offset(0x10) = 0;
    }
    
    rbx[2] = 0x20;
}
