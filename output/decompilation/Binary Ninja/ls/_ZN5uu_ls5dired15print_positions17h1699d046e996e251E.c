
  void* uu_ls::dired::print_positions::h1699d046e996e251(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_40 = arg1;
    int64_t var_38 = arg2;
    int64_t* var_98 = &var_40;
    int64_t (* var_90)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
    int128_t* const var_88 = &data_423c10;
    int64_t var_80 = 1;
    int64_t var_68 = 0;
    int64_t** var_78 = &var_98;
    int64_t var_70 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&var_88);
    int64_t var_58 = arg3;
    int64_t var_50 = (arg4 << 4) + arg3;
    
    for (int64_t i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7f2942e0b93b17b0(&var_58); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7f2942e0b93b17b0(&var_58))
    {
        int64_t i_1 = i;
        var_98 = &i_1;
        int64_t (* var_90_1)(int64_t* arg1, void* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7b0229abfda6cdd0;
        var_88 = &data_613738;
        int64_t var_80_1 = 1;
        int64_t var_68_1 = 0;
        int64_t** var_78_1 = &var_98;
        var_70 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&var_88);
    }
    
    var_88 = &data_613728;
    int64_t var_80_2 = 1;
    int64_t var_78_2 = 8;
    var_70 = {0};
    return std::io::stdio::_print::he918bceb0c89db46(&var_88);
}
