
  int64_t backdoorautomater::main::h9fa6341046b633c3()

{
    int64_t var_3b8;
    int128_t var_398;
    char const (** const var_380)[0x0];
    int64_t var_370_5;
    int128_t var_368;
    uint32_t i_1;
    char i;
    
    do
    {
        var_380 = &data_62adb0;
        int64_t var_378_1 = 1;
        int64_t var_370_1 = 8;
        var_368 = {0};
        std::io::stdio::_print::h9670eaecb29bc3fc(&var_380);
        var_380 = &data_62adc0;
        int64_t var_378_2 = 1;
        int64_t var_370_2 = 8;
        var_368 = {0};
        std::io::stdio::_print::h9670eaecb29bc3fc(&var_380);
        var_380 = &data_62add0;
        int64_t var_378_3 = 1;
        int64_t var_370_3 = 8;
        var_368 = {0};
        std::io::stdio::_print::h9670eaecb29bc3fc(&var_380);
        var_380 = &data_62ade0;
        int64_t var_378_4 = 1;
        int64_t var_370_4 = 8;
        var_368 = {0};
        std::io::stdio::_print::h9670eaecb29bc3fc(&var_380);
        var_380 = &data_62adf0;
        int64_t var_378_5 = 1;
        var_370_5 = 8;
        var_368 = {0};
        std::io::stdio::_print::h9670eaecb29bc3fc(&var_380);
        var_3b8 = 0;
        int64_t var_3b0_1 = 1;
        int64_t var_3a8_1 = 0;
        std::io::stdio::stdin::h333095a056b9945d();
        var_380 = &std::io::stdio::stdin::INSTANCE::h0c8f213e13222558;
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 = std::io::stdio::Stdin::read_line::h820297227bc0cfb0(&var_380, &var_3b8);
        core::result::Result$LT$T$C$E$GT$::expect::h53a72b4a2a5f7bb1(rax_1, rdx_1);
        char* rax_2;
        int64_t rdx_3;
        rax_2 =
            core::str::_$LT$impl$u20$str$GT$::trim_matches::heb9c2373ab7cadcf(var_3b0_1, var_3a8_1);
        char rax_3;
        rax_3 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u8$GT$::from_str::h751c4fd84625d916(rax_2, rdx_3);
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4aa1dd8ab670f689(&var_380, 
            "Concert String to Integer: Error…", 0x20);
        int64_t var_388_1 = var_370_5;
        var_398 = var_380;
        _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h6b8d6456597bb7a1(&var_380, &var_398, var_3b0_1, var_3a8_1);
        i_1 = i;
        core::result::Result$LT$T$C$E$GT$::expect::hd2cf924265706b91(rax_3 & 1, i_1, var_378_5, 
            var_370_5);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_380);
        alloc::vec::Vec$LT$T$C$A$GT$::clear::hef16271c1d0d6175(&var_3b8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_3b8);
    } while (!i);
    var_380 = nullptr;
    int64_t var_378_6 = 1;
    var_370_5 = {0};
    *var_368[8] = 1;
    int128_t var_358 = {0};
    int64_t var_348 = 1;
    char var_2f0 = 0;
    int128_t var_340 = {0};
    int64_t var_330 = 1;
    int128_t var_328 = {0};
    int64_t var_318 = 1;
    int128_t var_310 = {0};
    int64_t var_300 = 1;
    int64_t var_2f8 = 0;
    uint64_t r12_1 = i_1 - 1;
    int64_t result;
    char rbx;
    int128_t var_320;
    int128_t var_308;
    int128_t var_2e8;
    int128_t var_2c8;
    char r14_1;
    char r15_2;
    
    if (r12_1 > 3)
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_380);
        r15_2 = 0;
        r14_1 = 0;
        r12_1 = 1;
        label_465cea:
        result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&var_368);
        
        if (!r14_1)
            result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                &*var_358[8]);
        
        rbx = r12_1;
        
        if (!r15_2)
            result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                &*var_340[8]);
    }
    else
        switch (r12_1)
        {
            case 0:
            {
                backdoorautomater::Param::set_param::h82809e6fdedb22bd(&var_380, 1);
                void var_290;
                uint64_t rcx_5;
                bool rdx_6;
                rcx_5 = _$LT$backdoorautomater..Param$u20$as$u20$core..clone..Clone$GT$::clone::h134900a9f6f88e9a(&var_290, &var_380);
                backdoorautomater::sanitizer::sanitize_param_hub::h407aa3fa6f2031da(&var_290, 1, 
                    rdx_6, rcx_5);
                int64_t var_2d8_1 = var_358;
                var_2e8 = var_368;
                int64_t var_3a8_2 = var_340;
                var_3b8 = var_358;
                int64_t var_388_2 = var_370_5;
                var_398 = var_380;
                r12_1 = 1;
                r12_1 = 1;
                backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
                    backdoorautomater::newservice::write_service::hf90b4724373f44a5(&var_2e8, 
                    &var_3b8, &var_398, var_2f0));
                rbx = 1;
                result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                    &*var_340[8]);
                break;
            }
            case 1:
            {
                backdoorautomater::Param::set_param::h82809e6fdedb22bd(&var_380, 2);
                void var_1f8;
                uint64_t rcx_11;
                bool rdx_12;
                rcx_11 = _$LT$backdoorautomater..Param$u20$as$u20$core..clone..Clone$GT$::clone::h134900a9f6f88e9a(&var_1f8, &var_380);
                backdoorautomater::sanitizer::sanitize_param_hub::h407aa3fa6f2031da(&var_1f8, 2, 
                    rdx_12, rcx_11);
                int64_t var_2b8_3 = var_358;
                var_2c8 = var_368;
                int64_t var_2d8_4 = var_310;
                var_2e8 = var_320;
                int64_t var_3a8_5 = var_370_5;
                var_3b8 = var_380;
                int64_t var_388_5 = var_340;
                var_398 = var_358;
                r12_1 = 0;
                backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
                    backdoorautomater::modifyservice::get_service::h8cd53f8d8d7b2c85(&var_2c8, 
                    &var_2e8, var_2f0, &var_3b8, &var_398));
                rbx = 1;
                result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(
                    &*var_340[8]);
                break;
            }
            case 2:
            {
                backdoorautomater::Param::set_param::h82809e6fdedb22bd(&var_380, 3);
                void var_160;
                uint64_t rcx_7;
                bool rdx_8;
                rcx_7 = _$LT$backdoorautomater..Param$u20$as$u20$core..clone..Clone$GT$::clone::h134900a9f6f88e9a(&var_160, &var_380);
                backdoorautomater::sanitizer::sanitize_param_hub::h407aa3fa6f2031da(&var_160, 3, 
                    rdx_8, rcx_7);
                int64_t var_2b8_1 = var_370_5;
                var_2c8 = var_380;
                int64_t var_2d8_2 = var_340;
                var_2e8 = var_358;
                int64_t var_3a8_3 = var_310;
                var_3b8 = var_320;
                int64_t var_388_3 = var_2f8;
                var_398 = var_308;
                backdoorautomater::shellscript::create_script::h6e2940071419697f(&var_2c8, 
                    &var_2e8, &var_3b8, &var_398, var_2f0);
                r15_2 = 0;
                label_465bf6:
                r14_1 = 1;
                r12_1 = 0;
                goto label_465cea;
            }
            case 3:
            {
                backdoorautomater::Param::set_param::h82809e6fdedb22bd(&var_380, 4);
                void var_c8;
                uint64_t rcx_9;
                bool rdx_10;
                rcx_9 = _$LT$backdoorautomater..Param$u20$as$u20$core..clone..Clone$GT$::clone::h134900a9f6f88e9a(&var_c8, &var_380);
                backdoorautomater::sanitizer::sanitize_param_hub::h407aa3fa6f2031da(&var_c8, 4, 
                    rdx_10, rcx_9);
                int64_t var_298_1 = var_370_5;
                int128_t var_2a8 = var_380;
                int64_t var_2b8_2 = var_340;
                var_2c8 = var_358;
                int64_t var_2d8_3 = var_310;
                var_2e8 = var_320;
                int64_t var_3a8_4 = var_2f8;
                var_3b8 = var_308;
                int64_t var_388_4 = var_328;
                int128_t var_338;
                var_398 = var_338;
                backdoorautomater::sanitizer::sanitize_return_fn::hb2c462d03cd2292c(
                    backdoorautomater::cronshell::create_cron::h656d414225364c9c(&var_2a8, 
                    &var_2c8, &var_2e8, &var_3b8, var_2f0, &var_398));
                r15_2 = 1;
                goto label_465bf6;
            }
        }
    
    if (r12_1)
        result =
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&*var_328[8]);
    
    if (!rbx)
        return result;
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h944c33df58684028(&*var_310[8]);
}
