
  int64_t uu_test::parser::Parser::boolop::h6f7fceace89c923f(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int128_t var_40;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h8a1d310fc48c8e88(&var_40, "-a-o===!=<>-eq-ge-gt-le-lt-ne-ef…", 2);
    int64_t var_30;
    int64_t var_50 = var_30;
    int128_t zmm0 = var_40;
    int64_t var_68 = 2;
    char rax_1 =
        _$LT$uu_test..parser..Symbol$u20$as$u20$core..cmp..PartialEq$GT$::eq::ha9c8e6b311d8821d(
        arg3, &var_68);
    core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(&var_68);
    
    if (!rax_1)
        uu_test::parser::Parser::expr::hea95ff6631384a05(&var_68, arg2);
    else
        uu_test::parser::Parser::term::h32e18b63e31ea2d0(&var_68, arg2);
    
    if (var_68 == 7)
    {
        int64_t result = alloc::vec::Vec$LT$T$C$A$GT$::push::h51b67e1356e9af09(arg2, arg3);
        *arg1 = 7;
        return result;
    }
    
    int128_t zmm0_1 = var_68;
    *(arg1 + 0x10) = zmm0;
    *arg1 = zmm0_1;
    /* tailcall */
    return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(arg3);
}
