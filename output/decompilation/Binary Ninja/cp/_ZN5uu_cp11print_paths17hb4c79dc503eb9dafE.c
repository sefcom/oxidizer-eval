
  int64_t uu_cp::print_paths::hb4c79dc503eb9daf(int32_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t** i_1;
    void* const var_e0;
    int64_t* var_90;
    
    if (arg1)
    {
        int64_t var_98_1 = arg2;
        int64_t var_a0_1 = arg3;
        int64_t var_a8_1 = arg4;
        uu_cp::aligned_ancestors::h2e8a6c5e1cc13323(&var_e0, arg2, arg3, arg4);
        void var_60;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h22eacf00db38bb5e(&var_60, &var_e0);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90db137ad036c527(&i_1, &var_60);
        
        for (int64_t** i = i_1; i; i = i_1)
        {
            int64_t** i_2 = i;
            int64_t var_f8;
            int64_t var_68_1 = var_f8;
            int128_t var_f0;
            int128_t var_40 = var_f0;
            var_90 = &i_2;
            uint64_t (* var_88_1)(int64_t* arg1, int64_t arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            int128_t* var_80_1 = &var_40;
            uint64_t (* var_78_1)(int64_t* arg1, int64_t arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            var_e0 = &data_55e6c0;
            int64_t var_d8_1 = 3;
            int64_t var_c0_1 = 0;
            int64_t** var_d0_1 = &var_90;
            int64_t var_c8_1 = 2;
            std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90db137ad036c527(&i_1, &var_60);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0259dd8f81e67d9c(&var_60);
    }
    
    uu_cp::context_for::h4d8c781d36af7105(&var_90);
    i_1 = &var_90;
    int64_t (* var_f8_1)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_e0 = &data_55e620;
    int64_t var_d8_2 = 2;
    int64_t var_c0_2 = 0;
    int64_t*** var_d0_2 = &i_1;
    int64_t var_c8_2 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c03d16396ad1b8d(&var_90);
}
