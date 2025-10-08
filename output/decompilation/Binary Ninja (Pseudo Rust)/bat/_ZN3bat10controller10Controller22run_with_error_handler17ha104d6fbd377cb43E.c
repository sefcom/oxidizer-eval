
  fn bat::controller::Controller::run_with_error_handler::ha104d6fbd377cb43(arg1: *mut i8, arg2: *mut i64, arg3: *mut i64, arg4: i64) -> i64

{
    let mut r15: *mut i64 = arg3;
    let r14: *mut c_void = *arg2;
    let mut rbp: i8 = *r14.byte_offset(0x12a);
    let mut rax: i8 = 2;
    let mut var_190: i8;
    let mut var_188: i64;
    
    if rbp != 2
    {
        let rax_1: i64 = r15[1];
        var_190 = rax_1;
        var_188 = r15[2] * 0xa0 + rax_1;
        rax = 2;
        
        if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hba863c598434dc94(&var_190) != 0
        {
            rax = rbp;
        }
    }
    
    bat::output::OutputType::from_mode::h26c543a4809b2489(&var_190, rax, *r14.byte_offset(0x129));
    let rax_3: i8 = var_190;
    let mut var_238: i128;
    let mut var_18f: i128;
    let var_17f: i128;
    let var_16f: i128;
    let var_150: i128;
    
    if rax_3 != 0xd
    {
        var_238 = var_18f;
        *arg1.byte_offset(0x40) = var_150;
        *arg1.byte_offset(0x30) = var_16f;
        let zmm0: i128 = var_238;
        *arg1.byte_offset(0x21) = var_16f;
        *arg1.byte_offset(0x11) = var_17f;
        *arg1.byte_offset(1) = zmm0;
        *arg1 = rax_3;
    }
    else
    {
        let mut var_98: i128 = var_188;
        let var_88_1: i128 = var_17f;
        let var_78_1: i128 = var_16f;
        let var_158: i64;
        let var_68_1: i64 = var_158;
        let rax_6: i64 = var_98 - 3;
        let var_2a0_1: *mut i64 = r15;
        let mut var_258: ();
        
        if rax_6 == 2
        {
            clircle::Clircle::stdout::h838a81d329912014(&var_258);
            
            if arg4 == 0
            {
                goto 'label_83724d;
            }
            
            goto 'label_83716e;
        }
        
        let var_23b: i8 = 2;
        let mut var_298_1: *mut i8;
        let mut var_288: i64;
        let mut var_280: i64;
        
        if arg4 != 0
        {
            'label_83716e:
            let cond:2_1: bool = (*arg4 & 1) == 0;
            var_280 = arg4 + 8;
            var_298_1 = arg1;
            
            if cond:2_1
            {
                let var_278_3: *mut c_void = &data_ace250;
                var_288 = 0;
            }
            else
            {
                let var_278_1: *mut c_void = &data_ace2a0;
                var_288 = 1;
            }
            
            goto 'label_8372a5;
        }
        
        'label_83724d:
        bat::output::OutputType::handle::h5316410587048584(&var_190, &var_98);
        let rax_8: i8 = var_190;
        
        if rax_8 != 0xd
        {
            let zmm0_1: i128 = var_18f;
            let var_180: i128;
            var_238 = var_180;
            var_238 = zmm0_1;
            *arg1.byte_offset(0x40) = var_150;
            *arg1.byte_offset(0x30) = var_16f;
            *arg1.byte_offset(0x20) = var_17f;
            *arg1.byte_offset(0x10) = var_238;
            *arg1.byte_offset(1) = var_238;
            *arg1 = rax_8;
            rbp = 1;
        }
        else
        {
            var_298_1 = arg1;
            var_288 = var_188;
            let var_278_2: i64 = *var_17f[7];
            r15 = var_2a0_1;
            'label_8372a5:
            let mut var_260: *mut c_void = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            let mut var_58: ();
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h5d3fd20d11ee0406(&var_58, r15);
            let var_38_1: i64 = 0;
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1a2b1fad31897241(&var_190, &var_58);
            let mut var_2a4_1: i8 = 1;
            
            if var_188 == 2
            {
                'label_8372f3:
                core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$bat..input..Input$GT$$GT$$GT$::h885dc449df84056a(&var_58);
                var_298_1[1] = var_2a4_1;
                *var_298_1 = 0xd;
                core::ptr::drop_in_place$LT$core..option..Option$LT$clircle..Identifier$GT$$GT$::h8d51138df6bf183e(&var_258);
                return core::ptr::drop_in_place$LT$bat..output..OutputType$GT$::h28c663b98fd21d1f(
                    &var_98);
            }
            
            var_2a4_1 = 1;
            
            loop
            {
                let r14_1: i64 = var_190;
                let mut rbx_1: *mut i64 = &var_258;
                
                if var_23b == 2
                {
                    rbx_1 = nullptr;
                }
                
                let mut var_290: *mut i64;
                let var_100: i64;
                let mut var_e8: i8;
                let var_f8: i128;
                
                if var_100 != -0x8000000000000000
                {
                    memcpy(&var_238, &*var_18f[7], 0x88);
                    let var_1b0_2: i64 = var_100;
                    let var_1a8_2: i128 = var_f8;
                    bat::controller::Controller::print_input::h97eac2397f7dbd6a(&var_e8, arg2, 
                        &var_238, &var_288, rbx_1, r14_1 == 0);
                }
                else
                {
                    memcpy(&var_238, &*var_18f[7], 0x88);
                    let var_1b0_1: i64 = -0x8000000000000000;
                    let var_1a8_1: i128 = var_f8;
                    std::io::stdio::stdin::h9a05a2c3e7544b2a();
                    var_290 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
                    let mut rax_12: *mut i32;
                    let mut rdx_1: i8;
                    rax_12 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_290);
                    bat::controller::Controller::print_input::hecfc777da85d890f(&var_e8, arg2, 
                        &var_238, &var_288, rax_12, rdx_1 & 1, rbx_1, r14_1 == 0);
                }
                
                if var_e8 != 0xd
                {
                    let var_a8: i128;
                    let var_1f8_1: i128 = var_a8;
                    let var_b8: i128;
                    let var_209: i128 = var_b8;
                    let var_c8: i128;
                    let var_218_2: i128 = var_c8;
                    let var_d8: i128;
                    let var_228_2: i128 = var_d8;
                    var_238 = var_e8;
                    
                    if var_288 == 1
                    {
                        *var_298_1.byte_offset(0x40) = var_a8;
                        let zmm0_3: i128 = var_e8;
                        *var_298_1.byte_offset(0x30) = var_b8;
                        *var_298_1.byte_offset(0x20) = var_c8;
                        *var_298_1.byte_offset(0x10) = var_d8;
                        *var_298_1 = zmm0_3;
                        core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$bat..input..Input$GT$$GT$$GT$::h885dc449df84056a(&var_58);
                        rbp = 0;
                        break;
                    }
                    
                    if rax_6 != 2
                    {
                        core::ops::function::FnMut::call_mut::h3a289d61134ffcb1(&var_238, &var_280, 
                            &data_ace250);
                    }
                    else
                    {
                        var_290 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_260);
                        core::ops::function::FnMut::call_mut::h3a289d61134ffcb1(&var_238, &var_290, 
                            &data_ace2d0);
                        core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc6778b24ef661503(&var_290);
                    }
                    
                    core::ptr::drop_in_place$LT$bat..error..Error$GT$::head773e43869367f(&var_238);
                    var_2a4_1 = 0;
                }
                
                _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1a2b1fad31897241(&var_190, &var_58);
                
                if var_188 == 2
                {
                    goto 'label_8372f3;
                }
            }
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$clircle..Identifier$GT$$GT$::h8d51138df6bf183e(&var_258);
        let result: i64 =
            core::ptr::drop_in_place$LT$bat..output..OutputType$GT$::h28c663b98fd21d1f(&var_98);
        r15 = var_2a0_1;
        
        if rbp == 0
        {
            return result;
        }
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bat..input..Input$GT$$GT$::h22dfb39698a1c7dc(r15)
}
