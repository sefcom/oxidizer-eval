
  int64_t flealib::commandprocessor::CommandProcessor::bytes_to_string::hf42e7b3c5214d9fe(int128_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_100 = 0;
    int64_t var_f8 = 1;
    int64_t result = 0;
    int64_t var_e0 = arg2;
    int64_t var_d8 = arg3 + arg2;
    
    for (int64_t i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he910cc6333cc22bc(&var_e0); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he910cc6333cc22bc(&var_e0))
    {
        int64_t i_1 = i;
        int64_t* var_88 = &i_1;
        int64_t (* var_80_1)(int64_t* arg1, char* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hef6899d97136f60f;
        int64_t var_c8 = 2;
        int64_t var_b8_1 = 0;
        int64_t var_b0_1 = 2;
        int64_t var_a8_1 = 0;
        int64_t var_a0_1 = 0x800000020;
        char var_98_1 = 3;
        char const* const var_78 = &data_44fb30;
        int64_t var_70_1 = 1;
        int64_t* var_58_1 = &var_c8;
        int64_t var_50_1 = 1;
        int64_t** var_68_1 = &var_88;
        int64_t var_60_1 = 1;
        int128_t var_48;
        core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_48, &var_78);
        var_c8 = var_48;
        uint64_t var_38;
        uint64_t var_b8_2 = var_38;
        int64_t var_c0;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(&var_100, var_c0, var_38);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_c8);
    }
    
    arg1[1] = result;
    *arg1 = var_100;
    return result;
}
