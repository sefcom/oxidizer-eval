
  int64_t uu_test::parser::Parser::literal::hbd84cf521357194c(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    void* const var_e8;
    uu_test::parser::Symbol::into_literal::h1277b0f42f10b0d4(&var_e8, arg3);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h51b67e1356e9af09(arg2, &var_e8);
    int32_t var_a8;
    uu_test::parser::Parser::peek::h996512ad2aa27c9f(&var_a8, arg2);
    
    if (var_a8 == 4)
    {
        void var_40;
        uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(&var_40, arg2);
        int32_t var_80;
        uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(&var_80, arg2);
        
        if (var_80 == 6)
        {
            void* var_b8 = &var_40;
            int64_t (* var_b0_1)(int64_t* arg1, int64_t* arg2) = _$LT$uu_test..parser..Symbol$u20$as$u20$core..fmt..Display$GT$::fmt::haa065207a04b22f2;
            var_e8 = &data_417330;
            int64_t var_e0_1 = 1;
            int64_t var_c8_1 = 0;
            void** var_d8_1 = &var_b8;
            int64_t var_d0_1 = 1;
            int128_t var_58;
            core::option::Option$LT$T$GT$::map_or_else::h1762a7ae3f8b5d38(&var_58, &var_e8);
            int64_t var_48;
            arg1[3] = var_48;
            *(arg1 + 8) = var_58;
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
    
    int64_t result =
        core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(&var_a8);
    *arg1 = 7;
    return result;
}
