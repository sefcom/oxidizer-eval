
  int64_t uu_env::print_env::h235deac81a0d5ad1(char arg1)

{
    char var_159 = arg1;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_150 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int64_t* var_158 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_150);
    int128_t var_50;
    std::env::vars::h43d0a176db605fd6(&var_50);
    int128_t var_40;
    int128_t var_f8 = var_40;
    int128_t var_108 = var_50;
    
    while (true)
    {
        int64_t var_80;
        _$LT$std..env..Vars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h404dd3a585398847(&var_80, &var_108);
        
        if (0 + -(var_80))
            break;
        
        int64_t var_70;
        int64_t var_138_1 = var_70;
        int128_t var_148 = var_80;
        int64_t var_58;
        int64_t var_118_1 = var_58;
        int128_t var_68;
        int128_t var_128 = var_68;
        int128_t* var_e0 = &var_148;
        int64_t (* var_d8_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        int128_t* var_d0_1 = &var_128;
        int64_t (* var_c8_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        char* var_c0_1 = &var_159;
        int64_t (* var_b8_1)(char* arg1, int64_t* arg2) = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
        void* const var_b0 = &data_510768;
        int64_t var_a8_1 = 3;
        int64_t var_90_1 = 0;
        int128_t** var_a0_1 = &var_e0;
        int64_t var_98_1 = 3;
        core::result::Result$LT$T$C$E$GT$::unwrap::he8d54822fdfe3dbd(
            std::io::Write::write_fmt::hace443ec7af5d171(&var_158, &var_b0));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0f81e6c32c02414a(&var_128);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0f81e6c32c02414a(&var_148);
    }
    
    core::ptr::drop_in_place$LT$std..env..Vars$GT$::heaa2edf5eed8a31c(&var_108);
    return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::hb5ceca4629d3c95e(var_158);
}
