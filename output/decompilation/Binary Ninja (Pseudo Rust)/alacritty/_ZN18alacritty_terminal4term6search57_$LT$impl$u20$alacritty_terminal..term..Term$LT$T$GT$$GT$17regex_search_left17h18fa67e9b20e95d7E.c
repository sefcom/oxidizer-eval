
  fn alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search_left::h18fa67e9b20e95d7(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i32, arg6: i32) -> i64

{
    let var_58: i64 = arg3;
    let mut var_48: i32;
    let rsi: *mut c_void = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search::ha6facf63bfe45bdc(&var_48, arg2);
    let mut result: i8;
    
    if var_48 != 1
    {
        result = 2;
    }
    else
    {
        let var_58_1: i64 = arg3 + 0x440;
        alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search::ha6facf63bfe45bdc(&var_48, rsi);
        
        if (var_48 & 1) == 0
        {
            result = 2;
        }
        else
        {
            let var_40: i64;
            *arg1 = var_40;
            let var_38: i32;
            arg1[1] = var_38;
            arg1[2] = var_40;
            arg1[3] = var_38;
            result = 0;
        }
    }
    
    arg1[4] = result;
    result
}
