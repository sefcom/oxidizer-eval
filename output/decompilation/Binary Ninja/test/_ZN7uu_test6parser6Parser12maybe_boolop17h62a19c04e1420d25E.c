
  int64_t uu_test::parser::Parser::maybe_boolop::h62a19c04e1420d25(int128_t* arg1, int64_t* arg2)

{
    char result = uu_test::parser::Parser::peek_is_boolop::h626769eb8da01166(arg2);
    
    if (result)
    {
        int128_t var_a8;
        uu_test::parser::Parser::next_token::hec2da245067de41f(&var_a8, arg2);
        int32_t var_58;
        uu_test::parser::Parser::peek::hd4e8be8df06376c2(&var_58, arg2);
        int128_t var_d8;
        int128_t var_98;
        int64_t var_88;
        int32_t var_80;
        int128_t zmm0_2;
        int128_t zmm1_2;
        
        if (var_58 != 6)
        {
            int64_t var_b8_2 = var_88;
            var_d8 = var_a8;
            uu_test::parser::Parser::boolop::h3c27ebf1f812d540(&var_80, arg2, &var_d8);
            
            if (var_80 != 7)
            {
                zmm0_2 = var_80;
                int128_t var_70;
                zmm1_2 = var_70;
                label_4af7f2:
                arg1[1] = zmm1_2;
                *arg1 = zmm0_2;
                return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(
                    &var_58);
            }
            
            uu_test::parser::Parser::maybe_boolop::h62a19c04e1420d25(&var_d8, arg2);
            
            if (var_d8 != 7)
            {
                zmm0_2 = var_d8;
                zmm1_2 = var_98;
                goto label_4af7f2;
            }
        }
        else
        {
            int64_t var_b8_1 = var_88;
            int128_t var_c8_1 = var_98;
            var_d8 = var_a8;
            uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_80, &var_d8);
            int32_t var_30;
            uu_test::parser::Parser::literal::h487831028acf0989(&var_30, arg2, &var_80);
            
            if (var_30 != 7)
            {
                zmm0_2 = var_30;
                int128_t var_20;
                zmm1_2 = var_20;
                goto label_4af7f2;
            }
        }
        result =
            core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_58);
    }
    
    *arg1 = 7;
    return result;
}
