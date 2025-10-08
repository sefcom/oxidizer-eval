
  fn just::parser::Parser::parse_disjunct::h236ac2fbfe4c77df(arg1: *mut i64, arg2: *mut c_void) -> u64

{
    let mut var_208: i64;
    let mut result: u64 = just::parser::Parser::parse_conjunct::hbe3e06ad6ae14250(&var_208, arg2);
    let mut r12: i64 = var_208;
    let var_200: i128;
    let var_1f0: i128;
    let var_1e0: i128;
    let var_1d0: i128;
    let var_1c0: i128;
    
    if r12 != 0x12
    {
        let mut var_188: i64 = r12;
        just::parser::Parser::accepted::h762a87b5f98dff30(&var_208, arg2, 0);
        let rax_1: i8 = var_208;
        let rcx_1: i8 = var_1c0;
        
        if rcx_1 != 0x25
        {
            arg1[9] = *var_1d0[8];
            let zmm0_1: i128 = *var_208[1];
            *arg1.byte_offset(0x39) = var_1e0;
            *arg1.byte_offset(0x29) = var_1f0;
            *arg1.byte_offset(0x19) = var_200;
            *arg1.byte_offset(9) = zmm0_1;
            *arg1.byte_offset(0x51) = *var_1c0[1];
            *arg1.byte_offset(0x54) = *var_1c0[4];
            arg1[1] = rax_1;
            arg1[0xa] = rcx_1;
            *arg1 = 0x12;
            return core::ptr::drop_in_place$LT$just..expression..Expression$GT$::hb406b3c1dd72713e(
                &var_188);
        }
        
        let mut var_108: i128;
        let mut var_f8: i128;
        let mut var_e8: i128;
        let mut var_d8: i128;
        let mut var_c8: i128;
        let mut var_b8: i128;
        let mut result_1: u64;
        let mut rax_4: u64;
        let mut r15_1: u64;
        let var_1b0: i128;
        let var_1a0: i128;
        let result_2: u64;
        
        if (rax_1 & 1) == 0
        {
            r15_1 = var_200;
            rax_4 = *var_200[8];
            var_108 = var_1f0;
            var_f8 = var_1e0;
            var_e8 = var_1d0;
            var_d8 = var_1c0;
            var_c8 = var_1b0;
            var_b8 = var_1a0;
            result_1 = result_2;
        }
        else
        {
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hdc60f8c84685f8f9(
                arg2.byte_offset(0x68), 1);
            var_208 = var_188;
            let rax_2: u64 = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_208);
            r15_1 = rax_2;
            let mut var_210: u64 = rax_2;
            just::parser::Parser::parse_disjunct::h236ac2fbfe4c77df(&var_208, arg2);
            let rax_3: i64 = var_208;
            
            if rax_3 == 0x12
            {
                *arg1.byte_offset(0x48) = var_1c0;
                *arg1.byte_offset(0x38) = var_1d0;
                *arg1.byte_offset(0x28) = var_1e0;
                *arg1.byte_offset(0x18) = var_1f0;
                *arg1.byte_offset(8) = var_200;
                *arg1 = 0x12;
                return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$just..expression..Expression$GT$$GT$::h95e5d821ad53849f(&var_210);
            }
            
            let result_3: u64 = result_2;
            let var_38_1: i128 = var_1a0;
            let var_48_1: i128 = var_1b0;
            let mut var_a0: i64 = rax_3;
            let var_98_1: i128 = var_200;
            let var_88_1: i128 = var_1f0;
            let var_78_1: i128 = var_1e0;
            let var_68_1: i128 = var_1d0;
            let var_58_1: i128 = var_1c0;
            rax_4 = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_a0);
            r12 = 7;
        }
        *arg1 = r12;
        arg1[1] = r15_1;
        arg1[2] = rax_4;
        *arg1.byte_offset(0x18) = var_108;
        *arg1.byte_offset(0x28) = var_f8;
        *arg1.byte_offset(0x38) = var_e8;
        *arg1.byte_offset(0x48) = var_d8;
        *arg1.byte_offset(0x58) = var_c8;
        *arg1.byte_offset(0x68) = var_b8;
        result = result_1;
        arg1[0xf] = result;
    }
    else
    {
        *arg1.byte_offset(0x48) = var_1c0;
        *arg1.byte_offset(0x38) = var_1d0;
        *arg1.byte_offset(0x28) = var_1e0;
        *arg1.byte_offset(0x18) = var_1f0;
        *arg1.byte_offset(8) = var_200;
        *arg1 = 0x12;
    }
    result
}
