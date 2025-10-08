
  fn uu_tee::tee::hf98133f44c3e9f72(arg1: *mut c_void) -> i64

{
    let mut r15: i64 = 0x2800000003;
    let mut rax_1: i32;
    
    if *arg1.byte_offset(0x19) != 0
    {
        rax_1 = uucore::features::signals::ignore_interrupts::hf118497e1fc87746();
    }
    
    if *arg1.byte_offset(0x19) == 0 || rax_1 == 0x86
    {
        let rbp_1: i8 = *arg1.byte_offset(0x1b);
        let mut rax_2: i32;
        
        if rbp_1 == 4
        {
            rax_2 = uucore::features::signals::enable_pipe_errors::he7938a115a9dd81b();
        }
        
        if rbp_1 != 4 || rax_2 == 0x86
        {
            let rax_3: i64 = *arg1.byte_offset(8);
            let r12_1: i64 = *arg1.byte_offset(0x10);
            let mut var_a8: i64 = rax_3;
            let var_a0_1: i64 = rax_3 + r12_1 * 0x18;
            let mut var_78: i64;
            core::iter::traits::iterator::Iterator::collect::h2d2d7e3943ff2072(&var_78, &var_a8);
            let rcx_3: i64 = var_78;
            let var_70: i64;
            
            if -(rcx_3) == -0x8000000000000000
            {
                return var_70;
            }
            
            let mut var_48: i64 = rcx_3;
            let var_40_1: i64 = var_70;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hbc1a098f16dd279e(&var_a8, "'standard output'src/uu/tee/src/…", 0x11);
            var_78 = var_a8;
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            let var_90_1: u64 = alloc::boxed::Box$LT$T$GT$::new::h4b8c53d49d3f6ca5(
                &std::io::stdio::STDOUT::h411b213c5c9add46);
            let mut var_88_1: *mut c_void = &data_4ea430;
            var_a8 = var_78;
            let var_98_2: *mut c_void = arg1;
            alloc::vec::Vec$LT$T$C$A$GT$::insert::h3b5bb7d6ffbbcb54(&var_48, &var_a8);
            var_a8 = var_48;
            var_88_1 = rbp_1;
            let var_90_2: i64 = 0;
            std::io::stdio::stdin::h9a05a2c3e7544b2a();
            let rax_9: u64 = alloc::boxed::Box$LT$T$GT$::new::h4b8c53d49d3f6ca5(
                &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
            let mut var_58: u64 = rax_9;
            let var_50_1: *mut c_void = &data_4ea498;
            let var_68: i64;
            
            if *arg1.byte_offset(0x1a) == 0
            {
                'label_45d0a8:
                let mut rax_10: i8;
                let mut rdx_3: i64;
                rax_10 = std::io::copy::generic_copy::h3f7e0ce8fd9cd2d0(&var_58, &var_a8);
                
                if (rax_10 & 1) == 0
                {
                    goto 'label_45d0cb;
                }
                
                let mut rbx_1: i64 = rdx_3;
                
                if std::io::error::Error::kind::h135fe00c4e7365f3(rdx_3) == 0x28
                {
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc399f132f0256091(rbx_1);
                    'label_45d0cb:
                    
                    if var_68 == r12_1
                    {
                        let rax_12: i64 = _$LT$uu_tee..MultiWriter$u20$as$u20$std..io..Write$GT$::flush::h7fdc70565f7a6de0(&var_a8);
                        
                        if rax_12 == 0
                        {
                            core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::h31caf6d465b21618(0);
                            
                            if var_90_2 == 0
                            {
                                r15 = var_90_2;
                            }
                        }
                        else
                        {
                            core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::h31caf6d465b21618(rax_12);
                        }
                    }
                    
                    rbx_1 = 0;
                }
                
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::h31caf6d465b21618(rbx_1);
                core::ptr::drop_in_place$LT$uu_tee..NamedReader$GT$::h7015718fc3fc73d4(var_58, 
                    var_50_1);
            }
            else
            {
                uu_tee::ensure_stdout_not_broken::hbf7c3644b247e073(&var_78);
                
                if var_78 == 0
                {
                    if (*var_78[1] & 1) != 0 || var_68 != 1
                    {
                        goto 'label_45d0a8;
                    }
                    
                    r15 = 0;
                    core::ptr::drop_in_place$LT$uu_tee..NamedReader$GT$::h7015718fc3fc73d4(rax_9, 
                        &data_4ea498);
                }
                else
                {
                    r15 = var_70;
                    core::ptr::drop_in_place$LT$uu_tee..NamedReader$GT$::h7015718fc3fc73d4(rax_9, 
                        &data_4ea498);
                }
            }
            core::ptr::drop_in_place$LT$uu_tee..MultiWriter$GT$::he3a50c3c154937d9(&var_a8);
        }
    }
    
    r15
}
