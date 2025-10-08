
  fn alacritty::display::damage::rects_overlap::h703efb688ce982c6(arg1: *mut i32, arg2: *mut i32) -> i64

{
    let rax_3: i32 = *arg1;
    let rcx: i32 = *arg2;
    
    if arg1[2] + rax_3 < rcx
    {
        return 0;
    }
    
    if rcx + arg2[2] < rax_3
    {
        return 0;
    }
    
    let mut result: i32 = arg1[1];
    let rcx_2: i32 = arg2[1];
    
    if arg1[3] + result < rcx_2
    {
        return 0;
    }
    
    result = rcx_2 + arg2[3] >= result;
    result
}
