
  fn ruff_python_formatter::statement::trailing_semicolon::h3caa94f8332101f0(arg1: *mut i32, arg2: i64, arg3: i64, arg4: *mut i8, arg5: i64) -> i64

{
    let mut var_68: i64 = arg2;
    let var_60: i64 = arg3;
    let mut var_58: ();
    ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at::h166ec428bdd164b3(&var_58, 
        _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_68), 
        arg4, arg5);
    let var_28: i8 = 0;
    let mut var_78: i64;
    _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::had9a8a3d821e7462(&var_78, &var_58);
    let mut result: i32 = 0;
    let var_70: i8;
    
    if var_70 == 0xd
    {
        *arg1.byte_offset(4) = var_78;
        result = 1;
    }
    
    *arg1 = result;
    result
}
