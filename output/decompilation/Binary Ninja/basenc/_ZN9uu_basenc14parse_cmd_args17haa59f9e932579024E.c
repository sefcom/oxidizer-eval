
  int64_t* uu_basenc::parse_cmd_args::haa59f9e932579024(int64_t* arg1, int64_t arg2)

{
    int128_t var_2e8;
    uu_basenc::uu_app::hfbf1ac7160545103(&var_2e8);
    void** const var_370;
    uucore::Args::collect_lossy::h59613048ab61941c(&var_370, arg2);
    int64_t var_320;
    clap_builder::builder::command::Command::try_get_matches_from::hd3fa77ff50e7945c(&var_320, 
        &var_2e8, &var_370);
    int64_t rax = var_320;
    int64_t var_318;
    
    if (rax == -0x8000000000000000)
    {
        int64_t* result = alloc::boxed::Box$LT$T$GT$::new::h52e31e1a4412d689(var_318);
        arg1[1] = result;
        arg1[2] = &data_54cd90;
        *arg1 = 2;
        return result;
    }
    
    int128_t var_30c;
    int128_t var_344_1 = var_30c;
    int128_t var_2fc;
    int128_t var_334_1 = var_2fc;
    int32_t var_2ec;
    int32_t var_324_1 = var_2ec;
    int64_t var_358 = rax;
    int64_t var_350_1 = var_318;
    int32_t var_310;
    int32_t var_348_1 = var_310;
    var_370 = &data_54cb70;
    void** const var_368_1 = &data_54ccb0;
    int64_t* rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h0ca1d326b6d409fa(&var_370, &var_358);
    
    if (!rax_1)
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::heaa6d59ecfaf3b76(&var_320);
        int64_t var_2d8_1 = var_310;
        var_2e8 = var_320;
        int32_t var_2d0_1 = 1;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h92a545b9430b9ec5(&var_2e8);
        arg1[2] = &data_54cce8;
        *arg1 = 2;
    }
    else
    {
        char rbp_1 = rax_1[2];
        uu_base32::base_common::Config::from::h8f03cd9b16c9529c(&var_2e8, &var_358);
        int64_t rdx_4 = var_2e8;
        int64_t rax_2 = *var_2e8[8];
        int64_t var_2d8;
        
        if (rdx_4 != 2)
        {
            int64_t var_2c0;
            arg1[5] = var_2c0;
            int32_t var_2d0;
            *(arg1 + 0x18) = var_2d0;
            *arg1 = rdx_4;
            arg1[1] = rax_2;
            arg1[2] = var_2d8;
            arg1[6] = rbp_1;
        }
        else
        {
            arg1[1] = rax_2;
            arg1[2] = var_2d8;
            *arg1 = 2;
        }
    }
    
    return core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h232bb017e5ec51f0(&var_358);
}
