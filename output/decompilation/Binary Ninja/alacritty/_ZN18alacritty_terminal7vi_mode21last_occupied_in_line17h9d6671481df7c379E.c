
  int64_t alacritty_terminal::vi_mode::last_occupied_in_line::h9d6671481df7c379(int64_t* arg1, void* arg2, int32_t arg3)

{
    int32_t var_3c = arg3;
    int64_t rcx = *(arg2 + 0xb8);
    int64_t var_30 = 0;
    int64_t var_28 = rcx;
    int32_t* var_38 = &var_3c;
    int32_t var_20;
    int64_t rax_1 =
        core::iter::traits::double_ended::DoubleEndedIterator::try_rfold::h689095abd55de5f5(
        &var_20, &var_30, arg2, &var_38);
    
    if (var_20 != 1)
    {
        *arg1 = 0;
        return rax_1;
    }
    
    int64_t var_18;
    arg1[1] = var_18;
    int32_t var_10;
    arg1[2] = var_10;
    *arg1 = 1;
    return var_18;
}
