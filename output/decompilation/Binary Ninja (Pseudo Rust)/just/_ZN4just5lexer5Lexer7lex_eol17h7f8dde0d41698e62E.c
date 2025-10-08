
  fn just::lexer::Lexer::lex_eol::h7f8dde0d41698e62(arg1: *mut u64, arg2: *mut c_void) -> i64

{
    let mut var_78: i8;
    just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_78, arg2, 0xd);
    let mut rax: i8 = var_78;
    let var_30: i8;
    let mut rcx: i8 = var_30;
    let var_77: i128;
    let var_67: i128;
    let var_57: i128;
    let var_38: i64;
    
    if rcx == 0x25
    {
        let rdi_1: *mut i8 = &var_78;
        
        if (rax & 1) == 0
        {
            let rax_2: i64 = just::lexer::Lexer::presume::h784be375f7ec3dad(rdi_1, arg2, 0xa);
            
            if var_30 == 0x25
            {
                'label_672b11:
                let mut rsi_3: i32;
                rsi_3 = *arg2.byte_offset(0x40) != 0;
                let rax_3: i64 = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
                arg1[9] = 0x25;
                return rax_3;
            }
            
            *arg1.byte_offset(0x40) = var_38;
            let zmm0_1: i128 = var_78;
            *arg1.byte_offset(0x30) = var_57;
            *arg1.byte_offset(0x20) = var_67;
            *arg1.byte_offset(0x10) = var_77;
            *arg1 = zmm0_1;
            return rax_2;
        }
        
        just::lexer::Lexer::accepted::h2b4063f26d19f617(rdi_1, arg2, 0xa);
        rax = var_78;
        rcx = var_30;
        
        if rcx == 0x25
        {
            if (rax & 1) != 0
            {
                goto 'label_672b11;
            }
            
            var_78 = -0x7fffffffffffffbb;
            return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_78);
        }
    }
    
    arg1[8] = var_38;
    let var_47: i128;
    *arg1.byte_offset(0x31) = var_47;
    *arg1.byte_offset(0x21) = var_57;
    *arg1.byte_offset(0x11) = var_67;
    *arg1.byte_offset(1) = var_77;
    let var_2f: i32;
    *arg1.byte_offset(0x49) = var_2f;
    *arg1.byte_offset(0x4c) = var_2f;
    *arg1 = rax;
    arg1[9] = rcx;
    rax
}
