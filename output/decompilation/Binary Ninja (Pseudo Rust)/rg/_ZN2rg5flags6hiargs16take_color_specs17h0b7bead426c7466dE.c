
  fn rg::flags::hiargs::take_color_specs::h0b7bead426c7466d(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_58: i64;
    grep_printer::color::default_color_specs::hffbcc9f35fc6c155(&var_58);
    let mut var_40: *mut c_void;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::he31301956beb7ba7(&var_40, arg2.byte_offset(0xe0));
    
    loop
    {
        let rax_1: *mut i32 = var_40;
        let var_38: i64;
        
        if rax_1 == var_38
        {
            break;
        }
        
        var_40 = rax_1.byte_offset(6);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h2b40c0f3a56d230e(&var_58, rax_1[1] << 0x20 | *rax_1);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$grep_printer..color..UserColorSpec$GT$$GT$::h64412e075774613f(&var_40);
    let var_50: *mut i8;
    let var_48: i64;
    grep_printer::color::ColorSpecs::new::h285108ed7667a029(arg1, var_50, var_48);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$grep_printer..color..UserColorSpec$GT$$GT$::hfc23f7e53dc8fcc5(var_58, var_50)
}
