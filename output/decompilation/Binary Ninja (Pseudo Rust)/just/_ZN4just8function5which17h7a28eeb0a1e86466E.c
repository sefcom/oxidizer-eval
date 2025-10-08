
  fn just::function::which::h7a28eeb0a1e86466(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64) -> *mut i64

{
    let mut var_28: i8;
    just::which::which::hd176e22496e4e776(&var_28, *arg2, arg3, arg4);
    let var_20: i64;
    let mut rax: i64 = var_20;
    let var_18: i64;
    let mut rcx: i64 = var_18;
    let var_10: i64;
    let mut rdx: i64 = var_10;
    let mut rsi_1: i64 = 1;
    
    if (var_28 & 1) == 0
    {
        rsi_1 = 0;
        let o_1: bool = -(rax) == -0x8000000000000000;
        
        if o_1
        {
            rax = 0;
        }
        
        if o_1
        {
            rcx = 1;
        }
        
        if o_1
        {
            rdx = 0;
        }
    }
    
    arg1[1] = rax;
    arg1[2] = rcx;
    arg1[3] = rdx;
    *arg1 = rsi_1;
    arg1
}
