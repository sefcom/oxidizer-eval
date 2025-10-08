
  int64_t change_log::adapters::octocrab::OctocrabAdapter::new::h4ec1e2811114620e(int64_t arg1, int64_t arg2, uint64_t arg3)

{
    int64_t var_358;
    __builtin_memcpy(&var_358, 
        "\x01\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 0x18);
    int64_t var_2d8 = 0;
    int64_t var_2d0 = 8;
    int128_t var_2c8 = {0};
    int64_t var_2b8 = 8;
    int64_t var_2b0 = 0;
    int32_t var_2a0 = 0x3b9aca00;
    int32_t var_290 = 0x3b9aca00;
    int32_t var_280 = 0x3b9aca00;
    char var_278 = 3;
    char var_220 = 3;
    int64_t var_1c8 = 0;
    int128_t var_1b8;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf07736205cb4a9e6(&var_1b8, arg2, arg3);
    int64_t var_1a8;
    int64_t var_368 = var_1a8;
    int128_t var_378 = var_1b8;
    octocrab::OctocrabBuilder$LT$octocrab..NoSvc$C$octocrab..DefaultOctocrabBuilderConfig$C$octocrab..NoAuth$C$octocrab..NotLayerReady$GT$::personal_token::h7debb8ec12620a3e(&var_1b8, &var_358, &var_378);
    octocrab::OctocrabBuilder$LT$octocrab..NoSvc$C$octocrab..DefaultOctocrabBuilderConfig$C$octocrab..NoAuth$C$octocrab..NotLayerReady$GT$::build::ha011fa1a0c94087c(&var_358, &var_1b8);
    core::result::Result$LT$T$C$E$GT$::unwrap::h3e180f9a1a85aa54(arg1, &var_358);
    return arg1;
}
