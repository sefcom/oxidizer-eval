
  fn uu_test::parser::Parser::uop::h62a6f0e931485a3c(arg1: *mut i64, arg2: *mut i128) -> i64

{
    let mut rbp: i64;
    rbp = 1;
    let mut var_90: i32;
    uu_test::parser::Parser::next_token::hec2da245067de41f(&var_90, arg1);
    let mut var_b8: i128;
    
    if var_90 == 6
    {
        let var_98: i64 = arg2[2];
        let var_a8: i128 = arg2[1];
        var_b8 = *arg2;
        let mut var_40: ();
        uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_40, &var_b8);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg1, &var_40);
        return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_90);
    }
    
    let var_70: i64;
    let var_48_1: i64 = var_70;
    let var_80: i128;
    let var_58_1: i128 = var_80;
    let mut var_68: i128 = var_90;
    rbp = 1;
    uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_b8, &var_68);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg1, &var_b8);
    let var_98_1: i64 = arg2[2];
    let var_a8_1: i128 = arg2[1];
    var_b8 = *arg2;
    alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg1, &var_b8)
}
