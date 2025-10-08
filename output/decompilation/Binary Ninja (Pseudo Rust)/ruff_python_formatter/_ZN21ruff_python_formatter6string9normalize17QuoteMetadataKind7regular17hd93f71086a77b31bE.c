
  fn ruff_python_formatter::string::normalize::QuoteMetadataKind::regular::hd93f71086a77b31b(arg1: u64, arg2: i64, arg3: i64) -> i64

{
    let mut var_30: i64 = arg2;
    let var_28: i64 = arg3 + arg2;
    let mut rbp: i32 = 0;
    let mut r15: i32 = 0;
    let mut result: i8;
    
    loop
    {
        let mut rdx_1: i32;
        result = core::str::validations::next_code_point::hfc8b8c1898281fd8(&var_30, arg1);
        
        if (result & 1) == 0
        {
            break;
        }
        
        if rdx_1 == 0x22
        {
            rbp += 1;
        }
        else if rdx_1 == 0x27
        {
            r15 += 1;
        }
    }
    
    *(arg1 + 4) = r15;
    *(arg1 + 8) = rbp;
    *arg1 = 2;
    result
}
