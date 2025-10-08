
  int64_t just::lexer::Lexer::lex_interpolation::h29248a24ec5712d3(uint64_t* arg1, void* arg2, int128_t* arg3, int32_t arg4)

{
    if (!just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg2, 
        "}}Lexer::lex_interpolation found…", 2))
    {
        if (!just::lexer::Lexer::at_eol_or_eof::h85f92b30e0726684(arg2))
            /* tailcall */
            return just::lexer::Lexer::lex_normal::he65c979350d5db4a(arg1, arg2, arg4);
        
        /* tailcall */
        return just::lexer::Lexer::unterminated_interpolation_error::h2170ba94c271abf2(arg1, arg3);
    }
    
    int64_t rax_1 = *(arg2 + 0x28);
    
    if (rax_1)
    {
        *(arg2 + 0x28) = rax_1 - 1;
        
        if (*(*(arg2 + 0x20) + rax_1 * 0x48 - 8) != 0x25)
            /* tailcall */
            return just::lexer::Lexer::lex_double::hb969a7d085e88ace(arg1, arg2, 0x1a);
    }
    
    int128_t var_70;
    int64_t result = just::lexer::Lexer::advance::hab928493b22c646a(&var_70, arg2);
    char var_28;
    
    if (var_28 == 0x25)
    {
        result = just::lexer::Lexer::advance::hab928493b22c646a(&var_70, arg2);
        
        if (var_28 == 0x25)
            /* tailcall */
            return just::lexer::Lexer::internal_error::hc085b50b9a8f6202(arg1, arg2, 
                "Lexer::lex_interpolation found `…", 0x52);
    }
    
    int128_t var_30;
    *(arg1 + 0x40) = var_30;
    int128_t zmm0 = var_70;
    int128_t var_40;
    *(arg1 + 0x30) = var_40;
    int128_t var_50;
    *(arg1 + 0x20) = var_50;
    int128_t var_60;
    *(arg1 + 0x10) = var_60;
    *arg1 = zmm0;
    return result;
}
