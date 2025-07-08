
  int64_t* uu_od::print_bytes::h4e490ef4abfc23ed(int64_t arg1, int64_t arg2, int64_t* arg3, void* arg4)

{
    int64_t var_88 = arg1;
    int64_t rcx = *(arg4 + 8);
    int64_t var_58 = rcx;
    int64_t var_50 = *(arg4 + 0x10) * 0x68 + rcx;
    int64_t* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4e96e50d1a7b5ef(&var_58);
    
    if (i)
    {
        int64_t* i_1 = i;
        int64_t rax_3 = arg3[1];
        int64_t var_60_1 = *(arg4 + 0x20);
        uint64_t rbx_1 = *(arg4 + 0x28);
        int64_t rax_4;
        rax_4 = 1;
        char var_164_1 = rax_4;
        
        do
        {
            int64_t var_78 = 0;
            int64_t var_70_1 = 1;
            int64_t var_68_1 = 0;
            int128_t* const var_160;
            void* const var_130;
            int64_t var_128;
            int128_t* const var_b8;
            int32_t zmm0[0x4];
            
            if (rax_3)
            {
                if (!rbx_1)
                {
                    core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
                    /* no return */
                }
                
                int64_t r15_1 = 0;
                
                do
                {
                    uint64_t rdx_1;
                    
                    if (!((r15_1 | rbx_1) >> 0x20))
                    {
                        rdx_1 = COMBINE(0, r15_1) % rbx_1;
                        
                        if (rdx_1 >= 8)
                        {
                            core::panicking::panic_bounds_check::h25a5330941572dd1(rdx_1, 8);
                            /* no return */
                        }
                    }
                    else
                    {
                        rdx_1 = COMBINE(0, r15_1) % rbx_1;
                        
                        if (rdx_1 >= 8)
                        {
                            core::panicking::panic_bounds_check::h25a5330941572dd1(rdx_1, 8);
                            /* no return */
                        }
                    }
                    
                    int64_t rax_12 = i_1[rdx_1 + 4];
                    var_b8 = &data_40dad0;
                    int64_t (* var_b0_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                    int64_t var_a8_1 = rax_12;
                    int64_t var_a0_1 = 0;
                    var_130 = 2;
                    int64_t var_120_1 = 1;
                    int64_t var_118_1 = 1;
                    int64_t var_110_1 = 0;
                    int64_t var_108_1 = 0x20;
                    char var_100_1 = 1;
                    var_160 = &data_40dad0;
                    int64_t var_158_1 = 1;
                    int64_t* var_140_1 = &var_130;
                    int64_t var_138_1 = 1;
                    int128_t* const* var_150_1 = &var_b8;
                    int64_t var_148_1 = 2;
                    core::result::Result$LT$T$C$E$GT$::unwrap::h6060708d4774fdb0(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h2395a5f306767c17(&var_78, 
                        &var_160));
                    int64_t rax_14 = *i_1;
                    int64_t r12_1 = i_1[1];
                    
                    if (rax_14 == 2)
                    {
                        r12_1(&var_130, 
                            uu_od::inputdecoder::MemoryDecoder::get_full_buffer::hbd44b98530cf6814(
                                arg3, r15_1));
                        int64_t rax_17;
                        uint64_t rdx_4;
                        rax_17 = core::slice::iter::Iter$LT$T$GT$::make_slice::h2f8c5b40bc40bd5d(
                            var_128, var_120_1 + var_128);
                        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h35da95ead3d0349f(&var_78, 
                            rax_17, rdx_4);
                        zmm0 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&var_130);
                    }
                    else if (rax_14 != 1)
                    {
                        r12_1(&var_130, 
                            uu_od::inputdecoder::MemoryDecoder::read_uint::h33796a139b376ce0(arg3, 
                                r15_1, i_1[2], rbx_1));
                        int64_t rax_19;
                        uint64_t rdx_6;
                        rax_19 = core::slice::iter::Iter$LT$T$GT$::make_slice::h2f8c5b40bc40bd5d(
                            var_128, var_120_1 + var_128);
                        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h35da95ead3d0349f(&var_78, 
                            rax_19, rdx_6);
                        zmm0 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&var_130);
                    }
                    else
                    {
                        uu_od::inputdecoder::MemoryDecoder::read_float::hb631d528abcb6236(arg3, 
                            r15_1, i_1[2]);
                        r12_1(&var_130);
                        int64_t rax_15;
                        uint64_t rdx_3;
                        rax_15 = core::slice::iter::Iter$LT$T$GT$::make_slice::h2f8c5b40bc40bd5d(
                            var_128, var_120_1 + var_128);
                        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h35da95ead3d0349f(&var_78, 
                            rax_15, rdx_3);
                        zmm0 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&var_130);
                    }
                    
                    r15_1 += i_1[2];
                } while (r15_1 < rax_3);
            }
            
            if (i_1[0xc])
            {
                int64_t rax_20 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::hc7941fd67a47c62a(var_70_1, var_68_1 + var_70_1, zmm0);
                int64_t r15_3 = var_60_1 - rax_20;
                
                if (var_60_1 < rax_20)
                    r15_3 = 0;
                
                int64_t rax_21;
                int64_t rdx_7;
                rax_21 = uu_od::inputdecoder::MemoryDecoder::get_buffer::he5dd43e20733f426(arg3, 0);
                void var_48;
                uu_od::prn_char::format_ascii_dump::h253c6e9b0061c235(&var_48, rax_21, rdx_7);
                var_160 = &data_40dad0;
                int64_t (* var_158_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                void* var_150_2 = &var_48;
                int64_t (* var_148_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                int64_t var_140_2 = r15_3;
                int64_t var_138_2 = 0;
                var_130 = 2;
                int64_t var_120_2 = 1;
                int64_t var_118_2 = 2;
                int64_t var_110_2 = 0;
                int64_t var_108_2 = 0x20;
                char var_100_2 = 1;
                int64_t var_f8_1 = 2;
                int64_t var_e8_1 = 2;
                int64_t var_d8;
                __builtin_memcpy(&var_d8, 
                    "\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x11);
                var_b8 = &data_5417b8;
                int64_t var_b0_2 = 2;
                int64_t* var_98_1 = &var_130;
                int64_t var_90_1 = 2;
                int128_t* const* var_a8_2 = &var_160;
                int64_t var_a0_2 = 3;
                core::result::Result$LT$T$C$E$GT$::unwrap::h6060708d4774fdb0(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h2395a5f306767c17(&var_78, &var_b8));
                zmm0 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(
                    &var_48);
            }
            
            if (var_164_1 & 1)
            {
                var_160 = &var_88;
                int64_t (* var_158_4)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                var_130 = &data_40dad0;
                int64_t var_128_1 = 1;
                int64_t var_110_4 = 0;
                int128_t* const* var_120_4 = &var_160;
                int64_t var_118_4 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_130);
                var_164_1 = 0;
            }
            else
            {
                int64_t rdi_24 = var_88;
                int64_t rax_23 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::hc7941fd67a47c62a(rdi_24, arg2 + rdi_24, zmm0);
                var_b8 = &data_40dad0;
                int64_t (* var_b0_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                int64_t var_a8_3 = rax_23;
                int64_t var_a0_3 = 0;
                var_130 = 2;
                int64_t var_120_3 = 1;
                int64_t var_118_3 = 1;
                int64_t var_110_3 = 0;
                int64_t var_108_3 = 0x20;
                char var_100_3 = 1;
                var_160 = &data_40dad0;
                int64_t var_158_3 = 1;
                int64_t* var_140_3 = &var_130;
                int64_t var_138_3 = 1;
                int128_t* const* var_150_3 = &var_b8;
                int64_t var_148_3 = 2;
                std::io::stdio::_print::he918bceb0c89db46(&var_160);
            }
            
            var_160 = &var_78;
            int64_t (* var_158_5)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_130 = &data_541798;
            var_128 = 2;
            int64_t var_110_5 = 0;
            int128_t* const* var_120_5 = &var_160;
            int64_t var_118_5 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&var_130);
            zmm0 =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&var_78);
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4e96e50d1a7b5ef(&var_58);
            i_1 = i;
        } while (i);
    }
    
    return i;
}
