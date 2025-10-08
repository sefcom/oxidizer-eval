
  fn just::analyzer::Analyzer::analyze_recipe::h80a21d1680871f82(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut rbp: i64;
    let var_8: i64 = rbp;
    let mut var_b0: *mut c_void = nullptr;
    let var_a0: i64 = 0;
    let rax: i64 = *arg2.byte_offset(0x58);
    let mut var_100: i128;
    let mut var_98: i64;
    
    if rax != 0
    {
        let mut rbx_1: i64 = rax * 0xd0;
        let mut r15_2: *mut i128 = *arg2.byte_offset(0x50) + 0x80;
        rbp = 0;
        
        loop
        {
            let mut rax_1: *mut c_void;
            let mut rdx_1: u64;
            rax_1 = just::token::Token::lexeme::h66587cdf67f63270(r15_2);
            let var_a8: i64;
            
            if alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h28347c9f7522952f(
                var_b0, var_a8, rax_1, rdx_1) != 0
            {
                let mut rax_19: *mut c_void;
                let mut rdx_14: i64;
                rax_19 = just::token::Token::lexeme::h66587cdf67f63270(arg2.byte_offset(0x90));
                let mut rax_20: *mut c_void;
                let mut rdx_15: i64;
                rax_20 = just::token::Token::lexeme::h66587cdf67f63270(r15_2);
                let var_90_2: *mut c_void = rax_19;
                let var_88_2: i64 = rdx_14;
                let var_80_1: *mut c_void = rax_20;
                let var_78_1: i64 = rdx_15;
                var_98 = -0x7fffffffffffffe4;
                just::token::Token::error::h986494da066a4455(&var_100, r15_2, &var_98);
                break;
            }
            
            let mut rax_3: *mut c_void;
            let mut rdx_3: u64;
            rax_3 = just::token::Token::lexeme::h66587cdf67f63270(r15_2);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h229911f973c84f56(
                &var_b0, rax_3, rdx_3);
            let rax_4: bool = r15_2[-8] != 0x12;
            
            if ((!rbp | rax_4) & 1) != 0
            {
                rbp |= rax_4;
            }
            else if *r15_2.byte_offset(0x49) != 2
            {
                let mut rax_5: *mut c_void;
                let mut rdx_4: i64;
                rax_5 = just::token::Token::lexeme::h66587cdf67f63270(r15_2);
                let var_90_1: *mut c_void = rax_5;
                let var_88_1: i64 = rdx_4;
                var_98 = -0x7fffffffffffffcf;
                just::token::Token::error::h986494da066a4455(&var_100, r15_2, &var_98);
                break;
            }
            
            r15_2 = &r15_2[0xd];
            let temp0_1: i64 = rbx_1;
            rbx_1 -= 0xd0;
            
            if temp0_1 == 0xd0
            {
                goto 'label_655b87;
            }
        }
        
        goto 'label_655e29;
    }
    
    'label_655b87:
    let mut r15_3: *mut c_void = *arg2.byte_offset(8);
    let mut i: i64 = *arg2.byte_offset(0x10) << 5;
    let rax_7: i8 = *arg2.byte_offset(0xfe);
    
    if (rax_7 & 1) == 0
    {
        let rbx_3: *mut c_void = i + r15_3;
        let mut rax_8: i8 = 0;
        
        loop
        {
            rbp = r15_3 != rbx_3;
            
            if r15_3 == rbx_3
            {
                break;
            }
            
            if (rax_8 & 1) == 0 && *r15_3.byte_offset(0x10) != 0
            {
                let r12_1: *mut i32 = *r15_3.byte_offset(8);
                
                if *r12_1 == 0x12
                {
                    let mut rax_9: *mut c_void;
                    let mut rdx_6: i64;
                    rax_9 = just::token::Token::lexeme::h66587cdf67f63270(&r12_1[2]);
                    var_98 = 0;
                    let mut rax_10: *mut i8;
                    let mut rdx_7: u64;
                    rax_10 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x20, &var_98);
                    let rax_11: i8 =
                        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(
                        rax_9, rdx_6, rax_10, rdx_7);
                    let mut rax_13: i8;
                    
                    if rax_11 == 0
                    {
                        var_98 = 0;
                        let mut rax_12: *mut i8;
                        let mut rdx_9: u64;
                        rax_12 =
                            core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(9, &var_98);
                        rax_13 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax_9, rdx_6, rax_12, rdx_9);
                    }
                    
                    if rax_11 != 0 || rax_13 != 0
                    {
                        var_98 = -0x7fffffffffffffdd;
                        just::token::Token::error::h986494da066a4455(&var_100, &r12_1[2], &var_98);
                        goto 'label_655e29;
                    }
                }
            }
            
            let mut r14_2: i32;
            r14_2 = rbp;
            rax_8 = just::line::Line::is_continuation::h5ed80636f0322bb6(*r15_3.byte_offset(8), 
                *r15_3.byte_offset(0x10));
            r15_3 += r14_2 << 5;
        }
    }
    else
    {
        while i != 0
        {
            i -= 0x20;
            just::line::Line::is_continuation::h5ed80636f0322bb6(*r15_3.byte_offset(8), 
                *r15_3.byte_offset(0x10));
            r15_3 += 0x20;
        }
    }
    
    let mut rax_15: *mut i64;
    
    if (rax_7 & 1) == 0
    {
        rax_15 =
            just::attribute_set::AttributeSet::get::h29ad4fd4e40977f3(arg2.byte_offset(0xd8), 4);
    }
    
    if (rax_7 & 1) != 0 || rax_15 == 0
    {
        *arg1.byte_offset(0x48) = 0x25;
    }
    else
    {
        let mut rax_16: *mut c_void;
        let mut rcx_6: i64;
        let mut rdx_12: i64;
        let mut r8_1: i64;
        rax_16 = just::token::Token::lexeme::h66587cdf67f63270(arg2.byte_offset(0x90));
        _$LT$just..attribute..Attribute$u20$as$u20$core..clone..Clone$GT$::clone::hf7be862012ab759c(
            &var_100, rax_15, rdx_12, rcx_6, r8_1);
        let var_50_1: *const i8 = "Recipesrc/argument_parser.rs:: […";
        let var_48_1: i64 = 6;
        let var_40_1: *mut c_void = rax_16;
        let var_38_1: i64 = rdx_12;
        var_98 = var_100;
        let var_f0: i128;
        let mut var_88: i64;
        var_88 = var_f0;
        let var_e0: i128;
        let mut var_78: i64;
        var_78 = var_e0;
        let var_d0: i128;
        let var_68_1: i128 = var_d0;
        let var_c0: i128;
        let var_58_1: i64 = var_c0;
        just::token::Token::error::h986494da066a4455(&var_100, arg2.byte_offset(0x90), &var_98);
        'label_655e29:
        arg1[4] = var_c0;
        let zmm0_1: i128 = var_100;
        arg1[3] = var_d0;
        arg1[2] = var_e0;
        arg1[1] = var_f0;
        *arg1 = zmm0_1;
    }
    
    core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$$RF$str$GT$$GT$::h72207aaaf59d4549(&var_b0)
}
