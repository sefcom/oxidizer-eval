
  fn ruff_python_formatter::main::h360c9c830162eba8() -> *mut i8

{
    let mut var_68: ();
    let rdx: u64 = clap_builder::derive::Parser::parse::hb67efa6497466508(&var_68);
    let var_58: i64;
    let mut result: *mut i8;
    let mut var_b8: *mut i64;
    let mut var_a0: *mut i64;
    let result_2: *mut i8;
    let var_90: u64;
    let mut var_4b: i8;
    
    if var_58 == 0
    {
        let rax_6: i8 = var_4b;
        
        if rax_6 == 2 || (rax_6 & 1) != 0
        {
            ruff_python_formatter::read_from_stdin::hb66a960b14556087(&var_a0);
            let r14_2: *mut i64 = var_a0;
            result = result_2;
            
            if -(r14_2) != -0x8000000000000000
            {
                let result_5: *mut i8 = result;
                ruff_python_formatter::cli::format_and_debug_print::hafab07a4cadcab9d(&var_a0, 
                    result, var_90, &var_68, "stdin.pyrevision'assert");
                let r12_2: *mut i64 = var_a0;
                result = result_2;
                
                if r12_2 == -0x8000000000000000
                {
                    goto 'label_6d0516;
                }
                
                let var_50: i8;
                let mut result_7: u64;
                
                if var_50 != 0
                {
                    if alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h4466dd4b5091c714(result, var_90, result_5, var_90) == 0
                    {
                        var_a0 = &data_97a3f8;
                        let var_98_1: i64 = 1;
                        let var_90_2: i64 = 8;
                        let mut var_88: i64;
                        var_88 = {0};
                        result_7 = anyhow::__private::format_err::hd87f3faee3401bd9(&var_a0);
                    }
                    else
                    {
                        result_7 = 0;
                    }
                    
                    goto 'label_6d050e;
                }
                
                std::io::stdio::stdout::hb6a8e10bcccf3287();
                var_a0 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                var_b8 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_a0);
                let rax_13: ssize_t = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_b8, result, var_90);
                
                if rax_13 == 0
                {
                    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::he9349647b3a206e2(
                        var_b8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e6d45d9886d7667(r12_2, 
                        result);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e6d45d9886d7667(r14_2, 
                        result_5);
                    result = nullptr;
                }
                else
                {
                    result_7 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h253cebc4b374091a(rax_13);
                    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::he9349647b3a206e2(
                        var_b8);
                    'label_6d050e:
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e6d45d9886d7667(r12_2, 
                        result);
                    result = result_7;
                    'label_6d0516:
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e6d45d9886d7667(r14_2, 
                        result_5);
                }
            }
        }
        else
        {
            var_b8 = &var_4b;
            let var_b0: fn(arg1: *mut i8, arg2: *mut i8) -> u64 = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h0954651f0660b224;
            var_a0 = &data_97a3e8;
            let var_98: i64 = 1;
            let var_80_1: i64 = 0;
            let var_90_1: *mut *mut i64 = &var_b8;
            let var_88_1: i64 = 1;
            let mut var_48: ();
            core::option::Option$LT$T$GT$::map_or_else::h34ac8ae5550a3ffb(&var_48, 0, rdx, &var_a0);
            result =
                anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h4afbb69447b685e5(&var_48);
        }
    }
    else
    {
        let var_60: *mut c_void;
        let mut r12_1: *mut c_void = var_60;
        let mut rbx_1: i64 = var_58 * 0x18;
        let mut result_3: *mut i8;
        let mut r14_1: *mut i64;
        
        loop
        {
            std::fs::read_to_string::h41eae1eb6c2775c1(&var_a0, r12_1);
            anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::h652c53f0156db4f6(&var_b8, &var_a0, *r12_1.byte_offset(8), *r12_1.byte_offset(0x10));
            r14_1 = var_b8;
            let result_1: *mut i8;
            result = result_1;
            
            if r14_1 == -0x8000000000000000
            {
                goto 'label_6d0526;
            }
            
            result_3 = result;
            let var_a8: i64;
            ruff_python_formatter::cli::format_and_debug_print::hafab07a4cadcab9d(&var_a0, result, 
                var_a8, &var_68, *r12_1.byte_offset(8));
            let rbp_1: *mut i64 = var_a0;
            result = result_2;
            
            if rbp_1 != -0x8000000000000000
            {
                let rax_2: i8 = var_4b;
                
                if rax_2 == 2 || (rax_2 & 1) == 0
                {
                    let result_4: u64 = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::hb6ea084bb847c06d(std::fs::write::h0d1ce5070c5f0cf0(r12_1, result), 
                        *r12_1.byte_offset(8), *r12_1.byte_offset(0x10));
                    
                    if result_4 == 0
                    {
                        goto 'label_6d0256;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e6d45d9886d7667(rbp_1, 
                        result);
                    result = result_4;
                }
                else
                {
                    std::io::stdio::stdout::hb6a8e10bcccf3287();
                    var_a0 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                    var_b8 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_a0);
                    let rax_4: ssize_t = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_b8, result, var_90);
                    
                    if rax_4 != 0
                    {
                        let result_6: u64 = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h253cebc4b374091a(rax_4);
                        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::he9349647b3a206e2(var_b8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e6d45d9886d7667(
                            rbp_1, result);
                        result = result_6;
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::he9349647b3a206e2(var_b8);
                        'label_6d0256:
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e6d45d9886d7667(
                            rbp_1, result);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e6d45d9886d7667(
                            r14_1, result_3);
                        r12_1 += 0x18;
                        let temp1_1: i64 = rbx_1;
                        rbx_1 -= 0x18;
                        
                        if temp1_1 != 0x18
                        {
                            continue;
                        }
                        
                        result = nullptr;
                        goto 'label_6d0526;
                    }
                }
            }
            
            break;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e6d45d9886d7667(r14_1, result_3);
    }
    'label_6d0526:
    core::ptr::drop_in_place$LT$ruff_python_formatter..cli..Cli$GT$::h0f3c9660c8ee91e1(&var_68);
    result
}
