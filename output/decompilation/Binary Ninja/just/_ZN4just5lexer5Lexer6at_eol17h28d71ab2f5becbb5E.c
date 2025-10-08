
  int64_t just::lexer::Lexer::at_eol::h28d71ab2f5becbb5(void* arg1)

{
    if (*(arg1 + 0xc0) != 0xa)
        /* tailcall */
        return just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg1, 
            "\r\nsrc/compilation.rsUnterminat…", 2);
    
    int64_t result;
    result = 1;
    return result;
}
