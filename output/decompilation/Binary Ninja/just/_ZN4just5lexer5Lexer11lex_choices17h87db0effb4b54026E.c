
  int64_t just::lexer::Lexer::lex_choices::h87db0effb4b54026(uint64_t* arg1, void* arg2, uint64_t arg3, int32_t* arg4, char arg5)

{
    int32_t* r15 = arg4;
    int128_t var_90;
    char result = just::lexer::Lexer::presume::h784be375f7ec3dad(&var_90, arg2, arg3);
    char result_1;
    int128_t var_80;
    int128_t var_70;
    int128_t var_60;
    int128_t var_50;
    
    if (result_1 != 0x25)
    {
        *(arg1 + 0x40) = var_50;
        int128_t zmm0_1 = var_90;
        *(arg1 + 0x30) = var_60;
        *(arg1 + 0x20) = var_70;
        *(arg1 + 0x10) = var_80;
        *arg1 = zmm0_1;
    }
    else
    {
        just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_90, arg2, *r15);
        result = result_1;
        
        if (result != 0x25)
        {
            label_672216:
            char rcx = var_90;
            arg1[8] = var_50;
            *(arg1 + 0x31) = var_60;
            *(arg1 + 0x21) = var_70;
            *(arg1 + 0x11) = var_80;
            *(arg1 + 1) = var_90;
            int32_t var_47;
            *(arg1 + 0x49) = var_47;
            *(arg1 + 0x4c) = var_47;
            *arg1 = rcx;
            arg1[9] = result;
        }
        else
        {
            if (var_90)
                goto label_6721ac;
            
            just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_90, arg2, r15[2]);
            result = result_1;
            
            if (result != 0x25)
                goto label_672216;
            
            if (!var_90)
            {
                if (arg5 == 0x25)
                {
                    just::lexer::Lexer::token::h8b86862a20389d16(arg2);
                    int128_t var_a8;
                    core::iter::traits::iterator::Iterator::collect::he7d9c722beb08c19(&var_a8, 
                        r15);
                    int64_t rax_2;
                    int64_t var_98;
                    
                    if (!just::lexer::Lexer::at_eof::h5321ae9ca03a4d44(arg2))
                    {
                        just::lexer::Lexer::advance::hab928493b22c646a(&var_90, arg2);
                        
                        if (result_1 != 0x25)
                        {
                            *(arg1 + 0x40) = var_50;
                            int128_t zmm0_4 = var_90;
                            *(arg1 + 0x30) = var_60;
                            *(arg1 + 0x20) = var_70;
                            *(arg1 + 0x10) = var_80;
                            *arg1 = zmm0_4;
                            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::h4b26006e42ee6c54(var_a8, *var_a8[8]);
                        }
                        
                        *var_80[8] = var_98;
                        var_90 = var_a8;
                        rax_2 = -0x7fffffffffffffcb;
                    }
                    else
                    {
                        *var_80[8] = var_98;
                        var_90 = var_a8;
                        rax_2 = -0x7fffffffffffffc9;
                    }
                    var_90 = rax_2;
                    return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_90);
                }
                
                result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
                arg1[9] = 0x25;
            }
            else
            {
                r15 = &r15[2];
                label_6721ac:
                r15[1];
                result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
                arg1[9] = 0x25;
            }
        }
    }
    return result;
}
