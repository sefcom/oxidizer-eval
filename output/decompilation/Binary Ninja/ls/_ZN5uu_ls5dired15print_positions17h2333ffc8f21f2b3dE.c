
  void* uu_ls::dired::print_positions::h2333ffc8f21f2b3d(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t r14 = arg3;
    int64_t var_40 = arg1;
    int64_t var_38 = arg2;
    int64_t* var_88 = &var_40;
    int64_t (* var_80)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
    void* const var_78 = &data_4cf290;
    int64_t var_70 = 1;
    int64_t var_58 = 0;
    int64_t** var_68 = &var_88;
    int64_t var_60 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_78);
    
    if (arg4)
    {
        int64_t i_1 = arg4 << 4;
        int64_t i;
        
        do
        {
            int64_t var_48 = r14;
            r14 += 0x10;
            var_88 = &var_48;
            int64_t (* var_80_1)(int64_t* arg1, int64_t* arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7bd7b977de236f2a;
            var_78 = &data_6866f0;
            int64_t var_70_1 = 1;
            int64_t var_58_1 = 0;
            int64_t** var_68_1 = &var_88;
            var_60 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_78);
            i = i_1;
            i_1 -= 0x10;
        } while (i != 0x10);
    }
    
    var_78 = &data_6866e0;
    int64_t var_70_2 = 1;
    int64_t var_68_2 = 8;
    var_60 = {0};
    return std::io::stdio::_print::h5e446ff973c02de6(&var_78);
}
