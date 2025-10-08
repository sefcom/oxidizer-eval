
  fn ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec::h7d3a8bfd844cf3d6(arg1: *mut i64, arg2: *mut i64, arg3: *mut i8, arg4: i64, arg5: *mut i64) -> u64

{
    let rbp: *mut i128 = arg1;
    let rbx: i64 = *arg1;
    let r13: *mut i32 = arg1[1];
    let rax: i32 = *r13;
    let mut var_50: i64;
    
    if rax == 0
    {
        let mut rax_7: u64;
        let mut rdx_6: i64;
        rax_7 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(r13);
        let r15_3: *mut c_void = *arg2;
        let rcx_4: *mut c_void = *r15_3.byte_offset(0x60);
        
        if ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_7, rdx_6, *rcx_4.byte_offset(8), *rcx_4.byte_offset(0x10), arg3, arg4) == 0
        {
            let mut rcx_8: i64;
            let mut rbx_3: i64;
            let mut rbp_3: i64;
            let mut r8_8: i64;
            
            if rbx == 0
            {
                rbx_3 = rbp[1];
                rbp_3 = *rbp.byte_offset(0x18);
                'label_706e45:
                var_50 = 0x1b;
                let var_48_5: *mut c_void = &r13[2];
                let mut rax_12: i64;
                let mut rdx_11: i64;
                rax_12 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(r15_3.byte_offset(0x10), &var_50);
                rcx_8 = rax_12;
                r8_8 = rdx_11;
            }
            else
            {
                var_50 = 0x1b;
                let var_48_3: *mut c_void = &r13[2];
                let mut rax_10: i64;
                let mut rdx_9: i64;
                rax_10 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(r15_3.byte_offset(0x10), &var_50);
                
                if rbx == 1
                {
                    rbx_3 = rax_10;
                    rbp_3 = rdx_9;
                    goto 'label_706e45;
                }
                
                rcx_8 = rbp[1];
                r8_8 = *rbp.byte_offset(0x18);
                rbx_3 = rax_10;
                rbp_3 = rdx_9;
            }
            
            return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_bool::hbfd4616a4c6c4b7a(&r13[2], rbx_3, rbp_3, rcx_8, r8_8, arg2, arg3, arg4, arg5);
        }
    }
    else if rax == 2
    {
        let mut rax_4: u64;
        let mut rdx_3: i64;
        rax_4 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(r13);
        let r15_2: *mut c_void = *arg2;
        let rcx_2: *mut c_void = *r15_2.byte_offset(0x60);
        
        if ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_4, rdx_3, *rcx_2.byte_offset(8), *rcx_2.byte_offset(0x10), arg3, arg4) == 0
        {
            let mut rcx_7: i64;
            let mut rbx_2: i64;
            let mut rbp_2: i64;
            let mut r8_7: i64;
            
            if rbx == 0
            {
                rbx_2 = rbp[1];
                rbp_2 = *rbp.byte_offset(0x18);
                'label_706e16:
                var_50 = 0x1d;
                let var_48_4: *mut i64 = &r13[2];
                let mut rax_11: i64;
                let mut rdx_10: i64;
                rax_11 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(r15_2.byte_offset(0x10), &var_50);
                rcx_7 = rax_11;
                r8_7 = rdx_10;
            }
            else
            {
                var_50 = 0x1d;
                let var_48_2: *mut i64 = &r13[2];
                let mut rax_6: i64;
                let mut rdx_5: i64;
                rax_6 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(r15_2.byte_offset(0x10), &var_50);
                
                if rbx == 1
                {
                    rbx_2 = rax_6;
                    rbp_2 = rdx_5;
                    goto 'label_706e16;
                }
                
                rcx_7 = rbp[1];
                r8_7 = *rbp.byte_offset(0x18);
                rbx_2 = rax_6;
                rbp_2 = rdx_5;
            }
            
            return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_binary::h026cf51245cd5d13(&r13[2], rbx_2, rbp_2, rcx_7, r8_7, arg2, arg3, arg4, arg5);
        }
    }
    else if rax == 0xf
    {
        let mut rax_1: u64;
        let mut rdx: i64;
        rax_1 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(r13);
        let r15_1: *mut c_void = *arg2;
        let rcx: *mut c_void = *r15_1.byte_offset(0x60);
        
        if ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_1, rdx, *rcx.byte_offset(8), *rcx.byte_offset(0x10), arg3, arg4) == 0
        {
            let mut rcx_9: i64;
            let mut rbx_1: i64;
            let mut rbp_1: i64;
            let mut r8_9: i64;
            
            if rbx == 0
            {
                rbx_1 = rbp[1];
                rbp_1 = *rbp.byte_offset(0x18);
                'label_706e74:
                var_50 = 0x2a;
                let var_48_6: *mut c_void = &r13[2];
                let mut rax_13: i64;
                let mut rdx_12: i64;
                rax_13 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(r15_1.byte_offset(0x10), &var_50);
                rcx_9 = rax_13;
                r8_9 = rdx_12;
            }
            else
            {
                var_50 = 0x2a;
                let var_48_1: *mut c_void = &r13[2];
                let mut rax_3: i64;
                let mut rdx_2: i64;
                rax_3 = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(r15_1.byte_offset(0x10), &var_50);
                
                if rbx == 1
                {
                    rbx_1 = rax_3;
                    rbp_1 = rdx_2;
                    goto 'label_706e74;
                }
                
                rcx_9 = rbp[1];
                r8_9 = *rbp.byte_offset(0x18);
                rbx_1 = rax_3;
                rbp_1 = rdx_2;
            }
            
            return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_compare::h864917a931c07552(&r13[2], rbx_1, rbp_1, rcx_9, r8_9, arg2, arg3, arg4, arg5);
        }
    }
    /* tailcall */
    smallvec::SmallVec$LT$A$GT$::push::h1d2aed1a79494331(arg5, rbp)
}
