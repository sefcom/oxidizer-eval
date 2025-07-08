
  fn uu_tee::tee::hda7657f7329b70fc(arg1: *mut c_void) -> i64

{
    let mut result_3: i64 = 0x2700000003;
    let mut rax_1: i32;
    let mut result: i64;
    
    if *arg1.byte_offset(0x19) != 0
    {
        rax_1 = uucore::features::signals::ignore_interrupts::h3324c21a6f8249ab();
        result = 0x2700000003;
    }
    
    if *arg1.byte_offset(0x19) == 0 || rax_1 == 0x86
    {
        let rbp_1: i8 = *arg1.byte_offset(0x1a);
        let mut rax_2: i32;
        
        if rbp_1 == 4
        {
            rax_2 = uucore::features::signals::enable_pipe_errors::hea9713d91b5b8a8c();
            result = 0x2700000003;
        }
        
        if rbp_1 != 4 || rax_2 == 0x86
        {
            let rax_3: i64 = *arg1.byte_offset(8);
            let r12_1: i64 = *arg1.byte_offset(0x10);
            let mut var_40: i64 = rax_3;
            let var_38_1: i64 = rax_3 + r12_1 * 0x18;
            let var_30_1: *mut c_void = arg1;
            let mut var_a8: i64;
            core::iter::adapters::try_process::hf63c6a42b517bf3c(&var_a8, &var_40);
            let rax_4: i64 = var_a8;
            let result_1: i64;
            result = result_1;
            
            if rax_4 != -0x8000000000000000
            {
                let mut var_58: i64 = rax_4;
                let result_2: i64 = result;
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h02ba9e8c78156205(
                    &var_a8, "'standard output': \nstdin: ", 0x11);
                let mut var_78: i128 = var_a8;
                std::io::stdio::stdout::h077da66234850927();
                let var_90_1: *mut i64 = alloc::boxed::Box$LT$T$GT$::new::hc984d48e7fdf5f95(
                    &std::io::stdio::STDOUT::hdbe36c11cd3014ce);
                let mut var_88_1: *mut c_void = &data_51f900;
                var_a8 = var_78;
                let var_98: i64;
                let var_98_1: i64 = var_98;
                alloc::vec::Vec$LT$T$C$A$GT$::insert::h8d0a4e90cda50b20(&var_58, 0, &var_a8);
                let var_98_2: i64 = var_98;
                var_a8 = var_58;
                var_88_1 = rbp_1;
                let result_4: i64 = 0;
                std::io::stdio::stdin::h7215cc131abb55d8();
                var_78 = alloc::boxed::Box$LT$T$GT$::new::h15cf95ff801ea224(
                    &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
                *var_78[8] = &data_51f950;
                let mut rax_10: i64;
                let mut rdx_2: i64;
                rax_10 = std::io::copy::generic_copy::h331c05792c6b2829(&var_78, &var_a8);
                
                if rax_10 == 0
                {
                    goto 'label_4b33cb;
                }
                
                let mut rdi_4: i64 = rdx_2;
                let mut rax_11: i8;
                
                if rax_10 == 1
                {
                    rax_11 = std::io::error::Error::kind::hb2ff5fa058639b3d(rdi_4);
                }
                
                if rax_10 != 1 || rax_11 == 0x27
                {
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb33ceb02c1cf9a1d(rdi_4);
                    'label_4b33cb:
                    
                    if var_98 == r12_1
                    {
                        let rax_12: i64 = _$LT$uu_tee..MultiWriter$u20$as$u20$std..io..Write$GT$::flush::h5ef7c906ce7a5cbe(&var_a8);
                        
                        if rax_12 != 0
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf4a995236b113dff(rax_12);
                        }
                        else if result_4 == 0
                        {
                            result_3 = result_4;
                        }
                    }
                    
                    rdi_4 = 0;
                }
                
                result = result_3;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf4a995236b113dff(rdi_4);
                core::ptr::drop_in_place$LT$uu_tee..NamedReader$GT$::hbcd4494a61c61d7c(var_78, 
                    *var_78[8]);
                core::ptr::drop_in_place$LT$uu_tee..MultiWriter$GT$::h7f05ff32ec84ed58(&var_a8);
            }
        }
    }
    
    result
}
