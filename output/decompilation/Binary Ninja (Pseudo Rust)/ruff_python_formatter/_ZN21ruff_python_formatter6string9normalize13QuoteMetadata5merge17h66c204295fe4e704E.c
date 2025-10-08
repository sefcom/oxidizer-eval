
  fn ruff_python_formatter::string::normalize::QuoteMetadata::merge::h66c204295fe4e704(arg1: *mut i8, arg2: *mut i8, arg3: *mut i8, arg4: u128 @ zmm0) -> i64

{
    let result: i8 = *arg2;
    let mut r8: i8 = 2;
    
    if result == *arg3
    {
        let mut rcx_1: i8 = arg2[1];
        let result_1: u32 = result;
        
        if result_1 == 0 || result_1 == 1
        {
            let cond:0_1: bool = (rcx_1 & 1) == 0;
            rcx_1 = 1;
            
            if cond:0_1
            {
                rcx_1 = arg3[1] & 1;
            }
        }
        else
        {
            arg4 = _mm_add_epi32(*arg3.byte_offset(4), *arg2.byte_offset(4));
        }
        
        r8 = arg2[0xc];
        *arg1 = result;
        arg1[1] = rcx_1;
        *arg1.byte_offset(4) = arg4;
    }
    
    arg1[0xc] = r8;
    result
}
