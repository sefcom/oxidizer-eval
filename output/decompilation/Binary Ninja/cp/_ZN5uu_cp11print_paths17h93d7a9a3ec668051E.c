
  int64_t uu_cp::print_paths::h93d7a9a3ec668051(int32_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t** i_1;
    void* const var_e0;
    int64_t* var_90;
    
    if (arg1)
    {
        int64_t var_98_1 = arg2;
        int64_t var_a0_1 = arg3;
        int64_t var_a8_1 = arg4;
        uu_cp::aligned_ancestors::h4cf131ef21f6aa74(&var_e0, arg2, arg3, arg4);
        void var_60;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6511090ed0ef25d3(&var_60, &var_e0);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&i_1, &var_60);
        
        for (int64_t** i = i_1; i; i = i_1)
        {
            int64_t** i_2 = i;
            int64_t var_f8;
            int64_t var_68_1 = var_f8;
            int128_t var_f0;
            int128_t var_40 = var_f0;
            var_90 = &i_2;
            int64_t (* var_88_1)(int64_t* arg1, void* arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            int128_t* var_80_1 = &var_40;
            int64_t (* var_78_1)(int64_t* arg1, void* arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            var_e0 = &data_5b5f48;
            int64_t var_d8_1 = 3;
            int64_t var_c0_1 = 0;
            int64_t** var_d0_1 = &var_90;
            int64_t var_c8_1 = 2;
            std::io::stdio::_print::he918bceb0c89db46(&var_e0);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&i_1, &var_60);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&var_60);
    }
    
    uu_cp::context_for::h98549e35fded8509(&var_90);
    i_1 = &var_90;
    int64_t (* var_f8_1)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    var_e0 = &data_5b5ce8;
    int64_t var_d8_2 = 2;
    int64_t var_c0_2 = 0;
    int64_t*** var_d0_2 = &i_1;
    int64_t var_c8_2 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&var_e0);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&var_90);
}
