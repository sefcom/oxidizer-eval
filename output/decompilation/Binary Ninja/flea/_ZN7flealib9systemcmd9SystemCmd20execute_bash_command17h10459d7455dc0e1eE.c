
  int128_t* flealib::systemcmd::SystemCmd::execute_bash_command::h10459d7455dc0e1e(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t r14 = arg4;
    int64_t r15 = arg3;
    int64_t var_2c8 = arg3;
    int64_t* var_318;
    char const* const var_288;
    int64_t var_280;
    char const* const var_278;
    int64_t var_268;
    int64_t** var_1e0;
    int64_t (* var_1d8)(int64_t* arg1, int64_t* arg2);
    char const (** const var_178)[0x41];
    int64_t*** var_168;
    
    if (core::sync::atomic::atomic_load::h8980141092664382() >= 4)
    {
        var_318 = &var_2c8;
        var_1e0 = &var_318;
        var_1d8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h12cd30248a4f3866;
        var_178 = &data_b08f50;
        int64_t var_170_1 = 1;
        int64_t var_158_1 = 0;
        var_168 = &var_1e0;
        int64_t var_160_1 = 1;
        int64_t rax_1 = log::__private_api::loc::he6f33e710a34adaf(&data_b08fb0);
        var_288 = "flealib::systemcmd/root/.rustup/…";
        var_280 = 0x12;
        var_278 = "flealib::systemcmd/root/.rustup/…";
        int64_t var_270_1 = 0x12;
        var_268 = rax_1;
        log::__private_api::log::hd2d1d5843cf283e9(&var_178, 4, &var_288);
        r15 = var_2c8;
        r14 = arg4;
    }
    
    void var_a8;
    core::str::pattern::StrSearcher::new::haa0b969b3b6bc6fa(&var_a8, r15, r14, 
        "cd Use 'cd' command to change a …", 3);
    int64_t var_40 = 0;
    int64_t var_38 = r14;
    int16_t var_30 = 1;
    void var_220;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hf1f22c0a078c0456(&var_220, &var_a8);
    int64_t var_210;
    
    if (var_210 <= 1)
    {
        std::process::Command::new::h9aa1e52e6d375bda(&var_178, var_2c8);
        int64_t r13;
        int64_t rdx_4 = std::process::Command::output::h4740011ae85f8c25(&var_1e0, r13);
        
        if (!(0 + -(var_1e0)))
        {
            int64_t var_1b0;
            int64_t var_258 = var_1b0;
            int128_t var_1c0;
            var_268 = var_1c0;
            int128_t var_1d0;
            var_278 = var_1d0;
            var_288 = var_1e0;
            int64_t* var_2b8 = &var_258;
            int64_t (* var_2b0_1)() = _$LT$std..process..ExitStatus$u20$as$u20$core..fmt..Display$GT$::fmt::h67b55ee36be5463b;
            var_318 = &data_b08f60;
            int64_t var_310_1 = 2;
            int64_t var_2f8_1 = 0;
            int64_t** var_308_1 = &var_2b8;
            int64_t var_300_1 = 1;
            int128_t var_1a8;
            core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_1a8, &var_318);
            int128_t var_208 = var_1a8;
            int64_t var_198;
            int64_t var_1f8_1 = var_198;
            uint64_t var_260;
            alloc::string::String::from_utf8_lossy::h44ed577670f061c9(&var_2b8, var_268, var_260);
            uint64_t var_2a8;
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(
                &var_318, var_2b0_1, var_2a8);
            int64_t** var_2d8_1 = var_308_1;
            int128_t var_2e8 = var_318;
            int128_t* var_238 = &var_2e8;
            int64_t (* var_230_1)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            var_318 = &data_b08f80;
            int64_t var_310_2 = 2;
            int64_t var_2f8_2 = 0;
            int128_t** var_308_2 = &var_238;
            int64_t var_300_2 = 1;
            int128_t var_250;
            core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_250, &var_318);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_2e8);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb29927c53dd8f325(
                &var_2b8);
            var_238 = var_250;
            int64_t var_240;
            int64_t var_228_1 = var_240;
            alloc::string::String::from_utf8_lossy::h44ed577670f061c9(&var_2b8, var_280, var_278);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(
                &var_318, var_2b0_1, var_2a8);
            int128_t** var_2d8_2 = var_308_2;
            var_2e8 = var_318;
            int128_t* var_1f0 = &var_2e8;
            int64_t (* var_1e8_1)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            var_318 = &data_b08fa0;
            int64_t var_310_3 = 1;
            int64_t var_2f8_3 = 0;
            int128_t** var_308_3 = &var_1f0;
            int64_t var_300_3 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_250, &var_318);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_2e8);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb29927c53dd8f325(
                &var_2b8);
            var_2e8 = var_250;
            int64_t var_2d8_3 = var_240;
            var_318 = &var_208;
            int64_t (* var_310_4)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            int128_t** var_308_4 = &var_238;
            int64_t (* var_300_4)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            int128_t* var_2f8_4 = &var_2e8;
            int64_t (* var_2f0_1)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            var_2b8 = &data_46a830;
            int64_t var_2b0_2 = 3;
            int64_t var_298_1 = 0;
            int64_t** var_2a8_1 = &var_318;
            int64_t var_2a0_1 = 3;
            int128_t var_190;
            core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_190, &var_2b8);
            int64_t var_180;
            arg1[1] = var_180;
            *arg1 = var_190;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_2e8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_238);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_208);
            core::ptr::drop_in_place$LT$std..process..Output$GT$::hfbac92b66ab59709(&var_288);
        }
        else
        {
            var_288 = var_1d8;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(
                arg1, &var_288, rdx_4);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(var_1d8);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb30d824733ae43be(&var_220);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h9f27e060e11473c7(&var_178);
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_178, 
            "Use 'cd' command to change a dir…", 0x26);
        arg1[1] = var_168;
        *arg1 = var_178;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb30d824733ae43be(&var_220);
    }
    
    return arg1;
}
