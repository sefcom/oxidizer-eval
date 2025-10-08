
  int128_t* just::lexer::Lexer::lex_body::h748dd23849ec297d(int128_t* arg1, void* arg2)

{
    while (true)
    {
        int128_t var_88;
        char var_40;
        
        if (just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg2, "{{{{Q", 4))
        {
            just::lexer::Lexer::skip::h5c5c7013f42a4f08(&var_88, arg2);
            
            if (var_40 == 0x25)
                continue;
            
            goto label_671f87;
        }
        
        if (just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg2, &data_46e198, 1))
            break;
        
        if (just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg2, 
            "\r\nsrc/compilation.rsUnterminat…", 2))
        {
            if (*(arg2 + 0xa0) != *(arg2 + 0xb8))
                just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            
            /* tailcall */
            return just::lexer::Lexer::lex_double::hb969a7d085e88ace(arg1, arg2, 0x14);
        }
        
        int128_t* result;
        
        if (just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg2, 
            "{{missing parameter without defa…", 2))
        {
            if (*(arg2 + 0xa0) != *(arg2 + 0xb8))
                just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            
            just::lexer::Lexer::lex_double::hb969a7d085e88ace(&var_88, arg2, 0x1b);
            int128_t var_48;
            
            if (var_40 != 0x25)
            {
                label_671f87:
                result = arg1;
                result[4] = var_48;
                int128_t zmm0_1 = var_88;
                int128_t var_58;
                result[3] = var_58;
                int128_t var_68;
                result[2] = var_68;
                int128_t var_78;
                result[1] = var_78;
                *result = zmm0_1;
            }
            else
            {
                int64_t rdi_15 = *(arg2 + 0x58);
                
                if (rdi_15 < 1)
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_15 - 1, 0);
                    /* no return */
                }
                
                int64_t rax_11 = *(arg2 + 0x50);
                int64_t rcx_3 = (rdi_15 - 1) * 9;
                var_48 = *(rax_11 + (rcx_3 << 3) + 0x40);
                int128_t var_58_1 = *(rax_11 + (rcx_3 << 3) + 0x30);
                int128_t var_68_1 = *(rax_11 + (rcx_3 << 3) + 0x20);
                int128_t var_78_1 = *(rax_11 + (rcx_3 << 3) + 0x10);
                var_88 = *(rax_11 + (rcx_3 << 3));
                alloc::vec::Vec$LT$T$C$A$GT$::push::h613e59c6bb8d58d5(arg2 + 0x18, &var_88);
                result = arg1;
                *(result + 0x48) = 0x25;
            }
        }
        else
        {
            if (!just::lexer::Lexer::at_eof::h5321ae9ca03a4d44(arg2))
            {
                just::lexer::Lexer::advance::hab928493b22c646a(&var_88, arg2);
                
                if (var_40 == 0x25)
                    continue;
                
                goto label_671f87;
            }
            
            if (*(arg2 + 0xa0) != *(arg2 + 0xb8))
                just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            
            result = arg1;
            *(result + 0x48) = 0x25;
        }
        
        return result;
    }
    
    if (*(arg2 + 0xa0) != *(arg2 + 0xb8))
        just::lexer::Lexer::token::h8b86862a20389d16(arg2);
    
    /* tailcall */
    return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 0x14);
}
