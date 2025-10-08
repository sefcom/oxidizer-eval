
  fn ruff_python_formatter::expression::expr_slice::find_colons::h3aedadfd05f6e796(arg1: *mut i32, arg2: *mut i8, arg3: i64, arg4: i32, arg5: i32, arg6: *mut i64, arg7: *mut i64) -> u64

{
    let r13: *mut i64 = arg7;
    let mut var_a8: *mut i64 = arg6;
    let mut rdi: *mut i64 = &var_a8;
    
    if arg6 == 0
    {
        rdi = arg6;
    }
    
    let rax: i32 = core::option::Option$LT$T$GT$::map_or::hb1541e862108629a(rdi, arg4);
    
    if rax > arg5
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    let mut var_68: ();
    ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_68, arg2, arg3, 
        rax, arg5);
    let mut var_38: i8 = 0;
    let mut var_a0: *mut i8;
    core::iter::traits::iterator::Iterator::try_fold::h574e0d0b6077c929(&var_a0, &var_68, &var_38);
    let result_3: i8;
    let mut result: u64 = result_3;
    
    if result == 0x5a
    {
        arg1[2] = 0;
        arg1[4] = "Didn't find any token for slice …";
        arg1[5] = 0;
        *arg1.byte_offset(0x15) = 0;
        *arg1.byte_offset(0x17) = 0;
        *arg1.byte_offset(0x18) = 0x2b;
        *arg1 = 1;
    }
    else if result != 0xc
    {
        arg1[2] = 0;
        *arg1.byte_offset(0x10) = "Slice first colon token was not …";
        *arg1.byte_offset(0x18) = 0x27;
        *arg1 = 1;
    }
    else
    {
        let rcx_1: *mut i8 = var_a0;
        let var_b0_1: i32 = rcx_1;
        let rcx_2: u32 = rcx_1 >> 0x20;
        let mut rdi_3: *mut i64 = &arg7;
        
        if r13 == 0
        {
            rdi_3 = r13;
        }
        
        let rax_2: i32 = core::option::Option$LT$T$GT$::map_or::hb1541e862108629a(rdi_3, rcx_2);
        
        if rax_2 > arg5
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_a0, arg2, arg3, 
            rax_2, arg5);
        let mut var_70: i8 = 0;
        let mut result_2: u64;
        result = core::iter::traits::iterator::Iterator::try_fold::h574e0d0b6077c929(&result_2, 
            &var_a0, &var_70);
        let var_b8: i8;
        let mut rcx_4: u16 = var_b8;
        let mut var_cc: u16;
        let mut result_1: i8;
        
        if rcx_4 != 0x5a
        {
            result = result_2;
            
            if rcx_4 == 0xc
            {
                let result_4: i8;
                result_1 = result_4;
                let var_b7: u16;
                var_cc = var_b7;
                rcx_4 = 0xc;
                goto 'label_70cc9b;
            }
            
            arg1[2] = 0;
            *arg1.byte_offset(0x10) = "Expected a colon for the second …";
            *arg1.byte_offset(0x18) = 0x2b;
            *arg1 = 1;
        }
        else
        {
            rcx_4 = 0x5a;
            'label_70cc9b:
            let var_97: i16;
            let var_95: i8;
            let r15_2: u32 = var_97 | var_95 << 0x10;
            arg1[1] = var_b0_1;
            arg1[2] = rcx_2;
            arg1[3] = 0xc;
            *arg1.byte_offset(0xd) = r15_2;
            *arg1.byte_offset(0xf) = r15_2 >> 0x10;
            *arg1.byte_offset(0x10) = result;
            arg1[6] = rcx_4;
            *arg1.byte_offset(0x19) = var_cc;
            result = result_1;
            *arg1.byte_offset(0x1b) = result;
            *arg1 = 0;
        }
    }
    
    result
}
