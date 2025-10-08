
  fn ruff_python_formatter::statement::clause::colon_range::ha3df4110d5faf4ca(arg1: *mut i32, arg2: i32, arg3: *mut i8, arg4: i64) -> u32

{
    let mut var_48: ();
    ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at::h166ec428bdd164b3(&var_48, arg2, 
        arg3, arg4);
    let mut var_18: i8 = 0;
    let mut var_58: i64;
    core::iter::traits::iterator::Iterator::try_fold::he09c5ab8ab2b918d(&var_58, &var_48, &var_18);
    let result_1: i8;
    let result: u32 = result_1;
    
    if result == 0xc
    {
        *arg1.byte_offset(4) = var_58;
        *arg1 = 4;
        return result;
    }
    
    if result == 0x5a
    {
        *arg1 = 0;
        *arg1.byte_offset(8) = "Expected the colon marking the e…";
        *arg1.byte_offset(0x10) = 0x55;
        return result;
    }
    
    *arg1 = 0;
    *arg1.byte_offset(8) = "Expected colon marking the end o…";
    *arg1.byte_offset(0x10) = 0x52;
    result
}
