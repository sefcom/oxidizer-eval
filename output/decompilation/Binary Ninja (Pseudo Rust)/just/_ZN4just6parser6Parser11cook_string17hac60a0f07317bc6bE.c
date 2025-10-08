
  fn just::parser::Parser::cook_string::hac60a0f07317bc6b(arg1: u64, arg2: *mut i128, arg3: i64, arg4: i64) -> i64

{
    let mut var_128: i64 = 0;
    let var_120: i64 = 1;
    let var_118: i64 = 0;
    let mut var_198: i64 = -0x7fffffffffffffff;
    let mut var_110: i64 = arg3;
    let var_108: i64 = arg4 + arg3;
    let mut rax: i8;
    let mut rdx: i32;
    rax = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_110, arg1);
    
    if (rax & 1) == 0
    {
        'label_67e231:
        *(arg1 + 0x10) = var_118;
        *arg1 = var_128;
        *(arg1 + 0x48) = 0x25;
        return core::ptr::drop_in_place$LT$just..parser..Parser..cook_string..State$GT$::h7af7b9b7073753e0(&var_198);
    }
    
    let rax_2: i64 = var_198 ^ 0x8000000000000000;
    let mut rcx_1: i64 = 3;
    
    if rax_2 < 3
    {
        rcx_1 = rax_2;
    }
    
    let mut var_190: *mut i8;
    let mut var_188: i64;
    let mut var_178: i128;
    let var_168: i128;
    let var_158: i128;
    let var_148: i128;
    let var_138: i128;
    let mut var_100: i64;
    
    match rcx_1
    {
        0 =>
        {
            'label_67e2bc:
            let rax_7: u64 = rdx - 0x5c;
            
            if rax_7 > 0x19
            {
                if rdx == 0xa
                {
                    goto 'label_67e495;
                }
                
                if rdx != 0x22
                {
                    goto 'label_67e318;
                }
                
                goto 'label_67e2ee;
            }
            
            let mut rsi_1: i32 = 0xa;
            
            match rax_7
            {
                0 =>
                {
                    'label_67e2ee:
                    rsi_1 = rdx;
                    goto 'label_67e2fc;
                }
                1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0xa | 0xb | 0xc | 0xd | 0xe | 0xf | 0x10 | 0x11
                    | 0x13 | 0x14 | 0x15 | 0x17 =>
                {
                    'label_67e318:
                    let var_f8_1: i32 = rdx;
                    var_100 = -0x7fffffffffffffd6;
                    just::token::Token::error::h986494da066a4455(&var_178, arg2, &var_100);
                    'label_67e271:
                    *(arg1 + 0x40) = var_138;
                    let zmm0_1: i128 = var_178;
                    *(arg1 + 0x30) = var_148;
                    *(arg1 + 0x20) = var_158;
                    *(arg1 + 0x10) = var_168;
                    *arg1 = zmm0_1;
                }
                0x12 =>
                {
                    goto 'label_67e2fc;
                }
                0x16 =>
                {
                    rsi_1 = 0xd;
                    'label_67e2fc:
                    alloc::string::String::push::h0ede46164189e411(&var_128, rsi_1);
                    'label_67e495:
                    core::ptr::drop_in_place$LT$just..parser..Parser..cook_string..State$GT$::h7af7b9b7073753e0(&var_198);
                    var_198 = -0x7fffffffffffffff;
                    goto 'label_67e34d;
                }
                0x18 =>
                {
                    rsi_1 = 9;
                    goto 'label_67e2fc;
                }
                0x19 =>
                {
                    core::ptr::drop_in_place$LT$just..parser..Parser..cook_string..State$GT$::h7af7b9b7073753e0(&var_198);
                    var_198 = -0x7ffffffffffffffe;
                    goto 'label_67e34d;
                }
            }
        }
        1 =>
        {
            'label_67e377:
            
            if rdx != 0x5c
            {
                alloc::string::String::push::h0ede46164189e411(&var_128, rdx);
                goto 'label_67e34d;
            }
            
            core::ptr::drop_in_place$LT$just..parser..Parser..cook_string..State$GT$::h7af7b9b7073753e0(&var_198);
            var_198 = -0x8000000000000000;
            goto 'label_67e34d;
        }
        2 =>
        {
            loop
            {
                if rdx != 0x7b
                {
                    let var_f8_2: i32 = rdx;
                    var_100 = -0x7fffffffffffffc6;
                    just::token::Token::error::h986494da066a4455(&var_178, arg2, &var_100);
                    goto 'label_67e271;
                }
                
                core::ptr::drop_in_place$LT$just..parser..Parser..cook_string..State$GT$::h7af7b9b7073753e0(&var_198);
                var_198 = 0;
                var_190 = 1;
                var_188 = 0;
                'label_67e34d:
                let mut rax_10: i8;
                rax_10 = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_110, arg1);
                
                if (rax_10 & 1) == 0
                {
                    if var_198 == -0x7fffffffffffffff
                    {
                        goto 'label_67e231;
                    }
                    
                    var_100 = -0x7fffffffffffffc2;
                    just::token::Token::error::h986494da066a4455(&var_178, arg2, &var_100);
                    goto 'label_67e271;
                }
                
                let rax_12: i64 = var_198 ^ 0x8000000000000000;
                let mut rcx_2: i64 = 3;
                
                if rax_12 < 3
                {
                    rcx_2 = rax_12;
                }
                
                match rcx_2
                {
                    0 =>
                    {
                        goto 'label_67e2bc;
                    }
                    1 =>
                    {
                        goto 'label_67e377;
                    }
                    2 =>
                    {
                        continue;
                    }
                    3 =>
                    {
                        break;
                    }
                }
            }
            
            goto 'label_67e398;
        }
        3 =>
        {
            'label_67e398:
            let mut var_f8: i32;
            
            if rdx != 0x7d
            {
                let mut rax_19: u64;
                
                if rdx - 0x30 >= 0xa
                {
                    rax_19 = rdx - 0x41;
                }
                
                if rdx - 0x30 >= 0xa && (rax_19 > 0x25 || !TEST_BITQ(0x3f0000003f, rax_19))
                {
                    let var_f8_3: i32 = rdx;
                    var_100 = -0x7fffffffffffffc7;
                    just::token::Token::error::h986494da066a4455(&var_178, arg2, &var_100);
                    goto 'label_67e271;
                }
                
                alloc::string::String::push::h0ede46164189e411(&var_198, rdx);
                
                if var_188 < 7
                {
                    goto 'label_67e34d;
                }
                
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_178, &var_198);
                let var_e8_2: i64 = var_168;
                var_f8 = var_178;
                var_100 = -0x7fffffffffffffc4;
                just::token::Token::error::h986494da066a4455(&var_178, arg2, &var_100);
                goto 'label_67e271;
            }
            
            if var_188 == 0
            {
                var_100 = -0x7fffffffffffffc5;
                just::token::Token::error::h986494da066a4455(&var_178, arg2, &var_100);
                goto 'label_67e271;
            }
            
            let mut rax_16: i32 = core::result::Result$LT$T$C$E$GT$::unwrap::hc3cafd2616de95be(
                core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(var_190, 
                var_188));
            
            if (rax_16 ^ 0xd800) - 0x110000 > 0xffef07ff
            {
                'label_67e48d:
                alloc::string::String::push::h0ede46164189e411(&var_128, rax_16);
                goto 'label_67e495;
            }
            
            let mut var_48: i128;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_48, &var_198);
            let var_38: i64;
            let var_e8_1: i64 = var_38;
            var_f8 = var_48;
            var_100 = -0x7fffffffffffffc3;
            just::token::Token::error::h986494da066a4455(&var_178, arg2, &var_100);
            rax_16 = var_178;
            let rcx_7: i8 = *var_138[8];
            
            if rcx_7 == 0x25
            {
                goto 'label_67e48d;
            }
            
            *(arg1 + 0x44) = *var_138[4];
            *(arg1 + 0x34) = var_148;
            *(arg1 + 0x24) = var_158;
            *(arg1 + 0x14) = var_168;
            let var_174: i128;
            *(arg1 + 4) = var_174;
            *(arg1 + 0x49) = *var_138[9];
            *(arg1 + 0x4c) = *var_138[0xc];
            *arg1 = rax_16;
            *(arg1 + 0x48) = rcx_7;
        }
    }
    
    core::ptr::drop_in_place$LT$just..parser..Parser..cook_string..State$GT$::h7af7b9b7073753e0(
        &var_198);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_128)
}
