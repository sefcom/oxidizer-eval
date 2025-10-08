
  fn just::lexer::Lexer::at_eol_or_eof::h85f92b30e0726684(arg1: *mut c_void) -> i64

{
    if just::lexer::Lexer::at_eol::h28d71ab2f5becbb5(arg1) == 0
    {
        /* tailcall */
        return just::lexer::Lexer::at_eof::h5321ae9ca03a4d44(arg1);
    }
    
    1
}
