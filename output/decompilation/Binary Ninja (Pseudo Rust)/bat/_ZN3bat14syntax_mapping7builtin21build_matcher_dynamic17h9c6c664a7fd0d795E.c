
  fn bat::syntax_mapping::builtin::build_matcher_dynamic::h9c6c664a7fd0d795(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> *mut i64

{
    let mut var_d8: i64 = 0;
    let var_d0: i64 = 1;
    let var_c8: i64 = 0;
    let mut var_a8: i64;
    let var_a0: i128;
    let mut rsi_3: i64;
    
    if arg3 == 0
    {
        rsi_3 = 1;
    }
    else
    {
        let mut r14_2: *mut c_void = arg2.byte_offset(8);
        let mut rbp_1: i64 = arg3 * 0x18;
        
        loop
        {
            if (*r14_2.byte_offset(-8) & 1) == 0
            {
                let rsi: i64 = *r14_2;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(&var_d8, rsi, *r14_2.byte_offset(8) + rsi);
                r14_2 += 0x18;
                let temp0_1: i64 = rbp_1;
                rbp_1 -= 0x18;
                
                if temp0_1 != 0x18
                {
                    continue;
                }
            }
            else
            {
                std::env::var::h5e55fe97aab94671(&var_a8, r14_2);
                
                if (var_a8 & 1) != 0
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h1489211aaee639b9(&var_a8);
                    goto 'label_843137;
                }
                
                let rax_1: i64 = var_a0;
                
                if rax_1 == -0x8000000000000000
                {
                    goto 'label_843137;
                }
                
                let mut var_c0: i64 = rax_1;
                let rsi_2: i64 = var_a0;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(&var_d8, rsi_2, *var_a0[8] + rsi_2);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_c0);
                r14_2 += 0x18;
                let temp1_1: i64 = rbp_1;
                rbp_1 -= 0x18;
                
                if temp1_1 != 0x18
                {
                    continue;
                }
            }
            
            rsi_3 = var_d0;
            break;
        }
    }
    
    bat::syntax_mapping::make_glob_matcher::hb323052747e788f0(&var_a8, rsi_3);
    let mut rax_2: i64 = var_a8;
    
    if rax_2 != -0x8000000000000000
    {
        let var_50: i64;
        arg1[0xb] = var_50;
        let var_60: i128;
        *arg1.byte_offset(0x48) = var_60;
        let var_70: i128;
        *arg1.byte_offset(0x38) = var_70;
        let var_80: i128;
        *arg1.byte_offset(0x28) = var_80;
        let var_90: i128;
        *arg1.byte_offset(0x18) = var_90;
        *arg1.byte_offset(8) = var_a0;
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$globset..glob..GlobMatcher$C$bat..error..Error$GT$$GT$::h20daa161d52b07ec(&var_a8);
        'label_843137:
        rax_2 = -0x8000000000000000;
    }
    
    *arg1 = rax_2;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_d8);
    arg1
}
