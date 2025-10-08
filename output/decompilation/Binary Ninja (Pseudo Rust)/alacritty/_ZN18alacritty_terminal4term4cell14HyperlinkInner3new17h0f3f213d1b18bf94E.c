
  fn alacritty_terminal::term::cell::HyperlinkInner::new::h0f3f213d1b18bf94(arg1: *mut i128, arg2: *mut i64, arg3: *mut i128) -> i64

{
    let mut var_28: i128;
    let mut var_18: i64;
    let mut var_68: i128;
    
    if !(0 + -(*arg2))
    {
        let var_58_1: i64 = arg2[2];
        var_68 = *arg2;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h3e95ff4ae1fc43da(&var_28, 
            &var_68);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h451460d2d1836db3(var_68, 
            *var_68[8]);
    }
    else
    {
        let alacritty_terminal::term::cell::HYPERLINK_ID_SUFFIX::h1da8f86f31e375d2_1: u32 =
            alacritty_terminal::term::cell::HYPERLINK_ID_SUFFIX::h1da8f86f31e375d2;
        alacritty_terminal::term::cell::HYPERLINK_ID_SUFFIX::h1da8f86f31e375d2 += 1;
        let mut rax: i64;
        let mut rdx: u64;
        rax = core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::hcfe26aa883005358(
            alacritty_terminal::term::cell::HYPERLINK_ID_SUFFIX::h1da8f86f31e375d2_1, &var_28, 0xa);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h53b11fd4ed117188(&var_68, rax, rdx);
        let mut var_48: i128 = var_68;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h335c5a6bb0ed1111(&var_48);
        let var_58: i64;
        var_18 = var_58;
        var_28 = var_48;
    }
    arg1[1] = var_18;
    *arg1 = var_28;
    *arg1.byte_offset(0x18) = *arg3;
    let result: i64 = arg3[1];
    *arg1.byte_offset(0x28) = result;
    result
}
