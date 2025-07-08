
  fn uu_dd::bufferedoutput::BufferedOutput::flush::hf0f2f33e15e5593b(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    *arg2.byte_offset(0x10);
    let mut var_78: i64;
    uu_dd::Output::write_blocks::h78b56ae9a3f355f3(&var_78, arg2.byte_offset(0x18), 
        *arg2.byte_offset(8));
    let mut r13: i64;
    
    if var_78 == 0
    {
        let var_60: i64;
        
        if var_60 != 0
        {
            core::result::Result$LT$T$C$E$GT$::unwrap::h92e74c7f2e34bccf(1);
            breakpoint();
        }
        
        r13 = 0;
        core::result::Result$LT$T$C$E$GT$::unwrap::h92e74c7f2e34bccf(0);
        let var_68: i64;
        alloc::vec::Vec$LT$T$C$A$GT$::drain::hb073313df60fa3f3(&var_78, arg2, 0, var_68);
        core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$u8$GT$$GT$::h9f8a61b78eca9047(
            &var_78);
        arg1[3] = var_60;
        arg1[2] = var_68;
        let var_58: i128;
        *arg1.byte_offset(0x20) = var_58;
    }
    else
    {
        let var_70: i64;
        arg1[1] = var_70;
        r13 = 1;
    }
    
    *arg1 = r13;
    arg1
}
