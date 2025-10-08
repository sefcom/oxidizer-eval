
  int64_t just::lexer::Lexer::close_delimiter::ha2c6f40e739c3a44(uint64_t* arg1, void* arg2, char arg3)

{
    int64_t rax = *(arg2 + 0x40);
    int64_t rax_2;
    
    if (!rax)
    {
        char var_60_1 = arg3;
        rax_2 = -0x7fffffffffffffca;
    }
    else
    {
        *(arg2 + 0x40) = rax - 1;
        char* rcx_1 = *(arg2 + 0x38);
        int64_t result = (rax - 1) << 4;
        char r8_1 = rcx_1[result];
        
        if (r8_1 == arg3)
        {
            arg1[9] = 0x25;
            return result;
        }
        
        char var_58_1 = arg3;
        char var_57_1 = r8_1;
        char var_60;
        var_60 = *(rcx_1 + result + 8);
        rax_2 = -0x7fffffffffffffd5;
    }
    
    int64_t var_68 = rax_2;
    return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_68);
}
