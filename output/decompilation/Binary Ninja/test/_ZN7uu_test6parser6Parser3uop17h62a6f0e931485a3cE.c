
  int64_t uu_test::parser::Parser::uop::h62a6f0e931485a3c(int64_t* arg1, int128_t* arg2)

{
    int64_t rbp;
    rbp = 1;
    int32_t var_90;
    uu_test::parser::Parser::next_token::hec2da245067de41f(&var_90, arg1);
    int128_t var_b8;
    
    if (var_90 == 6)
    {
        int64_t var_98 = arg2[2];
        int128_t var_a8 = arg2[1];
        var_b8 = *arg2;
        void var_40;
        uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_40, &var_b8);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg1, &var_40);
        return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_90);
    }
    
    int64_t var_70;
    int64_t var_48_1 = var_70;
    int128_t var_80;
    int128_t var_58_1 = var_80;
    int128_t var_68 = var_90;
    rbp = 1;
    uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_b8, &var_68);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg1, &var_b8);
    int64_t var_98_1 = arg2[2];
    int128_t var_a8_1 = arg2[1];
    var_b8 = *arg2;
    return alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg1, &var_b8);
}
