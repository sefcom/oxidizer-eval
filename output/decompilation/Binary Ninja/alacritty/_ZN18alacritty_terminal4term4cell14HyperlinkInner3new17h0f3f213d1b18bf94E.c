
  int64_t alacritty_terminal::term::cell::HyperlinkInner::new::h0f3f213d1b18bf94(int128_t* arg1, int64_t* arg2, int128_t* arg3)

{
    int128_t var_28;
    int64_t var_18;
    int128_t var_68;
    
    if (!(0 + -(*arg2)))
    {
        int64_t var_58_1 = arg2[2];
        var_68 = *arg2;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h3e95ff4ae1fc43da(&var_28, 
            &var_68);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h451460d2d1836db3(var_68, 
            *var_68[8]);
    }
    else
    {
        uint32_t alacritty_terminal::term::cell::HYPERLINK_ID_SUFFIX::h1da8f86f31e375d2_1 =
            alacritty_terminal::term::cell::HYPERLINK_ID_SUFFIX::h1da8f86f31e375d2;
        alacritty_terminal::term::cell::HYPERLINK_ID_SUFFIX::h1da8f86f31e375d2 += 1;
        int64_t rax;
        uint64_t rdx;
        rax = core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::hcfe26aa883005358(
            alacritty_terminal::term::cell::HYPERLINK_ID_SUFFIX::h1da8f86f31e375d2_1, &var_28, 0xa);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_68, rax, rdx);
        int128_t var_48 = var_68;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h335c5a6bb0ed1111(&var_48);
        int64_t var_58;
        var_18 = var_58;
        var_28 = var_48;
    }
    arg1[1] = var_18;
    *arg1 = var_28;
    *(arg1 + 0x18) = *arg3;
    int64_t result = arg3[1];
    *(arg1 + 0x28) = result;
    return result;
}
