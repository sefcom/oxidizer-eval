
  uint64_t uu_split::line_bytes::hc9b041c7d10080a3(void* arg1, int64_t* arg2, uint64_t arg3)

{
    uint64_t r15 = arg3;
    char const (** const var_168)[0x90];
    uu_split::filenames::FilenameIterator::new::hc2a8a0f7203a171b(&var_168, *(arg1 + 0x30), 
        *(arg1 + 0x38), arg1 + 0x40);
    char const (** const rax)[0x90] = var_168;
    uint64_t result_1;
    uint64_t result = result_1;
    int64_t var_a0 = -0x7fffffffffffffff;
    
    if (rax != -0x7fffffffffffffff)
    {
        int128_t var_130;
        int128_t var_58_1 = var_130;
        int128_t var_140;
        int128_t var_68_1 = var_140;
        int128_t var_150;
        int128_t var_78_1 = var_150;
        char const (** const var_90)[0x90] = rax;
        uint64_t result_2 = result;
        int128_t** var_158;
        int128_t** var_80_1 = var_158;
        var_168 = nullptr;
        int64_t var_160 = 1;
        var_158 = {0};
        char const (** const var_f8)[0x90];
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::ha515876637d6ec21(&var_f8, 
            alloc::boxed::Box$LT$T$GT$::new::h5666194dd5ed5591(&var_168), &data_50b0c0);
        char rcx_1 = *(arg1 + 0xa2);
        char rdx_2 = *(arg1 + 0xa0);
        int64_t rax_3 = *(arg1 + 0x88);
        int64_t rax_5 = -(r15);
        uint64_t r14_1 = 0;
        uint32_t rbx = rcx_1;
        int64_t var_48;
        int64_t* rdi_3 = &var_48;
        uint64_t var_110_1 = r15;
        uint32_t var_fc_1 = rbx;
        
        while (true)
        {
            _$LT$uu_split..LinesWithSep$LT$R$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb6c8053dcbad174b(rdi_3, arg2, rbx);
            int64_t rcx_2 = var_48;
            
            if (rcx_2 == var_a0)
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha5583a5337080667(&var_f8);
                core::ptr::drop_in_place$LT$uu_split..filenames..FilenameIterator$GT$::h3a3dca25075fae6f(var_90, result_2);
                return 0;
            }
            
            if (rcx_2 == -0x8000000000000000)
            {
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                break;
            }
            
            int64_t var_118_1 = rcx_2;
            uint64_t var_38;
            uint64_t rbx_1 = var_38;
            int64_t var_40;
            int128_t var_1a8;
            int64_t var_198;
            int128_t* var_180;
            int64_t (* var_178)(int32_t* arg1, int64_t* arg2);
            int64_t var_170;
            int128_t* rbp_1;
            int64_t (* r14_2)(int32_t* arg1, int64_t* arg2);
            
            if (!r14_1)
            {
                _$LT$uu_split..filenames..FilenameIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h029d1b66ecb898b7(&var_180, &var_90);
                rbp_1 = var_180;
                
                if (rbp_1 == -0x8000000000000000)
                {
                    label_4720f0:
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_1a8, "output file suffixes exhaustedcr…", 0x1e);
                    int64_t var_158_1 = var_198;
                    var_168 = var_1a8;
                    var_150 = 1;
                    result = alloc::boxed::Box$LT$T$GT$::new::he26860fb58d4a888(&var_168);
                }
                else
                {
                    r14_2 = var_178;
                    
                    if (rdx_2 & 1)
                    {
                        var_1a8 = 0;
                        *var_1a8[8] = r14_2;
                        var_198 = var_170;
                        char var_190_3 = 1;
                        var_180 = &var_1a8;
                        var_178 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_168 = &data_50af08;
                        var_160 = 2;
                        *var_150[8] = 0;
                        var_158 = &var_180;
                        var_150 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_168);
                    }
                    
                    uu_split::Settings::instantiate_current_writer::hd292c92efbe44a3c(&var_168, 
                        arg1, r14_2, var_170, 1);
                    char const (** r13_4)[0x90] = var_168;
                    
                    if (r13_4 != -0x8000000000000000)
                    {
                        int128_t zmm0_6 = var_158;
                        var_1a8 = zmm0_6;
                        var_198 = var_150;
                        int128_t var_b8_3 = var_150;
                        int128_t var_c8_3 = zmm0_6;
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha5583a5337080667(&var_f8);
                        var_f8 = r13_4;
                        int64_t var_f0_3 = var_160;
                        int128_t var_d8_3 = var_198;
                        int128_t var_e8_3 = var_1a8;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7f9a6516de84fa50(
                            rbp_1, r14_2);
                        r15 = var_110_1;
                        r14_1 = r15;
                        
                        if (rbx_1 > r14_1)
                            goto label_471bb9;
                        
                        goto label_47207c;
                    }
                    
                    label_472132:
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7f9a6516de84fa50(rbp_1, 
                        r14_2);
                }
            }
            else
            {
                rcx_2 = r14_1 >= r15;
                rcx_2 |= rbx_1 != r14_1;
                
                if (!rcx_2)
                    r14_1 = rbx_1;
                
                int64_t r12_2;
                
                if (!rcx_2 && *(var_40 + rbx_1 - 1) != rcx_1)
                {
                    label_471bcf:
                    _$LT$uu_split..filenames..FilenameIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h029d1b66ecb898b7(&var_180, &var_90);
                    rbp_1 = var_180;
                    
                    if (rbp_1 == -0x8000000000000000)
                        goto label_4720f0;
                    
                    r14_2 = var_178;
                    
                    if (rdx_2 & 1)
                    {
                        var_1a8 = 0;
                        *var_1a8[8] = r14_2;
                        var_198 = var_170;
                        char var_190_1 = 1;
                        var_180 = &var_1a8;
                        var_178 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_168 = &data_50af08;
                        var_160 = 2;
                        *var_150[8] = 0;
                        var_158 = &var_180;
                        var_150 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_168);
                    }
                    
                    uu_split::Settings::instantiate_current_writer::hd292c92efbe44a3c(&var_168, 
                        arg1, r14_2, var_170, 1);
                    char const (** const r13_1)[0x90] = var_168;
                    
                    if (r13_1 == -0x8000000000000000)
                        goto label_472132;
                    
                    int128_t zmm0_2 = var_158;
                    var_1a8 = zmm0_2;
                    var_198 = var_150;
                    int128_t var_b8_1 = var_150;
                    int128_t var_c8_1 = zmm0_2;
                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha5583a5337080667(&var_f8);
                    var_f8 = r13_1;
                    int64_t var_f0_1 = var_160;
                    int128_t var_d8_1 = var_198;
                    int128_t var_e8_1 = var_1a8;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7f9a6516de84fa50(rbp_1, 
                        r14_2);
                    r15 = var_110_1;
                    
                    if (rbx_1 > r15)
                        goto label_471d2f;
                    
                    r12_2 = var_40;
                    label_472088:
                    r14_1 = r15;
                    goto label_4720a6;
                }
                
                if (rbx_1 <= r14_1)
                {
                    label_47207c:
                    r12_2 = var_40;
                    label_4720a6:
                    uu_split::custom_write_all::h5ae19a5a4a9a7063(&var_168, r12_2, rbx_1, &var_f8, 
                        rax_3);
                    uint64_t result_3;
                    
                    if (var_168 == 1)
                        result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    else
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_118_1, var_40);
                        r14_1 -= rbx_1;
                        rbx = var_fc_1;
                        rdi_3 = &var_48;
                        continue;
                    }
                    
                    result = result_3;
                }
                else
                {
                    label_471bb9:
                    
                    if (r14_1 != r15)
                        goto label_471bcf;
                    
                    label_471d2f:
                    int64_t rax_9;
                    uint64_t rdx_6;
                    rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hbf2f5565c3de22aa(0, r15, var_40, rbx_1);
                    uu_split::custom_write_all::h5ae19a5a4a9a7063(&var_168, rax_9, rdx_6, &var_f8, 
                        rax_3);
                    
                    if (!var_168)
                    {
                        rbx_1 += rax_5;
                        r12_2 = var_40 + r15;
                        
                        while (true)
                        {
                            _$LT$uu_split..filenames..FilenameIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h029d1b66ecb898b7(&var_180, &var_90);
                            rbp_1 = var_180;
                            
                            if (rbp_1 == -0x8000000000000000)
                                goto label_4720f0;
                            
                            r14_2 = var_178;
                            
                            if (rdx_2 & 1)
                            {
                                var_1a8 = 0;
                                *var_1a8[8] = r14_2;
                                var_198 = var_170;
                                char var_190_2 = 1;
                                var_180 = &var_1a8;
                                var_178 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                                var_168 = &data_50af08;
                                var_160 = 2;
                                *var_150[8] = 0;
                                var_158 = &var_180;
                                var_150 = 1;
                                std::io::stdio::_print::h5e446ff973c02de6(&var_168);
                            }
                            
                            uu_split::Settings::instantiate_current_writer::hd292c92efbe44a3c(
                                &var_168, arg1, r14_2, var_170, 1);
                            char const (** const r13_3)[0x90] = var_168;
                            
                            if (r13_3 == -0x8000000000000000)
                                goto label_472132;
                            
                            int128_t zmm0_4 = var_158;
                            var_1a8 = zmm0_4;
                            var_198 = var_150;
                            int128_t var_b8_2 = var_150;
                            int128_t var_c8_2 = zmm0_4;
                            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha5583a5337080667(&var_f8);
                            var_f8 = r13_3;
                            int64_t var_f0_2 = var_160;
                            int128_t var_d8_2 = var_198;
                            int128_t var_e8_2 = var_1a8;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7f9a6516de84fa50(rbp_1, r14_2);
                            r15 = var_110_1;
                            
                            if (rbx_1 <= r15)
                                break;
                            
                            int64_t rax_11;
                            uint64_t rdx_9;
                            rax_11 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hbf2f5565c3de22aa(0, r15, r12_2, rbx_1);
                            uu_split::custom_write_all::h5ae19a5a4a9a7063(&var_168, rax_11, rdx_9, 
                                &var_f8, rax_3);
                            r12_2 += r15;
                            rbx_1 -= r15;
                            
                            if (var_168 == 1)
                                goto label_47214a;
                        }
                        
                        goto label_472088;
                    }
                    
                    label_47214a:
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                }
            }
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_118_1, 
                var_40);
            break;
        }
        
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha5583a5337080667(&var_f8);
        core::ptr::drop_in_place$LT$uu_split..filenames..FilenameIterator$GT$::h3a3dca25075fae6f(
            var_90, result_2);
    }
    
    return result;
}
