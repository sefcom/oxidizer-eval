
  fn uu_env::print_env::h67417add1e73f63a(arg1: i8) -> i64

{
    let mut var_159: i8 = arg1;
    std::io::stdio::stdout::h077da66234850927();
    let mut var_150: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let mut var_158: *mut i64 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_150);
    let mut var_50: i128;
    std::env::vars::h104f59bf3851ffdb(&var_50);
    let var_40: i128;
    let var_f8: i128 = var_40;
    let mut var_108: i128 = var_50;
    
    loop
    {
        let mut var_80: i64;
        _$LT$std..env..Vars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0b476a668b5d347e(&var_80, &var_108);
        
        if var_80 == -0x8000000000000000
        {
            break;
        }
        
        let var_70: i64;
        let var_138_1: i64 = var_70;
        let mut var_148: i128 = var_80;
        let var_58: i64;
        let var_118_1: i64 = var_58;
        let var_68: i128;
        let mut var_128: i128 = var_68;
        let mut var_e0: *mut i128 = &var_148;
        let var_d8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        let var_d0_1: *mut i128 = &var_128;
        let var_c8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        let var_c0_1: *mut i8 = &var_159;
        let var_b8_1: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        let mut var_b0: *mut c_void = &data_5487c0;
        let var_a8_1: i64 = 3;
        let var_90_1: i64 = 0;
        let var_a0_1: *mut *mut i128 = &var_e0;
        let var_98_1: i64 = 3;
        core::result::Result$LT$T$C$E$GT$::unwrap::h06c9544b27cec57d(
            std::io::Write::write_fmt::hca08ab08a7c7b592(&var_158, &var_b0));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc60ce05406126818(&var_128);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc60ce05406126818(&var_148);
    }
    
    core::ptr::drop_in_place$LT$std..env..Vars$GT$::hec98998f7d042e09(&var_108);
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h80708a336f9a43e5(var_158)
}
