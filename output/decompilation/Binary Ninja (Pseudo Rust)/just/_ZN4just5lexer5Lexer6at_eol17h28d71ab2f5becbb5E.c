
  fn just::lexer::Lexer::at_eol::h28d71ab2f5becbb5(arg1: *mut c_void) -> i64

{
    if *arg1.byte_offset(0xc0) != 0xa
    {
        /* tailcall */
        return just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg1, 
            "\r\nsrc/compilation.rsUnterminat…", 2);
    }
    
    let mut result: i64;
    result = 1;
    result
}
