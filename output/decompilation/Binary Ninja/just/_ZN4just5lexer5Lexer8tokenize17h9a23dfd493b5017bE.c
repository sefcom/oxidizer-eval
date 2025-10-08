
  int64_t just::lexer::Lexer::tokenize::h9a23dfd493b5017b(int128_t* arg1, int64_t* arg2)

{
    int128_t var_118;
    char i;
    
    do
    {
        if (!arg2[0x15])
        {
            just::lexer::Lexer::lex_line_start::hecba8e7aed370233(&var_118, arg2);
            
            if (i != 0x25)
                break;
        }
        
        int32_t rcx_1 = arg2[0x18];
        
        if (rcx_1 == 0x110000)
        {
            int64_t rax_3 = arg2[5];
            
            if (rax_3)
            {
                int64_t rcx_2 = arg2[4];
                int64_t rax_4 = rax_3 * 9;
                int64_t var_28_1 = *(rcx_2 + (rax_4 << 3) - 8);
                int128_t var_38_1 = *(rcx_2 + (rax_4 << 3) - 0x18);
                int128_t var_48_1 = *(rcx_2 + (rax_4 << 3) - 0x28);
                int128_t var_58_1 = *(rcx_2 + (rax_4 << 3) - 0x38);
                int128_t var_68 = *(rcx_2 + (rax_4 << 3) - 0x48);
                just::lexer::Lexer::unterminated_interpolation_error::h2170ba94c271abf2(&var_118, 
                    &var_68);
                break;
            }
            
            while (just::lexer::Lexer::indented::haaa2823febf7562c(arg2[1], arg2[2]))
                just::lexer::Lexer::lex_dedent::hd3d59812e389acd6(arg2);
            
            just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            void* rsi_9 = &arg2[0x17];
            int64_t rax_7 = arg2[0x17];
            void* rdx_7;
            
            if (rax_7 != arg2[0x14])
                rdx_7 = &arg2[0x14];
            else
            {
                int64_t rcx_4 = arg2[0x11];
                int64_t var_c8 = rcx_4;
                
                if (rax_7 != rcx_4)
                    rdx_7 = &var_c8;
                else
                {
                    int64_t rax_8 = arg2[2];
                    int64_t var_c0 = rax_8;
                    
                    if (rax_8 == 1)
                    {
                        arg1[1] = arg2[0xb];
                        *arg1 = *(arg2 + 0x48);
                        *(arg1 + 0x48) = 0x25;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(*arg2, arg2[1]);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..name..Name$GT$$GT$::h3abfcfc45501c2a2(arg2[3], arg2[4]);
                        /* tailcall */
                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(arg2[6], arg2[7]);
                    }
                    
                    rdx_7 = &data_469270;
                    rsi_9 = &var_c0;
                }
            }
            
            var_118 = 0;
            core::panicking::assert_failed::h449f2a7fe5426575(0, rsi_9, rdx_7, &var_118);
            /* no return */
        }
        
        int64_t rax_2 = arg2[5];
        
        if (rax_2)
        {
            int64_t rdx_1 = arg2[4];
            int64_t rax_1 = rax_2 * 9;
            int64_t var_78_1 = *(rdx_1 + (rax_1 << 3) - 8);
            int128_t var_88_1 = *(rdx_1 + (rax_1 << 3) - 0x18);
            int128_t var_98_1 = *(rdx_1 + (rax_1 << 3) - 0x28);
            int128_t var_a8_1 = *(rdx_1 + (rax_1 << 3) - 0x38);
            int128_t var_b8 = *(rdx_1 + (rax_1 << 3) - 0x48);
            just::lexer::Lexer::lex_interpolation::h29248a24ec5712d3(&var_118, arg2, &var_b8, 
                rcx_1);
        }
        else if (!*(arg2 + 0xc4))
            just::lexer::Lexer::lex_normal::he65c979350d5db4a(&var_118, arg2, rcx_1);
        else
            just::lexer::Lexer::lex_body::h748dd23849ec297d(&var_118, arg2);
    } while (i == 0x25);
    int128_t var_d8;
    arg1[4] = var_d8;
    int128_t zmm0 = var_118;
    int128_t var_e8;
    arg1[3] = var_e8;
    int128_t var_f8;
    arg1[2] = var_f8;
    int128_t var_108;
    arg1[1] = var_108;
    *arg1 = zmm0;
    /* tailcall */
    return core::ptr::drop_in_place$LT$just..lexer..Lexer$GT$::hbcbb29f641172e5c(arg2);
}
