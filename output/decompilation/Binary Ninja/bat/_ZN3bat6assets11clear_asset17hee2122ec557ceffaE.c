
  int64_t bat::assets::clear_asset::hee2122ec557ceffa(int64_t* arg1, int64_t arg2)

{
    int64_t var_28 = arg2;
    int64_t rdx;
    int64_t var_20 = rdx;
    int64_t* var_48 = &var_28;
    int64_t (* var_40)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
    char const (** const var_78)[0x2a] = &data_ac8540;
    int64_t var_70 = 2;
    int64_t var_58 = 0;
    int64_t** var_68 = &var_48;
    int64_t var_60 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_78);
    int64_t* rax = std::fs::remove_file::hc1e0ef890ef0d27c(arg1);
    
    if (!rax)
    {
        var_78 = &data_ac8560;
        int64_t var_70_2 = 1;
        int64_t var_68_2 = 8;
        var_60 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_78);
    }
    else if (!std::io::error::Error::kind::h135fe00c4e7365f3(rax))
    {
        var_48 = rax;
        var_78 = &data_ac8570;
        int64_t var_70_3 = 1;
        int64_t var_68_3 = 8;
        var_60 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_78);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h87346026eda922b9(&var_48);
    }
    else
    {
        int64_t* var_80 = rax;
        var_48 = arg1;
        int64_t (* var_40_1)(void* arg1, int64_t* arg2) =
            _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
        int64_t* var_38_1 = &var_80;
        int64_t (* var_30_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        var_78 = &data_ac8580;
        int64_t var_70_1 = 3;
        int64_t var_58_1 = 0;
        int64_t** var_68_1 = &var_48;
        int64_t var_60_1 = 2;
        std::io::stdio::_print::h5e446ff973c02de6(&var_78);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h87346026eda922b9(&var_80);
    }
    
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd0005799f5f2e1be(arg1);
}
