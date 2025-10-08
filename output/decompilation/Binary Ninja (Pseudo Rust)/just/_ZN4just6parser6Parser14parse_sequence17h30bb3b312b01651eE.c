
  fn just::parser::Parser::parse_sequence::h30bb3b312b01651e(arg1: *mut i8, arg2: *mut c_void) -> u64

{
    let mut var_130: i64;
    just::parser::Parser::presume::he2055272497a907b(&var_130, arg2, 0x1c);
    let result_2: i8;
    let mut result: u64 = result_2;
    let var_128: i128;
    let var_118: i128;
    let var_108: i128;
    let var_f8: i64;
    let var_f0: i8;
    let var_ef: i32;
    let var_e7: i32;
    let var_e4: i32;
    
    if result != 0x25
    {
        let rcx_3: i64 = var_130;
        let var_188_1: i32 = var_ef;
        *arg1.byte_offset(0x4c) = var_e4;
        *arg1.byte_offset(0x49) = var_e7;
        *arg1.byte_offset(0x44) = var_ef;
        *arg1.byte_offset(0x41) = var_ef;
        *arg1 = rcx_3;
        *arg1.byte_offset(8) = var_128;
        *arg1.byte_offset(0x18) = var_118;
        *arg1.byte_offset(0x28) = var_108;
        *arg1.byte_offset(0x38) = var_f8;
        arg1[0x40] = var_f0;
        arg1[0x48] = result;
    }
    else
    {
        let mut var_1a0: i64 = 0;
        let var_198_1: i64 = 8;
        let result_1: u64 = 0;
        
        loop
        {
            if just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x1d) != 0
            {
                'label_67ebdd:
                just::parser::Parser::expect::h35e1151927597ac7(&var_130, arg2, 0x1d);
                
                if result_2 == 0x25
                {
                    result = result_1;
                    *arg1.byte_offset(0x10) = result;
                    *arg1 = var_1a0;
                    arg1[0x48] = 0x25;
                    break;
                }
                
                let rcx_4: i64 = var_130;
                let var_188_2: i32 = var_ef;
                *arg1.byte_offset(0x4c) = var_e4;
                *arg1.byte_offset(0x49) = var_e7;
                *arg1.byte_offset(0x44) = var_ef;
                *arg1.byte_offset(0x41) = var_ef;
                *arg1 = rcx_4;
                *arg1.byte_offset(8) = var_128;
                *arg1.byte_offset(0x18) = var_118;
                *arg1.byte_offset(0x28) = var_108;
                *arg1.byte_offset(0x38) = var_f8;
                arg1[0x40] = var_f0;
                arg1[0x48] = result_2;
            }
            else
            {
                just::parser::Parser::parse_expression::h8b701a5fe27dff96(&var_130, arg2);
                let rax_1: i64 = var_130;
                let zmm3_1: i128 = var_f8;
                let mut var_188: i32;
                var_188 = var_128;
                let var_148_1: i128 = result_2;
                
                if rax_1 == 0x12
                {
                    *arg1.byte_offset(0x40) = var_148_1;
                    *arg1.byte_offset(0x30) = zmm3_1;
                    *arg1.byte_offset(0x20) = var_108;
                    *arg1.byte_offset(0x10) = var_118;
                    *arg1 = var_188;
                }
                else
                {
                    let var_b8: i64;
                    let var_38_1: i64 = var_b8;
                    let var_c8: i128;
                    let var_48_1: i128 = var_c8;
                    let var_d8: i128;
                    let var_58_1: i128 = var_d8;
                    let mut var_b0: i64 = rax_1;
                    let var_68_1: i128 = var_148_1;
                    let var_78_1: i128 = zmm3_1;
                    let var_88_1: i128 = var_108;
                    let var_98_1: i128 = var_118;
                    let var_a8_1: i128 = var_188;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::he19d83f3939ac21c(&var_1a0, &var_b0);
                    just::parser::Parser::accepted::h762a87b5f98dff30(&var_130, arg2, 0xf);
                    let rax_2: i8 = var_130;
                    
                    if result_2 != 0x25
                    {
                        *arg1.byte_offset(0x40) = var_f0;
                        let zmm0_3: i128 = *var_130[1];
                        *arg1.byte_offset(0x31) = var_108;
                        *arg1.byte_offset(0x21) = var_118;
                        *arg1.byte_offset(0x11) = var_128;
                        *arg1.byte_offset(1) = zmm0_3;
                        *arg1.byte_offset(0x49) = var_e7;
                        *arg1.byte_offset(0x4c) = var_e4;
                        *arg1 = rax_2;
                        arg1[0x48] = result_2;
                    }
                    else
                    {
                        if (rax_2 & 1) == 0
                        {
                            goto 'label_67ebdd;
                        }
                        
                        continue;
                    }
                }
            }
            
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..expression..Expression$GT$$GT$::hd865f9e8bf24b460(&var_1a0);
        }
    }
    result
}
