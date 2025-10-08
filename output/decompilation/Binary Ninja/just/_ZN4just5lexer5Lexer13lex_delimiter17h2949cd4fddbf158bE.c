
  int64_t just::lexer::Lexer::lex_delimiter::h2949cd4fddbf158b(int128_t* arg1, void* arg2, uint64_t arg3)

{
    char var_91 = arg3;
    uint32_t r15 = arg3;
    uint64_t rax = r15 - 7;
    uint64_t var_90;
    char var_48;
    int64_t result;
    
    if (rax <= 0x16)
        switch (rax)
        {
            case 0:
            {
                just::lexer::Lexer::open_delimiter::h93fd7bc087573307(arg2, 0);
                /* tailcall */
                return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, r15);
            }
            case 1:
            {
                result = just::lexer::Lexer::close_delimiter::ha2c6f40e739c3a44(&var_90, arg2, 0);
                
                if (var_48 != 0x25)
                    goto label_67247d;
                
                /* tailcall */
                return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, r15);
            }
            case 2:
            {
                just::lexer::Lexer::open_delimiter::h93fd7bc087573307(arg2, 1);
                /* tailcall */
                return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, r15);
            }
            case 3:
            {
                result = just::lexer::Lexer::close_delimiter::ha2c6f40e739c3a44(&var_90, arg2, 1);
                
                if (var_48 == 0x25)
                    /* tailcall */
                    return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, r15);
                
                goto label_67247d;
            }
            case 0x15:
            {
                just::lexer::Lexer::open_delimiter::h93fd7bc087573307(arg2, 2);
                /* tailcall */
                return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, r15);
            }
            case 0x16:
            {
                result = just::lexer::Lexer::close_delimiter::ha2c6f40e739c3a44(&var_90, arg2, 2);
                
                if (var_48 == 0x25)
                    /* tailcall */
                    return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, r15);
                
                label_67247d:
                int128_t var_50;
                arg1[4] = var_50;
                int128_t zmm0_1 = var_90;
                int128_t var_60;
                arg1[3] = var_60;
                int64_t var_70;
                arg1[2] = var_70;
                int64_t var_80;
                arg1[1] = var_80;
                *arg1 = zmm0_1;
                return result;
                break;
            }
        }
    char* var_40 = &var_91;
    int64_t (* var_38_1)(char* arg1, int64_t* arg2) =
        _$LT$just..token_kind..TokenKind$u20$as$u20$core..fmt..Display$GT$::fmt::h4cb9518a42607a95;
    var_90 = &data_830500;
    int64_t var_88_1 = 2;
    int64_t var_70_1 = 0;
    char** var_80_1 = &var_40;
    int64_t var_78_1 = 1;
    void var_30;
    core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_30, 0, arg3, &var_90);
    return just::lexer::Lexer::internal_error::h78cb678bc55cc920(arg1, arg2, &var_30);
}
