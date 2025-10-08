
  int64_t alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::semantic_search_left::h4cec90c032934a57(void* arg1, int64_t arg2, int32_t arg3)

{
    int32_t var_68;
    alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::inline_search_left::h0e24405bbcb3ff67(&var_68, arg1, arg2, arg3, *(arg1 + 0x220), *(arg1 + 0x228));
    int64_t result;
    
    if (var_68 == 1)
        return result;
    
    int16_t var_8a = 0x440;
    int32_t rsi_2 = *(arg1 + 0xc0) - 1;
    int64_t rdi_2 = *(arg1 + 0xb8) - 1;
    void* var_38 = arg1 + 0x28;
    int64_t result_1 = result;
    int32_t var_58;
    int32_t var_28_1 = var_58;
    int64_t var_20_1 = rdi_2;
    int32_t var_18_1 = rsi_2;
    int64_t var_50;
    core::iter::traits::iterator::Iterator::try_fold::h6c2fb5cc23e75869(&var_50, &var_38, &var_8a);
    int64_t var_88;
    
    if (!var_50)
        var_88 = 0;
    else
    {
        int64_t var_40;
        int64_t var_78_1 = var_40;
        var_88 = var_50;
    }
    
    return core::option::Option$LT$T$GT$::map_or::h55de4ce00cf2525f(&var_88, result);
}
