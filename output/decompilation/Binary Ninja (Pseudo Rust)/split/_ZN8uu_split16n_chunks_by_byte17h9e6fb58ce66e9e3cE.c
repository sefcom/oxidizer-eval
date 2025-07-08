
  fn uu_split::n_chunks_by_byte::h9e6fb58ce66e9e3c(arg1: *mut i64, arg2: *mut c_void, arg3: *mut *mut c_void, arg4: i64, arg5: i64) -> *mut i128

{
    let mut r13: *mut *mut c_void = arg3;
    let mut var_c0: i64 = 0;
    let var_b8: i64 = 1;
    let var_b0: i64 = 0;
    let mut r14: *mut c_void = &arg1[0xe];
    let mut rax: i64;
    let mut rdx_1: *mut *mut c_void;
    rax = uu_split::get_input_size::hff72b499bd50ee30(r14, arg2, &var_c0, *arg1, arg1[1]);
    let mut r15: *mut *mut c_void = rdx_1;
    let mut result: *mut i128;
    
    if rax == 0
    {
        let mut var_88: i128 = var_b8;
        let var_78_1: *mut *mut c_void = arg2;
        let var_70_1: i8 = 0;
        
        if arg4 != 1
        {
            let mut rax_8: *mut *mut c_void = r13;
            
            if r15 < r13
            {
                rax_8 = r15;
            }
            
            if *arg1.byte_offset(0xa1) != 0
            {
                r13 = rax_8;
            }
            
            if r13 != 0
            {
                goto 'label_4cd1f0;
            }
            
            result = nullptr;
        }
        else if r15 == 0 || r13 == 0
        {
            result = nullptr;
        }
        else
        {
            'label_4cd1f0:
            std::io::stdio::stdout::h077da66234850927();
            let mut result_2: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
            let mut var_148: *mut i64 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&result_2);
            let mut result_6: *mut i64 = nullptr;
            let var_138_1: i64 = 8;
            let var_130_1: i64 = 0;
            let mut var_e8_1: u64;
            let mut rax_7: u64;
            
            if (r15 | r13) >> 0x20 == 0
            {
                let rax_9: i32 = r15;
                let temp2_2: i32 = r13;
                rax_7 = COMBINE(0, rax_9) / temp2_2;
                var_e8_1 = COMBINE(0, rax_9) % temp2_2;
            }
            else
            {
                let rdx_2: i64 = 0;
                let temp2_1: i32 = r13;
                rax_7 = COMBINE(rdx_2, r15) / temp2_1;
                var_e8_1 = COMBINE(rdx_2, r15) % temp2_1;
            }
            
            let var_e0_1: *mut *mut c_void = r13;
            
            if arg4 == 1
            {
                goto 'label_4cd2f1;
            }
            
            _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::init::h5aea99d9a23c30d0(&result_2, r13, arg1, 0);
            let result_5: *mut i64 = result_2;
            let result_3: *mut i128;
            result = result_3;
            
            if result_5 != -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(&result_6);
                result_6 = result_5;
                let result_1: *mut i128 = result;
                let var_118: *mut *mut c_void;
                let var_130_2: *mut *mut c_void = var_118;
                r13 = var_e0_1;
                'label_4cd2f1:
                let mut var_a0: i64 = 1;
                let var_98_1: *mut *mut c_void = r13;
                let var_90_1: i8 = 0;
                let mut rax_11: i64;
                let mut rdx_6: *mut *mut c_void;
                rax_11 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h60295cd701836f7a(&var_a0);
                
                if rax_11 == 0
                {
                    'label_4cd60d:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(&result_6);
                    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::habe0dd4c6dde56f8(
                        var_148);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(
                        &var_c0);
                    return nullptr;
                }
                
                let mut rbx: *mut *mut c_void = rdx_6;
                let mut var_160: i64;
                let mut result_4: *mut i128;
                let mut rbp_1: i64;
                
                if arg4 == 0
                {
                    let var_c8_1: *mut c_void = r14;
                    
                    loop
                    {
                        var_160 = 0;
                        let var_158_2: i64 = 1;
                        let var_150_2: u64 = 0;
                        
                        if r15 == 0
                        {
                            goto 'label_4cd603;
                        }
                        
                        let mut rax_18: *mut *mut c_void = rax_7 + 0;
                        
                        if rbx == var_e0_1
                        {
                            rax_18 = r15;
                        }
                        
                        result_2 = &var_88;
                        let mut rax_19: i64;
                        let mut rdx_9: i64;
                        rax_19 = std::io::default_read_to_end::h2406a85fdf2eff30(&result_2, 
                            &var_160, 0, &var_88);
                        rbp_1 = rdx_9;
                        
                        if rax_19 != 0
                        {
                            goto 'label_4cd50e;
                        }
                        
                        _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::get_writer::hcb920ccabbd9d626(&result_2, &result_6, rbx.byte_offset(-1), arg1);
                        result = result_2;
                        
                        if result != 0
                        {
                            goto 'label_4cd642;
                        }
                        
                        let r14_1: i64 = rax_18[2];
                        
                        if var_150_2 >= (*rax_18).byte_offset(-r14_1)
                        {
                            r14 = var_c8_1;
                            
                            if std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h76ddc0e24b459a3f(rax_18, var_158_2, var_150_2) != 0
                            {
                                result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                break;
                            }
                        }
                        else
                        {
                            memcpy(rax_18[1].byte_offset(r14_1), var_158_2, var_150_2);
                            rax_18[2] = r14_1 + var_150_2;
                            r14 = var_c8_1;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_160);
                        r15 -= rbp_1;
                        let mut rax_23: i64;
                        let mut rdx_13: *mut *mut c_void;
                        rax_23 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h60295cd701836f7a(&var_a0);
                        rbx = rdx_13;
                        
                        if rax_23 == 0
                        {
                            goto 'label_4cd60d;
                        }
                    }
                }
                else
                {
                    loop
                    {
                        var_160 = 0;
                        let var_158_1: i64 = 1;
                        let var_150_1: u64 = 0;
                        
                        if r15 != 0
                        {
                            let mut rax_14: *mut *mut c_void = rax_7 + 0;
                            
                            if rbx == var_e0_1
                            {
                                rax_14 = r15;
                            }
                            
                            result_2 = &var_88;
                            let var_120: *mut *mut c_void = rax_14;
                            let mut rax_15: i64;
                            let mut rdx_7: i64;
                            rax_15 = std::io::default_read_to_end::h2406a85fdf2eff30(&result_2, 
                                &var_160, 0, &var_88);
                            rbp_1 = rdx_7;
                            
                            if rax_15 != 0
                            {
                                'label_4cd50e:
                                let mut var_d8: i64 = rbp_1;
                                let mut var_68: *mut c_void = r14;
                                let var_60_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                let var_58_1: *mut i64 = &var_d8;
                                let var_50_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                                result_2 = &data_548580;
                                let var_120_2: i64 = 2;
                                let var_108_1: i64 = 0;
                                let var_118_1: *mut *mut c_void = &var_68;
                                let mut var_110_1: i64 = 2;
                                let mut var_48: i128;
                                core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(
                                    &var_48, 0, &result_2);
                                var_110_1 = 1;
                                result_2 = var_48;
                                let var_38: i64;
                                let var_118_2: i64 = var_38;
                                result =
                                    alloc::boxed::Box$LT$T$GT$::new::hb3c54f980883cdc1(&result_2);
                                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5f2d172bb60d7e56(var_d8);
                                goto 'label_4cd642;
                            }
                            
                            if rbx == arg5
                            {
                                if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_148, var_158_1, var_150_1) != 0
                                {
                                    result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                    break;
                                }
                            }
                            else
                            {
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_160);
                                r15 -= rbp_1;
                                let mut rax_16: i64;
                                let mut rdx_8: *mut *mut c_void;
                                rax_16 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h60295cd701836f7a(&var_a0);
                                rbx = rdx_8;
                                
                                if rax_16 == 0
                                {
                                    goto 'label_4cd60d;
                                }
                                
                                continue;
                            }
                        }
                        
                        'label_4cd603:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_160);
                        goto 'label_4cd60d;
                    }
                }
                result = result_4;
                'label_4cd642:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(
                    &var_160);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(&result_6);
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::habe0dd4c6dde56f8(var_148);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_c0);
    result
}
