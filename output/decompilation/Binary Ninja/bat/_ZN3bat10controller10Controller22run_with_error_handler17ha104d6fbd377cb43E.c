
  int64_t bat::controller::Controller::run_with_error_handler::ha104d6fbd377cb43(char* arg1, int64_t* arg2, int64_t* arg3, int64_t arg4)

{
    int64_t* r15 = arg3;
    void* r14 = *arg2;
    char rbp = *(r14 + 0x12a);
    char rax = 2;
    char var_190;
    int64_t var_188;
    
    if (rbp != 2)
    {
        int64_t rax_1 = r15[1];
        var_190 = rax_1;
        var_188 = r15[2] * 0xa0 + rax_1;
        rax = 2;
        
        if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hba863c598434dc94(&var_190))
            rax = rbp;
    }
    
    bat::output::OutputType::from_mode::h26c543a4809b2489(&var_190, rax, *(r14 + 0x129));
    char rax_3 = var_190;
    int128_t var_238;
    int128_t var_18f;
    int128_t var_17f;
    int128_t var_16f;
    int128_t var_150;
    
    if (rax_3 != 0xd)
    {
        var_238 = var_18f;
        *(arg1 + 0x40) = var_150;
        *(arg1 + 0x30) = var_16f;
        int128_t zmm0 = var_238;
        *(arg1 + 0x21) = var_16f;
        *(arg1 + 0x11) = var_17f;
        *(arg1 + 1) = zmm0;
        *arg1 = rax_3;
    }
    else
    {
        int128_t var_98 = var_188;
        int128_t var_88_1 = var_17f;
        int128_t var_78_1 = var_16f;
        int64_t var_158;
        int64_t var_68_1 = var_158;
        int64_t rax_6 = var_98 - 3;
        int64_t* var_2a0_1 = r15;
        void var_258;
        
        if (rax_6 == 2)
        {
            clircle::Clircle::stdout::h838a81d329912014(&var_258);
            
            if (!arg4)
                goto label_83724d;
            
            goto label_83716e;
        }
        
        char var_23b = 2;
        char* var_298_1;
        int64_t var_288;
        int64_t var_280;
        
        if (arg4)
        {
            label_83716e:
            bool cond:2_1 = !(*arg4 & 1);
            var_280 = arg4 + 8;
            var_298_1 = arg1;
            
            if (cond:2_1)
            {
                void* const var_278_3 = &data_ace250;
                var_288 = 0;
            }
            else
            {
                void* const var_278_1 = &data_ace2a0;
                var_288 = 1;
            }
            
            goto label_8372a5;
        }
        
        label_83724d:
        bat::output::OutputType::handle::h5316410587048584(&var_190, &var_98);
        char rax_8 = var_190;
        
        if (rax_8 != 0xd)
        {
            int128_t zmm0_1 = var_18f;
            int128_t var_180;
            var_238 = var_180;
            var_238 = zmm0_1;
            *(arg1 + 0x40) = var_150;
            *(arg1 + 0x30) = var_16f;
            *(arg1 + 0x20) = var_17f;
            *(arg1 + 0x10) = var_238;
            *(arg1 + 1) = var_238;
            *arg1 = rax_8;
            rbp = 1;
        }
        else
        {
            var_298_1 = arg1;
            var_288 = var_188;
            int64_t var_278_2 = *var_17f[7];
            r15 = var_2a0_1;
            label_8372a5:
            void* var_260 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            void var_58;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h5d3fd20d11ee0406(&var_58, r15);
            int64_t var_38_1 = 0;
            _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1a2b1fad31897241(&var_190, &var_58);
            char var_2a4_1 = 1;
            
            if (var_188 == 2)
            {
                label_8372f3:
                core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$bat..input..Input$GT$$GT$$GT$::h885dc449df84056a(&var_58);
                var_298_1[1] = var_2a4_1;
                *var_298_1 = 0xd;
                core::ptr::drop_in_place$LT$core..option..Option$LT$clircle..Identifier$GT$$GT$::h8d51138df6bf183e(&var_258);
                return core::ptr::drop_in_place$LT$bat..output..OutputType$GT$::h28c663b98fd21d1f(
                    &var_98);
            }
            
            var_2a4_1 = 1;
            
            while (true)
            {
                int64_t r14_1 = var_190;
                int64_t* rbx_1 = &var_258;
                
                if (var_23b == 2)
                    rbx_1 = nullptr;
                
                int64_t* var_290;
                int64_t var_100;
                char var_e8;
                int128_t var_f8;
                
                if (var_100 != -0x8000000000000000)
                {
                    memcpy(&var_238, &*var_18f[7], 0x88);
                    int64_t var_1b0_2 = var_100;
                    int128_t var_1a8_2 = var_f8;
                    bat::controller::Controller::print_input::h97eac2397f7dbd6a(&var_e8, arg2, 
                        &var_238, &var_288, rbx_1, !r14_1);
                }
                else
                {
                    memcpy(&var_238, &*var_18f[7], 0x88);
                    int64_t var_1b0_1 = -0x8000000000000000;
                    int128_t var_1a8_1 = var_f8;
                    std::io::stdio::stdin::h9a05a2c3e7544b2a();
                    var_290 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
                    int32_t* rax_12;
                    char rdx_1;
                    rax_12 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_290);
                    bat::controller::Controller::print_input::hecfc777da85d890f(&var_e8, arg2, 
                        &var_238, &var_288, rax_12, rdx_1 & 1, rbx_1, !r14_1);
                }
                
                if (var_e8 != 0xd)
                {
                    int128_t var_a8;
                    int128_t var_1f8_1 = var_a8;
                    int128_t var_b8;
                    int128_t var_209 = var_b8;
                    int128_t var_c8;
                    int128_t var_218_2 = var_c8;
                    int128_t var_d8;
                    int128_t var_228_2 = var_d8;
                    var_238 = var_e8;
                    
                    if (var_288 == 1)
                    {
                        *(var_298_1 + 0x40) = var_a8;
                        int128_t zmm0_3 = var_e8;
                        *(var_298_1 + 0x30) = var_b8;
                        *(var_298_1 + 0x20) = var_c8;
                        *(var_298_1 + 0x10) = var_d8;
                        *var_298_1 = zmm0_3;
                        core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$bat..input..Input$GT$$GT$$GT$::h885dc449df84056a(&var_58);
                        rbp = 0;
                        break;
                    }
                    
                    if (rax_6 != 2)
                        core::ops::function::FnMut::call_mut::h3a289d61134ffcb1(&var_238, &var_280, 
                            &data_ace250);
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
                
                if (var_188 == 2)
                    goto label_8372f3;
            }
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$clircle..Identifier$GT$$GT$::h8d51138df6bf183e(&var_258);
        int64_t result =
            core::ptr::drop_in_place$LT$bat..output..OutputType$GT$::h28c663b98fd21d1f(&var_98);
        r15 = var_2a0_1;
        
        if (!rbp)
            return result;
    }
    return 
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bat..input..Input$GT$$GT$::h22dfb39698a1c7dc(
        r15);
}
