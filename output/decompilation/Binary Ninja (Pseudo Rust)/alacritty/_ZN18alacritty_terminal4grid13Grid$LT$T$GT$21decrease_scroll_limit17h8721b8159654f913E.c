
  fn alacritty_terminal::grid::Grid$LT$T$GT$::decrease_scroll_limit::h8721b8159654f913(arg1: *mut c_void, arg2: i64) -> i64

{
    let rax: i64;
    let var_28: i64 = rax;
    let r15: i64 = *arg1.byte_offset(0x28);
    let mut r12: i64 = *arg1.byte_offset(0x98);
    let mut r14: i64 = 0;
    
    if r15 >= r12
    {
        r14 = r15 - r12;
    }
    
    let mut result: i64 = core::cmp::Ord::min::h7c13e9bfb8ea3862(arg2, r14);
    
    if result != 0
    {
        let mut r15_1: i64 = r15 - core::cmp::Ord::min::h7c13e9bfb8ea3862(result, r14);
        *arg1.byte_offset(0x28) = r15_1;
        
        if *arg1.byte_offset(0x10) > r15_1 + 0x3e8
        {
            alacritty_terminal::grid::storage::Storage$LT$T$GT$::truncate::h2d132ed67c9d1788(arg1);
            r15_1 = *arg1.byte_offset(0x28);
            r12 = *arg1.byte_offset(0x98);
        }
        
        let mut rsi_2: i64 = 0;
        
        if r15_1 >= r12
        {
            rsi_2 = r15_1 - r12;
        }
        
        result = core::cmp::Ord::min::h7c13e9bfb8ea3862(*arg1.byte_offset(0xa0), rsi_2);
        *arg1.byte_offset(0xa0) = result;
    }
    
    result
}
