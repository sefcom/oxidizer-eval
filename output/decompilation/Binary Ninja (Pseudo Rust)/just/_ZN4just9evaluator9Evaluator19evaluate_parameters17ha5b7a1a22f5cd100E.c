
  fn just::evaluator::Evaluator::evaluate_parameters::ha5b7a1a22f5cd100(arg1: *mut i8, arg2: *mut i128, arg3: i8, arg4: *mut c_void, arg5: i64, arg6: *mut c_void, arg7: i64, arg8: i64) -> i64

{
    let mut r13: *mut c_void = arg4;
    let var_78: i64 = 0;
    let mut zmm1: i128 = arg2[1];
    let mut var_98: i128 = *arg2;
    let var_88: i128 = zmm1;
    let var_50: i8 = arg3;
    let mut var_70: i64 = 0;
    let var_60: i64 = 0;
    let var_58: i64 = arg8;
    let mut var_150: i64 = 0;
    let var_148: i64 = 8;
    let result: i64 = 0;
    let mut var_138: i128;
    
    if arg7 != 0
    {
        let mut r15_1: *mut c_void = arg6;
        let mut rbx_1: i64 = arg5;
        let rax_2: *mut c_void = (arg7 * 0xd0).byte_offset(arg6);
        let mut rax_3: *mut c_void = arg6.byte_offset(0xd0);
        let mut rcx_2: *mut c_void;
        
        do
        {
            let mut var_128: i128;
            let mut var_118: i128;
            let mut var_f8: i128;
            let mut var_e8: i128;
            let mut var_d8: i64;
            let mut rbp_1: i64;
            let mut rsi_3: i64;
            let mut r14_1: i64;
            let mut var_178: i64;
            let mut var_170: i64;
            let mut var_168: i64;
            
            if rbx_1 == 0
            {
                if *r15_1 != 0x12
                {
                    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_138, 
                        &var_98, r15_1);
                    let rax_5: i8 = var_138;
                    
                    if rax_5 != 0x38
                    {
                        *var_170[7] = var_128;
                        var_178 = var_138;
                        *arg1.byte_offset(0x60) = var_d8;
                        *arg1.byte_offset(0x50) = var_e8;
                        *arg1.byte_offset(0x40) = var_f8;
                        let var_108: i64;
                        *arg1.byte_offset(0x30) = var_108;
                        *arg1.byte_offset(0x20) = var_118;
                        *arg1.byte_offset(0x10) = *var_170[7];
                        *arg1.byte_offset(1) = var_178;
                        *arg1 = rax_5;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_150);
                        return core::ptr::drop_in_place$LT$just..evaluator..Evaluator$GT$::he8a263daf6e01e97(&var_98);
                    }
                    
                    var_168 = *var_128[8];
                    *var_178[7] = var_138;
                    let mut var_c8: i128 = *var_178[7];
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_138, &var_c8);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_150, &var_138);
                    rbp_1 = var_c8;
                    rsi_3 = *var_c8[8];
                    r14_1 = var_168;
                }
                else
                {
                    if *r15_1.byte_offset(0xc9) != 2
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_138, "missing parameter without defaul…", 0x21);
                        var_138 = var_138;
                        *var_128[7] = var_128;
                        *arg1 = 0x1d;
                        let rax_11: i64 = *var_138[0xf];
                        *arg1.byte_offset(1) = var_138;
                        *arg1.byte_offset(0x10) = rax_11;
                        *arg1.byte_offset(0x18) = *var_128[7];
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_150);
                        return core::ptr::drop_in_place$LT$just..evaluator..Evaluator$GT$::he8a263daf6e01e97(&var_98);
                    }
                    
                    rsi_3 = 1;
                    rbp_1 = 0;
                    r14_1 = 0;
                }
                
                rbx_1 = 0;
            }
            else if *r15_1.byte_offset(0xc9) != 1
            {
                let mut i: *mut c_void = nullptr;
                
                do
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_138, i.byte_offset(r13));
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_150, &var_138);
                    i += 0x18;
                } while rbx_1 * 0x18 != i;
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h43b71247e42c11ac(&var_178, r13, rbx_1);
                alloc::str::join_generic_copy::haa9e8db24d47c2b5(&var_138, var_170, var_168, 
                    " [private]\nexport no entry foun…", 1);
                rbp_1 = var_138;
                let rbx_3: i64 = *var_138[8];
                r14_1 = var_128;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&var_178);
                rsi_3 = rbx_3;
                r13 = 8;
                rbx_1 = 0;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_178, r13);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_138, &var_178);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_150, &var_138);
                rbx_1 -= 1;
                r13 += 0x18;
                rbp_1 = var_178;
                rsi_3 = var_170;
                r14_1 = var_168;
            }
            *var_e8[8] = *r15_1.byte_offset(0xc0);
            var_f8 = *r15_1.byte_offset(0xb0);
            let var_100_1: i128 = *r15_1.byte_offset(0xa0);
            var_118 = *r15_1.byte_offset(0x90);
            var_128 = *r15_1.byte_offset(0x80);
            *var_d8[4] = 0;
            *var_d8[5] = *r15_1.byte_offset(0xc8);
            var_d8 = 0;
            *var_d8[6] = 0;
            var_138 = rbp_1;
            *var_138[8] = rsi_3;
            var_128 = r14_1;
            just::scope::Scope::bind::h2017080dbe33bcde(&var_70, &var_138);
            rcx_2 = rax_3;
            rax_3 = rcx_2.byte_offset(0xd0);
            r15_1 = rcx_2;
            
            if rcx_2 == rax_2
            {
                rax_3 = rcx_2;
            }
        } while rcx_2 != rax_2;
    }
    
    let zmm0: i128 = var_70;
    zmm1 = var_60;
    let var_128_1: i128 = zmm1;
    var_138 = zmm0;
    let zmm2: i128 = var_150;
    let var_118_1: i128 = zmm2;
    let result_1: i64 = result;
    *arg1.byte_offset(0x38) = result;
    *arg1.byte_offset(0x28) = zmm2;
    *arg1.byte_offset(0x18) = zmm1;
    *arg1.byte_offset(8) = zmm0;
    *arg1 = 0x38;
    result
}
