
  fn ruff_python_formatter::other::arguments::is_arguments_huggable::h826365a48432f9d8(arg1: *mut i64, arg2: *mut i64) -> u64

{
    let rcx: i64 = arg1[1];
    let rax: i64 = arg1[3];
    let mut rbp: i64;
    let mut var_50: i64;
    let mut var_48: *mut i32;
    let mut r14_1: *mut i64;
    let mut r15_1: *mut i32;
    
    if rcx == 0
    {
        if rax != 1
        {
            rbp = 0;
        }
        else
        {
            r15_1 = arg1[2];
            
            if *r15_1.byte_offset(0x6f) != 0xda
            {
                rbp = 0;
            }
            else
            {
                r14_1 = arg1;
                let rdi_2: *mut c_void = arg2[2];
                var_50 = 0x52;
                var_48 = r15_1;
                
                if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(
                    rdi_2.byte_offset(0x40), &var_50) == 0
                {
                    goto 'label_711063;
                }
                
                rbp = 0;
            }
        }
    }
    else if rcx != 1 || rax != 0
    {
        rbp = 0;
    }
    else
    {
        r14_1 = arg1;
        r15_1 = *arg1;
        'label_711063:
        let mut rsi: *mut i64 = *arg2.byte_offset(0x3a);
        let rax_1: i8 =
            ruff_python_formatter::expression::is_expression_huggable::h5ffd1dce1549d9d3(r15_1, 
            rsi);
        let mut rax_7: i8;
        
        if rax_1 == 0
        {
            let rax_3: u64 = *r15_1 - 0x11;
            let mut rdi_1: i64;
            
            if rax_3 > 3
            {
                rdi_1 = 4;
            }
            else
            {
                match rax_3
                {
                    0 =>
                    {
                        rsi = &r15_1[2];
                        rdi_1 = 2;
                    }
                    1 =>
                    {
                        rsi = &r15_1[2];
                        rdi_1 = 3;
                    }
                    2 =>
                    {
                        rsi = &r15_1[2];
                        rdi_1 = 0;
                    }
                    3 =>
                    {
                        rsi = &r15_1[2];
                        rdi_1 = 1;
                    }
                }
            }
            
            rax_7 = core::result::Result$LT$T$C$E$GT$::is_ok_and::h7f3cfb37151e3ad4(rdi_1, rsi, 
                r14_1, arg2);
        }
        
        if rax_1 == 0 && rax_7 == 0
        {
            rbp = 0;
        }
        else
        {
            ruff_python_formatter::comments::Comments::leading_dangling_trailing::hef34da7d88b7bda1(
                &var_50, arg2[2], r15_1);
            let var_28: i64;
            
            if (var_28 | var_48) != 0
            {
                rbp = 0;
            }
            else
            {
                rbp = 1;
                
                if *arg2.byte_offset(0x37) == 0
                {
                    let rdx_3: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(r15_1);
                    let rsi_3: i32 = *r14_1.byte_offset(0x24);
                    
                    if rdx_3 > rsi_3
                    {
                        core::panicking::panic::h85d6dd562679980c(
                            "assertion failed: start.raw <= e…");
                        /* no return */
                    }
                    
                    if ruff_python_formatter::other::commas::has_magic_trailing_comma::h260365a92ddcfcb5(rdx_3, rsi_3, arg2) != 0
                    {
                        rbp = 0;
                    }
                }
            }
        }
    }
    rbp
}
