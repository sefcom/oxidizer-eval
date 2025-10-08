
  fn just::parser::Parser::parse_alias::h6cb13903fa7449d5(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i64) -> i64

{
    let mut var_158: i128;
    just::parser::Parser::presume_keyword::heb52d8ab9717d87e(&var_158, arg2, 0);
    let mut var_110: i8;
    let mut var_148: i128;
    let var_138: i128;
    let var_128: i128;
    let var_118: i128;
    
    if var_110 != 0x25
    {
        *arg1.byte_offset(0x48) = var_118;
        let zmm0: i128 = var_158;
        *arg1.byte_offset(0x38) = var_128;
        *arg1.byte_offset(0x28) = var_138;
        *arg1.byte_offset(0x18) = var_148;
        *arg1.byte_offset(8) = zmm0;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        just::parser::Parser::parse_name::he2804e36e47b7e10(&var_158, arg2);
        let mut rax_1: i8 = var_110;
        let mut var_d8_1: i128 = var_158;
        let mut var_c8_1: i128 = var_148;
        let mut var_b8_1: i128 = var_138;
        let mut var_a8_1: i128 = var_128;
        let mut var_98_1: i64 = var_118;
        let var_10f: i32;
        let mut rcx_3: i32;
        
        if rax_1 != 0x25
        {
            rcx_3 = var_10f;
            *arg1.byte_offset(0x54) = var_10f;
            'label_67a378:
            *arg1.byte_offset(0x51) = rcx_3;
            *arg1.byte_offset(0x48) = var_98_1;
            *arg1.byte_offset(0x38) = var_a8_1;
            *arg1.byte_offset(0x28) = var_b8_1;
            *arg1.byte_offset(0x18) = var_c8_1;
            *arg1.byte_offset(8) = var_d8_1;
            arg1[5] = rax_1;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            let mut var_68: i128 = var_d8_1;
            just::parser::Parser::presume_any::hdb874b0785d8f9b5(&var_158, arg2);
            
            if var_110 != 0x25
            {
                let rcx_5: i64 = var_158;
                let zmm0_2: i128 = var_158;
                var_d8_1 = *var_118[1];
                *var_d8_1[3] = *var_118[4];
                *arg1.byte_offset(0x54) = var_10f;
                *arg1.byte_offset(0x51) = var_10f;
                *arg1.byte_offset(0x4c) = *var_d8_1[3];
                *arg1.byte_offset(0x49) = var_d8_1;
                *arg1.byte_offset(8) = rcx_5;
                arg1[1] = zmm0_2;
                arg1[2] = var_148;
                arg1[3] = var_138;
                arg1[4] = *var_128[8];
                *arg1.byte_offset(0x48) = var_118;
                arg1[5] = var_110;
                *arg1 = -0x8000000000000000;
            }
            else
            {
                just::parser::Parser::parse_namepath::hf7b725240a87d50f(&var_158, arg2);
                rax_1 = var_110;
                
                if rax_1 != 0x25
                {
                    var_98_1 = var_118;
                    var_a8_1 = var_128;
                    var_b8_1 = var_138;
                    var_c8_1 = var_148;
                    var_d8_1 = var_158;
                    *arg1.byte_offset(0x54) = var_10f;
                    rcx_3 = var_10f;
                    goto 'label_67a378;
                }
                
                let mut var_88: i128 = var_158;
                just::parser::Parser::expect_eol::h0cc9a2a21fbfd19f(&var_158, arg2);
                let mut zmm0_3: i128;
                
                if var_110 == 0x25
                {
                    just::attribute_set::AttributeSet::ensure_valid_attributes::h6f0be17f12135348(
                        &var_158, arg3, "AliasAssignmentxError getting cu…", 5, &var_68, 
                        &data_4715f0, 1);
                    
                    if var_110 == 0x25
                    {
                        var_148 = var_148;
                        var_158 = var_88;
                        let var_f8: i128 = *arg3;
                        let rax_5: i64 = arg3[2];
                        zmm0_3 = var_68;
                        var_110 = var_a8_1;
                        arg1[1] = zmm0_3;
                        *arg1.byte_offset(0x18) = *zmm0_3[8];
                        arg1[2] = var_c8_1;
                        arg1[3] = var_b8_1;
                        arg1[4] = var_118;
                        arg1[7] = rax_5;
                        zmm0_3 = var_158;
                        arg1[6] = var_f8;
                        let result: i64;
                        arg1[5] = result;
                        *arg1.byte_offset(0x58) = var_98_1;
                        *arg1 = zmm0_3;
                        return result;
                    }
                }
                
                *arg1.byte_offset(0x48) = var_118;
                zmm0_3 = var_158;
                *arg1.byte_offset(0x38) = var_128;
                *arg1.byte_offset(0x28) = var_138;
                *arg1.byte_offset(0x18) = var_148;
                *arg1.byte_offset(8) = zmm0_3;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$just..namepath..Namepath$GT$::h15a9b2a7c35752fb(
                    &var_88);
            }
        }
    }
    /* tailcall */
    core::ptr::drop_in_place$LT$just..attribute_set..AttributeSet$GT$::he9a7d0819ed0965d(arg3)
}
