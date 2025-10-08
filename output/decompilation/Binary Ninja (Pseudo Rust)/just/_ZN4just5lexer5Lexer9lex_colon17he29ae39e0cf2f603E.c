
  fn just::lexer::Lexer::lex_colon::he29ae39e0cf2f603(arg1: *mut i8, arg2: *mut c_void) -> i64

{
    let mut var_60: i128;
    let rax: i64 = just::lexer::Lexer::presume::h784be375f7ec3dad(&var_60, arg2, 0x3a);
    let var_50: i128;
    let var_40: i128;
    let var_30: i128;
    let var_20: i128;
    let var_18: i8;
    
    if var_18 != 0x25
    {
        *arg1.byte_offset(0x40) = var_20;
        let zmm0: i128 = var_60;
        *arg1.byte_offset(0x30) = var_30;
        *arg1.byte_offset(0x20) = var_40;
        *arg1.byte_offset(0x10) = var_50;
        *arg1 = zmm0;
        return rax;
    }
    
    just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_60, arg2, 0x3d);
    let mut rax_1: i8 = var_60;
    let mut rcx: i8 = var_18;
    
    if rcx == 0x25
    {
        let mut rax_2: i64;
        let mut rdi_2: *mut c_void;
        
        if (rax_1 & 1) != 0
        {
            rdi_2 = arg2;
            'label_672764:
            rax_2 = just::lexer::Lexer::token::h8b86862a20389d16(rdi_2);
            arg1[0x48] = 0x25;
            return rax_2;
        }
        
        just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_60, arg2, 0x3a);
        rax_1 = var_60;
        rcx = var_18;
        
        if rcx == 0x25
        {
            if (rax_1 & 1) != 0
            {
                rdi_2 = arg2;
                goto 'label_672764;
            }
            
            rax_2 = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            *arg2.byte_offset(0xc5) = 1;
            arg1[0x48] = 0x25;
            return rax_2;
        }
    }
    
    *arg1.byte_offset(0x40) = var_20;
    let zmm0_1: i128 = var_60;
    *arg1.byte_offset(0x31) = var_30;
    *arg1.byte_offset(0x21) = var_40;
    *arg1.byte_offset(0x11) = var_50;
    *arg1.byte_offset(1) = zmm0_1;
    let var_17: i32;
    *arg1.byte_offset(0x49) = var_17;
    *arg1.byte_offset(0x4c) = var_17;
    *arg1 = rax_1;
    arg1[0x48] = rcx;
    rax_1
}
