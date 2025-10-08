
  uint64_t uu_basenc::parse_cmd_args::h179f17a9a715c835(int64_t* arg1, int64_t arg2)

{
    int64_t var_2e8;
    uu_basenc::uu_app::hf8773d6a5be336bd(&var_2e8);
    int128_t var_310;
    uucore::Args::collect_lossy::hc1619b15e767c58d(&var_310, arg2);
    int64_t var_348;
    clap_builder::builder::command::Command::try_get_matches_from::hc7f9a554853dd5dc(&var_348, 
        &var_2e8, &var_310);
    int64_t rax = var_348;
    int64_t var_340;
    
    if (-(rax) == -0x8000000000000000)
    {
        uint64_t result = alloc::boxed::Box$LT$T$GT$::new::he18ed11548f4bb02(var_340);
        arg1[1] = result;
        arg1[2] = &data_510cc0;
        *arg1 = 2;
        return result;
    }
    
    int128_t var_334;
    int128_t var_2d4_1 = var_334;
    int128_t var_324;
    int128_t var_2c4_1 = var_324;
    int32_t var_314;
    int32_t var_2b4_1 = var_314;
    var_2e8 = rax;
    int64_t var_2e0_1 = var_340;
    int32_t var_338;
    int32_t var_2d8_1 = var_338;
    void** const var_2f8 = &data_510ad8;
    void** const var_2f0_1 = &data_510c18;
    int64_t* rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h8368b17440220354(&var_2f8, &var_2e8);
    
    if (!rax_1)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hef4f8f39a54bc1b8(&var_310, "missing encoding typebase64same …", 0x15);
        int64_t var_300;
        var_338 = var_300;
        var_348 = var_310;
        *var_334[4] = 1;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h1050c4150b32dc44(&var_348);
        arg1[2] = &data_510c38;
        *arg1 = 2;
    }
    else
    {
        char rbp_1 = rax_1[2];
        uu_base32::base_common::Config::from::he8007e948e715e4f(&var_348, &var_2e8);
        int64_t rdx_4 = var_348;
        int64_t rcx_3 = var_338;
        
        if (rdx_4 != 2)
        {
            arg1[5] = *var_324[4];
            *(arg1 + 0x18) = var_334;
            *arg1 = rdx_4;
            arg1[1] = var_340;
            arg1[2] = rcx_3;
            arg1[6] = rbp_1;
        }
        else
        {
            arg1[1] = var_340;
            arg1[2] = rcx_3;
            *arg1 = 2;
        }
    }
    
    return core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h3cb77b187d077377(&var_2e8);
}
