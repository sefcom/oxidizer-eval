
  fn uu_du::StatPrinter::print_stats::hcdde62bb9c77dc97(arg1: *mut i64, arg2: *mut i64) -> *mut i128

{
    let mut r13: i64;
    let var_20: i64 = r13;
    let mut r15: *mut i64 = arg2;
    let mut var_d8: [i8; 0x10];
    std::sync::mpmc::Receiver$LT$T$GT$::recv::h7eaaff2dc637e02c(&var_d8, arg2);
    let mut zmm0: [i8; 0x10] = __pcmpeqb_xmmdq_memdq(var_d8, data_40f110);
    let mut var_1a8: *mut i128;
    let mut var_188: *mut c_void;
    let mut var_168: [i8; 0x10];
    let mut r12: i64;
    
    if _mm_movemask_epi8(zmm0) != 0xffff
    {
        let mut rax_2: *mut c_void = var_d8[0];
        let mut rcx_1: i64 = var_d8[8];
        let rdx_3: i8 = *arg1.byte_offset(0x49);
        let rdx_4: i8 = *arg1.byte_offset(0x4a);
        let rdx_5: i64 = arg1[2];
        let rdx_6: i64 = arg1[3];
        let rdx_7: i64 = *arg1;
        let rdx_8: i64 = arg1[1];
        let rdx_9: i8 = *arg1.byte_offset(0x4b);
        r12 = 0;
        let var_1c0_1: *mut i64 = r15;
        let mut i: u32;
        
        do
        {
            let var_c8: i64;
            let var_c0: *mut i64;
            
            if ((rax_2 ^ 2) | rcx_1) != 0
            {
                var_188 = rax_2;
                let var_180_4: i64 = rcx_1;
                let var_178_4: i64 = var_c8;
                let var_170_4: *mut i64 = var_c0;
                let var_48: [i8; 0x10];
                let var_f8_1: i64 = var_48[0];
                let var_58: [i8; 0x10];
                let var_108_1: [i8; 0x10] = var_58;
                let var_68: [i8; 0x10];
                let var_118_1: [i8; 0x10] = var_68;
                let var_98: i128;
                let var_148_1: i128 = var_98;
                let var_a8: i128;
                let var_158_1: i128 = var_a8;
                let var_b8: [i8; 0x10];
                var_168 = var_b8;
                let mut rbp_1: i64;
                let mut r14_3: i64;
                let var_78: [i8; 0x10];
                
                if rdx_3 == 0
                {
                    r14_3 = r12;
                    let var_88: i128;
                    
                    if rdx_4 == 0
                    {
                        rbp_1 = var_78[0] << 9;
                    }
                    else
                    {
                        rbp_1 = *var_88[8];
                    }
                }
                else
                {
                    r14_3 = r12;
                    rbp_1 = var_78[8];
                }
                let mut r15_1: i64 = 0;
                
                if var_f8_1 == 0
                {
                    r15_1 = rbp_1;
                }
                
                if core::option::Option$LT$T$GT$::map_or::hcdde7c32e5996b93(rdx_5, rdx_6, rbp_1)
                    == 0
                {
                    r12 = var_f8_1 == 0;
                    r13 = rdx_9 == 0;
                    
                    if core::option::Option$LT$T$GT$::map_or::h49b7c3a1ba7c3f0d(rdx_7, rdx_8, 
                        var_f8_1) != 0
                    {
                        r13 |= r12;
                        
                        if r13 != 0
                        {
                            let result: *mut i128 =
                                uu_du::StatPrinter::print_stat::hc47c0332c6a0985f(arg1, &var_188, 
                                rbp_1);
                            
                            if result != 0
                            {
                                core::ptr::drop_in_place$LT$uu_du..StatPrintInfo$GT$::h4b6987c0043f7e99(&var_188);
                                return result;
                            }
                        }
                    }
                }
                
                r12 = r14_3 + r15_1;
                core::ptr::drop_in_place$LT$uu_du..StatPrintInfo$GT$::h4b6987c0043f7e99(&var_188);
                r15 = var_1c0_1;
            }
            else
            {
                let mut var_1e8: i64 = var_c8;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(var_c0[0xc](zmm0));
                let mut rax_4: i64;
                let mut rdx_12: i64;
                rax_4 = uucore::util_name::h60d842bf27b05e82();
                let mut var_e8: i64 = rax_4;
                let var_e0_1: i64 = rdx_12;
                var_1a8 = &var_e8;
                let var_1a0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
                let var_198_1: *mut i64 = &var_1e8;
                let var_190_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc201e0bc34ac3284;
                var_188 = &data_5845c8;
                let var_180_3: i64 = 3;
                var_168[0] = 0;
                let var_178_3: *mut *mut i128 = &var_1a8;
                let var_170_3: i64 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_188);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h29011716f9a6ef88(var_1e8, var_c0);
            }
            std::sync::mpmc::Receiver$LT$T$GT$::recv::h7eaaff2dc637e02c(&var_d8, r15);
            rax_2 = var_d8[0];
            rcx_1 = var_d8[8];
            zmm0 = __pcmpeqb_xmmdq_memdq(var_d8, data_40f110);
            i = _mm_movemask_epi8(zmm0);
        } while i != 0xffff;
    }
    else
    {
        r12 = 0;
    }
    
    if arg1[9] != 0
    {
        uu_du::StatPrinter::convert_size::he529e362fc7c1e00(&var_d8, arg1, r12);
        var_1a8 = &var_d8;
        let var_1a0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_188 = &data_5845f8;
        let var_180_1: i64 = 2;
        var_168[0] = 0;
        let var_178_1: *mut *mut i128 = &var_1a8;
        let var_170_1: i64 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&var_188);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&var_d8);
        var_d8[0] = arg1.byte_offset(0x4d);
        var_d8[8] = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
        var_188 = &data_40f000;
        let var_180_2: i64 = 1;
        var_168[0] = 0;
        let var_178_2: *mut i128 = &var_d8;
        let var_170_2: i64 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&var_188);
    }
    
    nullptr
}
