
  fn uu_dd::bufferedoutput::BufferedOutput::flush::h230c00bdde1a7659(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    *arg2.byte_offset(0x10);
    let mut var_78: i32;
    uu_dd::Output::write_blocks::hd1d1fad151688f0b(&var_78, arg2.byte_offset(0x18), 
        *arg2.byte_offset(8));
    let mut result: i64;
    let mut r13: i64;
    
    if var_78 != 1
    {
        let var_60: i64;
        
        if var_60 != 0
        {
            core::result::Result$LT$T$C$E$GT$::unwrap::hfbdea825c58a947f(1);
            trap(6);
        }
        
        r13 = 0;
        core::result::Result$LT$T$C$E$GT$::unwrap::hfbdea825c58a947f(0);
        let var_68: i64;
        alloc::vec::Vec$LT$T$C$A$GT$::drain::hff6760be2b34f67b(&var_78, arg2, 0, var_68);
        result =
            core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$u8$GT$$GT$::hdcf0219fbe761a1e(
            &var_78);
        arg1[3] = var_60;
        arg1[2] = var_68;
        let var_58: i128;
        *arg1.byte_offset(0x20) = var_58;
    }
    else
    {
        let result_1: i64;
        result = result_1;
        arg1[1] = result;
        r13 = 1;
    }
    
    *arg1 = r13;
    result
}
