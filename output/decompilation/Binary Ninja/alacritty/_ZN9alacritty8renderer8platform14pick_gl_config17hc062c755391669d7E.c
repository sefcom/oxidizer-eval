
  int64_t alacritty::renderer::platform::pick_gl_config::hc062c755391669d7(int64_t* arg1, int32_t* arg2, int32_t* arg3)

{
    int32_t var_448 = 0;
    int32_t var_440 = 0;
    int32_t var_438 = 0x10;
    int16_t var_41c = 0;
    int32_t var_418 = 0x8080800;
    char var_414 = 0;
    char var_412 = 0;
    int64_t var_408 = 1;
    int128_t var_428;
    
    if (*arg3 != 0x10)
    {
        int64_t var_3b8_1 = 1;
        int64_t var_3c8_1 = var_418;
        int64_t var_3c0_1 = 0x80202000001;
        int64_t var_3d8_1 = var_428;
        int16_t var_3cc_1 = 0;
        int128_t var_3e8_1 = var_438;
        int32_t var_3f8_1 = var_448;
        int32_t var_444;
        int32_t var_3f4_1 = var_444;
        int32_t var_3f0_1 = 0;
        int32_t var_43c;
        int32_t var_3ec_1 = var_43c;
        int128_t zmm0 = *arg3;
        int128_t var_3e8_2 = zmm0;
        var_438 = zmm0;
        var_428 = *(arg3 + 0x10);
        int16_t var_420;
        var_420 = 0;
        int16_t var_41c_1 = 0;
        int16_t var_41a;
        int16_t var_41a_1 = var_41a;
    }
    
    int128_t var_228;
    _$LT$glutin..config..ConfigTemplate$u20$as$u20$core..clone..Clone$GT$::clone::h4dfd7d44210ccda6(
        &var_228, &var_448);
    int128_t var_218;
    int128_t zmm1 = var_218;
    int128_t var_398 = var_228;
    char var_1ec;
    char var_35c = var_1ec;
    int16_t var_1e2;
    int16_t var_352 = var_1e2;
    int32_t var_368 = 0xa0a0a00;
    char var_35b = 2;
    void var_f8;
    _$LT$glutin..config..ConfigTemplate$u20$as$u20$core..clone..Clone$GT$::clone::h4dfd7d44210ccda6(
        &var_f8, &var_448);
    void var_b0;
    _$LT$glutin..config..ConfigTemplate$u20$as$u20$core..clone..Clone$GT$::clone::h4dfd7d44210ccda6(
        &var_b0, &var_398);
    int64_t var_38 = var_418;
    int128_t var_48 = var_428;
    int128_t var_58 = var_438;
    int128_t var_68 = var_448;
    int64_t var_148 = var_408;
    int64_t var_40f;
    int64_t var_14f = var_40f;
    int128_t var_140 = var_398;
    int128_t var_130 = zmm1;
    int128_t var_208;
    int128_t var_120 = var_208;
    int64_t var_110 = var_368;
    int64_t var_1f4;
    int64_t var_107 = var_1f4;
    int64_t var_1ea;
    var_107 = var_1ea;
    var_228 = 0;
    *var_228[8] = 4;
    memcpy(&var_218, &var_f8, 0xc8);
    char var_150 = 0;
    char var_108 = 0;
    int32_t i;
    core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h78391676f698d1c6(&i, &var_228);
    
    if (i != 2)
    {
        do
        {
            int64_t var_230;
            int64_t var_308_1 = var_230;
            int128_t var_240;
            int128_t var_318_1 = var_240;
            int128_t var_250;
            int128_t var_328_1 = var_250;
            int128_t var_260;
            int128_t var_338_1 = var_260;
            int128_t var_348 = i;
            int32_t var_2d8;
            _$LT$glutin..display..Display$u20$as$u20$glutin..display..GlDisplay$GT$::find_configs::h542735743ca4cbbd(&var_2d8, arg2);
            int64_t var_3a8;
            
            if (var_2d8 != 2)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$glutin..config..Config$GT$$C$glutin..error..Error$GT$$GT$::h08698c9fc9622c5f(&var_2d8);
                var_3a8 = 2;
            }
            else
            {
                int64_t var_2d0;
                int64_t* var_2c8;
                int64_t rax_15;
                int64_t rdx;
                rax_15 = alacritty::renderer::platform::pick_gl_config::_$u7b$$u7b$closure$u7d$$u7d$::hbab412d0a9b8144b(var_2d0, var_2c8);
                var_3a8 = rax_15;
                int64_t var_3a0_1 = rdx;
                
                if (rax_15 != 2)
                {
                    int64_t r15_1 = rax_15;
                    int64_t r14_1 = rdx;
                    int64_t var_460 = rax_15;
                    int64_t result = core::sync::atomic::atomic_load::h45f93311b58385bb(
                        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
                    
                    if (result >= 4)
                    {
                        int32_t var_44c = _$LT$glutin..config..Config$u20$as$u20$glutin..config..GlConfig$GT$::color_buffer_type::hec9111ee17268365(&var_460);
                        char var_466 = _$LT$glutin..config..Config$u20$as$u20$glutin..config..GlConfig$GT$::alpha_size::h859101a6a83943c8(&var_460);
                        char var_465 = _$LT$glutin..config..Config$u20$as$u20$glutin..config..GlConfig$GT$::num_samples::hf9ffab9d6f5ffa88(&var_460);
                        char var_464 = _$LT$glutin..config..Config$u20$as$u20$glutin..config..GlConfig$GT$::hardware_accelerated::ha06f745e275acdcb(&var_460);
                        char var_463 = _$LT$glutin..config..Config$u20$as$u20$glutin..config..GlConfig$GT$::supports_transparency::h5fcd16efebd1c08c(&var_460);
                        char var_462 = _$LT$glutin..config..Config$u20$as$u20$glutin..config..GlConfig$GT$::api::hac833db762142c06(&var_460);
                        uint8_t var_461 = _$LT$glutin..config..Config$u20$as$u20$glutin..config..GlConfig$GT$::srgb_capable::h5b6857ac9b833080(&var_460);
                        var_348 = &var_44c;
                        *var_348[8] = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h34a3b09dba8f6390;
                        var_338_1 = &var_466;
                        *var_338_1[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h150c2a008a7de3c9;
                        var_328_1 = &var_465;
                        *var_328_1[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h150c2a008a7de3c9;
                        var_318_1 = &var_464;
                        *var_318_1[8] =
                            _$LT$bool$u20$as$u20$core..fmt..Debug$GT$::fmt::h2059a05f7be96066;
                        char* var_308_2 = &var_463;
                        uint64_t (* var_300_1)(char* arg1, char* arg2) = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::had40d59677285ff6;
                        char* var_2f8_1 = &var_462;
                        uint64_t (* var_2f0_1)(int64_t arg1, int64_t* arg2) = _$LT$glutin..config..Api$u20$as$u20$core..fmt..Debug$GT$::fmt::h6bf0a64d35f2a64c;
                        uint8_t* var_2e8_1 = &var_461;
                        int64_t (* var_2e0_1)(char* arg1, int64_t* arg2) =
                            _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hbea0b23ff4cd4bd6;
                        var_2d8 = &data_c83880;
                        int64_t var_2d0_1 = 7;
                        int64_t var_2b8_1 = 0;
                        int128_t* var_2c8_1 = &var_348;
                        int64_t var_2c0_1 = 7;
                        int64_t rax_23 = log::__private_api::loc::h250021ea1f26630a(&data_c838f0);
                        char const* const var_298 = "alacritty::renderer::platformPic…";
                        int64_t var_290_1 = 0x1d;
                        char const* const var_288_1 = "alacritty::renderer::platformPic…";
                        int64_t var_280_1 = 0x1d;
                        int64_t var_278_1 = rax_23;
                        result = log::__private_api::log::h0b6680b994d742b1(&var_2d8, 4, &var_298);
                        r15_1 = var_460;
                        r14_1 = rdx;
                    }
                    
                    arg1[1] = r15_1;
                    arg1[2] = r14_1;
                    *arg1 = -0x8000000000000000;
                    return result;
                }
            }
            
            core::ptr::drop_in_place$LT$core..option..Option$LT$glutin..config..Config$GT$$GT$::h6dd549acf5270ad2(&var_3a8);
            core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h78391676f698d1c6(&i, &var_228);
        } while (i != 2);
    }
    
    return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(arg1, "failed to find suitable GL confi…", 0x29);
}
