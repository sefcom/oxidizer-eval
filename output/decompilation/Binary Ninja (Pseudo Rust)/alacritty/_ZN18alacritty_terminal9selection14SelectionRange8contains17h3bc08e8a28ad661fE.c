
  fn alacritty_terminal::selection::SelectionRange::contains::h3bc08e8a28ad661f(arg1: *mut i64, arg2: i64, arg3: i32) -> u32

{
    let mut result: u32 = arg1[1];
    
    if result > arg3
    {
        return 0;
    }
    
    let rcx: i32 = arg1[3];
    
    if rcx < arg3
    {
        return 0;
    }
    
    if *arg1 > arg2
    {
        if result == arg3
        {
            return 0;
        }
        
        if arg1[4] != 0
        {
            return 0;
        }
    }
    
    result = 1;
    
    if arg1[2] < arg2
    {
        if rcx == arg3
        {
            return 0;
        }
        
        result = arg1[4] ^ 1;
    }
    
    result
}
