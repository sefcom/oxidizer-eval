
  fn uu_test::parser::Parser::uop::h1b444c1c0da3bc2d(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut var_60: i32;
    uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(&var_60, arg1);
    let mut var_38: ();
    
    if var_60 == 6
    {
        uu_test::parser::Symbol::into_literal::h1277b0f42f10b0d4(&var_38, arg2);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h51b67e1356e9af09(arg1, &var_38);
        return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(&var_60);
    }
    
    uu_test::parser::Symbol::into_literal::h1277b0f42f10b0d4(&var_38, &var_60);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h51b67e1356e9af09(arg1, &var_38);
    /* tailcall */
    alloc::vec::Vec$LT$T$C$A$GT$::push::h51b67e1356e9af09(arg1, arg2)
}
