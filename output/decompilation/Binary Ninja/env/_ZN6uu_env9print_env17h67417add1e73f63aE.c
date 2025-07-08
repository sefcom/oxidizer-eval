
  int64_t uu_env::print_env::h67417add1e73f63a(char arg1)

{
    char var_159 = arg1;
    std::io::stdio::stdout::h077da66234850927();
    int64_t* var_150 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    int64_t* var_158 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_150);
    int128_t var_50;
    std::env::vars::h104f59bf3851ffdb(&var_50);
    int128_t var_40;
    int128_t var_f8 = var_40;
    int128_t var_108 = var_50;
    
    while (true)
    {
        int64_t var_80;
        _$LT$std..env..Vars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0b476a668b5d347e(&var_80, &var_108);
        
        if (var_80 == -0x8000000000000000)
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
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        int128_t* var_d0_1 = &var_128;
        int64_t (* var_c8_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        char* var_c0_1 = &var_159;
        int64_t (* var_b8_1)(char* arg1, void* arg2) = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        void* const var_b0 = &data_5487c0;
        int64_t var_a8_1 = 3;
        int64_t var_90_1 = 0;
        int128_t** var_a0_1 = &var_e0;
        int64_t var_98_1 = 3;
        core::result::Result$LT$T$C$E$GT$::unwrap::h06c9544b27cec57d(
            std::io::Write::write_fmt::hca08ab08a7c7b592(&var_158, &var_b0));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc60ce05406126818(&var_128);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc60ce05406126818(&var_148);
    }
    
    core::ptr::drop_in_place$LT$std..env..Vars$GT$::hec98998f7d042e09(&var_108);
    return core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h80708a336f9a43e5(var_158);
}
