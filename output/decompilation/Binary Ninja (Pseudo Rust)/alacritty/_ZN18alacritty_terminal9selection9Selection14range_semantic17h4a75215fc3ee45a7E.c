
  fn alacritty_terminal::selection::Selection::range_semantic::h4a75215fc3ee45a7(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i32, arg5: i64, arg6: i32) -> i64

{
    let rbp: i32 = arg4;
    let rax: bool = arg4 != arg6;
    arg4 = arg3 != arg5;
    arg4 |= rax;
    let mut var_48: i8;
    
    if arg4 == 0
    {
        alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::bracket_search::h6feec58954ead82f(&var_48, arg2, arg3, rbp);
    }
    
    let mut result: i64;
    let mut rdx_2: i32;
    
    if arg4 != 0 || (var_48 & 1) == 0
    {
        let mut rax_1: i64;
        let mut rdx_4: i32;
        rax_1 = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::semantic_search_left::h4cec90c032934a57(arg2, arg3, rbp);
        result = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::semantic_search_right::h18d14e89e94ed13a(arg2, arg5, arg6);
        *arg1 = rax_1;
        arg1[1] = rdx_4;
        arg1[2] = result;
    }
    else
    {
        let result_1: i64;
        result = result_1;
        let var_38: i32;
        let mut rcx_1: i32 = var_38;
        let mut result_2: i64;
        
        if rcx_1 < rbp || (result < arg3 & rcx_1 == rbp) != 0
        {
            rdx_2 = rbp;
            result_2 = arg3;
        }
        else
        {
            rdx_2 = rcx_1;
            result_2 = result;
            result = arg3;
            rcx_1 = rbp;
        }
        
        *arg1 = result;
        arg1[1] = rcx_1;
        arg1[2] = result_2;
    }
    
    arg1[3] = rdx_2;
    arg1[4] = 0;
    result
}
