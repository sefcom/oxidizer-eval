
  void alacritty::log_config_path::h9df1f23b6c9c8bdc(int64_t arg1, int64_t arg2)

{
    if (arg2)
    {
        void var_70;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_70, "Configuration files loaded from:…", 0x20);
        int64_t i = 0;
        int128_t* var_b0;
        void** const var_a0;
        int128_t var_58;
        
        do
        {
            var_58 = *(arg1 + i + 8);
            var_b0 = &var_58;
            int64_t (* var_a8_1)(int128_t* arg1, int64_t* arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Debug$GT$::fmt::h805f8819fa6944ce;
            var_a0 = &data_c84568;
            int64_t var_98_1 = 1;
            int64_t var_80_1 = 0;
            int128_t** var_90_1 = &var_b0;
            int64_t var_88_1 = 1;
            _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hab45fb697e21b286(&var_70, &var_a0);
            i += 0x18;
        } while (arg2 * 0x18 != i);
        
        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
        {
            var_b0 = &var_70;
            int64_t (* var_a8_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_a0 = &data_4e8b60;
            int64_t var_98_2 = 1;
            int64_t var_80_2 = 0;
            int128_t** var_90_2 = &var_b0;
            int64_t var_88_2 = 1;
            int64_t rax_2 = log::__private_api::loc::h250021ea1f26630a(&data_c84578);
            var_58 = "alacritty/etc/alacritty.config/a…";
            *var_58[8] = 9;
            char const* const var_48_1 = "alacritty/etc/alacritty.config/a…";
            int64_t var_40_1 = 9;
            int64_t var_38_1 = rax_2;
            log::__private_api::log::h0b6680b994d742b1(&var_a0, 3, &var_58);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_70);
    }
}
