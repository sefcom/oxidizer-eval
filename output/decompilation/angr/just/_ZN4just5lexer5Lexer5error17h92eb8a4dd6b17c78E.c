long long just::lexer::Lexer::error(void* a0, struct_0 *a1, unsigned long long *a2)
{
    int v0;  // [bp-0x60]
    int v1;  // [bp-0x50]
    unsigned long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    int v4;  // [bp-0x30]
    char v5;  // [bp-0x20]
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx

    if (*(a2) == 9223372036854775878 || *(a2) == 9223372036854775880)
    {
        v8 = a1.lexeme().from_token_start(v7);
        if ((char)v8 == 2)
        {
            a0.internal_error(a1, "Lexer::error: expected string or backtick token start}}Lexer::lex_interpolation found `}}` but was called with empty interpolation stack.Lexer::lex_delimiter called with non-delimiter token: `", 53);
            return core::ptr::drop_in_place<just::compile_error_kind::CompileErrorKind>(a2);
        }
        v9 = (v8 & 4294967295) * 2 + 1;
    }
    else
    {
        a1.lexeme();
    }
    v2 = a1->field_a8;
    v5 = 35;
    v3 = v9;
    *((uint128_t *)&v4) = a1->field_b0;
    *((uint128_t *)&v0) = a1->field_70;
    *((uint128_t *)&v1) = a1->field_80;
    return a0.new(&v0, a2);
}
