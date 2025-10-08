
  void* uu_od::print_bytes::h002eeb452f9cd45b(char* arg1, void* arg2, int64_t* arg3, void* arg4)

{
    char* var_90 = arg1;
    void* result = *(arg4 + 0x10);
    
    if (result)
    {
        int64_t* result_2 = *(arg4 + 8);
        void* rax_1 = result * 0x68 + result_2;
        result = &result_2[0xd];
        void* rsi = *arg3;
        int64_t rsi_1 = arg3[1];
        int64_t rsi_2 = *(arg4 + 0x20);
        int64_t rbp_1 = *(arg4 + 0x28);
        char var_111_1 = arg3[3];
        char var_dc_1 = 1;
        void* result_1;
        
        do
        {
            int64_t var_80 = 0;
            char* var_78_1 = 1;
            void* var_70_1 = nullptr;
            void* const var_110;
            int64_t var_108;
            void* const* var_100;
            void* const var_d8;
            int16_t var_c0;
            void* const var_68;
            int32_t zmm0[0x4];
            
            if (rsi_1)
            {
                if (!rbp_1)
                {
                    core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                    /* no return */
                }
                
                uint64_t rbx_1 = 0;
                
                do
                {
                    uint64_t rdx_2;
                    
                    if (!((rbx_1 | rbp_1) >> 0x20))
                    {
                        rdx_2 = COMBINE(0, rbx_1) % rbp_1;
                        
                        if (rdx_2 >= 8)
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rdx_2, 8);
                            /* no return */
                        }
                    }
                    else
                    {
                        rdx_2 = COMBINE(0, rbx_1) % rbp_1;
                        
                        if (rdx_2 >= 8)
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rdx_2, 8);
                            /* no return */
                        }
                    }
                    
                    int64_t rax_9 = result_2[rdx_2 + 4];
                    
                    if (rax_9 > 0xffff)
                        goto label_46dc05;
                    
                    var_68 = &data_41a940;
                    int64_t (* var_60_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
                    int64_t var_58_1 = 0;
                    int16_t var_50_1 = rax_9;
                    var_d8 = &data_41a940;
                    int64_t var_d0_1 = 1;
                    void* const var_b8_1 = &data_41d2a8;
                    int64_t var_b0_1 = 1;
                    void* const* var_c8_1 = &var_68;
                    var_c0 = 2;
                    core::result::Result$LT$T$C$E$GT$::unwrap::h8164cbac40e1d6d3(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hb6f56adf937e549c(&var_80, &var_d8));
                    int64_t rax_11 = *result_2;
                    int64_t r15_1 = result_2[1];
                    
                    if (!rax_11)
                    {
                        r15_1(&var_110, 
                            uu_od::inputdecoder::MemoryDecoder::read_uint::h820c719160ea830f(rsi, 
                                var_111_1, rbx_1, result_2[2], rbx_1));
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h6f45b21ab07ea0a9(&var_80, var_108, var_100 + var_108);
                    }
                    else if (rax_11 != 1)
                    {
                        r15_1(&var_110, 
                            uu_od::inputdecoder::MemoryDecoder::get_full_buffer::h08ddd83f2f5580c1(
                                arg3, rbx_1));
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h6f45b21ab07ea0a9(&var_80, var_108, var_100 + var_108);
                    }
                    else
                    {
                        uu_od::inputdecoder::MemoryDecoder::read_float::h83569d197b443106(rsi, 
                            var_111_1, rbx_1, result_2[2]);
                        r15_1(&var_110);
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h6f45b21ab07ea0a9(&var_80, var_108, var_100 + var_108);
                    }
                    
                    zmm0 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0ecbbb68ed17b0f1(
                        &var_110);
                    rbx_1 += result_2[2];
                } while (rbx_1 < rsi_1);
            }
            
            int64_t (* var_f8)(void* arg1, int64_t arg2);
            int64_t var_e8;
            
            if (result_2[0xc])
            {
                int64_t rax_14 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(var_78_1, var_70_1 + var_78_1, zmm0);
                int64_t rbx_3 = rsi_2 - rax_14;
                
                if (rsi_2 < rax_14)
                    rbx_3 = 0;
                
                void* rax_15;
                int64_t rdx_11;
                rax_15 = uu_od::inputdecoder::MemoryDecoder::get_buffer::h6ffffd86399f7d36(arg3, 0);
                uu_od::prn_char::format_ascii_dump::h58e8947baefac050(&var_68, rax_15, rdx_11);
                
                if (rbx_3 > 0xffff)
                {
                    var_110 = &data_5038d8;
                    int64_t var_108_5 = 1;
                    int64_t var_100_5 = 8;
                    var_f8 = {0};
                    core::panicking::panic_fmt::h96f341d36638c225(&var_110);
                    /* no return */
                }
                
                var_110 = &data_41a940;
                int64_t (* var_108_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
                void* const* var_100_1 = &var_68;
                var_f8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                int64_t var_f0_1 = 0;
                var_e8 = rbx_3;
                var_d8 = &data_503a20;
                int64_t var_d0_2 = 2;
                void* const var_b8_2 = &data_41df20;
                int64_t var_b0_2 = 2;
                void* const* var_c8_2 = &var_110;
                var_c0 = 3;
                core::result::Result$LT$T$C$E$GT$::unwrap::h8164cbac40e1d6d3(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hb6f56adf937e549c(&var_80, &var_d8));
                zmm0 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0ecbbb68ed17b0f1(
                    &var_68);
            }
            
            if (!(var_dc_1 & 1))
            {
                char* rdi_19 = var_90;
                int64_t rax_17 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(rdi_19, arg2 + rdi_19, zmm0);
                
                if (rax_17 > 0xffff)
                {
                    label_46dc05:
                    var_110 = &data_5038d8;
                    int64_t var_108_4 = 1;
                    int64_t var_100_4 = 8;
                    var_f8 = {0};
                    core::panicking::panic_fmt::h96f341d36638c225(&var_110);
                    /* no return */
                }
                
                var_d8 = &data_41a940;
                int64_t (* var_d0_4)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
                int64_t var_c8_3 = 0;
                var_c0 = rax_17;
                var_110 = &data_41a940;
                int64_t var_108_3 = 1;
                void* const var_f0_3 = &data_41d2a8;
                var_e8 = 1;
                void* const* var_100_3 = &var_d8;
                int64_t var_f8_2 = 2;
                std::io::stdio::_print::h5e446ff973c02de6(&var_110);
            }
            else
            {
                var_d8 = &var_90;
                int64_t (* var_d0_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
                var_110 = &data_41a940;
                int64_t var_108_2 = 1;
                int64_t var_f0_2 = 0;
                void* const* var_100_2 = &var_d8;
                int64_t var_f8_1 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_110);
            }
            
            var_d8 = &var_80;
            int64_t (* var_d0_5)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_110 = &data_502418;
            var_108 = 2;
            int64_t var_f0_4 = 0;
            var_100 = &var_d8;
            var_f8 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_110);
            zmm0 =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0ecbbb68ed17b0f1(&var_80);
            result_1 = result;
            result = result_1 + 0x68;
            var_dc_1 = 0;
            result_2 = result_1;
            
            if (result_1 == rax_1)
                result = result_1;
        } while (result_1 != rax_1);
    }
    
    return result;
}
