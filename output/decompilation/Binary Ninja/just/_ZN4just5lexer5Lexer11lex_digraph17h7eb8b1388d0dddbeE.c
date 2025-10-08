
  int64_t just::lexer::Lexer::lex_digraph::h7eb8b1388d0dddbe(uint64_t* arg1, void* arg2, uint64_t arg3, int32_t arg4, char arg5)

{
    int128_t var_88;
    char result = just::lexer::Lexer::presume::h784be375f7ec3dad(&var_88, arg2, arg3);
    char var_40;
    int128_t var_78;
    int128_t var_68;
    int128_t var_58;
    int128_t var_48;
    
    if (var_40 != 0x25)
    {
        label_6726cd:
        *(arg1 + 0x40) = var_48;
        int128_t zmm0_1 = var_88;
        *(arg1 + 0x30) = var_58;
        *(arg1 + 0x20) = var_68;
        *(arg1 + 0x10) = var_78;
        *arg1 = zmm0_1;
    }
    else
    {
        just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_88, arg2, arg4);
        result = var_88;
        
        if (var_40 != 0x25)
        {
            arg1[8] = var_48;
            int128_t zmm0_2 = var_88;
            *(arg1 + 0x31) = var_58;
            *(arg1 + 0x21) = var_68;
            *(arg1 + 0x11) = var_78;
            *(arg1 + 1) = zmm0_2;
            int32_t var_3f;
            *(arg1 + 0x49) = var_3f;
            *(arg1 + 0x4c) = var_3f;
            *arg1 = result;
            arg1[9] = var_40;
        }
        else
        {
            if (!(result & 1))
            {
                just::lexer::Lexer::token::h8b86862a20389d16(arg2);
                
                if (just::lexer::Lexer::at_eof::h5321ae9ca03a4d44(arg2))
                {
                    uint64_t rax_1 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(4, 4);
                    
                    if (!rax_1)
                    {
                        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                        /* no return */
                    }
                    
                    *rax_1 = arg4;
                    *var_88[8] = 1;
                    var_78 = rax_1;
                    *var_78[8] = 1;
                    var_88 = -0x7fffffffffffffc9;
                    return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_88);
                }
                
                result = just::lexer::Lexer::advance::hab928493b22c646a(&var_88, arg2);
                
                if (var_40 != 0x25)
                    goto label_6726cd;
                
                uint64_t rax_3 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(4, 4);
                
                if (!rax_3)
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                *rax_3 = arg4;
                *var_88[8] = 1;
                var_78 = rax_3;
                *var_78[8] = 1;
                var_88 = -0x7fffffffffffffcb;
                return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_88);
            }
            
            result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            arg1[9] = 0x25;
        }
    }
    return result;
}
