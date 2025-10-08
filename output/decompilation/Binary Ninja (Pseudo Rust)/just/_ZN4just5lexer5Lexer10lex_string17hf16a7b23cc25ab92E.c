
  fn just::lexer::Lexer::lex_string::hf16a7b23cc25ab92(arg1: *mut u64, arg2: *mut c_void) -> i64

{
    let mut r13: i64;
    let var_20: i64 = r13;
    let mut rax: *mut c_void;
    let mut rdx: i64;
    rax = just::lexer::Lexer::rest::h4f82959a07fe6144(arg2);
    let mut rax_1: i8;
    let mut rdx_1: i8;
    rax_1 = just::string_kind::StringKind::from_token_start::h243afdb46a506377(rax, rdx);
    let mut var_98: i128;
    let var_50: i8;
    let mut result: i64;
    
    if rax_1 == 2
    {
        result = just::lexer::Lexer::advance::hab928493b22c646a(&var_98, arg2);
        
        if var_50 == 0x25
        {
            /* tailcall */
            return just::lexer::Lexer::internal_error::hc085b50b9a8f6202(arg1, arg2, 
                "Lexer::lex_string: invalid strin…", 0x27);
        }
        
        goto 'label_67306e;
    }
    
    let mut rcx_4: *mut c_void;
    let mut rdx_3: *const i8;
    let mut rsi_4: *const i8;
    
    if rdx_1 == 0
    {
        rcx_4 = (rax_1 << 1) + 1;
        rsi_4 = "```"""'''Lexer::error: expected …";
        rdx_3 = "`src/assignment_resolver.rs()\r\n…";
    }
    else if rdx_1 != 1
    {
        rcx_4 = (rax_1 << 1) + 1;
        rsi_4 = "'''Lexer::error: expected string…";
        rdx_3 = "'\\``\Mismatched closing delimit…";
    }
    else
    {
        rcx_4 = (rax_1 << 1) + 1;
        rsi_4 = """"'''Lexer::error: expected str…";
        rdx_3 = ""false[{,:]capacity overflow/hom…";
    }
    
    if (rax_1 & 1) != 0
    {
        rdx_3 = rsi_4;
    }
    
    result = just::lexer::Lexer::presume_str::hf90f47e4eeb23e64(&var_98, arg2, rdx_3, rcx_4);
    
    if var_50 != 0x25
    {
        'label_67306e:
        let var_58: i128;
        *arg1.byte_offset(0x40) = var_58;
        let zmm0_1: i128 = var_98;
        let var_68: i128;
        *arg1.byte_offset(0x30) = var_68;
        let var_78: i128;
        *arg1.byte_offset(0x20) = var_78;
        let var_88: i128;
        *arg1.byte_offset(0x10) = var_88;
        *arg1 = zmm0_1;
        return result;
    }
    
    let mut rax_3: i32 = *arg2.byte_offset(0xc0);
    
    if rax_3 == 0x110000
    {
        'label_672e95:
        let mut rcx_7: i64 = -0x7fffffffffffffb8;
        
        if rdx_1 == 0
        {
            rcx_7 = -0x7fffffffffffffba;
        }
        
        var_98 = rcx_7;
        return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_98);
    }
    
    let mut rsi_7: *const i8 = "'\\``\Mismatched closing delimit…";
    let temp0_1: i8 = rax_1 & 1;
    
    if temp0_1 != 0
    {
        rsi_7 = "'''Lexer::error: expected string…";
    }
    
    let mut rdx_6: *const i8 = "`src/assignment_resolver.rs()\r\n…";
    
    if temp0_1 != 0
    {
        rdx_6 = "```"""'''Lexer::error: expected …";
    }
    
    let mut var_b8_1: *const i8 = rdx_6;
    let mut rdx_7: *const i8 = ""false[{,:]capacity overflow/hom…";
    
    if temp0_1 != 0
    {
        rdx_7 = """"'''Lexer::error: expected str…";
    }
    
    let rcx_9: u32 = rdx_1;
    
    if rcx_9 == 1
    {
        let mut r12_1: i8 = 0;
        
        loop
        {
            if rax_3 == 0x5c
            {
                r13 = 1;
            }
            
            if rax_3 != 0x5c || (r12_1 & 1) != 0
            {
                if just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg2, rdx_7, 
                    (rax_1 << 1) + 1) != 0 && (r12_1 & 1) == 0
                {
                    break;
                }
                
                r13 = 0;
            }
            
            result = just::lexer::Lexer::advance::hab928493b22c646a(&var_98, arg2);
            
            if var_50 != 0x25
            {
                goto 'label_67306e;
            }
            
            rax_3 = *arg2.byte_offset(0xc0);
            r12_1 = r13;
            
            if rax_3 == 0x110000
            {
                goto 'label_672e95;
            }
        }
    }
    else if rcx_9 != 0
    {
        while just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg2, rsi_7, (rax_1 << 1) + 1)
            == 0
        {
            result = just::lexer::Lexer::advance::hab928493b22c646a(&var_98, arg2);
            
            if var_50 != 0x25
            {
                goto 'label_67306e;
            }
            
            if *arg2.byte_offset(0xc0) == 0x110000
            {
                goto 'label_672e95;
            }
        }
    }
    else
    {
        while just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg2, var_b8_1, 
            (rax_1 << 1) + 1) == 0
        {
            result = just::lexer::Lexer::advance::hab928493b22c646a(&var_98, arg2);
            
            if var_50 != 0x25
            {
                goto 'label_67306e;
            }
            
            if *arg2.byte_offset(0xc0) == 0x110000
            {
                goto 'label_672e95;
            }
        }
    }
    
    if rdx_1 != 0
    {
        var_b8_1 = rdx_7;
        
        if rcx_9 == 2
        {
            var_b8_1 = rsi_7;
        }
    }
    
    result = just::lexer::Lexer::presume_str::hf90f47e4eeb23e64(&var_98, arg2, var_b8_1, 
        (rax_1 << 1) + 1);
    
    if var_50 != 0x25
    {
        goto 'label_67306e;
    }
    
    result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
    arg1[9] = 0x25;
    result
}
