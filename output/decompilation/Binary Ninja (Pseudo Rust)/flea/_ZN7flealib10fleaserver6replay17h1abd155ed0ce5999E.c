
  fn flealib::fleaserver::replay::h1abd155ed0ce5999(arg1: *mut i32, arg2: *mut i8, arg3: *mut i64, arg4: *mut *mut c_void) -> u64

{
    let mut var_330: *mut i32 = arg1;
    let mut var_388: *const i8;
    let mut var_360: *const i8;
    let mut var_348: i64;
    let mut var_308: *mut *mut c_void;
    
    if core::sync::atomic::atomic_load::h8980141092664382() >= 4
    {
        var_388 = arg2;
        let var_380_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
        let var_378_1: *mut i64 = arg3;
        let var_370_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
        var_308 = &data_b0b200;
        let var_300_1: i64 = 2;
        let var_2e8_1: i64 = 0;
        let var_2f8_1: *mut i64 = &var_388;
        let var_2f0_1: i64 = 2;
        let rax_1: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b0b240);
        var_360 = "flealib::fleaserverReceived comm…";
        let var_358_1: i64 = 0x13;
        let var_350_1: *const i8 = "flealib::fleaserverReceived comm…";
        var_348 = 0x13;
        let var_340_1: i64 = rax_1;
        log::__private_api::log::hd2d1d5843cf283e9(&var_308, 4, &var_360);
    }
    
    _$LT$flealib..commandprocessor..CommandProcessor$u20$as$u20$flealib..commandprocessor..FleaCommand$GT$::new::h586d0e7274d62e14(&var_308);
    let mut var_3a8: ();
    _$LT$flealib..commandprocessor..CommandProcessor$u20$as$u20$flealib..commandprocessor..FleaCommand$GT$::process::h2e8420d3bf6d33bb(&var_3a8, &var_308, *arg2.byte_offset(8), *arg2.byte_offset(0x10), arg3[1], arg3[2], arg4);
    let var_398: u64;
    let mut rbx: i64;
    
    if var_398 == 0
    {
        'label_79d42a:
        rbx = 0;
        'label_79d431:
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_3a8);
        core::ptr::drop_in_place$LT$flealib..commandprocessor..CommandProcessor$GT$::hfa448d48af951e22(&var_308);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg3);
    }
    else
    {
        rbx = 1;
        let var_3a0: *mut i8;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8db7540a69ffbf83(var_3a0, var_398, "quitfilesize", 4) != 0
        {
            goto 'label_79d431;
        }
        
        let rax_3: *mut i8 =
            std::os::unix::net::stream::UnixStream::set_nonblocking::h2f9d712ba68e5608(var_330, 1);
        var_360 = rax_3;
        
        if rax_3 != 0
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::hf8032a12594530d3(&var_360);
            
            if core::sync::atomic::atomic_load::h8980141092664382() != 0
            {
                var_360 = &data_b0b220;
                let var_358_2: i64 = 1;
                let var_350_2: i64 = 8;
                var_348 = {0};
                let rax_5: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b0b288);
                var_388 = "flealib::fleaserverReceived comm…";
                let var_380_2: i64 = 0x13;
                let var_378_2: *const i8 = "flealib::fleaserverReceived comm…";
                let var_370_2: i64 = 0x13;
                let var_368_1: i64 = rax_5;
                log::__private_api::log::hd2d1d5843cf283e9(&var_360, 1, &var_388);
            }
            
            goto 'label_79d42a;
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::hf8032a12594530d3(&var_360);
        let mut rbx_1: *mut i8 = var_3a0;
        let mut r12_1: u64 = var_398;
        let mut r15_1: *mut c_void = nullptr;
        let mut rax_7: *mut c_void;
        let mut rdx_4: u64;
        rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h976b43e5259d6dae(0, rbx_1, r12_1);
        
        if rax_7 == 0
        {
            'label_79d64a:
            core::str::slice_error_fail::h308399354b042e38(rbx_1, r12_1, r15_1, r12_1);
            /* no return */
        }
        
        r15_1 = nullptr;
        
        loop
        {
            let mut rax_8: i64;
            let mut rdx_5: i64;
            rax_8 = _$LT$$RF$std..net..tcp..TcpStream$u20$as$u20$std..io..Write$GT$::write::h954aeb07d32fa516(&var_330, rax_7, rdx_4);
            let mut var_328: i64 = rax_8;
            
            if rax_8 == 0
            {
                r15_1 += rdx_5;
                r12_1 = var_398;
                
                if r15_1 == r12_1
                {
                    'label_79d60c:
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
                if std::io::error::Error::kind::h7f0d5435ec1cf07f(rdx_5) != 0xd
                {
                    let mut var_390: i64 = rdx_5;
                    
                    if core::sync::atomic::atomic_load::h8980141092664382() != 0
                    {
                        let mut var_318: *mut i64 = &var_390;
                        let var_310_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
                        var_360 = &data_b0b230;
                        let var_358_3: i64 = 1;
                        let var_340_2: i64 = 0;
                        let var_350_3: *mut *mut i64 = &var_318;
                        let var_348_1: i64 = 1;
                        let rax_12: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b0b270);
                        var_388 = "flealib::fleaserverReceived comm…";
                        let var_380_3: i64 = 0x13;
                        let var_378_3: *const i8 = "flealib::fleaserverReceived comm…";
                        let var_370_3: i64 = 0x13;
                        let var_368_2: i64 = rax_12;
                        log::__private_api::log::hd2d1d5843cf283e9(&var_360, 1, &var_388);
                    }
                    
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(
                        &var_390);
                    goto 'label_79d60c;
                }
                
                std::thread::sleep::h1a6eeffe1c923e1f(0, 0x5f5e100);
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h0973251e17d5721c(&var_328);
                rbx_1 = var_3a0;
                r12_1 = var_398;
            }
            
            rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h976b43e5259d6dae(r15_1, rbx_1, r12_1);
            
            if rax_7 == 0
            {
                goto 'label_79d64a;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg2);
    rbx
}
