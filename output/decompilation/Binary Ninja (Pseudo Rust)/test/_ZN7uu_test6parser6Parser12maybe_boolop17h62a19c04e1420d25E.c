
  fn uu_test::parser::Parser::maybe_boolop::h62a19c04e1420d25(arg1: *mut i128, arg2: *mut i64) -> i64

{
    let mut result: i8 = uu_test::parser::Parser::peek_is_boolop::h626769eb8da01166(arg2);
    
    if result != 0
    {
        let mut var_a8: i128;
        uu_test::parser::Parser::next_token::hec2da245067de41f(&var_a8, arg2);
        let mut var_58: i32;
        uu_test::parser::Parser::peek::hd4e8be8df06376c2(&var_58, arg2);
        let mut var_d8: i128;
        let var_98: i128;
        let var_88: i64;
        let mut var_80: i32;
        let mut zmm0_2: i128;
        let mut zmm1_2: i128;
        
        if var_58 != 6
        {
            let var_b8_2: i64 = var_88;
            var_d8 = var_a8;
            uu_test::parser::Parser::boolop::h3c27ebf1f812d540(&var_80, arg2, &var_d8);
            
            if var_80 != 7
            {
                zmm0_2 = var_80;
                let var_70: i128;
                zmm1_2 = var_70;
                'label_4af7f2:
                arg1[1] = zmm1_2;
                *arg1 = zmm0_2;
                return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(
                    &var_58);
            }
            
            uu_test::parser::Parser::maybe_boolop::h62a19c04e1420d25(&var_d8, arg2);
            
            if var_d8 != 7
            {
                zmm0_2 = var_d8;
                zmm1_2 = var_98;
                goto 'label_4af7f2;
            }
        }
        else
        {
            let var_b8_1: i64 = var_88;
            let var_c8_1: i128 = var_98;
            var_d8 = var_a8;
            uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_80, &var_d8);
            let mut var_30: i32;
            uu_test::parser::Parser::literal::h487831028acf0989(&var_30, arg2, &var_80);
            
            if var_30 != 7
            {
                zmm0_2 = var_30;
                let var_20: i128;
                zmm1_2 = var_20;
                goto 'label_4af7f2;
            }
        }
        result =
            core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_58);
    }
    
    *arg1 = 7;
    result
}
