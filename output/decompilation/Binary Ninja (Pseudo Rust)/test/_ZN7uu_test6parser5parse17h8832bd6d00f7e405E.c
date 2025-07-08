
  fn uu_test::parser::parse::h8832bd6d00f7e405(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let mut var_60: i128;
    uu_test::parser::Parser::new::h6d612ffc55b5931e(&var_60, arg2);
    let mut var_80: i32;
    uu_test::parser::Parser::parse::h4b01a6d19b3f40db(&var_80, &var_60);
    
    if var_80 != 7
    {
        let zmm0: i128 = var_80;
        let var_70: i128;
        *arg1.byte_offset(0x10) = var_70;
        *arg1 = zmm0;
        core::ptr::drop_in_place$LT$uu_test..parser..Parser$GT$::h69be05316ed7c9ae(&var_60);
    }
    else
    {
        let var_50: i64;
        arg1[3] = var_50;
        *arg1.byte_offset(8) = var_60;
        *arg1 = 7;
        let mut var_48: ();
        core::ptr::drop_in_place$LT$core..iter..adapters..peekable..Peekable$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$$GT$::h1d252f4392002ad9(&var_48);
    }
    
    arg1
}
