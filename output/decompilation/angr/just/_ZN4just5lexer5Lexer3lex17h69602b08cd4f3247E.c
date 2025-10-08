char just::lexer::Lexer::lex(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0xd8]

    v0.new(a1, a2, a3, a4);
    return a0.tokenize(&v0);
}
