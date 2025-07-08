
  fn uu_od::print_bytes::h4e490ef4abfc23ed(arg1: i64, arg2: i64, arg3: *mut i64, arg4: *mut c_void) -> *mut i64

{
    let mut var_88: i64 = arg1;
    let rcx: i64 = *arg4.byte_offset(8);
    let mut var_58: i64 = rcx;
    let var_50: i64 = *arg4.byte_offset(0x10) * 0x68 + rcx;
    let mut i: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4e96e50d1a7b5ef(&var_58);
    
    if i != 0
    {
        let mut i_1: *mut i64 = i;
        let rax_3: i64 = arg3[1];
        let var_60_1: i64 = *arg4.byte_offset(0x20);
        let rbx_1: u64 = *arg4.byte_offset(0x28);
        let mut rax_4: i64;
        rax_4 = 1;
        let mut var_164_1: i8 = rax_4;
        
        do
        {
            let mut var_78: i64 = 0;
            let var_70_1: i64 = 1;
            let var_68_1: i64 = 0;
            let mut var_160: *mut i128;
            let mut var_130: *mut c_void;
            let mut var_128: i64;
            let mut var_b8: *mut i128;
            let mut zmm0: [i32; 0x4];
            
            if rax_3 != 0
            {
                if rbx_1 == 0
                {
                    core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
                    /* no return */
                }
                
                let mut r15_1: i64 = 0;
                
                do
                {
                    let mut rdx_1: u64;
                    
                    if (r15_1 | rbx_1) >> 0x20 == 0
                    {
                        rdx_1 = COMBINE(0, r15_1) % rbx_1;
                        
                        if rdx_1 >= 8
                        {
                            core::panicking::panic_bounds_check::h25a5330941572dd1(rdx_1, 8);
                            /* no return */
                        }
                    }
                    else
                    {
                        rdx_1 = COMBINE(0, r15_1) % rbx_1;
                        
                        if rdx_1 >= 8
                        {
                            core::panicking::panic_bounds_check::h25a5330941572dd1(rdx_1, 8);
                            /* no return */
                        }
                    }
                    
                    let rax_12: i64 = i_1[rdx_1 + 4];
                    var_b8 = &data_40dad0;
                    let var_b0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                    let var_a8_1: i64 = rax_12;
                    let var_a0_1: i64 = 0;
                    var_130 = 2;
                    let var_120_1: i64 = 1;
                    let var_118_1: i64 = 1;
                    let var_110_1: i64 = 0;
                    let var_108_1: i64 = 0x20;
                    let var_100_1: i8 = 1;
                    var_160 = &data_40dad0;
                    let var_158_1: i64 = 1;
                    let var_140_1: *mut i64 = &var_130;
                    let var_138_1: i64 = 1;
                    let var_150_1: *const *mut i128 = &var_b8;
                    let var_148_1: i64 = 2;
                    core::result::Result$LT$T$C$E$GT$::unwrap::h6060708d4774fdb0(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h2395a5f306767c17(&var_78, 
                        &var_160));
                    let rax_14: i64 = *i_1;
                    let r12_1: i64 = i_1[1];
                    
                    if rax_14 == 2
                    {
                        r12_1(&var_130, 
                            uu_od::inputdecoder::MemoryDecoder::get_full_buffer::hbd44b98530cf6814(
                                arg3, r15_1));
                        let mut rax_17: i64;
                        let mut rdx_4: u64;
                        rax_17 = core::slice::iter::Iter$LT$T$GT$::make_slice::h2f8c5b40bc40bd5d(
                            var_128, var_120_1 + var_128);
                        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h35da95ead3d0349f(&var_78, 
                            rax_17, rdx_4);
                        zmm0 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&var_130);
                    }
                    else if rax_14 != 1
                    {
                        r12_1(&var_130, 
                            uu_od::inputdecoder::MemoryDecoder::read_uint::h33796a139b376ce0(arg3, 
                                r15_1, i_1[2], rbx_1));
                        let mut rax_19: i64;
                        let mut rdx_6: u64;
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
                        let mut rax_15: i64;
                        let mut rdx_3: u64;
                        rax_15 = core::slice::iter::Iter$LT$T$GT$::make_slice::h2f8c5b40bc40bd5d(
                            var_128, var_120_1 + var_128);
                        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h35da95ead3d0349f(&var_78, 
                            rax_15, rdx_3);
                        zmm0 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&var_130);
                    }
                    
                    r15_1 += i_1[2];
                } while r15_1 < rax_3;
            }
            
            if i_1[0xc] != 0
            {
                let rax_20: i64 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::hc7941fd67a47c62a(var_70_1, var_68_1 + var_70_1, zmm0);
                let mut r15_3: i64 = var_60_1 - rax_20;
                
                if var_60_1 < rax_20
                {
                    r15_3 = 0;
                }
                
                let mut rax_21: i64;
                let mut rdx_7: i64;
                rax_21 = uu_od::inputdecoder::MemoryDecoder::get_buffer::he5dd43e20733f426(arg3, 0);
                let mut var_48: ();
                uu_od::prn_char::format_ascii_dump::h253c6e9b0061c235(&var_48, rax_21, rdx_7);
                var_160 = &data_40dad0;
                let var_158_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                let var_150_2: *mut c_void = &var_48;
                let var_148_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                let var_140_2: i64 = r15_3;
                let var_138_2: i64 = 0;
                var_130 = 2;
                let var_120_2: i64 = 1;
                let var_118_2: i64 = 2;
                let var_110_2: i64 = 0;
                let var_108_2: i64 = 0x20;
                let var_100_2: i8 = 1;
                let var_f8_1: i64 = 2;
                let var_e8_1: i64 = 2;
                let mut var_d8: i64;
                __builtin_memcpy(&var_d8, 
                    "\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x11);
                var_b8 = &data_5417b8;
                let var_b0_2: i64 = 2;
                let var_98_1: *mut i64 = &var_130;
                let var_90_1: i64 = 2;
                let var_a8_2: *const *mut i128 = &var_160;
                let var_a0_2: i64 = 3;
                core::result::Result$LT$T$C$E$GT$::unwrap::h6060708d4774fdb0(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h2395a5f306767c17(&var_78, &var_b8));
                zmm0 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(
                    &var_48);
            }
            
            if (var_164_1 & 1) != 0
            {
                var_160 = &var_88;
                let var_158_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                var_130 = &data_40dad0;
                let var_128_1: i64 = 1;
                let var_110_4: i64 = 0;
                let var_120_4: *const *mut i128 = &var_160;
                let var_118_4: i64 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_130);
                var_164_1 = 0;
            }
            else
            {
                let rdi_24: i64 = var_88;
                let rax_23: i64 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::hc7941fd67a47c62a(rdi_24, arg2 + rdi_24, zmm0);
                var_b8 = &data_40dad0;
                let var_b0_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                let var_a8_3: i64 = rax_23;
                let var_a0_3: i64 = 0;
                var_130 = 2;
                let var_120_3: i64 = 1;
                let var_118_3: i64 = 1;
                let var_110_3: i64 = 0;
                let var_108_3: i64 = 0x20;
                let var_100_3: i8 = 1;
                var_160 = &data_40dad0;
                let var_158_3: i64 = 1;
                let var_140_3: *mut i64 = &var_130;
                let var_138_3: i64 = 1;
                let var_150_3: *const *mut i128 = &var_b8;
                let var_148_3: i64 = 2;
                std::io::stdio::_print::he918bceb0c89db46(&var_160);
            }
            
            var_160 = &var_78;
            let var_158_5: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_130 = &data_541798;
            var_128 = 2;
            let var_110_5: i64 = 0;
            let var_120_5: *const *mut i128 = &var_160;
            let var_118_5: i64 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&var_130);
            zmm0 =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&var_78);
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4e96e50d1a7b5ef(&var_58);
            i_1 = i;
        } while i != 0;
    }
    
    i
}
