
  int64_t alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search_right::hdca176f2ea14268c(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int32_t arg5, int32_t arg6)

{
    int64_t var_58 = arg3 + 0xcc0;
    int32_t var_48;
    void* rsi = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search::ha6facf63bfe45bdc(&var_48, arg2);
    char result;
    
    if (var_48 != 1)
        result = 2;
    else
    {
        int64_t var_58_1 = arg3 + 0x880;
        alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search::ha6facf63bfe45bdc(&var_48, rsi);
        
        if (!(var_48 & 1))
            result = 2;
        else
        {
            int64_t var_40;
            *arg1 = var_40;
            int32_t var_38;
            arg1[1] = var_38;
            arg1[2] = var_40;
            arg1[3] = var_38;
            result = 0;
        }
    }
    
    arg1[4] = result;
    return result;
}
