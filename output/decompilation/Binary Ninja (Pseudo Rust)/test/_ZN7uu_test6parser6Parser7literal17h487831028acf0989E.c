
  fn uu_test::parser::Parser::literal::h487831028acf0989(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let mut var_118: i128;
    uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_118, arg3);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg2, &var_118);
    let mut var_88: i32;
    uu_test::parser::Parser::peek::hd4e8be8df06376c2(&var_88, arg2);
    
    if var_88 == 4
    {
        let mut var_b0: i128;
        uu_test::parser::Parser::next_token::hec2da245067de41f(&var_b0, arg2);
        let mut var_d8: i32;
        uu_test::parser::Parser::next_token::hec2da245067de41f(&var_d8, arg2);
        
        if var_d8 == 6
        {
            let mut var_e8: *mut i128 = &var_b0;
            let var_e0_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$uu_test..parser..Symbol$u20$as$u20$core..fmt..Display$GT$::fmt::h7b584763136c349c;
            var_118 = &data_413dc0;
            *var_118[8] = 1;
            let var_f8_1: i64 = 0;
            let mut var_108: i128;
            var_108 = &var_e8;
            *var_108[8] = 1;
            let mut var_60: i128;
            core::option::Option$LT$T$GT$::map_or_else::ha47e44f34eb359bd(&var_60, &var_118);
            let var_50: i64;
            arg1[3] = var_50;
            *arg1.byte_offset(8) = var_60;
            *arg1 = 3;
            core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_d8);
            core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_b0);
            return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(
                &var_88);
        }
        
        let var_b8: i64;
        let var_28_1: i64 = var_b8;
        let var_c8: i128;
        let var_38_1: i128 = var_c8;
        let mut var_48: i128 = var_d8;
        uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_118, &var_48);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg2, &var_118);
        let var_90: i64;
        let var_f8_2: i64 = var_90;
        let var_a0: i128;
        let var_108_1: i128 = var_a0;
        var_118 = var_b0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg2, &var_118);
    }
    
    let result: i64 =
        core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_88);
    *arg1 = 7;
    result
}
