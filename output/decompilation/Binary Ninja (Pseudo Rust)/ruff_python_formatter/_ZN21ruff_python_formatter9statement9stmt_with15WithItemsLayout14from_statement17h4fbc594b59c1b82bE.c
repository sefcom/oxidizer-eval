
  fn ruff_python_formatter::statement::stmt_with::WithItemsLayout::from_statement::h4fbc594b59c1b82b(arg1: *mut i32, arg2: *mut c_void, arg3: *mut i64, arg4: i64)

{
    if arg4 != 0
    {
        *arg1.byte_offset(8) = 5;
        *arg1 = 4;
        return;
    }
    
    if ruff_python_formatter::statement::stmt_with::has_magic_trailing_comma::h2ac603b89bb80e24(
        arg2, arg3) != 0
    {
        *arg1.byte_offset(8) = 4;
        *arg1 = 4;
        return;
    }
    
    let mut rsi_1: *mut c_void = arg2;
    let mut var_58: i64;
    let mut rax: *mut c_void;
    let mut r15_1: *mut i32;
    
    if *arg2.byte_offset(0x10) != 1
    {
        'label_72089a:
        let temp0_1: i8 = *arg3.byte_offset(0x2c);
        let mut rcx_2: bool = temp0_1 >= 3;
        
        if temp0_1 == 3
        {
            rcx_2 = *arg3.byte_offset(0x2d) >= 9;
        }
        
        if rcx_2 == 0
        {
            ruff_python_formatter::statement::stmt_with::are_with_items_parenthesized::h74e11b19a49524e4(&var_58, rsi_1, *arg3, arg3[1]);
            let rcx_4: i32 = var_58;
            rax = *var_58[4];
            
            if rcx_4 != 4
            {
                let var_44: i32;
                arg1[5] = var_44;
                *arg1.byte_offset(5) = *var_58[5];
                *arg1 = rcx_4;
                arg1[1] = rax;
            }
            else
            {
                rsi_1 = arg2;
                
                if (rax & 1) != 0
                {
                    goto 'label_7208a9;
                }
                
                *arg1.byte_offset(8) = 3;
                *arg1 = 4;
            }
        }
        else
        {
            'label_7208a9:
            r15_1 = *rsi_1.byte_offset(8);
            rax = 4;
            
            if *rsi_1.byte_offset(0x10) == 1
            {
                if *r15_1.byte_offset(0x58) == 0
                {
                    rax = 1;
                }
                else
                {
                    rax = ((ruff_python_formatter::expression::can_omit_optional_parentheses::he025906cb0ce46e0(r15_1, arg3) ^ 1) << 1) + 2;
                }
            }
            
            *arg1.byte_offset(8) = rax;
            *arg1.byte_offset(0x10) = r15_1;
            *arg1 = 4;
        }
    }
    else
    {
        r15_1 = *rsi_1.byte_offset(8);
        let rbp_1: *mut c_void = arg3[2];
        let mut var_40: i64 = 0x54;
        let var_38_1: *mut i32 = r15_1;
        let mut rdx: i64;
        rax =
            ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading::hb31877b14c47a989(
            rbp_1.byte_offset(0x10), &var_40);
        
        if rdx != 0
        {
            *arg1.byte_offset(8) = 5;
            *arg1 = 4;
        }
        else
        {
            var_58 = 0x54;
            let var_50_1: *mut i32 = r15_1;
            let mut rdx_1: i64;
            rax = ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::trailing::hdc749e0acdbc0869(rbp_1.byte_offset(0x10), &var_58);
            
            if rdx_1 != 0
            {
                *arg1.byte_offset(8) = 5;
                *arg1 = 4;
            }
            else
            {
                let mut rax_1: u64;
                let mut rdx_2: i64;
                rax_1 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(r15_1);
                let rcx: *mut c_void = *rbp_1.byte_offset(0x60);
                rsi_1 = arg2;
                
                if ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_1, rdx_2, *rcx.byte_offset(8), *rcx.byte_offset(0x10), *arg3, arg3[1]) == 0
                {
                    goto 'label_72089a;
                }
                
                *arg1.byte_offset(8) = 0;
                *arg1.byte_offset(0x10) = r15_1;
                *arg1 = 4;
            }
        }
    }
}
