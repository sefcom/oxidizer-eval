
  uint64_t uu_timeout::uumain::uumain::hc8d8470bc3c1b755(int64_t arg1)

{
    int64_t var_2e0;
    uu_timeout::uu_app::hbfb08d0d02c89d09(&var_2e0);
    int64_t var_360;
    clap_builder::builder::command::Command::try_get_matches_from::h41ad35f95685d978(&var_360, 
        &var_2e0, arg1);
    int64_t rax = var_360;
    int64_t var_358;
    
    if (-(rax) == -0x8000000000000000)
        return alloc::boxed::Box$LT$T$GT$::new::h3562a38b82986fe7(var_358);
    
    int128_t var_34c;
    int128_t var_304_1 = var_34c;
    int128_t var_33c;
    int128_t var_2f4_1 = var_33c;
    int32_t var_32c;
    int32_t var_2e4_1 = var_32c;
    int64_t var_318 = rax;
    int64_t var_310_1 = var_358;
    int32_t var_350;
    int32_t var_308_1 = var_350;
    uu_timeout::Config::from::hed1b4ca69d4616c5(&var_2e0, &var_318);
    int64_t rcx_4 = var_2e0;
    int64_t* rdi_4;
    uint64_t result;
    uint64_t result_1;
    
    if (rcx_4 != -0x8000000000000000)
    {
        var_360 = rcx_4;
        uint64_t result_3 = result_1;
        void** var_2d0;
        var_350 = var_2d0;
        int128_t var_2c8;
        int128_t var_2b8;
        int88_t var_2a8;
        uint64_t result_2;
        void** rdx_3;
        result_2 = uu_timeout::timeout::he6dc1fc585e5d981(result_1, var_2d0, *var_2c8[4], 
            *var_2c8[0xc], var_2a8, *var_2b8[4], *var_2b8[0xc], *var_2a8[8], *var_2a8[9], 
            *var_2a8[0xa]);
        result = result_2;
        core::ptr::drop_in_place$LT$uu_timeout..Config$GT$::h3c83412a368ec9e4(&var_360);
        rdi_4 = &var_318;
    }
    else
    {
        rdi_4 = &var_318;
        result = result_1;
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he092b279c01bbc7d(rdi_4);
    return result;
}
