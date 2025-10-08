
  fn ruff_python_formatter::statement::clause::find_keyword::h191773aebb391b5b(arg1: *mut i32, arg2: i32, arg3: i8, arg4: *mut i8, arg5: i64) -> i64

{
    let mut var_48: ();
    ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at::h166ec428bdd164b3(&var_48, arg2, 
        arg4, arg5);
    let mut var_58: i64;
    core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_58, &var_48);
    let result: i8;
    
    if (result == 0x5a | result == 0x5a) != 0
    {
        *arg1 = 0;
        *arg1.byte_offset(8) = "Expected the case header keyword…";
        *arg1.byte_offset(0x10) = 0x51;
    }
    else if arg3 != result
    {
        *arg1 = 0;
        *arg1.byte_offset(8) = "Expected the keyword token but f…";
        *arg1.byte_offset(0x10) = 0x3b;
    }
    else
    {
        *arg1.byte_offset(4) = var_58;
        *arg1 = 4;
    }
    
    result
}
