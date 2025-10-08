
  fn just::evaluator::Evaluator::evaluate_line::hdd6d3ca4461d16bf(arg1: *mut i8, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i8) -> i64

{
    let mut var_108: i64 = 0;
    let var_100: i64 = 1;
    let result: i64 = 0;
    let mut var_d0: i64 = arg3;
    let var_c8: i64 = (arg4 << 7) + arg3;
    let var_c0: i64 = 0;
    let mut rax: i64;
    let mut i: *mut i32;
    rax = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he3b34ff9b5c4663a(&var_d0);
    
    if i != 0
    {
        let mut rbx_1: i64 = rax;
        
        do
        {
            let mut rdi_7: *mut i8;
            let mut var_98: i8;
            let var_90: i64;
            let var_88: i64;
            
            if *i != 0x12
            {
                just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&var_98, arg2, 
                    i);
                let rax_5: i8 = var_98;
                
                if rax_5 != 0x38
                {
                    let var_38: i64;
                    *arg1.byte_offset(0x60) = var_38;
                    let var_48: i128;
                    *arg1.byte_offset(0x50) = var_48;
                    let var_58: i128;
                    *arg1.byte_offset(0x40) = var_58;
                    let var_68: i128;
                    *arg1.byte_offset(0x30) = var_68;
                    let var_78: i128;
                    *arg1.byte_offset(0x20) = var_78;
                    *arg1.byte_offset(0x10) = var_88;
                    let var_97: i128;
                    *arg1.byte_offset(1) = var_97;
                    *arg1 = rax_5;
                    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                        &var_108);
                }
                
                let mut var_a9: i128;
                let var_80: i64;
                *var_a9[8] = var_80;
                let mut var_e8: i128 = var_90;
                let rdx_5: i64 = *var_a9[8];
                let var_d8_1: i64 = rdx_5;
                let rsi_4: i64 = *var_e8[8];
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_108, rsi_4, rdx_5 + rsi_4);
                rdi_7 = &var_e8;
            }
            else
            {
                let mut rax_2: *mut c_void;
                let mut rdx_1: i64;
                rax_2 = just::token::Token::lexeme::h66587cdf67f63270(&i[2]);
                alloc::str::_$LT$impl$u20$str$GT$::replace::h89cd4697c7693803(&var_98, rax_2, 
                    rdx_1, "{{{{Q", 4, "{{missing parameter without defa…", 2);
                let mut rsi_1: i64 = var_90;
                let mut rdx_4: i64;
                
                if (arg5 & rbx_1 == 0) == 0
                {
                    rdx_4 = var_88 + rsi_1;
                }
                else
                {
                    let mut rax_4: i64;
                    let mut rdx_3: i64;
                    rax_4 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h646b688298f76263(
                        rsi_1, var_88);
                    rsi_1 = rax_4;
                    rdx_4 = rdx_3 + rax_4;
                }
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_108, rsi_1, rdx_4);
                rdi_7 = &var_98;
            }
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(rdi_7);
            let mut rax_1: i64;
            rax_1 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he3b34ff9b5c4663a(&var_d0);
            rbx_1 = rax_1;
        } while i != 0;
    }
    
    *arg1.byte_offset(0x18) = result;
    *arg1.byte_offset(8) = var_108;
    *arg1 = 0x38;
    result
}
