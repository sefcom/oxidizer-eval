
  uint64_t flealib::fleaserver::replay::h1abd155ed0ce5999(int32_t* arg1, char* arg2, int64_t* arg3, void** arg4)

{
    int32_t* var_330 = arg1;
    char const* const var_388;
    char const* const var_360;
    int64_t var_348;
    void** const var_308;
    
    if (core::sync::atomic::atomic_load::h8980141092664382() >= 4)
    {
        var_388 = arg2;
        int64_t (* var_380_1)(void* arg1, int64_t* arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
        int64_t* var_378_1 = arg3;
        int64_t (* var_370_1)(void* arg1, int64_t* arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
        var_308 = &data_b0b200;
        int64_t var_300_1 = 2;
        int64_t var_2e8_1 = 0;
        int64_t* var_2f8_1 = &var_388;
        int64_t var_2f0_1 = 2;
        int64_t rax_1 = log::__private_api::loc::he6f33e710a34adaf(&data_b0b240);
        var_360 = "flealib::fleaserverReceived comm…";
        int64_t var_358_1 = 0x13;
        char const* const var_350_1 = "flealib::fleaserverReceived comm…";
        var_348 = 0x13;
        int64_t var_340_1 = rax_1;
        log::__private_api::log::hd2d1d5843cf283e9(&var_308, 4, &var_360);
    }
    
    _$LT$flealib..commandprocessor..CommandProcessor$u20$as$u20$flealib..commandprocessor..FleaCommand$GT$::new::h586d0e7274d62e14(&var_308);
    void var_3a8;
    _$LT$flealib..commandprocessor..CommandProcessor$u20$as$u20$flealib..commandprocessor..FleaCommand$GT$::process::h2e8420d3bf6d33bb(&var_3a8, &var_308, *(arg2 + 8), *(arg2 + 0x10), arg3[1], arg3[2], arg4);
    uint64_t var_398;
    int64_t rbx;
    
    if (!var_398)
    {
        label_79d42a:
        rbx = 0;
        label_79d431:
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_3a8);
        core::ptr::drop_in_place$LT$flealib..commandprocessor..CommandProcessor$GT$::hfa448d48af951e22(&var_308);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg3);
    }
    else
    {
        rbx = 1;
        char* var_3a0;
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8db7540a69ffbf83(var_3a0, var_398, "quitfilesize", 4))
            goto label_79d431;
        
        char* rax_3 =
            std::os::unix::net::stream::UnixStream::set_nonblocking::h2f9d712ba68e5608(var_330, 1);
        var_360 = rax_3;
        
        if (rax_3)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::hf8032a12594530d3(&var_360);
            
            if (core::sync::atomic::atomic_load::h8980141092664382())
            {
                var_360 = &data_b0b220;
                int64_t var_358_2 = 1;
                int64_t var_350_2 = 8;
                var_348 = {0};
                int64_t rax_5 = log::__private_api::loc::he6f33e710a34adaf(&data_b0b288);
                var_388 = "flealib::fleaserverReceived comm…";
                int64_t var_380_2 = 0x13;
                char const* const var_378_2 = "flealib::fleaserverReceived comm…";
                int64_t var_370_2 = 0x13;
                int64_t var_368_1 = rax_5;
                log::__private_api::log::hd2d1d5843cf283e9(&var_360, 1, &var_388);
            }
            
            goto label_79d42a;
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::hf8032a12594530d3(&var_360);
        char* rbx_1 = var_3a0;
        uint64_t r12_1 = var_398;
        void* r15_1 = nullptr;
        void* rax_7;
        uint64_t rdx_4;
        rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h976b43e5259d6dae(0, rbx_1, r12_1);
        
        if (!rax_7)
        {
            label_79d64a:
            core::str::slice_error_fail::h308399354b042e38(rbx_1, r12_1, r15_1, r12_1);
            /* no return */
        }
        
        r15_1 = nullptr;
        
        while (true)
        {
            int64_t rax_8;
            int64_t rdx_5;
            rax_8 = _$LT$$RF$std..net..tcp..TcpStream$u20$as$u20$std..io..Write$GT$::write::h954aeb07d32fa516(&var_330, rax_7, rdx_4);
            int64_t var_328 = rax_8;
            
            if (!rax_8)
            {
                r15_1 += rdx_5;
                r12_1 = var_398;
                
                if (r15_1 == r12_1)
                {
                    label_79d60c:
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(
                        &var_3a8);
                    core::ptr::drop_in_place$LT$flealib..commandprocessor..CommandProcessor$GT$::hfa448d48af951e22(&var_308);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg3);
                    rbx = 0;
                    break;
                }
                
                rbx_1 = var_3a0;
            }
            else
            {
                if (std::io::error::Error::kind::h7f0d5435ec1cf07f(rdx_5) != 0xd)
                {
                    int64_t var_390 = rdx_5;
                    
                    if (core::sync::atomic::atomic_load::h8980141092664382())
                    {
                        int64_t* var_318 = &var_390;
                        int64_t (* var_310_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
                        var_360 = &data_b0b230;
                        int64_t var_358_3 = 1;
                        int64_t var_340_2 = 0;
                        int64_t** var_350_3 = &var_318;
                        int64_t var_348_1 = 1;
                        int64_t rax_12 = log::__private_api::loc::he6f33e710a34adaf(&data_b0b270);
                        var_388 = "flealib::fleaserverReceived comm…";
                        int64_t var_380_3 = 0x13;
                        char const* const var_378_3 = "flealib::fleaserverReceived comm…";
                        int64_t var_370_3 = 0x13;
                        int64_t var_368_2 = rax_12;
                        log::__private_api::log::hd2d1d5843cf283e9(&var_360, 1, &var_388);
                    }
                    
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(
                        &var_390);
                    goto label_79d60c;
                }
                
                std::thread::sleep::h1a6eeffe1c923e1f(0, 0x5f5e100);
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h0973251e17d5721c(&var_328);
                rbx_1 = var_3a0;
                r12_1 = var_398;
            }
            
            rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h976b43e5259d6dae(r15_1, rbx_1, r12_1);
            
            if (!rax_7)
                goto label_79d64a;
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg2);
    return rbx;
}
