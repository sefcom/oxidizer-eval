
  int64_t just::lexer::Lexer::lex_string::hf16a7b23cc25ab92(uint64_t* arg1, void* arg2)

{
    int64_t r13;
    int64_t var_20 = r13;
    void* rax;
    int64_t rdx;
    rax = just::lexer::Lexer::rest::h4f82959a07fe6144(arg2);
    char rax_1;
    char rdx_1;
    rax_1 = just::string_kind::StringKind::from_token_start::h243afdb46a506377(rax, rdx);
    int128_t var_98;
    char var_50;
    int64_t result;
    
    if (rax_1 == 2)
    {
        result = just::lexer::Lexer::advance::hab928493b22c646a(&var_98, arg2);
        
        if (var_50 == 0x25)
            /* tailcall */
            return just::lexer::Lexer::internal_error::hc085b50b9a8f6202(arg1, arg2, 
                "Lexer::lex_string: invalid strin…", 0x27);
        
        goto label_67306e;
    }
    
    void* rcx_4;
    char const* const rdx_3;
    char const* const rsi_4;
    
    if (!rdx_1)
    {
        rcx_4 = (rax_1 << 1) + 1;
        rsi_4 = "```"""'''Lexer::error: expected …";
        rdx_3 = "`src/assignment_resolver.rs()\r\n…";
    }
    else if (rdx_1 != 1)
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
    
    if (rax_1 & 1)
        rdx_3 = rsi_4;
    
    result = just::lexer::Lexer::presume_str::hf90f47e4eeb23e64(&var_98, arg2, rdx_3, rcx_4);
    
    if (var_50 != 0x25)
    {
        label_67306e:
        int128_t var_58;
        *(arg1 + 0x40) = var_58;
        int128_t zmm0_1 = var_98;
        int128_t var_68;
        *(arg1 + 0x30) = var_68;
        int128_t var_78;
        *(arg1 + 0x20) = var_78;
        int128_t var_88;
        *(arg1 + 0x10) = var_88;
        *arg1 = zmm0_1;
        return result;
    }
    
    int32_t rax_3 = *(arg2 + 0xc0);
    
    if (rax_3 == 0x110000)
    {
        label_672e95:
        int64_t rcx_7 = -0x7fffffffffffffb8;
        
        if (!rdx_1)
            rcx_7 = -0x7fffffffffffffba;
        
        var_98 = rcx_7;
        return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_98);
    }
    
    char const* const rsi_7 = "'\\``\Mismatched closing delimit…";
    char temp0_1 = rax_1 & 1;
    
    if (temp0_1)
        rsi_7 = "'''Lexer::error: expected string…";
    
    char const* const rdx_6 = "`src/assignment_resolver.rs()\r\n…";
    
    if (temp0_1)
        rdx_6 = "```"""'''Lexer::error: expected …";
    
    char const* const var_b8_1 = rdx_6;
    char const* const rdx_7 = ""false[{,:]capacity overflow/hom…";
    
    if (temp0_1)
        rdx_7 = """"'''Lexer::error: expected str…";
    
    uint32_t rcx_9 = rdx_1;
    
    if (rcx_9 == 1)
    {
        char r12_1 = 0;
        
        while (true)
        {
            if (rax_3 == 0x5c)
                r13 = 1;
            
            if (rax_3 != 0x5c || r12_1 & 1)
            {
                if (just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg2, rdx_7, 
                        (rax_1 << 1) + 1) && !(r12_1 & 1))
                    break;
                
                r13 = 0;
            }
            
            result = just::lexer::Lexer::advance::hab928493b22c646a(&var_98, arg2);
            
            if (var_50 != 0x25)
                goto label_67306e;
            
            rax_3 = *(arg2 + 0xc0);
            r12_1 = r13;
            
            if (rax_3 == 0x110000)
                goto label_672e95;
        }
    }
    else if (rcx_9)
    {
        while (
            !just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg2, rsi_7, (rax_1 << 1) + 1))
        {
            result = just::lexer::Lexer::advance::hab928493b22c646a(&var_98, arg2);
            
            if (var_50 != 0x25)
                goto label_67306e;
            
            if (*(arg2 + 0xc0) == 0x110000)
                goto label_672e95;
        }
    }
    else
    {
        while (!just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg2, var_b8_1, 
            (rax_1 << 1) + 1))
        {
            result = just::lexer::Lexer::advance::hab928493b22c646a(&var_98, arg2);
            
            if (var_50 != 0x25)
                goto label_67306e;
            
            if (*(arg2 + 0xc0) == 0x110000)
                goto label_672e95;
        }
    }
    
    if (rdx_1)
    {
        var_b8_1 = rdx_7;
        
        if (rcx_9 == 2)
            var_b8_1 = rsi_7;
    }
    
    result = just::lexer::Lexer::presume_str::hf90f47e4eeb23e64(&var_98, arg2, var_b8_1, 
        (rax_1 << 1) + 1);
    
    if (var_50 != 0x25)
        goto label_67306e;
    
    result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
    arg1[9] = 0x25;
    return result;
}
