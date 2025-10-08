
  uint64_t rg::flags::defs::convert::str::hf200dae070501684(int64_t* arg1, char* arg2, int64_t arg3)

{
    int32_t var_38;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_38, arg2, arg3);
    uint64_t result;
    int64_t rcx;
    
    if (var_38 == 1)
    {
        var_38 = &data_7ea250;
        int64_t var_30_1 = 1;
        int64_t var_28 = 8;
        int128_t var_20_1 = {0};
        result = anyhow::__private::format_err::hd87f3faee3401bd9(&var_38);
        rcx = 0;
    }
    else
    {
        int64_t var_30;
        rcx = var_30;
        uint64_t result_1;
        result = result_1;
    }
    
    arg1[1] = result;
    *arg1 = rcx;
    return result;
}
