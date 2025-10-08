
  uint64_t uu_runcon::uumain::uumain::he67dd5d0614d5a18()

{
    void var_2e0;
    uu_runcon::uu_app::h1fe07eb190a905e6(&var_2e0);
    int64_t var_418;
    uu_runcon::parse_command_line::hf9e79084b7f1ba94(&var_418);
    uint64_t rax;
    uint64_t var_410;
    
    if (!(0 + -(var_418)))
    {
        void var_378;
        memcpy(&var_378, &var_418, 0x98);
        int64_t rax_1 = 2;
        int64_t var_360;
        
        if (var_360 + 0x7fffffffffffffff < 2)
            rax_1 = var_360 + 0x7fffffffffffffff;
        
        uint64_t rbx_2;
        int32_t var_468;
        int128_t var_458;
        int128_t var_448;
        int128_t var_438;
        int64_t var_428;
        int64_t var_408;
        
        if (!rax_1)
        {
            uu_runcon::print_current_context::h9215a313e1a60e64(&var_468);
            
            if (var_468 == 0x11)
                rbx_2 = 0;
            else
            {
                int64_t var_3d8_1 = var_428;
                int128_t var_3e8_1 = var_438;
                int128_t var_3f8_1 = var_448;
                var_408 = var_458;
                var_418 = var_468;
                int32_t var_3d0_1 = 1;
                rbx_2 = alloc::boxed::Box$LT$T$GT$::new::hbfe983e35b3b9592(&var_418);
            }
        }
        else
        {
            int64_t var_300;
            int128_t var_464;
            int128_t var_3f8;
            int128_t var_3e8;
            int64_t var_3d8;
            int64_t var_370;
            int64_t var_368;
            char* var_350;
            uint64_t var_348;
            char* var_338;
            uint64_t var_330;
            uint64_t rax_9;
            
            if (rax_1 == 1)
            {
                uu_runcon::get_plain_context::hdc7dc8eb3b1060b4(&var_418, var_350, var_348);
                int32_t rax_2;
                
                if (var_418 != 0x11)
                {
                    var_428 = var_3d8;
                    var_438 = var_3e8;
                    var_448 = var_3f8;
                    var_458 = var_408;
                    var_468 = var_418;
                    rax_2 = var_468;
                    
                    if (rax_2 != 0x11)
                    {
                        label_45b87a:
                        *var_3d8[4] = *var_428[4];
                        var_3e8 = var_438;
                        var_3f8 = var_448;
                        *var_408[4] = var_458;
                        *var_418[4] = var_464;
                        var_418 = rax_2;
                        int32_t var_3d0_2 = 1;
                        rax_9 = alloc::boxed::Box$LT$T$GT$::new::hbfe983e35b3b9592(&var_418);
                        core::ptr::drop_in_place$LT$uu_runcon..Options$GT$::h80ff87823e29a963(
                            &var_378);
                        return rax_9;
                    }
                    
                    rbx_2 = uu_runcon::execute_command::hf1fa972cc5d084a3(var_338, var_330, 
                        var_370, var_368);
                }
                else
                {
                    uu_runcon::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h1b5aa9e7ecf1c24e(
                        &var_468);
                    rax_2 = var_468;
                    
                    if (rax_2 != 0x11)
                        goto label_45b87a;
                    
                    rbx_2 = uu_runcon::execute_command::hf1fa972cc5d084a3(var_338, var_330, 
                        var_370, var_368);
                }
            }
            else if (var_300 != -0x8000000000000000)
            {
                char* rax_6 = nullptr;
                char* rdx_6 = nullptr;
                char* r8_1;
                
                if (var_360 == -0x8000000000000000)
                {
                    r8_1 = nullptr;
                    
                    if (var_348 != -0x8000000000000000)
                        goto label_45b8e6;
                    
                    goto label_45b76d;
                }
                
                char* var_358;
                rdx_6 = var_358;
                r8_1 = nullptr;
                char* r10_1;
                char* var_328;
                
                if (var_348 == -0x8000000000000000)
                {
                    label_45b76d:
                    r10_1 = nullptr;
                    
                    if (var_330 != -0x8000000000000000)
                        r10_1 = var_328;
                }
                else
                {
                    label_45b8e6:
                    char* var_340;
                    r8_1 = var_340;
                    r10_1 = nullptr;
                    
                    if (var_330 != -0x8000000000000000)
                        r10_1 = var_328;
                }
                int64_t var_318;
                char* var_310;
                
                if (var_318 != -0x8000000000000000)
                    rax_6 = var_310;
                uint64_t var_320;
                uint64_t var_308;
                char* var_2f8;
                uint64_t var_2f0;
                char var_2e8;
                uu_runcon::get_custom_context::hfc7b7c6ca4bc17a5(&var_418, var_2e8, rdx_6, var_350, 
                    r8_1, var_338, r10_1, var_320, rax_6, var_308, var_2f8, var_2f0);
                int32_t rax_7;
                
                if (var_418 != 0x11)
                {
                    var_428 = var_3d8;
                    var_438 = var_3e8;
                    var_448 = var_3f8;
                    var_458 = var_408;
                    var_468 = var_418;
                    rax_7 = var_468;
                    
                    if (rax_7 != 0x11)
                    {
                        label_45b9bc:
                        *var_3d8[4] = *var_428[4];
                        var_3e8 = var_438;
                        var_3f8 = var_448;
                        *var_408[4] = var_458;
                        *var_418[4] = var_464;
                        var_418 = rax_7;
                        int32_t var_3d0_4 = 1;
                        rax_9 = alloc::boxed::Box$LT$T$GT$::new::hbfe983e35b3b9592(&var_418);
                        core::ptr::drop_in_place$LT$uu_runcon..Options$GT$::h80ff87823e29a963(
                            &var_378);
                        return rax_9;
                    }
                }
                else
                {
                    uu_runcon::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h1b5aa9e7ecf1c24e(
                        &var_468);
                    rax_7 = var_468;
                    
                    if (rax_7 != 0x11)
                        goto label_45b9bc;
                }
                rbx_2 = uu_runcon::execute_command::hf1fa972cc5d084a3(var_2f8, var_2f0, var_370, 
                    var_368);
            }
            else
            {
                uu_runcon::print_current_context::h9215a313e1a60e64(&var_468);
                
                if (var_468 != 0x11)
                {
                    int64_t var_3d8_2 = var_428;
                    int128_t var_3e8_2 = var_438;
                    int128_t var_3f8_2 = var_448;
                    var_408 = var_458;
                    var_418 = var_468;
                    int32_t var_3d0_3 = 1;
                    rbx_2 = alloc::boxed::Box$LT$T$GT$::new::hbfe983e35b3b9592(&var_418);
                }
                else
                    rbx_2 = 0;
            }
        }
        core::ptr::drop_in_place$LT$uu_runcon..Options$GT$::h80ff87823e29a963(&var_378);
        rax = rbx_2;
    }
    else
        rax = var_410;
    return rax;
}
