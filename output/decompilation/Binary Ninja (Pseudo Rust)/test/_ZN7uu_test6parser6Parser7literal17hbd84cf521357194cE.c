
  fn uu_test::parser::Parser::literal::hbd84cf521357194c(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let mut var_e8: *mut c_void;
    uu_test::parser::Symbol::into_literal::h1277b0f42f10b0d4(&var_e8, arg3);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h51b67e1356e9af09(arg2, &var_e8);
    let mut var_a8: i32;
    uu_test::parser::Parser::peek::h996512ad2aa27c9f(&var_a8, arg2);
    
    if var_a8 == 4
    {
        let mut var_40: ();
        uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(&var_40, arg2);
        let mut var_80: i32;
        uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(&var_80, arg2);
        
        if var_80 == 6
        {
            let mut var_b8: *mut c_void = &var_40;
            let var_b0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$uu_test..parser..Symbol$u20$as$u20$core..fmt..Display$GT$::fmt::haa065207a04b22f2;
            var_e8 = &data_417330;
            let var_e0_1: i64 = 1;
            let var_c8_1: i64 = 0;
            let var_d8_1: *mut *mut c_void = &var_b8;
            let var_d0_1: i64 = 1;
            let mut var_58: i128;
            core::option::Option$LT$T$GT$::map_or_else::h1762a7ae3f8b5d38(&var_58, &var_e8);
            let var_48: i64;
            arg1[3] = var_48;
            *arg1.byte_offset(8) = var_58;
            *arg1 = 3;
            core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(&var_80);
            core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(&var_40);
            return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(
                &var_a8);
        }
        
        uu_test::parser::Symbol::into_literal::h1277b0f42f10b0d4(&var_e8, &var_80);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h51b67e1356e9af09(arg2, &var_e8);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h51b67e1356e9af09(arg2, &var_40);
    }
    
    let result: i64 =
        core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(&var_a8);
    *arg1 = 7;
    result
}
