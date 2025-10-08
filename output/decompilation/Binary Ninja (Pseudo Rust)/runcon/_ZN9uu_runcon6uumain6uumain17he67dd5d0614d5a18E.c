
  fn uu_runcon::uumain::uumain::he67dd5d0614d5a18() -> u64

{
    let mut var_2e0: ();
    uu_runcon::uu_app::h1fe07eb190a905e6(&var_2e0);
    let mut var_418: i64;
    uu_runcon::parse_command_line::hf9e79084b7f1ba94(&var_418);
    let mut rax: u64;
    let var_410: u64;
    
    if !(0 + -(var_418))
    {
        let mut var_378: ();
        memcpy(&var_378, &var_418, 0x98);
        let mut rax_1: i64 = 2;
        let var_360: i64;
        
        if var_360 + 0x7fffffffffffffff < 2
        {
            rax_1 = var_360 + 0x7fffffffffffffff;
        }
        
        let mut rbx_2: u64;
        let mut var_468: i32;
        let mut var_458: i128;
        let mut var_448: i128;
        let mut var_438: i128;
        let mut var_428: i64;
        let mut var_408: i64;
        
        if rax_1 == 0
        {
            uu_runcon::print_current_context::h9215a313e1a60e64(&var_468);
            
            if var_468 == 0x11
            {
                rbx_2 = 0;
            }
            else
            {
                let var_3d8_1: i64 = var_428;
                let var_3e8_1: i128 = var_438;
                let var_3f8_1: i128 = var_448;
                var_408 = var_458;
                var_418 = var_468;
                let var_3d0_1: i32 = 1;
                rbx_2 = alloc::boxed::Box$LT$T$GT$::new::hbfe983e35b3b9592(&var_418);
            }
        }
        else
        {
            let var_300: i64;
            let var_464: i128;
            let mut var_3f8: i128;
            let mut var_3e8: i128;
            let mut var_3d8: i64;
            let var_370: i64;
            let var_368: i64;
            let var_350: *mut i8;
            let var_348: u64;
            let var_338: *mut i8;
            let var_330: u64;
            let mut rax_9: u64;
            
            if rax_1 == 1
            {
                uu_runcon::get_plain_context::hdc7dc8eb3b1060b4(&var_418, var_350, var_348);
                let mut rax_2: i32;
                
                if var_418 != 0x11
                {
                    var_428 = var_3d8;
                    var_438 = var_3e8;
                    var_448 = var_3f8;
                    var_458 = var_408;
                    var_468 = var_418;
                    rax_2 = var_468;
                    
                    if rax_2 != 0x11
                    {
                        'label_45b87a:
                        *var_3d8[4] = *var_428[4];
                        var_3e8 = var_438;
                        var_3f8 = var_448;
                        *var_408[4] = var_458;
                        *var_418[4] = var_464;
                        var_418 = rax_2;
                        let var_3d0_2: i32 = 1;
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
                    
                    if rax_2 != 0x11
                    {
                        goto 'label_45b87a;
                    }
                    
                    rbx_2 = uu_runcon::execute_command::hf1fa972cc5d084a3(var_338, var_330, 
                        var_370, var_368);
                }
            }
            else if var_300 != -0x8000000000000000
            {
                let mut rax_6: *mut i8 = nullptr;
                let mut rdx_6: *mut i8 = nullptr;
                let mut r8_1: *mut i8;
                
                if var_360 == -0x8000000000000000
                {
                    r8_1 = nullptr;
                    
                    if var_348 != -0x8000000000000000
                    {
                        goto 'label_45b8e6;
                    }
                    
                    goto 'label_45b76d;
                }
                
                let var_358: *mut i8;
                rdx_6 = var_358;
                r8_1 = nullptr;
                let mut r10_1: *mut i8;
                let var_328: *mut i8;
                
                if var_348 == -0x8000000000000000
                {
                    'label_45b76d:
                    r10_1 = nullptr;
                    
                    if var_330 != -0x8000000000000000
                    {
                        r10_1 = var_328;
                    }
                }
                else
                {
                    'label_45b8e6:
                    let var_340: *mut i8;
                    r8_1 = var_340;
                    r10_1 = nullptr;
                    
                    if var_330 != -0x8000000000000000
                    {
                        r10_1 = var_328;
                    }
                }
                let var_318: i64;
                let var_310: *mut i8;
                
                if var_318 != -0x8000000000000000
                {
                    rax_6 = var_310;
                }
                let var_320: u64;
                let var_308: u64;
                let var_2f8: *mut i8;
                let var_2f0: u64;
                let var_2e8: i8;
                uu_runcon::get_custom_context::hfc7b7c6ca4bc17a5(&var_418, var_2e8, rdx_6, var_350, 
                    r8_1, var_338, r10_1, var_320, rax_6, var_308, var_2f8, var_2f0);
                let mut rax_7: i32;
                
                if var_418 != 0x11
                {
                    var_428 = var_3d8;
                    var_438 = var_3e8;
                    var_448 = var_3f8;
                    var_458 = var_408;
                    var_468 = var_418;
                    rax_7 = var_468;
                    
                    if rax_7 != 0x11
                    {
                        'label_45b9bc:
                        *var_3d8[4] = *var_428[4];
                        var_3e8 = var_438;
                        var_3f8 = var_448;
                        *var_408[4] = var_458;
                        *var_418[4] = var_464;
                        var_418 = rax_7;
                        let var_3d0_4: i32 = 1;
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
                    
                    if rax_7 != 0x11
                    {
                        goto 'label_45b9bc;
                    }
                }
                rbx_2 = uu_runcon::execute_command::hf1fa972cc5d084a3(var_2f8, var_2f0, var_370, 
                    var_368);
            }
            else
            {
                uu_runcon::print_current_context::h9215a313e1a60e64(&var_468);
                
                if var_468 != 0x11
                {
                    let var_3d8_2: i64 = var_428;
                    let var_3e8_2: i128 = var_438;
                    let var_3f8_2: i128 = var_448;
                    var_408 = var_458;
                    var_418 = var_468;
                    let var_3d0_3: i32 = 1;
                    rbx_2 = alloc::boxed::Box$LT$T$GT$::new::hbfe983e35b3b9592(&var_418);
                }
                else
                {
                    rbx_2 = 0;
                }
            }
        }
        core::ptr::drop_in_place$LT$uu_runcon..Options$GT$::h80ff87823e29a963(&var_378);
        rax = rbx_2;
    }
    else
    {
        rax = var_410;
    }
    rax
}
