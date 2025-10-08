
  fn bat::line_range::LineRange::is_inside::hc654c85571cf3a97(arg1: *mut i32, arg2: i64, arg3: i8, arg4: i64) -> i64

{
    let mut rax: i64 = *arg1.byte_offset(8);
    let r9: i8 = arg1[4];
    let r8: i64 = *arg1.byte_offset(0x18);
    
    if *arg1 != 1
    {
        if (r9 & 1) == 0
        {
            arg4 = rax <= arg2;
            rax = arg2 <= r8;
            rax &= arg4;
            return rax;
        }
        
        if (arg3 & 1) == 0
        {
            rax = rax <= arg2;
            return rax;
        }
        
        if rax > arg2
        {
            return 0;
        }
    }
    else
    {
        let mut rdi: i64 = 0;
        
        if arg4 >= rax
        {
            rdi = arg4 - rax;
        }
        
        rax = rdi <= arg2;
        rax &= arg3;
        
        if (r9 & 1) == 0
        {
            arg4 = arg2 <= r8;
            rax &= arg4;
            return rax;
        }
        
        if rax == 0
        {
            return 0;
        }
    }
    
    let mut rax_3: i64 = 0;
    
    if arg4 >= r8
    {
        rax_3 = arg4 - r8;
    }
    
    rax_3 = arg2 <= rax_3;
    rax_3
}
