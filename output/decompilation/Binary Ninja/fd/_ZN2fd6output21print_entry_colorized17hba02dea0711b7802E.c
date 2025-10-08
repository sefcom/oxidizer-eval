
  int64_t fd::output::print_entry_colorized::hba02dea0711b7802(int64_t arg1, int32_t* arg2, void* arg3, void* arg4, uint64_t arg5 @ r12)

{
    uint64_t var_28 = arg5;
    int32_t* r15 = arg2;
    uint64_t rax;
    int64_t rdx;
    rax = fd::dir_entry::DirEntry::stripped_path::h8d7ea7decf4ce9bf(r15, *(arg3 + 0x1e7));
    uint64_t rbx = rax;
    void var_c8;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_c8, rax, rdx);
    char* rax_1;
    int64_t rdx_1;
    rax_1 = std::path::Path::parent::hef287f60afa56900(rbx, rdx);
    char* rbp_1;
    uint64_t r13_1;
    uint64_t r14_1;
    void* var_148;
    void* var_140;
    void** var_f8;
    char* var_c0;
    uint64_t var_b8;
    char const* const var_a8;
    int64_t result;
    
    if (!rax_1)
    {
        label_5f6e8e:
        r13_1 = 0;
        label_5f6e99:
        void* rax_8 = fd::dir_entry::DirEntry::style::hc7d1f63435441946(r15, arg4);
        int32_t* var_b0_1 = r15;
        uint128_t var_78_1;
        
        if (!rax_8)
            var_78_1 = 2;
        else
        {
            lscolors::style::Style::to_nu_ansi_term_style::h4f37f75a73819d26(&var_148, rax_8, 
                rax_8, arg5);
            var_78_1 = var_148;
            r15 = var_140;
            rbx = *var_140[1];
            arg5 = *var_140[5];
        }
        
        rbp_1 = var_c0;
        r14_1 = var_b8;
        void* rax_9;
        int64_t rdx_9;
        rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r13_1, rbp_1, r14_1);
        
        if (rax_9)
        {
            char var_58_1 = var_78_1;
            char rdi_17 = r15;
            
            if (var_58_1 == 2)
                rdi_17 = 0;
            
            int32_t rsi_12;
            rsi_12 = var_58_1 == 2;
            
            if (var_58_1 == 2)
                rbx = 0x15;
            
            if (var_58_1 == 2)
                arg5 = 0x15;
            
            uint128_t zmm0_3 = rsi_12;
            int64_t var_118_1 = (_mm_cmpgt_epi8({0}, 
                _mm_slli_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(zmm0_3, zmm0_3), 0), 7)
                    & data_470a80) & ~var_78_1)[0];
            char var_110_1 = rdi_17;
            int32_t var_10f_1 = rbx;
            int32_t var_10b_1 = arg5;
            var_148 = -0x8000000000000000;
            void* var_140_1 = rax_9;
            int64_t var_138_1 = rdx_9;
            int64_t var_130_1 = -0x7ffffffffffffffe;
            var_f8 = &var_148;
            uint64_t (* var_f0_2)(int64_t* arg1, int64_t arg2) = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
            var_a8 = &data_470810;
            int64_t var_a0_1 = 1;
            int64_t var_88_1 = 0;
            void*** var_98_1 = &var_f8;
            int64_t var_90_1 = 1;
            result = std::io::Write::write_fmt::h323bfdffb85eb317(arg1, &var_a8);
            core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hed8dd3841b2e91c8(&var_148);
            
            if (!result)
            {
                uint64_t rax_11 =
                    lscolors::LsColors::style_for_indicator::hc2793129675cbe36(arg4, 2);
                result = fd::output::print_trailing_slash::h43af0d27fcc999ec(arg1, var_b0_1, 
                    *(arg3 + 0xb8), *(arg3 + 0xc0), rax_11);
            }
            
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h20faf5157999b1c6(
                &var_c8);
            return result;
        }
        
        arg5 = r13_1;
        r13_1 = r14_1;
    }
    else
    {
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_148, rax_1, rdx_1);
        uint64_t var_138;
        arg5 = var_138;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h20faf5157999b1c6(&var_148);
        rbp_1 = var_c0;
        r14_1 = var_b8;
        void* rax_2;
        void* rdx_3;
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(arg5, rbp_1, r14_1);
        
        if (!rax_2)
            r13_1 = r14_1;
        else
        {
            var_148 = rax_2;
            var_140 = rdx_3 + rax_2;
            char rax_3;
            int32_t i;
            rax_3 = core::str::validations::next_code_point::h1fc26b09b7240c4b(&var_148, rbx);
            
            if ((i != 0x110000 & rax_3) != 1)
                r13_1 = arg5;
            else
            {
                rbx = &var_148;
                r13_1 = arg5;
                
                while (i == 0x2f)
                {
                    r13_1 += 1;
                    char rax_4;
                    rax_4 =
                        core::str::validations::next_code_point::h1fc26b09b7240c4b(&var_148, rbx);
                    
                    if (!(rax_4 & 1))
                        break;
                    
                    if (i == 0x110000)
                        break;
                }
            }
            
            if (!r13_1)
                goto label_5f6e8e;
            
            int64_t rax_5;
            uint64_t rdx_6;
            rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r13_1, rbp_1, r14_1);
            
            if (rax_5)
            {
                int64_t var_f0_1 = rax_5;
                uint64_t var_e8_1 = rdx_6;
                var_f8 = -0x8000000000000000;
                
                if (*(arg3 + 0x168) != -0x8000000000000000)
                {
                    fd::output::replace_path_separator::h23f8702077a731dc(&var_148, rax_5, rdx_6, 
                        *(arg3 + 0x170), *(arg3 + 0x178));
                    alloc::borrow::Cow$LT$B$GT$::to_mut::he3d567039a061c09(&var_f8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6194a405d9e61c9b(
                        &var_f8);
                    var_e8_1 = var_138;
                    var_f8 = var_148;
                }
                
                rbx = 2;
                uint64_t rax_7;
                int32_t rcx_3;
                char rdx_7;
                rax_7 = lscolors::LsColors::style_for_indicator::hc2793129675cbe36(arg4, 2);
                uint128_t zmm0_2;
                
                if (!rax_7)
                    zmm0_2 = 2;
                else
                {
                    lscolors::style::Style::to_nu_ansi_term_style::h4f37f75a73819d26(&var_148, 
                        rax_7, rax_7, arg5);
                    zmm0_2 = var_148;
                    rdx_7 = var_140;
                    rax_7 = *var_140[1];
                    rcx_3 = *var_140[5];
                }
                
                char var_48_1 = zmm0_2;
                int32_t rdi_22;
                rdi_22 = var_48_1 == 2;
                
                if (var_48_1 == 2)
                    rcx_3 = 0x15;
                
                if (var_48_1 == 2)
                    rax_7 = 0x15;
                
                char rdx_11 = rdx_7;
                
                if (var_48_1 == 2)
                    rdx_11 = 0;
                
                uint64_t var_138_2 = var_e8_1;
                int128_t zmm1_1 = var_f8;
                uint128_t zmm2_1 = rdi_22;
                zmm2_1 =
                    _mm_slli_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(zmm2_1, zmm2_1), 0), 7)
                    & data_470a80;
                var_148 = zmm1_1;
                int64_t var_118_2 = (_mm_cmpgt_epi8({0}, zmm2_1) & ~zmm0_2);
                char var_110_2 = rdx_11;
                int32_t var_10f_2 = rax_7;
                int32_t var_10b_2 = rcx_3;
                int64_t var_130_2 = -0x7ffffffffffffffe;
                void** var_68 = &var_148;
                uint64_t (* var_60_1)(int64_t* arg1, int64_t arg2) = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
                var_a8 = &data_470810;
                int64_t var_a0_2 = 1;
                int64_t var_88_2 = 0;
                void*** var_98_2 = &var_68;
                int64_t var_90_2 = 1;
                result = std::io::Write::write_fmt::h323bfdffb85eb317(arg1, &var_a8);
                core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hed8dd3841b2e91c8(&var_148);
                
                if (!result)
                    goto label_5f6e99;
                
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h20faf5157999b1c6(
                    &var_c8);
                return result;
            }
            
            arg5 = 0;
        }
    }
    core::str::slice_error_fail::h1a2885084e28d077(rbp_1, r14_1, arg5, r13_1);
    /* no return */
}
