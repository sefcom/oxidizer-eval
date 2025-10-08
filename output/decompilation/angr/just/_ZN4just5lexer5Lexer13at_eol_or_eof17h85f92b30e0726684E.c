char just::lexer::Lexer::at_eol_or_eof(void* a0)
{
    if (!(char)a0.at_eol())
        return a0.at_eof();
    return 1;
}
