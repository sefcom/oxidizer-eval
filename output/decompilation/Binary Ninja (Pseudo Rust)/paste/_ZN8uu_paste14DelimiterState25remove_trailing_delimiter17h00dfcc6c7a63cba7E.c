
  fn uu_paste::DelimiterState::remove_trailing_delimiter::h00dfcc6c7a63cba7(arg1: i64, arg2: i64, arg3: *mut c_void) -> i64

{
    let mut result: i64;
    result = arg1 == 0;
    
    if (arg2 == 0 | result) != 1
    {
        result = *arg3.byte_offset(0x10);
        let mut result_1: i64 = result;
        
        if result >= arg2
        {
            *arg3.byte_offset(0x10) = result - arg2;
            return result;
        }
        
        if result != 0
        {
            let mut var_30: i64 = 0;
            core::panicking::assert_failed::h449f2a7fe5426575(0, &result_1, &data_417478[8], 
                &var_30);
            /* no return */
        }
    }
    
    result
}
