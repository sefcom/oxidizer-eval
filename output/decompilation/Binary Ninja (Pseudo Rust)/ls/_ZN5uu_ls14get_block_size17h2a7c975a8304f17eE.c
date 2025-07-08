
  fn uu_ls::get_block_size::h2a7c975a8304f17e(arg1: i32, arg2: i64, arg3: i64, arg4: i8) -> i64

{
    let mut result: i64;
    
    if ((arg1 & 0xb000) | 0x4000) != 0x6000
    {
        result = arg2 << 9;
        
        if arg4 != 0
        {
            return result;
        }
    }
    else
    {
        result = 0;
        
        if arg4 != 0
        {
            return result;
        }
    }
    
    if arg3 == 0
    {
        let result_1: i64 = result;
        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
        /* no return */
    }
    
    if (result | arg3) >> 0x20 == 0
    {
        return COMBINE(0, result) / arg3;
    }
    
    COMBINE(0, result) / arg3
}
