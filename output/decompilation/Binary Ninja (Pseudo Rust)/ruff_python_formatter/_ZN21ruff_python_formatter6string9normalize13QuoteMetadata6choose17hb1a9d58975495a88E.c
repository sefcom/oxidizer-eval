
  fn ruff_python_formatter::string::normalize::QuoteMetadata::choose::hb1a9d58975495a88(arg1: *mut i8, arg2: i32) -> u64

{
    let rcx: u32 = *arg1;
    
    if rcx != 0 && rcx != 1
    {
        let mut rcx_1: i32 = *arg1.byte_offset(4);
        let temp0_1: i32 = *arg1.byte_offset(8);
        let c_1: bool = rcx_1 < temp0_1;
        rcx_1 = rcx_1 != temp0_1 && !c_1;
        rcx_1 = rcx_1 - 0;
        
        if rcx_1 != 0
        {
            if rcx_1 != 1
            {
                return 0;
            }
            
            let mut result: u32;
            result = 1;
            return result;
        }
    }
    else if arg1[1] != 0
    {
        return arg1[0xc];
    }
    
    arg2
}
