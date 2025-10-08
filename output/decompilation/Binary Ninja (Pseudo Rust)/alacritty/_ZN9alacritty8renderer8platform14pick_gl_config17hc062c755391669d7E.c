
  fn alacritty::renderer::platform::pick_gl_config::hc062c755391669d7(arg1: *mut i64, arg2: *mut i32, arg3: *mut i32) -> i64

{
    let mut var_448: i32 = 0;
    let var_440: i32 = 0;
    let mut var_438: i32 = 0x10;
    let var_41c: i16 = 0;
    let var_418: i32 = 0x8080800;
    let var_414: i8 = 0;
    let var_412: i8 = 0;
    let var_408: i64 = 1;
    let mut var_428: i128;
    
    if *arg3 != 0x10
    {
        let var_3b8_1: i64 = 1;
        let var_3c8_1: i64 = var_418;
        let var_3c0_1: i64 = 0x80202000001;
        let var_3d8_1: i64 = var_428;
        let var_3cc_1: i16 = 0;
        let var_3e8_1: i128 = var_438;
        let var_3f8_1: i32 = var_448;
        let var_444: i32;
        let var_3f4_1: i32 = var_444;
        let var_3f0_1: i32 = 0;
        let var_43c: i32;
        let var_3ec_1: i32 = var_43c;
        let zmm0: i128 = *arg3;
        let var_3e8_2: i128 = zmm0;
        var_438 = zmm0;
        var_428 = *arg3.byte_offset(0x10);
        let mut var_420: i16;
        var_420 = 0;
        let var_41c_1: i16 = 0;
        let var_41a: i16;
        let var_41a_1: i16 = var_41a;
    }
    
    let mut var_228: i128;
    _$LT$glutin..config..ConfigTemplate$u20$as$u20$core..clone..Clone$GT$::clone::h4dfd7d44210ccda6(
        &var_228, &var_448);
    let mut var_218: i128;
    let zmm1: i128 = var_218;
    let mut var_398: i128 = var_228;
    let var_1ec: i8;
    let var_35c: i8 = var_1ec;
    let var_1e2: i16;
    let var_352: i16 = var_1e2;
    let var_368: i32 = 0xa0a0a00;
    let var_35b: i8 = 2;
    let mut var_f8: ();
    _$LT$glutin..config..ConfigTemplate$u20$as$u20$core..clone..Clone$GT$::clone::h4dfd7d44210ccda6(
        &var_f8, &var_448);
    let mut var_b0: ();
    _$LT$glutin..config..ConfigTemplate$u20$as$u20$core..clone..Clone$GT$::clone::h4dfd7d44210ccda6(
        &var_b0, &var_398);
    let var_38: i64 = var_418;
    let var_48: i128 = var_428;
    let var_58: i128 = var_438;
    let var_68: i128 = var_448;
    let var_148: i64 = var_408;
    let var_40f: i64;
    let var_14f: i64 = var_40f;
    let var_140: i128 = var_398;
    let var_130: i128 = zmm1;
    let var_208: i128;
    let var_120: i128 = var_208;
    let var_110: i64 = var_368;
    let var_1f4: i64;
    let mut var_107: i64 = var_1f4;
    let var_1ea: i64;
    var_107 = var_1ea;
    var_228 = 0;
    *var_228[8] = 4;
    memcpy(&var_218, &var_f8, 0xc8);
    let var_150: i8 = 0;
    let var_108: i8 = 0;
    let mut i: i32;
    core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h78391676f698d1c6(&i, &var_228);
    
    if i != 2
    {
        do
        {
            let var_230: i64;
            let var_308_1: i64 = var_230;
            let var_240: i128;
            let mut var_318_1: i128 = var_240;
            let var_250: i128;
            let mut var_328_1: i128 = var_250;
            let var_260: i128;
            let mut var_338_1: i128 = var_260;
            let mut var_348: i128 = i;
            let mut var_2d8: i32;
            _$LT$glutin..display..Display$u20$as$u20$glutin..display..GlDisplay$GT$::find_configs::h542735743ca4cbbd(&var_2d8, arg2);
            let mut var_3a8: i64;
            
            if var_2d8 != 2
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$glutin..config..Config$GT$$C$glutin..error..Error$GT$$GT$::h08698c9fc9622c5f(&var_2d8);
                var_3a8 = 2;
            }
            else
            {
                let var_2d0: i64;
                let var_2c8: *mut i64;
                let mut rax_15: i64;
                let mut rdx: i64;
                rax_15 = alacritty::renderer::platform::pick_gl_config::_$u7b$$u7b$closure$u7d$$u7d$::hbab412d0a9b8144b(var_2d0, var_2c8);
                var_3a8 = rax_15;
                let var_3a0_1: i64 = rdx;
                
                if rax_15 != 2
                {
                    let mut r15_1: i64 = rax_15;
                    let mut r14_1: i64 = rdx;
                    let mut var_460: i64 = rax_15;
                    let mut result: i64 = core::sync::atomic::atomic_load::h45f93311b58385bb(
                        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
                    
                    if result >= 4
                    {
                        let mut var_44c: i32 = _$LT$glutin..config..Config$u20$as$u20$glutin..config..GlConfig$GT$::color_buffer_type::hec9111ee17268365(&var_460);
                        let mut var_466: i8 = _$LT$glutin..config..Config$u20$as$u20$glutin..config..GlConfig$GT$::alpha_size::h859101a6a83943c8(&var_460);
                        let mut var_465: i8 = _$LT$glutin..config..Config$u20$as$u20$glutin..config..GlConfig$GT$::num_samples::hf9ffab9d6f5ffa88(&var_460);
                        let mut var_464: i8 = _$LT$glutin..config..Config$u20$as$u20$glutin..config..GlConfig$GT$::hardware_accelerated::ha06f745e275acdcb(&var_460);
                        let mut var_463: i8 = _$LT$glutin..config..Config$u20$as$u20$glutin..config..GlConfig$GT$::supports_transparency::h5fcd16efebd1c08c(&var_460);
                        let mut var_462: i8 = _$LT$glutin..config..Config$u20$as$u20$glutin..config..GlConfig$GT$::api::hac833db762142c06(&var_460);
                        let mut var_461: u8 = _$LT$glutin..config..Config$u20$as$u20$glutin..config..GlConfig$GT$::srgb_capable::h5b6857ac9b833080(&var_460);
                        var_348 = &var_44c;
                        *var_348[8] = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h34a3b09dba8f6390;
                        var_338_1 = &var_466;
                        *var_338_1[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h150c2a008a7de3c9;
                        var_328_1 = &var_465;
                        *var_328_1[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u8$GT$::fmt::h150c2a008a7de3c9;
                        var_318_1 = &var_464;
                        *var_318_1[8] =
                            _$LT$bool$u20$as$u20$core..fmt..Debug$GT$::fmt::h2059a05f7be96066;
                        let var_308_2: *mut i8 = &var_463;
                        let var_300_1: fn(arg1: *mut i8, arg2: *mut i8) -> u64 = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::had40d59677285ff6;
                        let var_2f8_1: *mut i8 = &var_462;
                        let var_2f0_1: fn(arg1: i64, arg2: *mut i64) -> u64 = _$LT$glutin..config..Api$u20$as$u20$core..fmt..Debug$GT$::fmt::h6bf0a64d35f2a64c;
                        let var_2e8_1: *mut u8 = &var_461;
                        let var_2e0_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 =
                            _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hbea0b23ff4cd4bd6;
                        var_2d8 = &data_c83880;
                        let var_2d0_1: i64 = 7;
                        let var_2b8_1: i64 = 0;
                        let var_2c8_1: *mut i128 = &var_348;
                        let var_2c0_1: i64 = 7;
                        let rax_23: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c838f0);
                        let mut var_298: *const i8 = "alacritty::renderer::platformPic…";
                        let var_290_1: i64 = 0x1d;
                        let var_288_1: *const i8 = "alacritty::renderer::platformPic…";
                        let var_280_1: i64 = 0x1d;
                        let var_278_1: i64 = rax_23;
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
        } while i != 2;
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(arg1, "failed to find suitable GL confi…", 0x29)
}
