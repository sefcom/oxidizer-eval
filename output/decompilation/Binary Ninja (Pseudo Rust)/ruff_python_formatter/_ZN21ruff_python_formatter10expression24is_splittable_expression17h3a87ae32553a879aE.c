
  fn ruff_python_formatter::expression::is_splittable_expression::h3a87ae32553a879a(arg1: *mut i32, arg2: *mut i64) -> u64

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut rbx: *mut i32 = arg1;
    let r12: *mut c_void = arg2[2];
    let r14: *mut i8 = *arg2;
    let r15: i64 = arg2[1];
    let mut rax_1: i64 = 8;
    let mut rbp: i64;
    rbp = 1;
    let mut rbx_1: *mut c_void;
    
    match *arg1
    {
        0 | 2 | 5 | 8 | 9 | 0xa | 0xb | 0xc | 0xe | 0xf | 0x1a =>
        {
            rbp
        }
        1 | 0x15 | 0x16 | 0x17 | 0x18 | 0x1c | 0x1f | 0x20 =>
        {
            'label_7105a4:
            0
        }
        3 =>
        {
            'label_710554:
            rbx_1 = &rbx[2];
            goto 'label_710558;
        }
        4 | 0x1b =>
        {
            loop
            {
                rbx_1 = rbx.byte_offset(rax_1);
                let mut rax_3: i64;
                let mut rdx_1: i64;
                rax_3 = ruff_python_ast::expression::_$LT$impl$u20$core..convert..From$LT$$RF$alloc..boxed..Box$LT$ruff_python_ast..generated..Expr$GT$$GT$$u20$for$u20$ruff_python_ast..generated..ExprRef$GT$::from::h473989b5e34cd5c1(rbx_1);
                let rcx_5: *mut c_void = *r12.byte_offset(0x60);
                
                if ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_3, rdx_1, *rcx_5.byte_offset(8), *rcx_5.byte_offset(0x10), r14, r15) != 0
                {
                    return rbp;
                }
                
                'label_710558:
                rbx = *rbx_1;
                rax_1 = 8;
                
                match *rbx
                {
                    0 | 2 | 5 | 8 | 9 | 0xa | 0xb | 0xc | 0xe | 0xf | 0x1a =>
                    {
                        return rbp;
                    }
                    1 | 0x15 | 0x16 | 0x17 | 0x18 | 0x1c | 0x1f | 0x20 =>
                    {
                        goto 'label_7105a4;
                    }
                    3 =>
                    {
                        goto 'label_710554;
                    }
                    4 | 0x1b =>
                    {
                        continue;
                    }
                    6 | 7 | 0x1d | 0x1e =>
                    {
                        goto 'label_7105a8;
                    }
                    0xd =>
                    {
                        break;
                    }
                    0x10 =>
                    {
                        goto 'label_710600;
                    }
                    0x11 =>
                    {
                        goto 'label_7105df;
                    }
                    0x12 =>
                    {
                        goto 'label_7105f6;
                    }
                    0x13 =>
                    {
                        goto 'label_7105c8;
                    }
                    0x14 =>
                    {
                        goto 'label_7105ea;
                    }
                    0x19 =>
                    {
                        'label_71056c:
                        rax_1 = 0x30;
                        continue;
                    }
                }
            }
            
            goto 'label_71063f;
        }
        6 | 7 | 0x1d | 0x1e =>
        {
            'label_7105a8:
            rbp = *rbx.byte_offset(0x18) != 0;
            rbp
        }
        0xd =>
        {
            'label_71063f:
            rbp = *rbx.byte_offset(0x10) != 0;
            rbp
        }
        0x10 =>
        {
            'label_710600:
            *rbx.byte_offset(0x28);
            
            if *rbx.byte_offset(0x18) != -(*rbx.byte_offset(0x28))
            {
                return rbp;
            }
            
            let mut rax_8: u64;
            let mut rdx_3: i64;
            rax_8 = _$LT$ruff_python_ast..generated..ExprRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1bad3bd8a1b83c19(*rbx.byte_offset(8));
            let rcx_7: *mut c_void = *r12.byte_offset(0x60);
            /* tailcall */
            ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(rax_8, rdx_3, *rcx_7.byte_offset(8), *rcx_7.byte_offset(0x10), r14, r15)
        }
        0x11 =>
        {
            'label_7105df:
            rbp = *rbx.byte_offset(8) == -0x7fffffffffffffff;
            rbp
        }
        0x12 =>
        {
            'label_7105f6:
            rbp = 0 + -(*rbx.byte_offset(8));
            rbp
        }
        0x13 =>
        {
            'label_7105c8:
            rbp = !(0 + -(*rbx.byte_offset(8)));
            rbp
        }
        0x14 =>
        {
            'label_7105ea:
            rbp = *rbx.byte_offset(8) == 0;
            rbp
        }
        0x19 =>
        {
            goto 'label_71056c;
        }
    }
}
