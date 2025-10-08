
  fn uu_env::print_env::h235deac81a0d5ad1(arg1: i8) -> i64

{
    let mut var_159: i8 = arg1;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_150: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut var_158: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_150);
    let mut var_50: i128;
    std::env::vars::h43d0a176db605fd6(&var_50);
    let var_40: i128;
    let var_f8: i128 = var_40;
    let mut var_108: i128 = var_50;
    
    loop
    {
        let mut var_80: i64;
        _$LT$std..env..Vars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h404dd3a585398847(&var_80, &var_108);
        
        if 0 + -(var_80)
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
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        let var_d0_1: *mut i128 = &var_128;
        let var_c8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        let var_c0_1: *mut i8 = &var_159;
        let var_b8_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
        let mut var_b0: *mut c_void = &data_510768;
        let var_a8_1: i64 = 3;
        let var_90_1: i64 = 0;
        let var_a0_1: *mut *mut i128 = &var_e0;
        let var_98_1: i64 = 3;
        core::result::Result$LT$T$C$E$GT$::unwrap::he8d54822fdfe3dbd(
            std::io::Write::write_fmt::hace443ec7af5d171(&var_158, &var_b0));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0f81e6c32c02414a(&var_128);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0f81e6c32c02414a(&var_148);
    }
    
    core::ptr::drop_in_place$LT$std..env..Vars$GT$::heaa2edf5eed8a31c(&var_108);
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::hb5ceca4629d3c95e(var_158)
}
