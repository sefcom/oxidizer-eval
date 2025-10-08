
  int64_t uu_who::platform::unix::Who::print_line::h48873e2090b4b940(void* arg1, int64_t arg2, int64_t arg3, int32_t arg4, int64_t arg5, int128_t arg6, int128_t arg7, int128_t arg8, int128_t arg9, int128_t arg10)

{
    int64_t var_b0 = arg2;
    int64_t var_a8 = arg3;
    int64_t var_a0 = arg5;
    int64_t r9;
    int64_t var_98 = r9;
    int128_t var_80 = arg6;
    int128_t var_70 = arg7;
    int128_t var_60 = arg8;
    int128_t var_50 = arg9;
    int128_t var_40 = arg10;
    int64_t rax;
    int64_t rdx;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::hd2c3980597d571d0(0x40, 1, 1);
    int64_t var_e0 = rax;
    int64_t var_d0 = 0;
    uint64_t rax_1 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(4, 8);
    
    if (!rax_1)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    *rax_1 = 0x20;
    *(rax_1 + 4) = arg4;
    int64_t* var_100 = 2;
    uint64_t var_f8 = rax_1;
    int64_t var_f0 = 2;
    void* const var_130;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h9cfa5ba45bb02dbb(&var_130, &var_100);
    void var_c8;
    core::iter::traits::iterator::Iterator::collect::h8e6e7805f5dc53bc(&var_c8, &var_130);
    var_100 = &var_b0;
    int64_t (* var_f8_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h559836fb4f8d37c6;
    var_130 = &data_418a60;
    int64_t var_128 = 1;
    void* const var_110 = &data_41ab98;
    int64_t var_108 = 1;
    int64_t** var_120 = &var_100;
    int64_t var_118 = 1;
    core::result::Result$LT$T$C$E$GT$::unwrap::h4436c0d0a7afa284(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h131ce87c39c65b68(&var_e0, &var_130));
    int64_t var_c0;
    int64_t var_b8;
    
    if (*(arg1 + 0x1d))
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf242f9bddfdf5341(&var_e0, var_c0, var_b8 + var_c0);
    var_100 = &var_a0;
    int64_t (* var_f8_2)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h559836fb4f8d37c6;
    var_130 = &data_4ff008;
    int64_t var_128_1 = 1;
    void* const var_110_1 = &data_41abc8;
    int64_t var_108_1 = 1;
    int64_t** var_120_1 = &var_100;
    int64_t var_118_1 = 1;
    core::result::Result$LT$T$C$E$GT$::unwrap::h4436c0d0a7afa284(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h131ce87c39c65b68(&var_e0, &var_130));
    var_100 = &var_80;
    int64_t (* var_f8_3)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h559836fb4f8d37c6;
    int64_t var_f0_1 = 0;
    int16_t var_e8 = 0xa;
    var_130 = &data_4ff008;
    int64_t var_128_2 = 1;
    void* const var_110_2 = &data_41abf8;
    int64_t var_108_2 = 1;
    int64_t** var_120_2 = &var_100;
    int64_t var_118_2 = 2;
    core::result::Result$LT$T$C$E$GT$::unwrap::h4436c0d0a7afa284(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h131ce87c39c65b68(&var_e0, &var_130));
    
    if (!*(arg1 + 0x1a))
    {
        if (*(arg1 + 0x1b))
        {
            var_100 = &var_70;
            int64_t (* var_f8_4)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h559836fb4f8d37c6;
            var_130 = &data_4ff008;
            int64_t var_128_3 = 1;
            void* const var_110_3 = &data_41ac28;
            int64_t var_108_3 = 1;
            int64_t** var_120_3 = &var_100;
            int64_t var_118_3 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h4436c0d0a7afa284(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h131ce87c39c65b68(&var_e0, &var_130));
        }
        
        var_100 = &var_60;
        int64_t (* var_f8_5)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h559836fb4f8d37c6;
        var_130 = &data_4ff008;
        int64_t var_128_4 = 1;
        void* const var_110_4 = &data_41ac58;
        int64_t var_108_4 = 1;
        int64_t** var_120_4 = &var_100;
        int64_t var_118_4 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h4436c0d0a7afa284(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h131ce87c39c65b68(&var_e0, &var_130));
    }
    
    var_100 = &var_50;
    int64_t (* var_f8_6)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h559836fb4f8d37c6;
    var_130 = &data_4ff008;
    int64_t var_128_5 = 1;
    void* const var_110_5 = &data_41ab98;
    int64_t var_108_5 = 1;
    int64_t** var_120_5 = &var_100;
    int64_t var_118_5 = 1;
    core::result::Result$LT$T$C$E$GT$::unwrap::h4436c0d0a7afa284(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h131ce87c39c65b68(&var_e0, &var_130));
    
    if (*(arg1 + 0x1e))
    {
        var_100 = &var_40;
        int64_t (* var_f8_7)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h559836fb4f8d37c6;
        var_130 = &data_4ff008;
        int64_t var_128_6 = 1;
        void* const var_110_6 = &data_41abc8;
        int64_t var_108_6 = 1;
        int64_t** var_120_6 = &var_100;
        int64_t var_118_6 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h4436c0d0a7afa284(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h131ce87c39c65b68(&var_e0, &var_130));
    }
    
    int64_t* rax_9;
    int64_t rdx_3;
    rax_9 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hc48b43e4f71ddf49(rdx, var_d0);
    var_100 = rax_9;
    int64_t var_f8_8 = rdx_3;
    int64_t** var_90 = &var_100;
    int64_t (* var_88)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h559836fb4f8d37c6;
    var_130 = &data_4fef18;
    int64_t var_128_7 = 2;
    int64_t var_110_7 = 0;
    int64_t*** var_120_7 = &var_90;
    int64_t var_118_7 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_130);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_c8);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_e0);
}
