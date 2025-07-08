
  int64_t uu_tee::tee::hda7657f7329b70fc(void* arg1)

{
    int64_t result_3 = 0x2700000003;
    int32_t rax_1;
    int64_t result;
    
    if (*(arg1 + 0x19))
    {
        rax_1 = uucore::features::signals::ignore_interrupts::h3324c21a6f8249ab();
        result = 0x2700000003;
    }
    
    if (!*(arg1 + 0x19) || rax_1 == 0x86)
    {
        char rbp_1 = *(arg1 + 0x1a);
        int32_t rax_2;
        
        if (rbp_1 == 4)
        {
            rax_2 = uucore::features::signals::enable_pipe_errors::hea9713d91b5b8a8c();
            result = 0x2700000003;
        }
        
        if (rbp_1 != 4 || rax_2 == 0x86)
        {
            int64_t rax_3 = *(arg1 + 8);
            int64_t r12_1 = *(arg1 + 0x10);
            int64_t var_40 = rax_3;
            int64_t var_38_1 = rax_3 + r12_1 * 0x18;
            void* var_30_1 = arg1;
            int64_t var_a8;
            core::iter::adapters::try_process::hf63c6a42b517bf3c(&var_a8, &var_40);
            int64_t rax_4 = var_a8;
            int64_t result_1;
            result = result_1;
            
            if (rax_4 != -0x8000000000000000)
            {
                int64_t var_58 = rax_4;
                int64_t result_2 = result;
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h02ba9e8c78156205(
                    &var_a8, "'standard output': \nstdin: ", 0x11);
                int128_t var_78 = var_a8;
                std::io::stdio::stdout::h077da66234850927();
                int64_t* var_90_1 = alloc::boxed::Box$LT$T$GT$::new::hc984d48e7fdf5f95(
                    &std::io::stdio::STDOUT::hdbe36c11cd3014ce);
                void* const var_88_1 = &data_51f900;
                var_a8 = var_78;
                int64_t var_98;
                int64_t var_98_1 = var_98;
                alloc::vec::Vec$LT$T$C$A$GT$::insert::h8d0a4e90cda50b20(&var_58, 0, &var_a8);
                int64_t var_98_2 = var_98;
                var_a8 = var_58;
                var_88_1 = rbp_1;
                int64_t result_4 = 0;
                std::io::stdio::stdin::h7215cc131abb55d8();
                var_78 = alloc::boxed::Box$LT$T$GT$::new::h15cf95ff801ea224(
                    &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
                *var_78[8] = &data_51f950;
                int64_t rax_10;
                int64_t rdx_2;
                rax_10 = std::io::copy::generic_copy::h331c05792c6b2829(&var_78, &var_a8);
                
                if (!rax_10)
                    goto label_4b33cb;
                
                int64_t rdi_4 = rdx_2;
                char rax_11;
                
                if (rax_10 == 1)
                    rax_11 = std::io::error::Error::kind::hb2ff5fa058639b3d(rdi_4);
                
                if (rax_10 != 1 || rax_11 == 0x27)
                {
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb33ceb02c1cf9a1d(rdi_4);
                    label_4b33cb:
                    
                    if (var_98 == r12_1)
                    {
                        int64_t rax_12 = _$LT$uu_tee..MultiWriter$u20$as$u20$std..io..Write$GT$::flush::h5ef7c906ce7a5cbe(&var_a8);
                        
                        if (rax_12)
                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf4a995236b113dff(rax_12);
                        else if (!result_4)
                            result_3 = result_4;
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
    
    return result;
}
