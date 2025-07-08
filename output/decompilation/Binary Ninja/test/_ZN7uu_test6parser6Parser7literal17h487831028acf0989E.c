
  int64_t uu_test::parser::Parser::literal::h487831028acf0989(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int128_t var_118;
    uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_118, arg3);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg2, &var_118);
    int32_t var_88;
    uu_test::parser::Parser::peek::hd4e8be8df06376c2(&var_88, arg2);
    
    if (var_88 == 4)
    {
        int128_t var_b0;
        uu_test::parser::Parser::next_token::hec2da245067de41f(&var_b0, arg2);
        int32_t var_d8;
        uu_test::parser::Parser::next_token::hec2da245067de41f(&var_d8, arg2);
        
        if (var_d8 == 6)
        {
            int128_t* var_e8 = &var_b0;
            int64_t (* var_e0_1)(int64_t* arg1, void* arg2) = _$LT$uu_test..parser..Symbol$u20$as$u20$core..fmt..Display$GT$::fmt::h7b584763136c349c;
            var_118 = &data_413dc0;
            *var_118[8] = 1;
            int64_t var_f8_1 = 0;
            int128_t var_108;
            var_108 = &var_e8;
            *var_108[8] = 1;
            int128_t var_60;
            core::option::Option$LT$T$GT$::map_or_else::ha47e44f34eb359bd(&var_60, &var_118);
            int64_t var_50;
            arg1[3] = var_50;
            *(arg1 + 8) = var_60;
            *arg1 = 3;
            core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_d8);
            core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_b0);
            return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(
                &var_88);
        }
        
        int64_t var_b8;
        int64_t var_28_1 = var_b8;
        int128_t var_c8;
        int128_t var_38_1 = var_c8;
        int128_t var_48 = var_d8;
        uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_118, &var_48);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg2, &var_118);
        int64_t var_90;
        int64_t var_f8_2 = var_90;
        int128_t var_a0;
        int128_t var_108_1 = var_a0;
        var_118 = var_b0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg2, &var_118);
    }
    
    int64_t result =
        core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_88);
    *arg1 = 7;
    return result;
}
