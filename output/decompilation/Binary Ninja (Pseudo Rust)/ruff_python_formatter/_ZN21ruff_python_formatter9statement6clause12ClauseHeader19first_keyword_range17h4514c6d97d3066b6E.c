
  fn ruff_python_formatter::statement::clause::ClauseHeader::first_keyword_range::h4514c6d97d3066b6(arg1: *mut i32, arg2: i64, arg3: *mut c_void, arg4: *mut i8, arg5: i64) -> i64

{
    let mut r9: i64 = 0xc;
    
    if arg2 - 3 < 0xc
    {
        r9 = arg2 - 3;
    }
    
    let mut var_30: i64;
    let mut rdx: i8;
    let mut rsi: i32;
    let mut cond:1_1: bool;
    
    match r9
    {
        0 =>
        {
            let rax_1: i64 = *arg3.byte_offset(0x10);
            let mut rdi_1: *mut c_void;
            
            if rax_1 == 0
            {
                rdi_1 = nullptr;
            }
            else
            {
                rdi_1 = (*arg3.byte_offset(8)).byte_offset(rax_1 * 0x60).byte_offset(-0x60);
            }
            
            rsi = core::option::Option$LT$T$GT$::map_or_else::hcc3bd99a00a996a7(rdi_1, arg3);
            rdx = 0x3a;
            arg4 = arg4;
            arg5 = arg5;
        }
        1 =>
        {
            let rax_4: i64 = *arg3.byte_offset(0x10);
            let mut rdi_7: *mut c_void;
            
            if rax_4 == 0
            {
                rdi_7 = nullptr;
            }
            else
            {
                rdi_7 = (*arg3.byte_offset(8)).byte_offset(rax_4 * 0x60).byte_offset(-0x60);
            }
            
            let rax_12: i32 =
                core::option::Option$LT$T$GT$::map_or_else::hb5eba6f535daaed7(rdi_7, arg3);
            
            if *arg3.byte_offset(0x7c) == 0
            {
                rsi = rax_12;
                rdx = 0x3c;
            }
            else
            {
                rsi = rax_12;
                rdx = 0x37;
            }
            
            arg4 = arg4;
            arg5 = arg5;
        }
        2 =>
        {
            rsi = *arg3.byte_offset(0x38);
            rdx = 0x45;
        }
        3 =>
        {
            rsi = *arg3.byte_offset(0x68);
            
            if *arg3.byte_offset(0x18) != 0x21
            {
                rdx = 0x3e;
            }
            else
            {
                rdx = 0x3f;
            }
        }
        4 =>
        {
            rsi = *arg3.byte_offset(0x60);
            rdx = 0x50;
        }
        5 =>
        {
            rsi = *arg3.byte_offset(0x40);
            rdx = 0x40;
        }
        6 =>
        {
            let mut rsi_1: *mut i64 = *arg3.byte_offset(0x40);
            let mut rax_7: i64 = 0x5e;
            
            if rsi_1 != 0
            {
                let rsi_3: *mut c_void = (rsi_1 << 7) + *arg3.byte_offset(0x38);
                rsi_1 = rsi_3.byte_offset(-0x80);
                
                if rsi_3 != 0x80
                {
                    let mut rdx_2: *mut i64;
                    rax_7 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Stmt$GT$$GT$::from::h095e0f7c3429d85d(rsi_1);
                    rsi_1 = rdx_2;
                }
            }
            
            let mut rax_8: i64;
            let mut rdx_3: i64;
            rax_8 = core::option::Option$LT$T$GT$::or_else::h0df08007ad1612a3(rax_7, rsi_1, arg3);
            let mut rax_9: i64;
            let mut rdx_5: i64;
            rax_9 = core::option::Option$LT$T$GT$::or_else::hb8dee52d58e0f51f(rax_8, rdx_3, arg3);
            
            if rax_9 == 0x5e
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            var_30 = rax_9;
            let var_28: i64 = rdx_5;
            return ruff_python_formatter::statement::clause::find_keyword::h191773aebb391b5b(arg1, 
                _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_30), 
                0x41, arg4, arg5);
        }
        7 =>
        {
            rsi = *arg3.byte_offset(0x20);
            rdx = 0x52;
        }
        8 =>
        {
            rsi = *arg3.byte_offset(0x80);
            rdx = 0x54;
        }
        9 =>
        {
            rsi = *arg3.byte_offset(0x40);
            cond:1_1 = *arg3.byte_offset(0x4c) != 0;
            rdx = 0x42;
            goto 'label_718563;
        }
        0xa =>
        {
            rsi = *arg3.byte_offset(0x38);
            rdx = 0x51;
        }
        0xb =>
        {
            rsi = *arg3.byte_offset(0x30);
            cond:1_1 = *arg3.byte_offset(0x3c) != 0;
            rdx = 0x55;
            'label_718563:
            
            if cond:1_1
            {
                rdx = 0x37;
            }
        }
        0xc =>
        {
            if arg2 == 0
            {
                let rax_10: i64 = *arg3.byte_offset(0x28);
                let mut rsi_7: i64;
                
                if rax_10 != 0
                {
                    rsi_7 = rax_10 * 0x58 + *arg3.byte_offset(0x20);
                    arg2 = rsi_7 - 0x58;
                }
                
                let mut rdi_13: i64;
                
                if rax_10 == 0 || rsi_7 == 0x58
                {
                    rdi_13 = 0x5e;
                }
                else
                {
                    rdi_13 = 0x3c;
                }
                
                let mut rax_14: i64;
                let mut rdx_9: i64;
                rax_14 =
                    core::option::Option$LT$T$GT$::or_else::h3ec7daf219502128(rdi_13, arg2, arg3);
                
                if rax_14 == 0x5e
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                var_30 = rax_14;
                let var_28_1: i64 = rdx_9;
                return ruff_python_formatter::statement::clause::find_keyword::h191773aebb391b5b(
                    arg1, 
                    _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_30), 
                    0x3f, arg4, arg5);
            }
            
            let rdi_2: i64 = *arg3.byte_offset(0x10);
            let mut rdi_4: *mut c_void;
            
            if rdi_2 != 0
            {
                rdi_4 = (rdi_2 << 7) + *arg3.byte_offset(8);
            }
            
            if rdi_2 == 0 || rdi_4 == 0x80
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            rsi = _$LT$ruff_python_ast..generated..Stmt$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h6da43eeee2e8d007(rdi_4.byte_offset(-0x80));
            rdx = 0x3f;
            arg4 = arg4;
            arg5 = arg5;
        }
    }
    
    /* tailcall */
    ruff_python_formatter::statement::clause::find_keyword::h191773aebb391b5b(arg1, rsi, rdx, arg4, 
        arg5)
}
