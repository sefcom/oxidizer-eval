
  int64_t alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::semantic_search_right::h18d14e89e94ed13a(void* arg1, int64_t arg2, int32_t arg3)

{
    int32_t var_70;
    alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::inline_search_right::hbf0568499a7b63a6(&var_70, arg1, arg2, arg3, *(arg1 + 0x220), *(arg1 + 0x228));
    int64_t result;
    
    if (var_70 == 1)
        return result;
    
    int32_t rsi_2 = *(arg1 + 0xc0) - 1;
    int64_t rdi_2 = *(arg1 + 0xb8) - 1;
    void* var_58 = arg1 + 0x28;
    int64_t result_1 = result;
    int32_t var_60;
    int32_t var_48_1 = var_60;
    int64_t var_40_1 = rdi_2;
    int32_t var_38_1 = rsi_2;
    void var_30;
    _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_30, &var_58);
    return core::option::Option$LT$T$GT$::map_or::h55de4ce00cf2525f(&var_30, result);
}
