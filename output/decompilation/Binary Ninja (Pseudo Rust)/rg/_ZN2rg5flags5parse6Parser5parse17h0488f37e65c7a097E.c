
  fn rg::flags::parse::Parser::parse::h0488f37e65c7a097(arg1: *mut c_void, arg2: *mut i128, arg3: *mut c_void) -> u64

{
    let mut var_a0: ();
    lexopt::Parser::from_args::h0672b9c2090e5111(&var_a0, arg2);
    let mut result: u64;
    
    loop
    {
        let mut var_1d8: *mut i128;
        lexopt::Parser::next::hc49319300755d21c(&var_1d8, &var_a0);
        let mut var_1a8: *mut i128;
        anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h4b1e1c7efc452428(&var_1a8, &var_1d8);
        let rax_1: *mut i128 = var_1a8;
        let result_1: u64;
        result = result_1;
        
        if rax_1 == -0x7ffffffffffffffe
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$lexopt..Arg$GT$$GT$::h43c209b804256533(-0x7ffffffffffffffe, result);
            result = 0;
            break;
        }
        
        if rax_1 == -0x7ffffffffffffffd
        {
            break;
        }
        
        let mut rcx_1: i64 = rax_1 ^ 0x8000000000000000;
        
        if rcx_1 >= 2
        {
            rcx_1 = 2;
        }
        
        let var_198: u64;
        let mut var_108: i64;
        let mut rdx_1: u64;
        
        if rcx_1 == 0
        {
            rcx_1 = 2;
            
            if result == 0x56
            {
                *arg3.byte_offset(0x25b) = rcx_1;
                continue;
            }
            else if result == 0x68
            {
                *arg3.byte_offset(0x25b) = 0;
                continue;
            }
            else
            {
                rdx_1 =
                    rg::flags::parse::Parser::find_short::hda7dafb57b35a0a1(&var_108, arg1, result);
            }
        }
        else if rcx_1 != 1
        {
            let mut var_d0: *mut i128 = rax_1;
            let result_2: u64 = result;
            let var_c0_1: u64 = var_198;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdc4d760cd0497775(arg3.byte_offset(0xb0), &var_d0);
            continue;
        }
        else
        {
            let mut rax_2: i8;
            rax_2 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he06c06f1bb3e32fe(result, var_198, "help*.br*.bx*.fs*.po*.rerubysass…", 4);
            rcx_1 = 1;
            
            if rax_2 != 0
            {
                *arg3.byte_offset(0x25b) = rcx_1;
                continue;
            }
            else
            {
                let mut rax_3: i8;
                rax_3 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he06c06f1bb3e32fe(result, var_198, "versionPrint ripgrep's version.\n…", 7);
                rcx_1 = 3;
                
                if rax_3 != 0
                {
                    *arg3.byte_offset(0x25b) = rcx_1;
                    continue;
                }
                else
                {
                    rdx_1 = rg::flags::parse::Parser::find_long::h9dc8bf2eec00e1d3(&var_108, arg1, 
                        result, var_198);
                }
            }
        }
        
        let mut rax_5: i64 = var_108 ^ 0x8000000000000000;
        
        if rax_5 >= 2
        {
            rax_5 = 2;
        }
        
        let var_100: *mut i64;
        
        if rax_5 != 0
        {
            let mut var_168: i32;
            
            if rax_5 != 2
            {
                var_168 = var_100;
                var_1a8 = &var_168;
                let var_1a0_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                    _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                var_1d8 = &data_7eb568;
                let var_1d0_4: i64 = 1;
                let var_1b8_4: i64 = 0;
                let var_1c8_5: *mut i64 = &var_1a8;
                let var_1c0_4: i64 = 1;
                result = anyhow::__private::format_err::hd87f3faee3401bd9(&var_1d8);
            }
            else
            {
                let var_f8: i64;
                let var_118_1: i64 = var_f8;
                let mut var_128: i128 = var_108;
                var_168 = &var_128;
                let var_160_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_1d8 = &data_7eb578;
                let var_1d0_1: i64 = 1;
                let var_1b8_1: i64 = 0;
                let var_1c8_2: *mut i32 = &var_168;
                let var_1c0_1: i64 = 1;
                core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_1a8, 0, rdx_1, 
                    &var_1d8);
                let mut var_188: i128 = var_1a8;
                let var_178_1: u64 = var_198;
                let mut var_e8: i64;
                let rdx_9: u64 = rg::flags::parse::suggest::h8bc4584f133c33af(&var_e8);
                
                if var_e8 != -0x8000000000000000
                {
                    let var_d8: i64;
                    let var_158_1: i64 = var_d8;
                    var_168 = var_e8;
                    var_1a8 = &var_188;
                    let var_1a0: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    let var_198_1: *mut i32 = &var_168;
                    let var_190_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    var_1d8 = &data_7eb588;
                    let var_1d0_2: i64 = 2;
                    let var_1b8_2: i64 = 0;
                    let var_1c8_3: *mut i64 = &var_1a8;
                    let var_1c0_2: i64 = 2;
                    let mut var_b8: i128;
                    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_b8, 0, 
                        rdx_9, &var_1d8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(
                        &var_188);
                    let var_a8: i64;
                    let var_178_2: i64 = var_a8;
                    var_188 = var_b8;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(
                        &var_168);
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h21c1035d1def9f19(&var_e8);
                }
                
                var_1a8 = &var_188;
                let var_1a0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_1d8 = &data_462330;
                let var_1d0_3: i64 = 1;
                let var_1b8_3: i64 = 0;
                let var_1c8_4: *mut i64 = &var_1a8;
                let var_1c0_3: i64 = 1;
                result = anyhow::__private::format_err::hd87f3faee3401bd9(&var_1d8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_188);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_128);
            }
            break;
        }
        
        let mut var_130: *mut i64 = var_100;
        let mut var_148: u64;
        let mut var_140: u64;
        let mut rcx_4: *mut i128;
        let mut rdx_3: u64;
        let mut rsi_6: u64;
        
        if var_100[4] != 1
        {
            result = 1;
            rcx_4 = -0x8000000000000000;
            rdx_3 = var_140;
            rsi_6 = var_148;
            
            if (*(var_100[1] + 0x20))(*var_100) == 0
            {
                lexopt::Parser::value::h820b75269adc78fe(&var_1d8, &var_a0);
                anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::h905e01b86d138568(&var_1a8, &var_1d8, &var_130);
                rcx_4 = var_1a8;
                result = result_1;
                
                if rcx_4 == -0x8000000000000000
                {
                    break;
                }
                
                rdx_3 = var_198;
                rsi_6 = result >> 8;
            }
        }
        else
        {
            result = 0;
            rcx_4 = -0x8000000000000000;
            rdx_3 = var_140;
            rsi_6 = var_148;
        }
        
        let rdi_11: i64 = *var_100;
        let rax_8: i64 = var_100[1];
        var_1d8 = rcx_4;
        let mut var_1d0: i64;
        var_1d0 = result;
        *var_1d0[7] = rsi_6 >> 0x30;
        *var_1d0[5] = rsi_6 >> 0x20;
        var_148 = rsi_6;
        *var_1d0[1] = rsi_6;
        var_140 = rdx_3;
        let var_1c8_1: u64 = rdx_3;
        let mut rax_9: i64;
        let mut rdx_7: u64;
        rax_9 = (*(rax_8 + 0x78))(rdi_11, &var_1d8, arg3);
        let result_3: u64 = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::h603c1890003acd97(rax_9, &var_130, rdx_7);
        result = result_3;
        
        if result_3 != 0
        {
            break;
        }
    }
    
    core::ptr::drop_in_place$LT$lexopt..Parser$GT$::h4bbc741db050bed7(&var_a0);
    result
}
