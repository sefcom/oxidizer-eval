void just::parser::Parser::internal_error(void* a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x78]
    char v1;  // [bp-0x70]

    v1.into("`Parser::next()` called after end of token stream`Parser::advance()` advanced past end of token streamPresumed next token would have kind Presumed next token would have lexeme \"\", but found \"Presumed next token would be Parse completed with ", 49);
    v0 = 9223372036854775848;
    a0.error(a1, &v0);
    return;
}
