
  int64_t uu_test::parser::Parser::boolop::h3c27ebf1f812d540(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int128_t var_30;
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_30, 
        "-a-o===!=-eq-ge-gt-le-lt-ne-ef-n…", 2);
    int64_t var_20;
    int64_t var_40 = var_20;
    int128_t zmm0 = var_30;
    int64_t var_58 = 2;
    
    if (!_$LT$uu_test..parser..Symbol$u20$as$u20$core..cmp..PartialEq$GT$::eq::h838c2774cc7a2a63(
        arg3, &var_58))
    {
        core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_58);
        uu_test::parser::Parser::expr::h14b244d6254724ab(&var_58, arg2);
    }
    else
    {
        core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_58);
        uu_test::parser::Parser::term::h385cc0ae73b5bef0(&var_58, arg2);
    }
    
    if (var_58 != 7)
    {
        int128_t zmm0_1 = var_58;
        *(arg1 + 0x10) = zmm0;
        *arg1 = zmm0_1;
        return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(arg3);
    }
    
    int64_t var_38_1 = arg3[4];
    int128_t var_50 = *(arg3 + 0x10);
    var_58 = *arg3;
    int64_t result = alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg2, &var_58);
    *arg1 = 7;
    return result;
}
