
  uint64_t rg::flags::defs::convert::string::h510840cb1bb73f10(int128_t* arg1, int128_t* arg2)

{
    void** const var_78;
    alloc::string::String::from_utf8::hcb4419710bc0e60b(&var_78, arg2);
    
    if (0 + -(var_78))
    {
        int64_t var_70;
        int128_t zmm0 = var_70;
        int128_t var_40 = zmm0;
        int64_t var_60;
        int64_t var_30 = var_60;
        arg1[1] = var_60;
        *arg1 = zmm0;
        return var_60;
    }
    
    int128_t var_40_1 = var_78;
    int64_t var_68;
    int64_t var_30_1 = var_68;
    int64_t var_48 = 1;
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..ffi..os_str..OsString$GT$$GT$::ha8786323dbda0a67(&var_48);
    var_78 = &data_7ea250;
    int64_t var_70_1 = 1;
    int64_t var_68_1 = 8;
    int128_t var_60_1 = {0};
    uint64_t rax_2 = anyhow::__private::format_err::hd87f3faee3401bd9(&var_78);
    *(arg1 + 8) = rax_2;
    *arg1 = -0x8000000000000000;
    return rax_2;
}
