
  fn just::output_error::OutputError::result_from_exit_status::hf1fa63d3fe1b5ea4(arg1: *mut i32, arg2: i32) -> u32

{
    let mut result: u32 = arg2 & 0x7f;
    let mut rcx: i8;
    
    if result == 0
    {
        rcx = 2;
        let result_1: u32 = arg2 >> 8;
        result = result_1;
        
        if result_1 == 0
        {
            arg1[2] = 7;
            return result;
        }
    }
    else
    {
        rcx = 5;
        
        if result + 1 < 2
        {
            arg1[2] = 6;
            return result;
        }
    }
    
    *arg1 = result;
    arg1[2] = rcx;
    result
}
